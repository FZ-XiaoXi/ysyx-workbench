/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if !defined(CONFIG_TARGET_SHARE_YSYXSOC)
  #if   defined(CONFIG_PMEM_MALLOC)
  static uint8_t *pmem = NULL;
  #else // CONFIG_PMEM_GARRAY
  static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
  #endif
#else
  #if   defined(CONFIG_PMEM_MALLOC)
  static uint8_t *mrom = NULL;
  static uint8_t *sram = NULL;
  #else
  static uint8_t mrom[YSYXSOC_MROM_SIZE] PG_ALIGN = {}; //4KB
  static uint8_t sram[YSYXSOC_SRAM_SIZE] PG_ALIGN = {}; //8KB
  #endif
#endif



#if !defined(CONFIG_TARGET_SHARE_YSYXSOC)

typedef enum{MEMREAD,MEMWRITE} mtrace_t;
static void print_mtrace(mtrace_t op,paddr_t addr,uint32_t val){
#ifdef CONFIG_MTRACE
  if(nemu_state.state != NEMU_RUNNING) return;
#if   defined(CONFIG_MTRACE_RANGE)
  if(!(addr>=CONFIG_MTRACE_RANGE_START && addr<=CONFIG_MTRACE_RANGE_END)) return;
#else
#endif
  if(op==MEMREAD){
    Log("MEMTracer: READ  memory [0x%08x] = '0x%08x' at pc = '0x%08x'\n",addr,val,cpu.pc);
  }
  if(op==MEMWRITE){
    Log("MEMTracer: WRITE memory [0x%08x] = '0x%08x' at pc = '0x%08x'\n",addr,val,cpu.pc);
  }
#endif
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
  #if   defined(CONFIG_PMEM_MALLOC)
    pmem = malloc(CONFIG_MSIZE);
    assert(pmem);
  #endif
    IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))){
    uint32_t val = pmem_read(addr, len);
    print_mtrace(MEMREAD,addr,val);
    return val;
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) {
    print_mtrace(MEMWRITE,addr,data);
    pmem_write(addr, len, data);
    return;
  }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}

#else//////////////////////////////////////////////////////////////////////////////////
static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of sram[" FMT_PADDR ", " FMT_PADDR "] or mrom[" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, YSYXSOC_SRAM_LEFT, YSYXSOC_SRAM_RIGHT, YSYXSOC_MROM_LEFT, YSYXSOC_MROM_RIGHT, cpu.pc);
}

typedef enum{MEMREAD,MEMWRITE} mtrace_t;
// static void print_mtrace(mtrace_t op,paddr_t addr,uint32_t val){
//   UNUSED(op);UNUSED(addr);UNUSED(val);
// }

uint8_t* guest_to_host(paddr_t paddr) {
  if(paddr >= YSYXSOC_MROM_LEFT && paddr <= YSYXSOC_MROM_RIGHT){
    return mrom + paddr - YSYXSOC_MROM_LEFT;
  }else if(paddr >= YSYXSOC_SRAM_LEFT && paddr <= YSYXSOC_SRAM_RIGHT){
    return sram + paddr - YSYXSOC_SRAM_LEFT;
  }else{
    out_of_bound(paddr);
  }
  return NULL;
}
paddr_t host_to_guest(uint8_t *haddr) {
  if(haddr >= mrom && haddr < mrom + YSYXSOC_MROM_SIZE){
    return haddr - mrom + YSYXSOC_MROM_LEFT;
  }else if(haddr >= sram && haddr < sram + YSYXSOC_SRAM_SIZE){
    return haddr - sram + YSYXSOC_SRAM_LEFT;
  }else{
    out_of_bound(host_to_guest(haddr));
  }
  return 0;
}

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}



void init_mem() {
  #if   defined(CONFIG_PMEM_MALLOC)
    mrom = malloc(YSYXSOC_MROM_SIZE);
    assert(mrom);
    sram = malloc(YSYXSOC_SRAM_SIZE);
    assert(sram);
  #endif
    IFDEF(CONFIG_MEM_RANDOM, memset(sram, rand(), YSYXSOC_SRAM_SIZE));
    IFDEF(CONFIG_MEM_RANDOM, memset(mrom, rand(), YSYXSOC_MROM_SIZE));
    Log("mrom memory area [" FMT_PADDR ", " FMT_PADDR "]", YSYXSOC_MROM_LEFT, YSYXSOC_MROM_RIGHT);
    Log("sram memory area [" FMT_PADDR ", " FMT_PADDR "]", YSYXSOC_SRAM_LEFT, YSYXSOC_SRAM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))){
    uint32_t val = pmem_read(addr, len);
    return val;
  }
  // IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) {
    pmem_write(addr, len, data);
    return;
  }
  // IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
#endif
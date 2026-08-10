#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "npc.h"
extern char _heap_start;
extern char _heap_end;
extern char _stack_top;
extern char _stack_pointer;
int main(const char *args);

extern char _sram_start;
extern char _psram_start;
extern char _rodata_vma_start;
extern char _rodata_vma_end;
extern char _rodata_lma_start;
extern char _rodata_lma_end;
extern char _data_vma_start;
extern char _data_vma_end;
extern char _data_lma_start;
extern char _data_lma_end;
extern char _bss_vma_start;
extern char _bss_vma_end;
extern char _bss_lma_start;
extern char _bss_lma_end;

#define SRAM_SIZE (8 * 1024 * 1024)
#define SRAM_END  ((uintptr_t)&_sram_start + SRAM_SIZE)
#define PSRAM_SIZE (4 * 1024 * 1024 * 1024)
#define PSRAM_END  ((uintptr_t)&_psram_start + PSRAM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_end);
static const char mainargs[MAINARGS_MAX_LEN] __attribute__((section(".text.mainargs"))) = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void uart_init() {
  // LCR Configuration Register (Offset +3, DLAB=0)
  typedef union {
    uint8_t val;
    struct {
      uint8_t wls    : 2;  // [1:0] Word Length Select: 00=5, 01=6, 10=7, 11=8 bits
      uint8_t stb    : 1;  // [2]   Stop Bits: 0=1 stop, 1=1.5/2 stop bits
      uint8_t pen    : 1;  // [3]   Parity Enable
      uint8_t eps    : 1;  // [4]   Even Parity Select: 0=odd, 1=even
      uint8_t stkpar : 1;  // [5]   Stick Parity: 1=force fixed parity
      uint8_t brk    : 1;  // [6]   Break Control: 1=force TX low (break condition)
      uint8_t dlab   : 1;  // [7]   Divisor Latch Access Bit: 1=access baud divisor
    } bits;
  } LCR_CONFIG_T;
  LCR_CONFIG_T lcr_config;
  lcr_config.val = inb(SERIAL_PORT + 3);
  // lcr_config.bits.wls=0x3;
  // lcr_config.bits.stb=0;
  // lcr_config.bits.pen=0;
  lcr_config.bits.dlab=1;
  outb(SERIAL_PORT + 3, lcr_config.val);
  outb(SERIAL_PORT + 1, 0x00);
  outb(SERIAL_PORT + 0, 0x01);
  lcr_config.bits.dlab=0;
  outb(SERIAL_PORT + 3, lcr_config.val);
}

void putch(char ch) {
  // while(1);
  while(((inb(SERIAL_PORT + 5)>>5) & 0x01)!=1);
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0" : : "r"(code));
  asm volatile("ebreak");
  while (1);
}

void _trm_init() {
  // memcpy((void*)&_rodata_vma_start, (void*)&_rodata_lma_start, (uintptr_t)&_rodata_vma_end - (uintptr_t)&_rodata_vma_start);
  
  // memcpy((void*)&_data_vma_start, (void*)&_data_lma_start, (uintptr_t)&_data_vma_end - (uintptr_t)&_data_vma_start);
  // memcpy((void*)&_bss_vma_start, (void*)&_bss_lma_start, (uintptr_t)&_bss_vma_end - (uintptr_t)&_bss_vma_start);

  uint32_t ysyx_name,ysyx_id;
  asm volatile("csrr %0,mvendorid" : "=r"(ysyx_name));
  asm volatile("csrr %0,marchid" : "=r"(ysyx_id));
  // char start_buf_[50];
  // strcpy(start_buf_, "===YSYX:    \n===ID:        \n\0");
  // start_buf_[8] = (char)((ysyx_name>>24)&0xff);
  // start_buf_[9] = (char)((ysyx_name>>16)&0xff);
  // start_buf_[10] = (char)((ysyx_name>>8)&0xff);
  // start_buf_[11] = (char)((ysyx_name)&0xff);
  // start_buf_[19] = (char)((ysyx_id / 10000000) + '0');
  // putstr(start_buf_);
  
  uart_init();

  // printf("data:[0x%08x-0x%08x) -> [0x%08x-0x%08x)\n",(uint32_t)(void*)(&_data_lma_start),(uint32_t)(void*)(&_data_lma_end),(uint32_t)(void*)(&_data_vma_start),(uint32_t)(void*)(&_data_vma_end));
  // printf("bss:[0x%08x-0x%08x) -> [0x%08x-0x%08x)\n",(uint32_t)(void*)(&_bss_lma_start),(uint32_t)(void*)(&_bss_lma_end),(uint32_t)(void*)(&_bss_vma_start),(uint32_t)(void*)(&_bss_vma_end));
  // printf("heap:[0x%08x-0x%08x)\n",(uint32_t)(void*)(&_heap_start),(uint32_t)(void*)(&_heap_end));
  // printf("stack:[0x%08x-0x%08x)\n",(uint32_t)(void*)(&_stack_top),(uint32_t)(void*)(&_stack_pointer));
  
  // printf("===YSYX:%c%c%c%c\n",(ysyx_name>>24)&0xff,(ysyx_name>>16)&0xff,(ysyx_name>>8)&0xff,ysyx_name&0xff);
  // printf("===ID:%d\n",ysyx_id);

  

  int ret = main(mainargs);
  halt(ret);
}

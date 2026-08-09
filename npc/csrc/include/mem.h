#ifndef __MEM_H__
#define __MEM_H__
#include "common.h"
#include "VysyxSoCFull__Dpi.h"
#include "svdpi.h"
#define MEM(addr) (MEM[(addr - SRAM_LEFT)>>2])
#define MROM(addr) (MROM[(addr - CONFIG_MROMBASE)>>2])
#define FLASH(addr) (FLASH[(addr - CONFIG_FLASHBASE)>>2])

        
extern uint32_t MEM[CONFIG_SRAMSIZE>>2];
extern uint32_t MROM[CONFIG_MROMSIZE>>2];
extern uint32_t FLASH[CONFIG_FLASHSIZE>>2];
void pmem_write(int waddr, int wdata, char wmask);
int pmem_read(int raddr);
bool check_sram_bound(uint32_t addr);
bool check_mrom_bound(uint32_t addr);
#endif
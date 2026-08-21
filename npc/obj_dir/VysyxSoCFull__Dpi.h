// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_26010011.v:886:30
    extern void difftest_mem_set(int addr);
    // DPI import at vsrc/ysyx_26010011.v:1519:30
    extern void difftest_skip_ref(int reason);
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/flash/flash.v:87:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v:7143:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/ysyx_26010011.v:1674:29
    extern int pmem_read(int raddr);
    // DPI import at vsrc/ysyx_26010011.v:1675:30
    extern void pmem_write(int waddr, int wdata, char wmask);
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/psram/psram.v:220:30
    extern void psram_read(int raddr, int count, int* rdata);
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/psram/psram.v:219:30
    extern void psram_write(int waddr, int count, int wdata);
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/sdram/sdram.v:2:30
    extern void sdram_read(int raddr, int count, int* rdata, int sel);
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/sdram/sdram.v:1:30
    extern void sdram_write(int waddr, int count, int wdata, int sel);

#ifdef __cplusplus
}
#endif

#endif  // guard

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
    // DPI import at vsrc/ysyx_26010011_LSU.v:1:30
    extern void difftest_mem_set(int addr);
    // DPI import at vsrc/ysyx_26010011_REG.v:1:30
    extern void difftest_skip_ref(int reason);
    // DPI import at vsrc/ysyx_26010011.v:1:30
    extern void ebreak();
    // DPI import at /home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/ysyx_26010011.v:2:29
    extern int pmem_read(int raddr);
    // DPI import at vsrc/ysyx_26010011.v:3:30
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard

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
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/flash/flash.v:87:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v:7143:30
    extern void mrom_read(int raddr, int* rdata);
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

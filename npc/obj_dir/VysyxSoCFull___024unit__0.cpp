// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void difftest_mem_set(int addr);

void VysyxSoCFull___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(IData/*31:0*/ addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    difftest_mem_set(addr__Vcvt);
}

extern "C" void difftest_skip_ref(int reason);

void VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(IData/*31:0*/ reason) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit\n"); );
    // Body
    int reason__Vcvt;
    reason__Vcvt = reason;
    difftest_skip_ref(reason__Vcvt);
}

extern "C" void ebreak();

void VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" int pmem_read(int raddr);

void VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

void VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char wmask__Vcvt;
    wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void sdram_write(int waddr, int count, int wdata, int sel);

void VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ count, IData/*31:0*/ wdata, IData/*31:0*/ sel) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int count__Vcvt;
    count__Vcvt = count;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    int sel__Vcvt;
    sel__Vcvt = sel;
    sdram_write(waddr__Vcvt, count__Vcvt, wdata__Vcvt, sel__Vcvt);
}

extern "C" void sdram_read(int raddr, int count, int* rdata, int sel);

void VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ count, IData/*31:0*/ &rdata, IData/*31:0*/ sel) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int count__Vcvt;
    count__Vcvt = count;
    int rdata__Vcvt;
    int sel__Vcvt;
    sel__Vcvt = sel;
    sdram_read(raddr__Vcvt, count__Vcvt, &rdata__Vcvt, sel__Vcvt);
    rdata = (rdata__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = (data__Vcvt);
}

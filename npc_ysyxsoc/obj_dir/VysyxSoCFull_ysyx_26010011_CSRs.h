// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_CSRS_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_CSRS_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_CSRs final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__csr_in_wen,0,0);
    VL_IN8(__PVT__csr_in_bus_exception,4,0);
    VL_IN16(__PVT__csr_in_addr,11,0);
    VL_IN16(__PVT__csr_in_addw,11,0);
    VL_OUT(__PVT__csr_out_data,31,0);
    VL_IN(__PVT__csr_pc,31,0);
    VL_IN(__PVT__csr_in_data,31,0);
    VL_OUT(__PVT__csr_mtvec,31,0);
    VL_OUT(__PVT__csr_mepc,31,0);
    IData/*31:0*/ CSR_MCYCLE;
    IData/*31:0*/ CSR_MCYCLEH;
    IData/*31:0*/ CSR_MISA;
    IData/*31:0*/ CSR_MTVEC;
    IData/*31:0*/ CSR_MSCRATCH;
    IData/*31:0*/ CSR_MEPC;
    IData/*31:0*/ CSR_MCAUSE;
    IData/*31:0*/ CSR_MSTATUS;
    IData/*31:0*/ CSR_MVENDORID;
    IData/*31:0*/ CSR_MARCHID;
    IData/*31:0*/ CSR_MTVAL;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011_CSRs(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011_CSRs();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011_CSRs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

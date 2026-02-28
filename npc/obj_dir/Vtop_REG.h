// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_REG_H_
#define VERILATED_VTOP_REG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_REG final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__addRA,4,0);
    VL_IN8(__PVT__addRB,4,0);
    VL_IN8(__PVT__addW,4,0);
    VL_IN8(__PVT__WCSREN,0,0);
    VL_IN8(__PVT__WEN,0,0);
    VL_IN8(__PVT__isECALL,0,0);
    VL_IN8(__PVT__isMRET,0,0);
    VL_IN16(__PVT__addCSR,11,0);
    VL_IN(__PVT__inData,31,0);
    VL_IN(__PVT__inCSRData,31,0);
    VL_IN(__PVT__pc,31,0);
    VL_OUT(__PVT__outA,31,0);
    VL_OUT(__PVT__outB,31,0);
    VL_OUT(__PVT__CSR_BUS,31,0);
    VL_OUT(__PVT__csr_mtvec,31,0);
    VL_OUT(__PVT__csr_mepc,31,0);
    IData/*31:0*/ CSR_MCYCLE;
    IData/*31:0*/ CSR_MCYCLEH;
    IData/*31:0*/ CSR_MTVEC;
    IData/*31:0*/ CSR_MEPC;
    IData/*31:0*/ CSR_MCAUSE;
    IData/*31:0*/ CSR_MSTATUS;
    IData/*31:0*/ CSR_MVENDORID;
    IData/*31:0*/ CSR_MARCHID;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> GPR;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_REG(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_REG();
    VL_UNCOPYABLE(Vtop_REG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

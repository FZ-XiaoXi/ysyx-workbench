// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LSU_H_
#define VERILATED_VTOP_LSU_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_LSU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__rmask,3,0);
    VL_IN8(__PVT__wmask,3,0);
    VL_IN8(__PVT__isSigned,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__writeEN,0,0);
    VL_IN8(__PVT__bus_valid,0,0);
    VL_IN8(__PVT__LSU_REN,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__LSU_final,0,0);
    CData/*0:0*/ state;
    CData/*0:0*/ __PVT__next_state;
    VL_IN(__PVT__address,31,0);
    VL_OUT(__PVT__rdata,31,0);
    VL_IN(__PVT__wdata,31,0);
    IData/*31:0*/ __PVT__LSU_rdata;
    IData/*31:0*/ __PVT__val1;
    IData/*31:0*/ __PVT__val2;
    IData/*31:0*/ __PVT__rdata4;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_LSU(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_LSU();
    VL_UNCOPYABLE(Vtop_LSU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

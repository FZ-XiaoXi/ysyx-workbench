// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IFU_H_
#define VERILATED_VTOP_IFU_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_IFU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__isJUMP,0,0);
    VL_IN8(__PVT__isBRANCH,0,0);
    VL_IN8(__PVT__isECALL,0,0);
    VL_IN8(__PVT__isMRET,0,0);
    VL_IN8(__PVT__WBU_final,0,0);
    VL_OUT8(__PVT__bus_valid,0,0);
    CData/*0:0*/ state;
    CData/*0:0*/ __PVT__next_state;
    VL_OUT(__PVT__PC,31,0);
    VL_IN(__PVT__dnpc,31,0);
    VL_OUT(__PVT__snpc,31,0);
    VL_OUT(__PVT__PC_command,31,0);
    IData/*31:0*/ __PVT__ifu_raddr;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_IFU(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_IFU();
    VL_UNCOPYABLE(Vtop_IFU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

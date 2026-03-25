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
    VL_IN8(__PVT__lsu_wmask,3,0);
    VL_IN8(__PVT__isSigned,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__lsu_wen,0,0);
    VL_IN8(__PVT__bus_valid,0,0);
    VL_IN8(__PVT__lsu_reqValid,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__lsu_respValid,0,0);
    CData/*0:0*/ state;
    CData/*0:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__lsu_respValid_t;
    CData/*0:0*/ __PVT__random_delay_pulse_0__DOT__lfsr_en;
    CData/*2:0*/ __PVT__random_delay_pulse_0__DOT__delay_cnt;
    CData/*0:0*/ __PVT__random_delay_pulse_0__DOT__busy;
    CData/*0:0*/ __PVT__random_delay_pulse_0__DOT__start_d;
    CData/*2:0*/ __PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    CData/*0:0*/ __PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback;
    VL_IN(__PVT__lsu_addr,31,0);
    VL_OUT(__PVT__lsu_rdata,31,0);
    VL_IN(__PVT__lsu_wdata,31,0);
    IData/*31:0*/ __PVT__rdata;
    IData/*31:0*/ __PVT__val1;
    IData/*31:0*/ __PVT__val2;
    IData/*31:0*/ __PVT__lsu_rdata4;

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

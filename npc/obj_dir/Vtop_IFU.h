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
    VL_IN8(__PVT__wbu_final,0,0);
    VL_OUT8(__PVT__bus_valid,0,0);
    CData/*1:0*/ state;
    CData/*1:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__pmem_reqValid;
    CData/*0:0*/ __PVT__pmem_respValid;
    CData/*0:0*/ __PVT__pmem_respReady;
    CData/*3:0*/ __PVT__ROM_0__DOT__wmask;
    CData/*1:0*/ __PVT__ROM_0__DOT__state;
    CData/*1:0*/ __PVT__ROM_0__DOT__next_state;
    CData/*0:0*/ ROM_0__DOT____Vcellinp__random_delay_pulse_0__start;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_0__DOT__out_unlock;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_0__DOT__lfsr_en;
    CData/*1:0*/ __PVT__ROM_0__DOT__random_delay_pulse_0__DOT__delay_cnt;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_0__DOT__busy;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_0__DOT__lock_state;
    CData/*1:0*/ __PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__out_unlock;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__lfsr_en;
    CData/*1:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__delay_cnt;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__busy;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__start_d;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__lock_state;
    CData/*1:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    CData/*0:0*/ __PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback;
    CData/*0:0*/ __PVT__random_delay_pulse_1__DOT__out_unlock;
    CData/*0:0*/ __PVT__random_delay_pulse_1__DOT__lfsr_en;
    CData/*2:0*/ __PVT__random_delay_pulse_1__DOT__delay_cnt;
    CData/*0:0*/ __PVT__random_delay_pulse_1__DOT__busy;
    CData/*0:0*/ __PVT__random_delay_pulse_1__DOT__start_d;
    CData/*0:0*/ __PVT__random_delay_pulse_1__DOT__lock_state;
    CData/*0:0*/ __PVT__random_delay_pulse_1__DOT__lock_state_next;
    CData/*2:0*/ __PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    CData/*0:0*/ __PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback;
    VL_OUT(__PVT__PC,31,0);
    VL_IN(__PVT__dnpc,31,0);
    VL_OUT(__PVT__snpc,31,0);
    VL_OUT(__PVT__PC_command,31,0);
    IData/*31:0*/ __PVT__ifu_raddr;
    IData/*31:0*/ __PVT__PC_command_t;
    IData/*31:0*/ __PVT__ROM_0__DOT__wdata;

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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(LSU_range,3,0);
    VL_OUT8(LSU_WEN,0,0);
    CData/*0:0*/ top__DOT__ifJUMP;
    CData/*2:0*/ top__DOT__clkdiv_0__DOT__cnt;
    CData/*0:0*/ top__DOT__IDU_0__DOT__isADDI;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    VL_OUT(LSU_address,31,0);
    VL_OUT(LSU_writedata,31,0);
    VL_IN(LSU_readdata,31,0);
    VL_OUT(PC,31,0);
    VL_IN(PC_command,31,0);
    IData/*31:0*/ top__DOT__command;
    IData/*31:0*/ top__DOT__dnpc;
    IData/*31:0*/ top__DOT__rs1_val;
    IData/*31:0*/ top__DOT__GPR_0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__IFU_0__DOT__snpc;
    IData/*31:0*/ top__DOT__EXU_0__DOT__inB;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__GPR_0__DOT__GPR;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

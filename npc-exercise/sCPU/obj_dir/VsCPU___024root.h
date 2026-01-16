// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsCPU.h for the primary calling header

#ifndef VERILATED_VSCPU___024ROOT_H_
#define VERILATED_VSCPU___024ROOT_H_  // guard

#include "verilated.h"


class VsCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(segH,6,0);
    VL_OUT8(segL,6,0);
    VL_OUT8(segnum,7,0);
    VL_OUT8(PC,3,0);
    VL_OUT8(temp,7,0);
    VL_OUT8(tempR1,7,0);
    VL_OUT8(tempR2,7,0);
    VL_OUT8(tempR3,7,0);
    VL_OUT8(tempR0,7,0);
    VL_OUT8(regA,7,0);
    VL_OUT8(regB,7,0);
    CData/*1:0*/ sCPU__DOT__CLKcounter;
    CData/*2:0*/ sCPU__DOT__step;
    CData/*0:0*/ sCPU__DOT__addFlag;
    CData/*7:0*/ sCPU__DOT____VdfgRegularize_heb7aa42f_0_0;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa1__DOT__C;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa2__DOT__C;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa3__DOT__C;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa4__DOT__C;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa5__DOT__C;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa6__DOT__C;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa7__DOT__C;
    CData/*0:0*/ sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_h47985d51__0;
    CData/*0:0*/ __Vtrigprevexpr_h47985d12__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> sCPU__DOT__R;
    VlUnpacked<CData/*7:0*/, 9> sCPU__DOT__PROGRAM;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VsCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsCPU___024root(VsCPU__Syms* symsp, const char* v__name);
    ~VsCPU___024root();
    VL_UNCOPYABLE(VsCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

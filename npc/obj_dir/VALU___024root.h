// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"


class VALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_IN8(inA,3,0);
    VL_IN8(inB,3,0);
    VL_IN8(mode,2,0);
    VL_OUT8(out,3,0);
    VL_OUT8(CF,0,0);
    VL_OUT8(ZF,0,0);
    VL_OUT8(OF,0,0);
    CData/*3:0*/ ALU__DOT__inB_modified;
    CData/*4:0*/ ALU__DOT__sum;
    CData/*3:0*/ ALU__DOT__diff;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU___024root(VALU__Syms* symsp, const char* v__name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

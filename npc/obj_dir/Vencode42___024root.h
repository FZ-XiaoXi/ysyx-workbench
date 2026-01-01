// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencode42.h for the primary calling header

#ifndef VERILATED_VENCODE42___024ROOT_H_
#define VERILATED_VENCODE42___024ROOT_H_  // guard

#include "verilated.h"


class Vencode42__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencode42___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,3,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    IData/*31:0*/ encode42__DOT__i;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vencode42__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencode42___024root(Vencode42__Syms* symsp, const char* v__name);
    ~Vencode42___024root();
    VL_UNCOPYABLE(Vencode42___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

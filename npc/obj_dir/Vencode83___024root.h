// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencode83.h for the primary calling header

#ifndef VERILATED_VENCODE83___024ROOT_H_
#define VERILATED_VENCODE83___024ROOT_H_  // guard

#include "verilated.h"


class Vencode83__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencode83___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    IData/*31:0*/ encode83__DOT__i;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vencode83__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencode83___024root(Vencode83__Syms* symsp, const char* v__name);
    ~Vencode83___024root();
    VL_UNCOPYABLE(Vencode83___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

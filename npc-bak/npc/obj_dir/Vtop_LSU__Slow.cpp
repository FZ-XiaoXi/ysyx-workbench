// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_LSU___ctor_var_reset(Vtop_LSU* vlSelf);

Vtop_LSU::Vtop_LSU(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_LSU___ctor_var_reset(this);
}

void Vtop_LSU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_LSU::~Vtop_LSU() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_IDU___ctor_var_reset(Vtop_IDU* vlSelf);

Vtop_IDU::Vtop_IDU(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_IDU___ctor_var_reset(this);
}

void Vtop_IDU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_IDU::~Vtop_IDU() {
}

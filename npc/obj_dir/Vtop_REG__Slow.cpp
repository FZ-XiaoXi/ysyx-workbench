// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_REG___ctor_var_reset(Vtop_REG* vlSelf);

Vtop_REG::Vtop_REG(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_REG___ctor_var_reset(this);
}

void Vtop_REG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_REG::~Vtop_REG() {
}

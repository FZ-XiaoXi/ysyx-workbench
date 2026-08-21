// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_AXI4RAM___ctor_var_reset(VysyxSoCFull_AXI4RAM* vlSelf);

VysyxSoCFull_AXI4RAM::VysyxSoCFull_AXI4RAM(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_AXI4RAM___ctor_var_reset(this);
}

void VysyxSoCFull_AXI4RAM::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_AXI4RAM::~VysyxSoCFull_AXI4RAM() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(VysyxSoCFull_ysyxSoCASIC* vlSelf);

VysyxSoCFull_ysyxSoCASIC::VysyxSoCFull_ysyxSoCASIC(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(this);
}

void VysyxSoCFull_ysyxSoCASIC::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_ysyxSoCASIC::~VysyxSoCFull_ysyxSoCASIC() {
}

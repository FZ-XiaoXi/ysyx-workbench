// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_APBUart16550___ctor_var_reset(VysyxSoCFull_APBUart16550* vlSelf);

VysyxSoCFull_APBUart16550::VysyxSoCFull_APBUart16550(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_APBUart16550___ctor_var_reset(this);
}

void VysyxSoCFull_APBUart16550::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_APBUart16550::~VysyxSoCFull_APBUart16550() {
}

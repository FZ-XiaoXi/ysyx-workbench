// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_uart_regs___ctor_var_reset(VysyxSoCFull_uart_regs* vlSelf);

VysyxSoCFull_uart_regs::VysyxSoCFull_uart_regs(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_uart_regs___ctor_var_reset(this);
}

void VysyxSoCFull_uart_regs::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_uart_regs::~VysyxSoCFull_uart_regs() {
}

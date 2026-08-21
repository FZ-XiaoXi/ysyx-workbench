// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_mem_2048x32___ctor_var_reset(VysyxSoCFull_mem_2048x32* vlSelf);

VysyxSoCFull_mem_2048x32::VysyxSoCFull_mem_2048x32(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_mem_2048x32___ctor_var_reset(this);
}

void VysyxSoCFull_mem_2048x32::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_mem_2048x32::~VysyxSoCFull_mem_2048x32() {
}

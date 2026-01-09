// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsCPU.h for the primary calling header

#include "VsCPU__pch.h"

// Parameter definitions for VsCPU___024root
constexpr VlUnpacked<CData/*7:0*/, 9> VsCPU___024root::sCPU__DOT__PROGRAM;


void VsCPU___024root___ctor_var_reset(VsCPU___024root* vlSelf);

VsCPU___024root::VsCPU___024root(VsCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsCPU___024root___ctor_var_reset(this);
}

void VsCPU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsCPU___024root::~VsCPU___024root() {
}

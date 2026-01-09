// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

void VALU___024root___eval(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.cin & 0xfeU)))) {
        Verilated::overWidthError("cin");
    }
    if (VL_UNLIKELY(((vlSelfRef.inA & 0xf0U)))) {
        Verilated::overWidthError("inA");
    }
    if (VL_UNLIKELY(((vlSelfRef.inB & 0xf0U)))) {
        Verilated::overWidthError("inB");
    }
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xf8U)))) {
        Verilated::overWidthError("mode");
    }
}
#endif  // VL_DEBUG

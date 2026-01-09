// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

VL_ATTR_COLD void VALU___024root___eval_static(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_static\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VALU___024root___eval_initial__TOP(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VALU___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VALU___024root___eval_initial__TOP(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial__TOP\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CF = 1U;
    vlSelfRef.ZF = 1U;
    vlSelfRef.OF = 1U;
    vlSelfRef.out = 0x0aU;
}

VL_ATTR_COLD void VALU___024root___eval_final(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_final\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VALU___024root___eval_settle(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_settle\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VALU___024root___ctor_var_reset(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ctor_var_reset\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404852791380219477ull);
    vlSelf->inA = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14026491093441443118ull);
    vlSelf->inB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11135363837406460235ull);
    vlSelf->mode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2288075164703132177ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7519490245117619040ull);
    vlSelf->CF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10579661053271340253ull);
    vlSelf->ZF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10254132772179618933ull);
    vlSelf->OF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448324649188511064ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

VL_ATTR_COLD void VALU___024root___eval_static(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_static\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VALU___024root___eval_final(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_final\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VALU___024root___eval_phase__stl(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_settle(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_settle\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/ALU.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VALU___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VALU___024root___eval_triggers__stl(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__stl\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VALU___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VALU___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VALU___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf);
VL_ATTR_COLD void VALU___024root____Vm_traceActivitySetAll(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_stl(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_stl\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        VALU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VALU___024root___eval_phase__stl(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__stl\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VALU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VALU___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VALU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VALU___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VALU___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VALU___024root____Vm_traceActivitySetAll(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root____Vm_traceActivitySetAll\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelf->ALU__DOT__inB_modified = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18416403470043376928ull);
    vlSelf->ALU__DOT__sum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10026465525102953726ull);
    vlSelf->ALU__DOT__diff = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12234318854809819700ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

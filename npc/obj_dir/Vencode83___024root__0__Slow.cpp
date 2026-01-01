// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode83.h for the primary calling header

#include "Vencode83__pch.h"

VL_ATTR_COLD void Vencode83___024root___eval_static(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_static\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vencode83___024root___eval_initial__TOP(Vencode83___024root* vlSelf);

VL_ATTR_COLD void Vencode83___024root___eval_initial(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_initial\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vencode83___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vencode83___024root___eval_initial__TOP(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_initial__TOP\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.seg = 0U;
}

VL_ATTR_COLD void Vencode83___024root___eval_final(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_final\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vencode83___024root___eval_phase__stl(Vencode83___024root* vlSelf);

VL_ATTR_COLD void Vencode83___024root___eval_settle(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_settle\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vencode83___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/encode83.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vencode83___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vencode83___024root___eval_triggers__stl(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_triggers__stl\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencode83___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vencode83___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vencode83___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vencode83___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___trigger_anySet__stl\n"); );
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

void Vencode83___024root___ico_sequent__TOP__0(Vencode83___024root* vlSelf);

VL_ATTR_COLD void Vencode83___024root___eval_stl(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_stl\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vencode83___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vencode83___024root___eval_phase__stl(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_phase__stl\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vencode83___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vencode83___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vencode83___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vencode83___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vencode83___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencode83___024root___ctor_var_reset(Vencode83___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___ctor_var_reset\n"); );
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9409450202036847209ull);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11123243248953317070ull);
    vlSelf->s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16562859848569467201ull);
    vlSelf->seg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4039245944636677600ull);
    vlSelf->encode83__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6020685650819178943ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}

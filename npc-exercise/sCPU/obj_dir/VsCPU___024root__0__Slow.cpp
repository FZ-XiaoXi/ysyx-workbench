// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsCPU.h for the primary calling header

#include "VsCPU__pch.h"

VL_ATTR_COLD void VsCPU___024root___eval_static(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_static\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr_h47985d51__0 = (1U & 
                                              ((IData)(vlSelfRef.sCPU__DOT__step) 
                                               >> 1U));
    vlSelfRef.__Vtrigprevexpr_h47985d12__0 = (1U & 
                                              ((IData)(vlSelfRef.sCPU__DOT__step) 
                                               >> 2U));
}

VL_ATTR_COLD void VsCPU___024root___eval_initial(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_initial\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsCPU___024root___eval_final(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_final\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsCPU___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsCPU___024root___eval_phase__stl(VsCPU___024root* vlSelf);

VL_ATTR_COLD void VsCPU___024root___eval_settle(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_settle\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VsCPU___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/sCPU.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VsCPU___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VsCPU___024root___eval_triggers__stl(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_triggers__stl\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsCPU___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VsCPU___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VsCPU___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VsCPU___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VsCPU___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*6:0*/, 16> VsCPU__ConstPool__TABLE_h0ee5ce4f_0;

VL_ATTR_COLD void VsCPU___024root___stl_sequent__TOP__0(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___stl_sequent__TOP__0\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.tempR0 = vlSelfRef.sCPU__DOT__R[0U];
    vlSelfRef.tempR1 = vlSelfRef.sCPU__DOT__R[1U];
    vlSelfRef.tempR2 = vlSelfRef.sCPU__DOT__R[2U];
    vlSelfRef.tempR3 = vlSelfRef.sCPU__DOT__R[3U];
    vlSelfRef.sCPU__DOT__step = ((0U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                  ? 1U : ((1U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                           ? 2U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                                    ? 4U
                                                    : 0U)));
    __Vtableidx1 = (0x0000000fU & (IData)(vlSelfRef.segnum));
    vlSelfRef.segL = VsCPU__ConstPool__TABLE_h0ee5ce4f_0
        [__Vtableidx1];
    __Vtableidx2 = (0x0000000fU & ((IData)(vlSelfRef.segnum) 
                                   >> 4U));
    vlSelfRef.segH = VsCPU__ConstPool__TABLE_h0ee5ce4f_0
        [__Vtableidx2];
    vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0 
        = ((8U >= (IData)(vlSelfRef.PC)) ? vlSelfRef.sCPU__DOT__PROGRAM
           [vlSelfRef.PC] : 0U);
    vlSelfRef.sCPU__DOT__addFlag = (IData)((0U == (0xc0U 
                                                   & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))));
    vlSelfRef.sCPU__DOT__regA = vlSelfRef.sCPU__DOT__R
        [(3U & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))];
    vlSelfRef.sCPU__DOT__regB = vlSelfRef.sCPU__DOT__R
        [((3U == (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                        >> 6U))) ? 0U : (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                               >> 2U)))];
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0 
        = (1U & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)) 
                 >> 7U));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0 
        = (1U & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)) 
                 >> 6U));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0 
        = (1U & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)) 
                 >> 5U));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0 
        = (1U & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)) 
                 >> 4U));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0 
        = (1U & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)) 
                 >> 3U));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0 
        = (1U & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)) 
                 >> 2U));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C 
        = (1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                 & (IData)(vlSelfRef.sCPU__DOT__regB)));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0 
        = (1U & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)) 
                 >> 1U));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C 
        = (1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                   & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                  >> 1U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C) 
                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0))));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C 
        = (1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                   & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                  >> 2U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C) 
                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0))));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C 
        = (1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                   & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                  >> 3U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C) 
                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0))));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C 
        = (1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                   & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                  >> 4U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C) 
                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0))));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C 
        = (1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                   & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                  >> 5U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C) 
                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0))));
    vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C 
        = (1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                   & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                  >> 6U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C) 
                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0))));
    vlSelfRef.temp = (((((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0) 
                           ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C)) 
                          << 3U) | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0) 
                                     ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C)) 
                                    << 2U)) | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0) 
                                                 ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C)) 
                                                << 1U) 
                                               | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0) 
                                                  ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C)))) 
                       << 4U) | (((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0) 
                                    ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C)) 
                                   << 3U) | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0) 
                                              ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C)) 
                                             << 2U)) 
                                 | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0) 
                                      ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C)) 
                                     << 1U) | (1U & 
                                               ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                                ^ (IData)(vlSelfRef.sCPU__DOT__regB))))));
}

VL_ATTR_COLD void VsCPU___024root____Vm_traceActivitySetAll(VsCPU___024root* vlSelf);

VL_ATTR_COLD void VsCPU___024root___eval_stl(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_stl\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VsCPU___024root___stl_sequent__TOP__0(vlSelf);
        VsCPU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VsCPU___024root___eval_phase__stl(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_phase__stl\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VsCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VsCPU___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VsCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VsCPU___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VsCPU___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VsCPU___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge sCPU.step[1])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge sCPU.step[2])\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsCPU___024root____Vm_traceActivitySetAll(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root____Vm_traceActivitySetAll\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VsCPU___024root___ctor_var_reset(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___ctor_var_reset\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->segH = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3746672119709138702ull);
    vlSelf->segL = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1581558181076541388ull);
    vlSelf->segnum = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14028715540171425351ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12700755172620096637ull);
    vlSelf->temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7233838040978344170ull);
    vlSelf->tempR1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2242453764501768226ull);
    vlSelf->tempR2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11556986878210963368ull);
    vlSelf->tempR3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7340184037335416937ull);
    vlSelf->tempR0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16418397961466032272ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sCPU__DOT__R[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15400799822333329701ull);
    }
    vlSelf->sCPU__DOT__CLKcounter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 645028183741017736ull);
    vlSelf->sCPU__DOT__step = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10553516801284693170ull);
    vlSelf->sCPU__DOT__addFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18206432680575621326ull);
    vlSelf->sCPU__DOT__regA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15949413089039271887ull);
    vlSelf->sCPU__DOT__regB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4397547599180159409ull);
    vlSelf->sCPU__DOT____VdfgRegularize_heb7aa42f_0_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17427888702623353435ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa1__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9215467379847306535ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 866347823962315684ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa2__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5705294871839509206ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18212750174492346145ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa3__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16787064964277951172ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5899666329889101797ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa4__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 374409843521213334ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8089435587377433711ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa5__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6312863500124227698ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12196050694328682321ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa6__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5564617203759077217ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8890945680406287756ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa7__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16563162700331998485ull);
    vlSelf->sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17847734186666918019ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr_h47985d51__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9785356743067636109ull);
    vlSelf->__Vtrigprevexpr_h47985d12__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 690221273866535527ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

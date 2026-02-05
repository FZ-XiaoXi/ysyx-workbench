// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.LSU_range = 0x0fU;
    vlSelfRef.LSU_writedata = 0U;
    vlSelfRef.LSU_WEN = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/top.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__IFU_0__DOT__snpc = ((IData)(4U) 
                                            + vlSelfRef.PC);
    vlSelfRef.GPRTEST[0x0000001fU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000001fU];
    vlSelfRef.GPRTEST[0x0000001eU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000001eU];
    vlSelfRef.GPRTEST[0x0000001dU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000001dU];
    vlSelfRef.GPRTEST[0x0000001cU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000001cU];
    vlSelfRef.GPRTEST[0x0000001bU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000001bU];
    vlSelfRef.GPRTEST[0x0000001aU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000001aU];
    vlSelfRef.GPRTEST[0x00000019U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000019U];
    vlSelfRef.GPRTEST[0x00000018U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000018U];
    vlSelfRef.GPRTEST[0x00000017U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000017U];
    vlSelfRef.GPRTEST[0x00000016U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000016U];
    vlSelfRef.GPRTEST[0x00000015U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000015U];
    vlSelfRef.GPRTEST[0x00000014U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000014U];
    vlSelfRef.GPRTEST[0x00000013U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000013U];
    vlSelfRef.GPRTEST[0x00000012U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000012U];
    vlSelfRef.GPRTEST[0x00000011U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000011U];
    vlSelfRef.GPRTEST[0x00000010U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x00000010U];
    vlSelfRef.GPRTEST[0x0000000fU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000000fU];
    vlSelfRef.GPRTEST[0x0000000eU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000000eU];
    vlSelfRef.GPRTEST[0x0000000dU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000000dU];
    vlSelfRef.GPRTEST[0x0000000cU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000000cU];
    vlSelfRef.GPRTEST[0x0000000bU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000000bU];
    vlSelfRef.GPRTEST[0x0000000aU] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0x0000000aU];
    vlSelfRef.GPRTEST[9U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [9U];
    vlSelfRef.GPRTEST[8U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [8U];
    vlSelfRef.GPRTEST[7U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [7U];
    vlSelfRef.GPRTEST[6U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [6U];
    vlSelfRef.GPRTEST[5U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [5U];
    vlSelfRef.GPRTEST[4U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [4U];
    vlSelfRef.GPRTEST[3U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [3U];
    vlSelfRef.GPRTEST[2U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [2U];
    vlSelfRef.GPRTEST[1U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [1U];
    vlSelfRef.GPRTEST[0U] = vlSelfRef.top__DOT__GPR_0__DOT__GPR
        [0U];
    vlSelfRef.top__DOT__IDU_0__DOT__isADDI = (IData)(
                                                     (0x00000013U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.PC_command)));
    vlSelfRef.top__DOT__rs1_val = ((0U == (0x0000001fU 
                                           & (vlSelfRef.PC_command 
                                              >> 0x0000000fU)))
                                    ? 0U : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                                   [(0x0000001fU & 
                                     (vlSelfRef.PC_command 
                                      >> 0x0000000fU))]);
    vlSelfRef.top__DOT__GPRTEST[0x0000001fU] = vlSelfRef.GPRTEST
        [0x0000001fU];
    vlSelfRef.top__DOT__GPRTEST[0x0000001eU] = vlSelfRef.GPRTEST
        [0x0000001eU];
    vlSelfRef.top__DOT__GPRTEST[0x0000001dU] = vlSelfRef.GPRTEST
        [0x0000001dU];
    vlSelfRef.top__DOT__GPRTEST[0x0000001cU] = vlSelfRef.GPRTEST
        [0x0000001cU];
    vlSelfRef.top__DOT__GPRTEST[0x0000001bU] = vlSelfRef.GPRTEST
        [0x0000001bU];
    vlSelfRef.top__DOT__GPRTEST[0x0000001aU] = vlSelfRef.GPRTEST
        [0x0000001aU];
    vlSelfRef.top__DOT__GPRTEST[0x00000019U] = vlSelfRef.GPRTEST
        [0x00000019U];
    vlSelfRef.top__DOT__GPRTEST[0x00000018U] = vlSelfRef.GPRTEST
        [0x00000018U];
    vlSelfRef.top__DOT__GPRTEST[0x00000017U] = vlSelfRef.GPRTEST
        [0x00000017U];
    vlSelfRef.top__DOT__GPRTEST[0x00000016U] = vlSelfRef.GPRTEST
        [0x00000016U];
    vlSelfRef.top__DOT__GPRTEST[0x00000015U] = vlSelfRef.GPRTEST
        [0x00000015U];
    vlSelfRef.top__DOT__GPRTEST[0x00000014U] = vlSelfRef.GPRTEST
        [0x00000014U];
    vlSelfRef.top__DOT__GPRTEST[0x00000013U] = vlSelfRef.GPRTEST
        [0x00000013U];
    vlSelfRef.top__DOT__GPRTEST[0x00000012U] = vlSelfRef.GPRTEST
        [0x00000012U];
    vlSelfRef.top__DOT__GPRTEST[0x00000011U] = vlSelfRef.GPRTEST
        [0x00000011U];
    vlSelfRef.top__DOT__GPRTEST[0x00000010U] = vlSelfRef.GPRTEST
        [0x00000010U];
    vlSelfRef.top__DOT__GPRTEST[0x0000000fU] = vlSelfRef.GPRTEST
        [0x0000000fU];
    vlSelfRef.top__DOT__GPRTEST[0x0000000eU] = vlSelfRef.GPRTEST
        [0x0000000eU];
    vlSelfRef.top__DOT__GPRTEST[0x0000000dU] = vlSelfRef.GPRTEST
        [0x0000000dU];
    vlSelfRef.top__DOT__GPRTEST[0x0000000cU] = vlSelfRef.GPRTEST
        [0x0000000cU];
    vlSelfRef.top__DOT__GPRTEST[0x0000000bU] = vlSelfRef.GPRTEST
        [0x0000000bU];
    vlSelfRef.top__DOT__GPRTEST[0x0000000aU] = vlSelfRef.GPRTEST
        [0x0000000aU];
    vlSelfRef.top__DOT__GPRTEST[9U] = vlSelfRef.GPRTEST
        [9U];
    vlSelfRef.top__DOT__GPRTEST[8U] = vlSelfRef.GPRTEST
        [8U];
    vlSelfRef.top__DOT__GPRTEST[7U] = vlSelfRef.GPRTEST
        [7U];
    vlSelfRef.top__DOT__GPRTEST[6U] = vlSelfRef.GPRTEST
        [6U];
    vlSelfRef.top__DOT__GPRTEST[5U] = vlSelfRef.GPRTEST
        [5U];
    vlSelfRef.top__DOT__GPRTEST[4U] = vlSelfRef.GPRTEST
        [4U];
    vlSelfRef.top__DOT__GPRTEST[3U] = vlSelfRef.GPRTEST
        [3U];
    vlSelfRef.top__DOT__GPRTEST[2U] = vlSelfRef.GPRTEST
        [2U];
    vlSelfRef.top__DOT__GPRTEST[1U] = vlSelfRef.GPRTEST
        [1U];
    vlSelfRef.top__DOT__GPRTEST[0U] = vlSelfRef.GPRTEST
        [0U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000001fU] 
        = vlSelfRef.GPRTEST[0x0000001fU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000001eU] 
        = vlSelfRef.GPRTEST[0x0000001eU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000001dU] 
        = vlSelfRef.GPRTEST[0x0000001dU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000001cU] 
        = vlSelfRef.GPRTEST[0x0000001cU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000001bU] 
        = vlSelfRef.GPRTEST[0x0000001bU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000001aU] 
        = vlSelfRef.GPRTEST[0x0000001aU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000019U] 
        = vlSelfRef.GPRTEST[0x00000019U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000018U] 
        = vlSelfRef.GPRTEST[0x00000018U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000017U] 
        = vlSelfRef.GPRTEST[0x00000017U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000016U] 
        = vlSelfRef.GPRTEST[0x00000016U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000015U] 
        = vlSelfRef.GPRTEST[0x00000015U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000014U] 
        = vlSelfRef.GPRTEST[0x00000014U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000013U] 
        = vlSelfRef.GPRTEST[0x00000013U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000012U] 
        = vlSelfRef.GPRTEST[0x00000012U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000011U] 
        = vlSelfRef.GPRTEST[0x00000011U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x00000010U] 
        = vlSelfRef.GPRTEST[0x00000010U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000000fU] 
        = vlSelfRef.GPRTEST[0x0000000fU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000000eU] 
        = vlSelfRef.GPRTEST[0x0000000eU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000000dU] 
        = vlSelfRef.GPRTEST[0x0000000dU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000000cU] 
        = vlSelfRef.GPRTEST[0x0000000cU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000000bU] 
        = vlSelfRef.GPRTEST[0x0000000bU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0x0000000aU] 
        = vlSelfRef.GPRTEST[0x0000000aU];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[9U] = vlSelfRef.GPRTEST
        [9U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[8U] = vlSelfRef.GPRTEST
        [8U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[7U] = vlSelfRef.GPRTEST
        [7U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[6U] = vlSelfRef.GPRTEST
        [6U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[5U] = vlSelfRef.GPRTEST
        [5U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[4U] = vlSelfRef.GPRTEST
        [4U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[3U] = vlSelfRef.GPRTEST
        [3U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[2U] = vlSelfRef.GPRTEST
        [2U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[1U] = vlSelfRef.GPRTEST
        [1U];
    vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0U] = vlSelfRef.GPRTEST
        [0U];
    vlSelfRef.top__DOT__EXU_0__DOT__inB = ((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI)
                                            ? vlSelfRef.top__DOT__rs1_val
                                            : ((0U 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.PC_command 
                                                    >> 0x00000014U)))
                                                ? 0U
                                                : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                                               [(0x0000001fU 
                                                 & (vlSelfRef.PC_command 
                                                    >> 0x00000014U))]));
}

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->LSU_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3446524407634464399ull);
    vlSelf->LSU_range = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2467863415439979306ull);
    vlSelf->LSU_writedata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8621591918967330140ull);
    vlSelf->LSU_WEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4139174640315457831ull);
    vlSelf->LSU_readdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5454595947310901637ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->GPRTEST[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8972673220147066468ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__GPRTEST[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4409814679699310879ull);
    }
    vlSelf->top__DOT__command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8116531040203228024ull);
    vlSelf->top__DOT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3608326066998884506ull);
    vlSelf->top__DOT__ifJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8025233968268381387ull);
    vlSelf->top__DOT__rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2187221350439557998ull);
    vlSelf->top__DOT__clkdiv_0__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9445685417435492161ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__GPR_0__DOT__GPRTEST[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5581750006903562700ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__GPR_0__DOT__GPR[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18271363982738575805ull);
    }
    vlSelf->top__DOT__GPR_0__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__IFU_0__DOT__snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12889190132087663053ull);
    vlSelf->top__DOT__IDU_0__DOT__isADDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14054335011428621801ull);
    vlSelf->top__DOT__EXU_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2917099968439915909ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495601893105415319ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

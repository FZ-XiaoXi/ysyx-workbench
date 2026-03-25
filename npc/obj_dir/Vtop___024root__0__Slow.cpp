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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("vsrc/top.v", 5, "", "Settle region did not converge after 100 tries");
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
    vlSelfRef.PC_command = vlSymsp->TOP__top__IFU_0.__PVT__PC_command;
    vlSelfRef.CSR_data = ((((0x0b00U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                         >> 0x00000014U)) 
                            | (0x0b80U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                           >> 0x00000014U))) 
                           | (((0x0305U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                            >> 0x00000014U)) 
                               | (0x0341U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                              >> 0x00000014U))) 
                              | ((0x0342U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                              >> 0x00000014U)) 
                                 | ((0x0300U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U)) 
                                    | ((0x0f11U == 
                                        (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                         >> 0x00000014U)) 
                                       | (0x0f12U == 
                                          (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                           >> 0x00000014U)))))))
                           ? ((0x0b00U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                           >> 0x00000014U))
                               ? vlSymsp->TOP__top__REG_0.CSR_MCYCLE
                               : ((0x0b80U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                               >> 0x00000014U))
                                   ? vlSymsp->TOP__top__REG_0.CSR_MCYCLEH
                                   : ((0x0305U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                   >> 0x00000014U))
                                       ? vlSymsp->TOP__top__REG_0.CSR_MTVEC
                                       : ((0x0341U 
                                           == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                               >> 0x00000014U))
                                           ? vlSymsp->TOP__top__REG_0.CSR_MEPC
                                           : ((0x0342U 
                                               == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                   >> 0x00000014U))
                                               ? vlSymsp->TOP__top__REG_0.CSR_MCAUSE
                                               : ((0x0300U 
                                                   == 
                                                   (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                    >> 0x00000014U))
                                                   ? vlSymsp->TOP__top__REG_0.CSR_MSTATUS
                                                   : 
                                                  ((0x0f11U 
                                                    == 
                                                    (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                     >> 0x00000014U))
                                                    ? vlSymsp->TOP__top__REG_0.CSR_MVENDORID
                                                    : vlSymsp->TOP__top__REG_0.CSR_MARCHID)))))))
                           : 0x2b2b2b2bU);
    vlSelfRef.lsu_wdata = ((0U == (0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U)))
                            ? 0U : vlSymsp->TOP__top__REG_0.GPR
                           [(0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                            >> 0x00000014U))]);
    vlSelfRef.rs1_val = ((0U == (0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 0x0000000fU)))
                          ? 0U : vlSymsp->TOP__top__REG_0.GPR
                         [(0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                          >> 0x0000000fU))]);
    vlSelfRef.rs2_val = vlSelfRef.lsu_wdata;
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lsu_wmask = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSW)
                            ? 0x0fU : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSB)
                                        ? 1U : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSH)
                                                 ? 3U
                                                 : 0U)));
    vlSelfRef.LSU_WEN = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSW) 
                         | (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_25));
    vlSelfRef.LSU_rmask = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isLW)
                            ? 0x0fU : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_21)
                                        ? 1U : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_22)
                                                 ? 3U
                                                 : 0U)));
    vlSelfRef.imm = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI)
                      ? (((- (IData)((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 0x0000001fU))) 
                          << 0x0000000cU) | (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                             >> 0x00000014U))
                      : ((0x6fU == (0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))
                          ? ((((0x00000ffeU & ((- (IData)(
                                                          (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                           >> 0x0000001fU))) 
                                               << 1U)) 
                               | (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                  >> 0x0000001fU)) 
                              << 0x00000014U) | (((
                                                   (0x000001feU 
                                                    & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                         >> 0x00000014U))) 
                                                  << 0x0000000bU) 
                                                 | (0x000007feU 
                                                    & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                       >> 0x00000014U))))
                          : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE)
                              ? (((- (IData)((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 ((0x00000fe0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 7U)))) : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isU)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                                  >> 0x0000001fU))) 
                                                      << 0x0000000dU) 
                                                     | ((((2U 
                                                           & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                              >> 0x0000001eU)) 
                                                          | (1U 
                                                             & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                                >> 7U))) 
                                                         << 0x0000000bU) 
                                                        | ((0x000007e0U 
                                                            & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                               >> 0x00000014U)) 
                                                           | (0x0000001eU 
                                                              & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                                 >> 7U)))))
                                                     : 0U)))));
    if (vlSymsp->TOP__top.__VdfgRegularize_he2b63832_0_0) {
        vlSelfRef.EXU_inA = (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_19) 
                              | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))
                              ? vlSymsp->TOP__top.PC
                              : vlSelfRef.rs1_val);
        vlSelfRef.EXU_inB = vlSelfRef.imm;
    } else {
        vlSelfRef.EXU_inA = vlSelfRef.rs1_val;
        vlSelfRef.EXU_inB = ((IData)(vlSymsp->TOP__top__REG_0.__PVT__WCSREN)
                              ? vlSelfRef.rs1_val : vlSelfRef.lsu_wdata);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lsu_addr = (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_1) 
                           | (IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin))
                           ? (vlSelfRef.EXU_inA + ((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                   + (IData)((QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))))
                           : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_2)
                               ? VL_SHIFTL_III(32,32,32, vlSelfRef.EXU_inA, 
                                               (0x0000001fU 
                                                & vlSelfRef.EXU_inB))
                               : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_3)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.EXU_inA, 
                                                   (0x0000001fU 
                                                    & vlSelfRef.EXU_inB))
                                   : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_4)
                                       ? VL_SHIFTRS_III(32,32,32, vlSelfRef.EXU_inA, 
                                                        (0x0000001fU 
                                                         & vlSelfRef.EXU_inB))
                                       : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_5)
                                           ? (vlSelfRef.EXU_inA 
                                              & vlSelfRef.EXU_inB)
                                           : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_6)
                                               ? (vlSelfRef.EXU_inA 
                                                  | vlSelfRef.EXU_inB)
                                               : ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_7)
                                                   ? 
                                                  (vlSelfRef.EXU_inA 
                                                   ^ vlSelfRef.EXU_inB)
                                                   : vlSelfRef.EXU_inB)))))));
    vlSelfRef.COMP_data = (1U & (~ ((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL) 
                                    | (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isGREATER))));
    vlSelfRef.EXU_data = vlSelfRef.lsu_addr;
}

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_IFU___stl_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf);
VL_ATTR_COLD void Vtop_LSU___stl_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_IDU___stl_sequent__TOP__top__IDU_0__0(Vtop_IDU* vlSelf);
void Vtop_REG___nba_sequent__TOP__top__REG_0__1(Vtop_REG* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_IDU___nba_sequent__TOP__top__IDU_0__1(Vtop_IDU* vlSelf);
void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_REG___nba_comb__TOP__top__REG_0__0(Vtop_REG* vlSelf);
void Vtop_IDU___nba_comb__TOP__top__IDU_0__0(Vtop_IDU* vlSelf);
void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_LSU___nba_sequent__TOP__top__LSU_0__1(Vtop_LSU* vlSelf);
void Vtop_IFU___ico_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf);
void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop_IDU___ico_sequent__TOP__top__IDU_0__0(Vtop_IDU* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop_LSU___nba_comb__TOP__top__LSU_0__0(Vtop_LSU* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
        Vtop_IFU___stl_sequent__TOP__top__IFU_0__0((&vlSymsp->TOP__top__IFU_0));
        Vtop_LSU___stl_sequent__TOP__top__LSU_0__0((&vlSymsp->TOP__top__LSU_0));
        Vtop_top___stl_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_IDU___stl_sequent__TOP__top__IDU_0__0((&vlSymsp->TOP__top__IDU_0));
        Vtop_REG___nba_sequent__TOP__top__REG_0__1((&vlSymsp->TOP__top__REG_0));
        Vtop_top___stl_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop___024root___stl_sequent__TOP__1(vlSelf);
        Vtop_IDU___nba_sequent__TOP__top__IDU_0__1((&vlSymsp->TOP__top__IDU_0));
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_REG___nba_comb__TOP__top__REG_0__0((&vlSymsp->TOP__top__REG_0));
        Vtop___024root___stl_sequent__TOP__2(vlSelf);
        Vtop_IDU___nba_comb__TOP__top__IDU_0__0((&vlSymsp->TOP__top__IDU_0));
        Vtop_top___ico_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_LSU___nba_sequent__TOP__top__LSU_0__1((&vlSymsp->TOP__top__LSU_0));
        Vtop_IFU___ico_sequent__TOP__top__IFU_0__0((&vlSymsp->TOP__top__IFU_0));
        Vtop___024root___ico_sequent__TOP__2(vlSelf);
        Vtop_IDU___ico_sequent__TOP__top__IDU_0__0((&vlSymsp->TOP__top__IDU_0));
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        Vtop_LSU___nba_comb__TOP__top__LSU_0__0((&vlSymsp->TOP__top__LSU_0));
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
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->lsu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7215086410235688806ull);
    vlSelf->LSU_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15114391294081831391ull);
    vlSelf->lsu_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13598643557825439274ull);
    vlSelf->lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3658037750161046613ull);
    vlSelf->LSU_WEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4139174640315457831ull);
    vlSelf->lsu_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11881322873208076425ull);
    vlSelf->lsu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5289022911436506389ull);
    vlSelf->PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    vlSelf->EXU_inA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9531828074647327223ull);
    vlSelf->EXU_inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9377487099893787553ull);
    vlSelf->EXU_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11529933568103740182ull);
    vlSelf->CSR_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5074626129175349301ull);
    vlSelf->rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 544071659820774754ull);
    vlSelf->rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12971079179806023922ull);
    vlSelf->reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2113356192903233237ull);
    vlSelf->imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17436245599429385641ull);
    vlSelf->COMP_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7391533942535881271ull);
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
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

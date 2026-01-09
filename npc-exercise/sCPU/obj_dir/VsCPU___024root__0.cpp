// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsCPU.h for the primary calling header

#include "VsCPU__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsCPU___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VsCPU___024root___eval_triggers__act(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_triggers__act\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((4U 
                                                      & ((IData)(vlSelfRef.sCPU__DOT__step) 
                                                         & ((~ (IData)(vlSelfRef.__Vtrigprevexpr_h47985d12__0)) 
                                                            << 2U))) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.sCPU__DOT__step) 
                                                            & ((~ (IData)(vlSelfRef.__Vtrigprevexpr_h47985d51__0)) 
                                                               << 1U))) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr_h47985d51__0 = (1U & 
                                              ((IData)(vlSelfRef.sCPU__DOT__step) 
                                               >> 1U));
    vlSelfRef.__Vtrigprevexpr_h47985d12__0 = (1U & 
                                              ((IData)(vlSelfRef.sCPU__DOT__step) 
                                               >> 2U));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsCPU___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VsCPU___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___trigger_anySet__act\n"); );
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

void VsCPU___024root___nba_sequent__TOP__0(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___nba_sequent__TOP__0\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sCPU__DOT__CLKcounter = ((2U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                        ? 0U : (3U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.sCPU__DOT__CLKcounter))));
    vlSelfRef.sCPU__DOT__step = ((0U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                  ? 1U : ((1U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                           ? 2U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                                    ? 4U
                                                    : 0U)));
}

extern const VlUnpacked<CData/*6:0*/, 16> VsCPU__ConstPool__TABLE_h0ee5ce4f_0;

void VsCPU___024root___nba_sequent__TOP__1(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___nba_sequent__TOP__1\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __VdlyVal__sCPU__DOT__R__v0;
    __VdlyVal__sCPU__DOT__R__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sCPU__DOT__R__v0;
    __VdlyDim0__sCPU__DOT__R__v0 = 0;
    // Body
    vlSelfRef.segnum = ((IData)((0x40U == (0xc0U & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))))
                         ? (IData)(vlSelfRef.sCPU__DOT__regA)
                         : (IData)(vlSelfRef.segnum));
    __VdlyVal__sCPU__DOT__R__v0 = ((IData)(vlSelfRef.sCPU__DOT__addFlag)
                                    ? (((((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0) 
                                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0) 
                                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C)) 
                                           << 2U)) 
                                         | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0) 
                                              ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C)) 
                                             << 1U) 
                                            | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0) 
                                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C)))) 
                                        << 4U) | ((
                                                   (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0) 
                                                     ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C)) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0) 
                                                       ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C)) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0) 
                                                       ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C)) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                                           ^ (IData)(vlSelfRef.sCPU__DOT__regB))))))
                                    : (0x0000000fU 
                                       & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0)));
    __VdlyDim0__sCPU__DOT__R__v0 = (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                          >> 4U));
    vlSelfRef.sCPU__DOT__R[__VdlyDim0__sCPU__DOT__R__v0] 
        = __VdlyVal__sCPU__DOT__R__v0;
    __Vtableidx1 = (0x0000000fU & (IData)(vlSelfRef.segnum));
    vlSelfRef.segL = VsCPU__ConstPool__TABLE_h0ee5ce4f_0
        [__Vtableidx1];
    __Vtableidx2 = (0x0000000fU & ((IData)(vlSelfRef.segnum) 
                                   >> 4U));
    vlSelfRef.segH = VsCPU__ConstPool__TABLE_h0ee5ce4f_0
        [__Vtableidx2];
    vlSelfRef.temp = vlSelfRef.sCPU__DOT__R[2U];
}

void VsCPU___024root___nba_sequent__TOP__2(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___nba_sequent__TOP__2\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PC = (0x0000000fU & ((IData)(((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))) 
                                            & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                               == (IData)(vlSelfRef.sCPU__DOT__regB))))
                                    ? (((8U >= (IData)(vlSelfRef.PC))
                                         ? vlSelfRef.sCPU__DOT__PROGRAM
                                        [vlSelfRef.PC]
                                         : 0U) >> 2U)
                                    : ((IData)(1U) 
                                       + (IData)(vlSelfRef.PC))));
    vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0 
        = ((8U >= (IData)(vlSelfRef.PC)) ? vlSelfRef.sCPU__DOT__PROGRAM
           [vlSelfRef.PC] : 0U);
    vlSelfRef.sCPU__DOT__addFlag = (IData)((0U == (0xc0U 
                                                   & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))));
}

void VsCPU___024root___nba_comb__TOP__0(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___nba_comb__TOP__0\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void VsCPU___024root___eval_nba(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_nba\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VsCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VsCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VsCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VsCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void VsCPU___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VsCPU___024root___eval_phase__act(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_phase__act\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsCPU___024root___eval_triggers__act(vlSelf);
    VsCPU___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VsCPU___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VsCPU___024root___eval_phase__nba(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_phase__nba\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VsCPU___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VsCPU___024root___eval_nba(vlSelf);
        VsCPU___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VsCPU___024root___eval(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsCPU___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/sCPU.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsCPU___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/sCPU.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VsCPU___024root___eval_phase__act(vlSelf));
    } while (VsCPU___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VsCPU___024root___eval_debug_assertions(VsCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root___eval_debug_assertions\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_uart_top_apb___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__0(VysyxSoCFull_uart_top_apb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_uart_top_apb___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h953d1cf6_0_0 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                & ((~ (IData)(vlSelfRef.__PVT__in_penable)) 
                                                   & (IData)(vlSelfRef.__PVT__in_psel)));
}

void VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__0(VysyxSoCFull_uart_top_apb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg_dat8_w_reg = vlSelfRef.__PVT__reg_dat8_w;
}

void VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__1(VysyxSoCFull_uart_top_apb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg_dat8_w = (0x000000ffU & ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                    >> 0x00000018U)
                                                    : 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                    >> 8U)
                                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i)));
    vlSelfRef.__PVT__in_penable = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1) 
                                   & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__in_psel = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__VdfgRegularize_h953d1cf6_0_0 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                & ((~ (IData)(vlSelfRef.__PVT__in_penable)) 
                                                   & (IData)(vlSelfRef.__PVT__in_psel)));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__0(VysyxSoCFull_AXI4RAM* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h9fc36335_0_0 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__w_full)) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready)));
}

void VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__1(VysyxSoCFull_AXI4RAM* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
}

void VysyxSoCFull_AXI4RAM___nba_sequent__TOP__ysyxSoCFull__asic__axi4ram__0(VysyxSoCFull_AXI4RAM* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_AXI4RAM___nba_sequent__TOP__ysyxSoCFull__asic__axi4ram__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__w_full = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && ((IData)(vlSelfRef.__PVT___GEN) 
                                   | ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready) 
                                          & (IData)(vlSelfRef.__PVT__w_full))) 
                                      & (IData)(vlSelfRef.__PVT__w_full))));
    vlSelfRef.__PVT__r_full = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_en) 
                                   | ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready) 
                                          & (IData)(vlSelfRef.__PVT__r_full))) 
                                      & (IData)(vlSelfRef.__PVT__r_full))));
    vlSelfRef.__PVT__r_sel1 = (0x7800U == (0x00007fffU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                              >> 0x0000000dU)));
    if (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_en) {
        vlSelfRef.__PVT__r_id = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid;
    }
    vlSelfRef.__PVT__w_sel1 = (0x7800U == (0x00007fffU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                              >> 0x0000000dU)));
    if (vlSelfRef.__PVT___GEN) {
        vlSelfRef.__PVT__w_id = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid;
    }
    if (vlSelfRef.__PVT__rdata_REG) {
        vlSelfRef.__PVT__rdata_r0 = (0x000000ffU & vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data);
        vlSelfRef.__PVT__rdata_r1 = (0x000000ffU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                      >> 8U));
        vlSelfRef.__PVT__rdata_r2 = (0x000000ffU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                      >> 0x10U));
        vlSelfRef.__PVT__rdata_r3 = (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                     >> 0x18U);
    }
    vlSelfRef.__PVT__rdata_REG = vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_en;
}

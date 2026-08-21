// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_fire = (((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))) 
                               & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready));
    vlSelfRef.__PVT__b_fire = ((IData)(vlSymsp->TOP__top.__PVT__DRAM_bvalid) 
                               & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
    vlSelfRef.__PVT__lsu_final = (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__PVT__r_fire)) 
                                  | ((2U == (IData)(vlSelfRef.state)) 
                                     & (IData)(vlSelfRef.__PVT__b_fire)));
}

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__1(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__val = ((2U & vlSymsp->TOP.lsu_addr)
                             ? ((1U & vlSymsp->TOP.lsu_addr)
                                 ? (((- (IData)((vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                                 >> 0x0000001fU))) 
                                     << 0x00000018U) 
                                    | (vlSelfRef.__PVT__val2 
                                       >> 8U)) : vlSelfRef.__PVT__val2)
                             : ((1U & vlSymsp->TOP.lsu_addr)
                                 ? vlSelfRef.__PVT__val1
                                 : vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata));
}

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__2(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hac146698_0_1 = ((0U 
                                                 == (IData)(vlSelfRef.state)) 
                                                & (IData)(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN));
}

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__3(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_hd51ce84d__0;
    __VdfgExtracted_hd51ce84d__0 = 0;
    // Body
    __VdfgExtracted_hd51ce84d__0 = (((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                     & (IData)(vlSymsp->TOP__top.__PVT__DRAM_awready)) 
                                    & (IData)(vlSymsp->TOP__top.__PVT__DRAM_wready));
    vlSelfRef.__PVT__ar_fire = ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                                & (IData)(vlSymsp->TOP__top.__PVT__DRAM_arready));
    vlSelfRef.__PVT__next_state = vlSelfRef.state;
    if ((4U & (IData)(vlSelfRef.state))) {
        if ((2U & (IData)(vlSelfRef.state))) {
            vlSelfRef.__PVT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.state))) {
            vlSelfRef.__PVT__next_state = 0U;
        } else if (vlSelfRef.__PVT__r_fire) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.state))) {
        if ((1U & (IData)(vlSelfRef.state))) {
            if (vlSelfRef.__PVT__ar_fire) {
                vlSelfRef.__PVT__next_state = 4U;
            }
        } else if (vlSelfRef.__PVT__b_fire) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.state))) {
        if (__VdfgExtracted_hd51ce84d__0) {
            vlSelfRef.__PVT__next_state = 2U;
        }
    } else if (vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN) {
        vlSelfRef.__PVT__next_state = ((IData)(vlSymsp->TOP.LSU_WEN)
                                        ? ((IData)(__VdfgExtracted_hd51ce84d__0)
                                            ? 2U : 1U)
                                        : ((IData)(vlSelfRef.__PVT__ar_fire)
                                            ? 4U : 3U));
    }
}

void Vtop_LSU___nba_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state = ((IData)(vlSymsp->TOP.rst) ? 0U
                        : (IData)(vlSelfRef.__PVT__next_state));
}

void Vtop_LSU___nba_sequent__TOP__top__LSU_0__1(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_sequent__TOP__top__LSU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
}

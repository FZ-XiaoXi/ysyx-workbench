// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bready = ((2U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__rready = ((4U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__b_fire = (((2U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock))) 
                               & (IData)(vlSelfRef.__PVT__bready));
    vlSelfRef.__PVT__r_fire = ((IData)(vlSelfRef.__PVT__rvalid) 
                               & (IData)(vlSelfRef.__PVT__rready));
    vlSelfRef.__PVT__lsu_final = (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__PVT__r_fire)) 
                                  | ((2U == (IData)(vlSelfRef.state)) 
                                     & (IData)(vlSelfRef.__PVT__b_fire)));
}

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__1(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hac146698_0_1;
    __VdfgRegularize_hac146698_0_1 = 0;
    // Body
    vlSelfRef.__PVT__val = ((2U & vlSymsp->TOP.lsu_addr)
                             ? ((1U & vlSymsp->TOP.lsu_addr)
                                 ? (((- (IData)((vlSelfRef.__PVT__rdata 
                                                 >> 0x0000001fU))) 
                                     << 0x00000018U) 
                                    | (vlSelfRef.__PVT__val2 
                                       >> 8U)) : vlSelfRef.__PVT__val2)
                             : ((1U & vlSymsp->TOP.lsu_addr)
                                 ? vlSelfRef.__PVT__val1
                                 : vlSelfRef.__PVT__rdata));
    __VdfgRegularize_hac146698_0_1 = ((0U == (IData)(vlSelfRef.state)) 
                                      & (IData)(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN));
    vlSelfRef.__PVT__arvalid = (((~ (IData)(vlSymsp->TOP.LSU_WEN)) 
                                 & (IData)(__VdfgRegularize_hac146698_0_1)) 
                                | (3U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__awvalid = (((IData)(__VdfgRegularize_hac146698_0_1) 
                                 & (IData)(vlSymsp->TOP.LSU_WEN)) 
                                | (1U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__aw_fire = ((IData)(vlSelfRef.__PVT__awvalid) 
                                & (0U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)));
}

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__2(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
            if (vlSymsp->TOP__top.__PVT__DRAM__DOT__read_delay_inst__DOT__start) {
                vlSelfRef.__PVT__next_state = 4U;
            }
        } else if (vlSelfRef.__PVT__b_fire) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.state))) {
        if (vlSelfRef.__PVT__aw_fire) {
            vlSelfRef.__PVT__next_state = 2U;
        }
    } else if (vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN) {
        vlSelfRef.__PVT__next_state = ((IData)(vlSymsp->TOP.LSU_WEN)
                                        ? ((IData)(vlSelfRef.__PVT__aw_fire)
                                            ? 2U : 1U)
                                        : ((IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__read_delay_inst__DOT__start)
                                            ? 4U : 3U));
    }
}

void Vtop_LSU___nba_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rdata = ((2U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__r_state))
                               ? vlSymsp->TOP__top.__PVT__DRAM__DOT__rdata_hold
                               : vlSymsp->TOP__top.__PVT__DRAM__DOT__current_mem_rdata);
    vlSelfRef.state = ((IData)(vlSymsp->TOP.rst) ? 0U
                        : (IData)(vlSelfRef.__PVT__next_state));
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
    vlSelfRef.__PVT__bready = ((2U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__rready = ((4U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
}

void Vtop_LSU___nba_sequent__TOP__top__LSU_0__1(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_sequent__TOP__top__LSU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__val = ((2U & vlSymsp->TOP.lsu_addr)
                             ? ((1U & vlSymsp->TOP.lsu_addr)
                                 ? (((- (IData)((vlSelfRef.__PVT__rdata 
                                                 >> 0x0000001fU))) 
                                     << 0x00000018U) 
                                    | (vlSelfRef.__PVT__val2 
                                       >> 8U)) : vlSelfRef.__PVT__val2)
                             : ((1U & vlSymsp->TOP.lsu_addr)
                                 ? vlSelfRef.__PVT__val1
                                 : vlSelfRef.__PVT__rdata));
}

void Vtop_LSU___nba_comb__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_comb__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__b_fire = (((2U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock))) 
                               & (IData)(vlSelfRef.__PVT__bready));
    vlSelfRef.__PVT__rvalid = ((2U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__r_state)) 
                               | ((1U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__r_state)) 
                                  & (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__r_fire = ((IData)(vlSelfRef.__PVT__rvalid) 
                               & (IData)(vlSelfRef.__PVT__rready));
    vlSelfRef.__PVT__lsu_final = (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__PVT__r_fire)) 
                                  | ((2U == (IData)(vlSelfRef.state)) 
                                     & (IData)(vlSelfRef.__PVT__b_fire)));
}

void Vtop_LSU___nba_comb__TOP__top__LSU_0__1(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_comb__TOP__top__LSU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hac146698_0_1;
    __VdfgRegularize_hac146698_0_1 = 0;
    // Body
    __VdfgRegularize_hac146698_0_1 = ((0U == (IData)(vlSelfRef.state)) 
                                      & (IData)(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN));
    vlSelfRef.__PVT__arvalid = (((~ (IData)(vlSymsp->TOP.LSU_WEN)) 
                                 & (IData)(__VdfgRegularize_hac146698_0_1)) 
                                | (3U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__awvalid = (((IData)(__VdfgRegularize_hac146698_0_1) 
                                 & (IData)(vlSymsp->TOP.LSU_WEN)) 
                                | (1U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__aw_fire = ((IData)(vlSelfRef.__PVT__awvalid) 
                                & (0U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)));
}

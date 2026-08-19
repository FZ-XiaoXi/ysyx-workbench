// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifu_out_bus_fetching = vlSelfRef.PC;
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pre_branch = (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__r_tar 
                                     < vlSelfRef.PC) 
                                    | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_type
                                    [(7U & (vlSelfRef.PC 
                                            >> 2U))]) 
                                   & ((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_tag
                                       [(7U & (vlSelfRef.PC 
                                               >> 2U))] 
                                       == (vlSelfRef.PC 
                                           >> 5U)) 
                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_valid
                                      [(7U & (vlSelfRef.PC 
                                              >> 2U))]));
    vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                        ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                             ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 3U))
                                  : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                             ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                             : 0U) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((
                                                   ((0x0000ff00U 
                                                     & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                          >> 0x00000018U)
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r3)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                           >> 0x00000010U)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r2)))) 
                                                   << 0x00000010U) 
                                                  | ((0x0000ff00U 
                                                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                           >> 8U)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                            ? vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r0)))))
                                               : 0U)))
                             : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                       ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                                      [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                       : 0U)) : 0U);
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifu_out_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid)) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_in_ready)));
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__3(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.debug_IFU_is_hit = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_reqValid) 
                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_valid
                                     [(3U & (vlSelfRef.PC 
                                             >> 4U))] 
                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_tag
                                        [(3U & (vlSelfRef.PC 
                                                >> 4U))] 
                                        == (vlSelfRef.PC 
                                            >> 6U))));
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__4(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifu_out_bus_pc = (((IData)(vlSelfRef.__PVT__in_reqValid) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid) 
                                    | (((0U != (3U 
                                                & vlSelfRef.PC))
                                         ? 0x10U : 0U) 
                                       >> 4U))) ? vlSelfRef.PC
                                 : vlSelfRef.__PVT__ifu_out_bus_pc_r);
    vlSelfRef.__VdfgRegularize_hb9205a68_0_0 = ((IData)(vlSelfRef.__PVT__in_reqValid) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid));
    vlSelfRef.ifu_out_valid = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hb9205a68_0_0) 
                                     | ((IData)(vlSelfRef.__PVT__ifu_out_valid_r) 
                                        | (((0U != 
                                             (3U & vlSelfRef.PC))
                                             ? 0x10U
                                             : 0U) 
                                           >> 4U))));
    vlSelfRef.debug_IFU_get_inst = ((IData)(vlSelfRef.ifu_out_ready) 
                                    & (IData)(vlSelfRef.ifu_out_valid));
    vlSelfRef.debug_IFU_is_hit_inst = ((IData)(vlSelfRef.debug_IFU_get_inst) 
                                       & (IData)(vlSelfRef.debug_IFU_is_hit));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__ifu_out_valid_r = 0U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) {
        vlSelfRef.__PVT__ifu_out_valid_r = 0U;
    } else if ((((IData)(vlSelfRef.__PVT__in_reqValid) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid)) 
                & (~ (IData)(vlSelfRef.ifu_out_ready)))) {
        vlSelfRef.__PVT__ifu_out_valid_r = 1U;
    } else if (((IData)(vlSelfRef.ifu_out_valid) & (IData)(vlSelfRef.ifu_out_ready))) {
        vlSelfRef.__PVT__ifu_out_valid_r = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)))) {
            if ((((IData)(vlSelfRef.__PVT__in_reqValid) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid)) 
                 & (~ (IData)(vlSelfRef.ifu_out_ready)))) {
                vlSelfRef.__PVT__ifu_out_bus_pc_r = vlSelfRef.PC;
            }
        }
    }
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.PC = 0x30000000U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) {
        vlSelfRef.PC = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)
                         ? (0xfffffffeU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__dnpc)
                         : (0xfffffffeU & ((IData)(4U) 
                                           + vlSelfRef.ifu_out_bus_pc)));
    } else if (((IData)(vlSelfRef.ifu_out_ready) & (IData)(vlSelfRef.ifu_out_valid))) {
        vlSelfRef.PC = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)
                         ? (0xfffffffeU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__dnpc)
                         : ((IData)(vlSelfRef.__PVT__pre_branch)
                             ? (0xfffffffeU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__r_tar)
                             : (0xfffffffeU & ((IData)(4U) 
                                               + vlSelfRef.ifu_out_bus_pc))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)))) {
            if ((((IData)(vlSelfRef.__PVT__in_reqValid) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid)) 
                 & (~ (IData)(vlSelfRef.ifu_out_ready)))) {
                vlSelfRef.__PVT__ifu_out_bus_instruction_r 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_rdata;
            }
        }
    }
    vlSelfRef.ifu_out_bus_fetching = vlSelfRef.PC;
    vlSelfRef.__PVT__in_reqValid = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset))) 
                                    && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) 
                                        || ((1U & (~ (IData)(vlSelfRef.ifu_out_valid))) 
                                            || (IData)(vlSelfRef.ifu_out_ready))));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pre_branch = (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__r_tar 
                                     < vlSelfRef.PC) 
                                    | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_type
                                    [(7U & (vlSelfRef.PC 
                                            >> 2U))]) 
                                   & ((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_tag
                                       [(7U & (vlSelfRef.PC 
                                               >> 2U))] 
                                       == (vlSelfRef.PC 
                                           >> 5U)) 
                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_valid
                                      [(7U & (vlSelfRef.PC 
                                              >> 2U))]));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                        ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                             ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 3U))
                                  : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                             ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                             : 0U) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((
                                                   ((0x0000ff00U 
                                                     & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                          >> 0x00000018U)
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r3)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                           >> 0x00000010U)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r2)))) 
                                                   << 0x00000010U) 
                                                  | ((0x0000ff00U 
                                                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                           >> 8U)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                            ? vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r0)))))
                                               : 0U)))
                             : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                       ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                                      [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                       : 0U)) : 0U);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_master_awid = 0U;
    vlSelfRef.__PVT__io_master_awlen = 0U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
    vlSelfRef.PC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC;
    vlSelfRef.__PVT__COMP_0__DOT__inA = ((0U == (0x0000001fU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                    >> 0x0000000fU)))
                                          ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR
                                         [(0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 0x0000000fU))]);
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid)
            : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state)) 
                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_full) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_2)))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp 
        = (3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                   ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                              >> 1U)) : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid 
        = (0x0000000fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                            ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x00000023U))
                            : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rid_r)
                                       : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_id)
                                                 : 0U))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                        >> 3U)) : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                           : 0U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((((0x0000ff00U 
                                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                      >> 0x00000018U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                       >> 0x00000010U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                               << 0x00000010U) 
                                              | ((0x0000ff00U 
                                                  & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                       >> 8U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                        ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))
                                           : 0U)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid 
        = (0x0000000fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_0)
                            ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                               >> 2U) : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_id)
                                                : 0U)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((~ (IData)(vlSelfRef.reset)) & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        } else {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid = 0U;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp = 0U;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
        }
    } else {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid = 0U;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp = 0U;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
    }
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast 
        = (((8U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
             ? ((4U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                 ? ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                     ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                     : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                 : ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                     ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                     : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
             : ((4U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                 ? ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                     ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                     : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                 : ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                     ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                     : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
           | ((8U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
               ? ((4U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                   ? ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                       ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                       : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                   : ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                       ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                       : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
               : ((4U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                   ? ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                       ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                       : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                   : ((2U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                       ? ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                       : ((1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (~ (IData)(vlSelfRef.reset))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
            ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp)
                : 0U) : 0U);
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_he0d61652_0_0;
    __VdfgRegularize_he0d61652_0_0 = 0;
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize 
        = ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
            ? 0U : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                     ? 1U : 2U));
    __VdfgRegularize_he0d61652_0_0 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isSTORE) 
                                               | (0x6fU 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))))));
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm
                                          : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awsize 
        = ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask))
            ? 0U : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask))
                     ? 1U : 2U));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    if (__VdfgRegularize_he0d61652_0_0) {
        vlSelfRef.__PVT__EXU_0__DOT__inA = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isPC)
                                             ? vlSelfRef.PC
                                             : vlSelfRef.__PVT__COMP_0__DOT__inA);
        vlSelfRef.__PVT__EXU_0__DOT__inB = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm;
    } else {
        vlSelfRef.__PVT__EXU_0__DOT__inA = vlSelfRef.__PVT__COMP_0__DOT__inA;
        vlSelfRef.__PVT__EXU_0__DOT__inB = ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))
                                             ? vlSelfRef.__PVT__COMP_0__DOT__inA
                                             : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata);
    }
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSelfRef.__PVT__COMP_0__DOT__inA 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid)));
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)
                                     ? (~ (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__inB)))
                                     : (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__inB))));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wdata 
        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata, 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr), 3U));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wstrb 
        = (0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask) 
                          << (3U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr)));
    vlSelfRef.dnpc = (((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__lsu_access_fault))
                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC
                       : ((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)
                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC
                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wbu_final = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__gpr_WEN)
                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid)
                            : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgExtracted_h790550e9__0)
                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_final) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid))
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid)));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___ctor_var_reset(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__io_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 408515240381666009ull);
    vlSelf->__PVT__io_master_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918341228068111945ull);
    vlSelf->__PVT__io_master_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254038570903178483ull);
    vlSelf->__PVT__io_master_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5100000641368617149ull);
    vlSelf->__PVT__io_master_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12987614511039531521ull);
    vlSelf->__PVT__io_master_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9580548919814266776ull);
    vlSelf->__PVT__io_master_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13854187349888989176ull);
    vlSelf->__PVT__io_master_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16970178477346425689ull);
    vlSelf->__PVT__io_master_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619170216674498609ull);
    vlSelf->__PVT__io_master_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901748201038864800ull);
    vlSelf->__PVT__io_master_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4508192480944508561ull);
    vlSelf->__PVT__io_master_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4103275223239596405ull);
    vlSelf->__PVT__io_master_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3571525934430669283ull);
    vlSelf->__PVT__io_master_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5636029676147399511ull);
    vlSelf->__PVT__io_master_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479403608764655851ull);
    vlSelf->__PVT__io_master_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 252024972192926592ull);
    vlSelf->__PVT__io_master_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1062445100397978765ull);
    vlSelf->__PVT__io_master_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 189821581177370283ull);
    vlSelf->__PVT__io_master_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17696505626772089272ull);
    vlSelf->__PVT__io_master_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7705699152724094327ull);
    vlSelf->__PVT__io_master_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7405609512209415492ull);
    vlSelf->__PVT__io_master_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12197991585860830104ull);
    vlSelf->__PVT__io_master_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2926577748560128850ull);
    vlSelf->__PVT__io_master_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5406036630392025300ull);
    vlSelf->__PVT__io_master_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14835472978164275174ull);
    vlSelf->__PVT__io_master_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643816389357758479ull);
    vlSelf->__PVT__io_master_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17575739218363420612ull);
    vlSelf->__PVT__io_master_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13565575050082382344ull);
    vlSelf->__PVT__io_master_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18248460336661176801ull);
    vlSelf->__PVT__io_master_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10731670764913458081ull);
    vlSelf->__PVT__io_slave_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15386364766571949112ull);
    vlSelf->__PVT__io_slave_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334601523648441864ull);
    vlSelf->__PVT__io_slave_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2745451994456866424ull);
    vlSelf->__PVT__io_slave_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12914048876469032452ull);
    vlSelf->__PVT__io_slave_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8315638325092922864ull);
    vlSelf->__PVT__io_slave_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16399205572355175556ull);
    vlSelf->__PVT__io_slave_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5360184287951858800ull);
    vlSelf->__PVT__io_slave_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1820984914711112230ull);
    vlSelf->__PVT__io_slave_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13353078287730269036ull);
    vlSelf->__PVT__io_slave_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13100422519405067609ull);
    vlSelf->__PVT__io_slave_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1200568031881101223ull);
    vlSelf->__PVT__io_slave_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11119378898008568253ull);
    vlSelf->__PVT__io_slave_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991839402217458983ull);
    vlSelf->__PVT__io_slave_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9882747069049294001ull);
    vlSelf->__PVT__io_slave_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12095680284664615464ull);
    vlSelf->__PVT__io_slave_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14865370267791099114ull);
    vlSelf->__PVT__io_slave_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14323104873743723684ull);
    vlSelf->__PVT__io_slave_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9295917410590269615ull);
    vlSelf->__PVT__io_slave_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8494381812203753726ull);
    vlSelf->__PVT__io_slave_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4271623300114428176ull);
    vlSelf->__PVT__io_slave_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15287740914422975644ull);
    vlSelf->__PVT__io_slave_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4321564869539443489ull);
    vlSelf->__PVT__io_slave_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13405440217435810056ull);
    vlSelf->__PVT__io_slave_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430075741762723373ull);
    vlSelf->__PVT__io_slave_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14468517393453990678ull);
    vlSelf->__PVT__io_slave_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2774376520687953150ull);
    vlSelf->__PVT__io_slave_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17943950254526375416ull);
    vlSelf->__PVT__io_slave_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13724252849132544087ull);
    vlSelf->__PVT__io_slave_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13355305980320080930ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
    vlSelf->wbu_final = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17405858545225522430ull);
    vlSelf->__PVT__command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13453452394900071627ull);
    vlSelf->__PVT__DRAM_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10847697789670926749ull);
    vlSelf->__PVT__EXU_0__DOT__inA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6293498079008824113ull);
    vlSelf->__PVT__EXU_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9944816838834705550ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__inB = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 394028622014140529ull);
    vlSelf->__PVT__COMP_0__DOT__inA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1768097076787753453ull);
    vlSelf->__PVT__COMP_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10216836910058307467ull);
    vlSelf->__PVT__COMP_0__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917469842835743340ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17382313962911481618ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12375025885305802629ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5130921268929918409ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 70858733205919886ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15155467451873600966ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7766129219356534443ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8372100413251766363ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8274023529088780226ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2042498477824767762ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7078843289582663211ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9631090779707898095ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18218725034031235378ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15509107645033005342ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6252876650602622408ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11780939765060283056ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13008089194761548441ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6114003727351255239ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18119107141920553825ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2910025280704104989ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341170536629540755ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067147664974863826ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7696361206244790670ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 908287147003379626ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4823501578651874595ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7933074762801967304ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12550448643891412737ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5689625827797009683ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7369852676473428527ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4038583223633389820ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7942929687740848222ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2961178094157107030ull);
}

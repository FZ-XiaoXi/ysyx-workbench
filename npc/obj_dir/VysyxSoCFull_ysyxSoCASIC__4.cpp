// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__axi4xbar__DOT___arFIFOMap_15_T_1;
    __PVT__axi4xbar__DOT___arFIFOMap_15_T_1 = 0;
    CData/*0:0*/ __PVT__axi4xbar__DOT___awFIFOMap_15_T_1;
    __PVT__axi4xbar__DOT___awFIFOMap_15_T_1 = 0;
    // Body
    __PVT__axi4xbar__DOT___arFIFOMap_15_T_1 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
    __PVT__axi4xbar__DOT___awFIFOMap_15_T_1 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_awready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
           & (IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_2_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_3_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_4_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_5_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_6_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_7_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_8_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_9_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_10_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_11_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_12_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_13_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_14_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_15_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000fU));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
           & (IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_1_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_2_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_3_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_4_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_5_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_6_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_7_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_8_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_9_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_10_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_11_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_12_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_13_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_14_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
              >> 0x0000000fU));
}

extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h45f54a83_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelfRef.__PVT__axi42apb__DOT__is_write_r));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U)) : vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r);
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
                               ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data)
                               : (IData)(vlSelfRef.__PVT__axi42apb__DOT__wstrb_reg_r)))
            : 0U);
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0x000000ffU & ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                           ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                              >> 8U) : (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                        >> 0x00000018U)));
    __Vtableidx10 = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = VysyxSoCFull__ConstPool__TABLE_h45f54a83_0
        [__Vtableidx10];
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0x000000ffU & ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                           ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i
                           : ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                >> 1U) & (1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                               ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                  >> 8U) : ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                              >> 2U) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                             ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                >> 0x00000010U)
                                             : ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                                  >> 3U) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                 ? 
                                                (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                 >> 0x00000018U)
                                                 : 
                                                ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                  ? 
                                                 (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                  >> 0x00000010U)
                                                  : vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i))))));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_ready) 
                                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_valid))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_e_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8 
        = (((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
            & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_bits_sink))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_e_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en 
        = ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
                       & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready) 
                                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr 
        = (0x0007ffffU & (((IData)(0x00000280U) * (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr)) 
                          + (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0x000000ffU & ((IData)(7U) 
                                             + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
            ? 3U : ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                     ? 8U : (0x0000000fU & ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0x00000014U)
                                             : ((3U 
                                                 == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x00000010U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 0x0000000cU)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                      >> 4U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                       : 
                                                      ((0x0aU 
                                                        == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                        >> 4U)
                                                        : 
                                                       ((0x0bU 
                                                         == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                         : 
                                                        ((0x0cU 
                                                          == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                          >> 0x00000014U)
                                                          : 
                                                         ((0x0dU 
                                                           == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                           >> 0x00000010U)
                                                           : 
                                                          ((0x0eU 
                                                            == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                            >> 0x0000001cU)
                                                            : 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                            >> 0x00000018U)))))))))))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_8 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_bits_sink)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                              + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8)))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vga_data 
        = (((0x01e0U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr)) 
            & (0x0280U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr)))
            ? ((0x0004afffU >= vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr)
                ? vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram
               [vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr]
                : 0U) : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hcfb222df_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__9(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss = 
        (0x000000ffU & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                           & ((- (IData)(((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                          & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                             >> 0x0000000dU)))) 
                              | (- (IData)((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                   >> 0x0000000dU)))))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                            = (0x0000000fU & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i)));
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 1U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            } else {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r)) 
                          << 0x0000000aU));
                if ((9U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                 >> 0x0000000bU));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (7U & 0U);
                } else {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x000001ffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                          >> 2U));
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                 >> 0x0000000bU));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (7U & 0U);
            } else {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x000001ffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 2U));
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                             >> 0x0000000bU));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000eU));
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                             >> 0x0000000bU));
            } else {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        } else if ((0x00000032U != vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            if ((0x00000028U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x00000400U | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            } else {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q 
                    = (((0x00000014U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                        | (0x0000001eU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))
                        ? 1U : ((0x0000000aU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                 ? 0U : 7U));
                if ((1U & (~ ((0x00000014U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                              | (0x0000001eU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = ((0x0000000aU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                            ? 0x0020U : 0U);
                }
            }
            if ((0x00000028U != vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                if ((1U & (~ ((0x00000014U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                              | (0x0000001eU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                    if ((0x0000000aU != vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    }
                }
            }
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q 
            = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r))
                ? 1U : (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r));
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx) 
              != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx) 
              != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    __Vtableidx5 = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][0U];
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][1U];
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][2U];
}

extern const VlUnpacked<CData/*4:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_h1e47b2d2_0;

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass)) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__in_reset)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid)));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink = 0U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param 
            = (3U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_sink;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) 
            != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass)) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_counter)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_valid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_allow));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__winner_1 
        = ((2U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__beatsLeft))) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_valid 
            = ((2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
               | (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_valid));
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__winner_1;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_valid 
            = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_0) 
                & (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state))) 
               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_1) 
                  & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_valid)));
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_1;
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_param 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1) 
            & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_isSupported))
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param)
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_0)
             ? ((((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                          | ((vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
                              >> 1U) & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                         << 1U)) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                                    | (2U == (3U & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)))) 
                 << 2U) | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                             | (1U == (3U & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))) 
                            << 1U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                                      | (0U == (3U 
                                                & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)))))
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_mask)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_in_a_bits_data 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_0)
             ? ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? ((((((((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                  >> ((2U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                         >> 0x0000001fU))) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x0000001dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 0x0000001eU)))))) 
                         << 6U) | (((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                    >> 0x0000001cU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                      >> 0x0000001dU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                             >> ((2U 
                                                  & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 0x0000001bU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 0x0000001cU)))))) 
                                   << 4U)) | ((((2U 
                                                 & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x0000001aU)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x0000001bU)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0x00000019U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x0000001aU)))))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0x00000018U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x00000019U)))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x00000017U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x00000018U)))))))) 
                      << 0x00000018U) | ((((((2U & 
                                              (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 0x00000016U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 0x00000017U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                        >> 0x00000015U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x00000016U)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                         >> 0x00000014U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0x00000015U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x00000013U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x00000014U)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                         >> 0x00000012U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0x00000013U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x00000011U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x00000012U)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x00000010U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x00000011U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0x0000000fU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x00000010U)))))))) 
                                         << 0x00000010U)) 
                    | (((((((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                    >> ((2U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                               >> 0x0000000eU)) 
                                        | (1U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                 >> 0x0000000fU)))) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x0000000dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 0x0000000eU)))))) 
                           << 6U) | (((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                        >> 0x0000000dU)))) 
                                             << 1U)) 
                                      | (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 0x0000000cU)))))) 
                                     << 4U)) | ((((2U 
                                                   & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x0000000aU)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x0000000bU)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 9U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x0000000aU)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 8U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 9U)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                         >> 
                                                         ((2U 
                                                           & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 7U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 8U)))))))) 
                        << 8U) | (((((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                             >> ((2U 
                                                  & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 7U)))) 
                                            << 1U)) 
                                     | (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                        >> 6U)))))) 
                                    << 6U) | (((2U 
                                                & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 5U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 4U)))))) 
                                              << 4U)) 
                                  | ((((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 3U)))) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 2U)))))) 
                                      << 2U) | ((2U 
                                                 & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 1U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           << 1U)) 
                                                       | (1U 
                                                          & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data)))))))))
                 : ((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT___adder_out_T
                     : (((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                     >> 0x0000001fU) 
                                    == (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_d_ext 
                                        >> 0x0000001fU))
                                    ? (~ (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT___adder_out_T 
                                          >> 0x0000001fU))
                                    : ((1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                           >> 0x0000001fU)))))
                         ? vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data)))
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1)
                       ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_0)
             ? vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1)
                       ? vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_source)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_1)
            ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode)
                : 4U) : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_a_valid 
        = ((~ (vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
               >> 0x0000001fU)) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_valid) 
           & (vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
              >> 0x0000001fU));
    __Vtableidx8 = (0x000003ffU & ((IData)(5U) * (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source)));
    vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id 
        = VysyxSoCFull__ConstPool__TABLE_h1e47b2d2_0
        [__Vtableidx8];
    if (vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 8U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
            = (0x0000007fU & (IData)((vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 1U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid 
            = (0x0000001fU & (IData)((vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 0x00000039U)));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size));
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
            = (0x0000007fU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source));
        vlSelfRef.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid 
            = (0x0000001fU & (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id));
    }
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_beats1 
        = ((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode))
            ? 0U : (7U & (~ (7U & (((IData)(0x001fU) 
                                    << (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                   >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_4 
        = (((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_4)) 
            & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_4) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_4)));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_2 
        = (((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_2)) 
            & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_2) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_2)));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_0 
        = (((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count)) 
            & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count)));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_beats1)));
    __Vtemp_1[1U] = (IData)((((QData)((IData)((((- (IData)(
                                                           (((0U 
                                                              != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6)) 
                                                             & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_6) 
                                                                != 
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                     >> 2U))))) 
                                                            | (0x10U 
                                                               == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6))))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (- (IData)(
                                                               (((0U 
                                                                  != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5)) 
                                                                 & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_5) 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                         >> 2U))))) 
                                                                | (0x10U 
                                                                   == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5))))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (((- (IData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_4))) 
                                                                  << 0x00000010U) 
                                                                 | (0x0000ffffU 
                                                                    & (- (IData)(
                                                                                (((0U 
                                                                                != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)) 
                                                                                & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                                | (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)))))))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)((((- (IData)(
                                                            (((0U 
                                                               != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6)) 
                                                              & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_6) 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                      >> 2U))))) 
                                                             | (0x10U 
                                                                == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6))))) 
                                                 << 0x00000010U) 
                                                | (0x0000ffffU 
                                                   & (- (IData)(
                                                                (((0U 
                                                                   != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5)) 
                                                                  & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_5) 
                                                                     != 
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                          >> 2U))))) 
                                                                 | (0x10U 
                                                                    == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5))))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((- (IData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_4))) 
                                                                   << 0x00000010U) 
                                                                  | (0x0000ffffU 
                                                                     & (- (IData)(
                                                                                (((0U 
                                                                                != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)) 
                                                                                & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                                | (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)))))))))) 
                             >> 0x00000020U));
    __Vtemp_2[0U] = (((- (IData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_0))) 
                      << 0x00000010U) | (((((((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_22) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_21) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_20) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_19))) 
                                           << 0x0000000cU) 
                                          | (((((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_18) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_17) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_16) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_15))) 
                                             << 8U)) 
                                         | ((((((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_14) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_13) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_12) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_11))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_10) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_9) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_8) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_7))))));
    __Vtemp_2[1U] = (((- (IData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_2))) 
                      << 0x00000010U) | (0x0000ffffU 
                                         & (- (IData)(
                                                      (((0U 
                                                         != (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1)) 
                                                        & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__write_1) 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                >> 2U))))) 
                                                       | (0x10U 
                                                          == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1)))))));
    __Vtemp_2[2U] = __Vtemp_1[1U];
    __Vtemp_2[3U] = __Vtemp_1[2U];
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__stall 
        = ((__Vtemp_2[((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source) 
                       >> 5U)] >> (0x0000001fU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source))) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_counter)));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.chipMaster__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__stall)) 
                 & ((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode))
                     ? (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full))
                     : ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)) 
                        & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT___out_wvalid_T_3)))));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
              & ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                     >> 2U)) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT___out_wvalid_T_3))));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
           & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
               >> 2U) | ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__doneAW)) 
                         & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)))));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_ready 
        = (1U & (((vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
                   >> 0x0000001fU) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_ready)) 
                 | ((~ (vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
                        >> 0x0000001fU)) & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full)))));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__beatsLeft))
               ? (2U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
               : (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_1)));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__inc 
        = (((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_1 
        = ((((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 1U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_2 
        = ((((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 2U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_3 
        = ((((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 3U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_4 
        = ((((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 4U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_5 
        = ((((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 5U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_6 
        = ((((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 6U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_allow));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_ready));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready)));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall)) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready))));
    vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit) 
              & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_valid))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready) 
                                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_valid))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en 
        = ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
              & (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
           & ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
           & ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
           & ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
           & ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 4U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
           & ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 5U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
           & ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 6U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
           & ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 7U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    __Vtemp_3[1U] = (IData)((((QData)((IData)((((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                  & ((7U 
                                                      & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                     == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                  ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                  : 
                                                 vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                 [(7U 
                                                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                << 0x00000010U) 
                                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                   & ((7U 
                                                       & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                      == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                   ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                   : 
                                                  vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                                    & ((7U 
                                                                        & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                       == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                                    ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                    : 
                                                                   vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                                   [
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                                  << 0x00000010U) 
                                                                 | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                                     & ((7U 
                                                                         & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                        == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                                     ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                     : 
                                                                    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                                    [
                                                                    (7U 
                                                                     & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))));
    __Vtemp_3[2U] = (IData)(((((QData)((IData)((((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                   & ((7U 
                                                       & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                      == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                   ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                   : 
                                                  vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                 << 0x00000010U) 
                                                | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                    & ((7U 
                                                        & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                       == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                    ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                    : 
                                                   vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                                     & ((7U 
                                                                         & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                        == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                                     ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                     : 
                                                                    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                                    [
                                                                    (7U 
                                                                     & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                                   << 0x00000010U) 
                                                                  | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                                      & ((7U 
                                                                          & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                         == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                                      ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                      : 
                                                                     vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                                     [
                                                                     (7U 
                                                                      & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))) 
                             >> 0x00000020U));
    __Vtemp_4[0U] = (((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                        & ((7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                        ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                        : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                      << 0x00000010U) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                          & ((7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                             == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                          ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                          : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                         [(7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_4[1U] = (((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                        & ((7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                        ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                        : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                      << 0x00000010U) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                          & ((7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                             == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                          ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                          : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                         [(7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_4[2U] = __Vtemp_3[1U];
    __Vtemp_4[3U] = __Vtemp_3[2U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header 
        = (3U | ((((6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                    ? (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en) 
                        & ((7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                        ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_data)
                        : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])
                    : (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                >> 3U)), 4U)))
                         ? 0U : (__Vtemp_4[(((IData)(0x0000000fU) 
                                             + (0x0000007fU 
                                                & VL_SHIFTL_III(7,7,32, 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                    >> 3U)), 4U))) 
                                            >> 5U)] 
                                 << ((IData)(0x00000020U) 
                                     - (0x0000001fU 
                                        & VL_SHIFTL_III(7,7,32, 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                            >> 3U)), 4U))))) 
                       | (__Vtemp_4[(3U & (VL_SHIFTL_III(7,7,32, 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                             >> 3U)), 4U) 
                                           >> 5U))] 
                          >> (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                              >> 3U)), 4U))))) 
                  << 0x00000010U) | ((0x0000e000U & 
                                      ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                       << 0x0000000aU)) 
                                     | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size) 
                                          << 9U) | 
                                         (((4U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                    ? (IData)(
                                                              (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                               >> 0x00000021U))
                                                    : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_denied)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                ? (IData)(
                                                          (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                           >> 0x0000002cU))
                                                : (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_param)))) 
                                          << 6U)) | 
                                        ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode) 
                                         << 3U)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T));
    __Vtemp_6[0U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header;
    __Vtemp_6[1U] = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                     & (IData)((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                >> 0x00000022U)));
    __Vtemp_6[2U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                             >> 1U))
                                                                  : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data)))));
    __Vtemp_6[3U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                   ? (IData)(
                                                                             (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                              >> 1U))
                                                                   : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data)))) 
                             >> 0x00000020U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
             ? 0U : (__Vtemp_6[(((IData)(0x0000001fU) 
                                 + (0x0000007fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                >> 5U)] << ((IData)(0x00000020U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
           | (__Vtemp_6[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                               >> 5U))] >> (0x0000001fU 
                                            & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__10(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__10\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0 
        = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0;
    vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__11(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__11\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0;
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)
            ? ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__araddr_reg_r));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr 
        = (0x0007ffffU & (((IData)(0x00000280U) * (0x000003ffU 
                                                   & VL_DIV_III(32, 
                                                                VL_MODDIV_III(32, 
                                                                              VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))) 
                          + (0x000003ffU & VL_MODDIV_III(32, 
                                                         VL_MODDIV_III(32, 
                                                                       VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_4 = (0U == (
                                                   (((4U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001dU)) 
                                                     | ((2U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000001cU))))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x00000010U)) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (1U 
                                                            ^ 
                                                            (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000cU))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_5 = (0U == (
                                                   (4U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001dU)) 
                                                   | (3U 
                                                      & (2U 
                                                         ^ 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000001cU)))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_3 = (0U == (
                                                   (((4U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001dU)) 
                                                     | ((2U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000001cU))))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000000eU)) 
                                                      | (3U 
                                                         & (2U 
                                                            ^ 
                                                            (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000cU))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_6 = (0U == (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001fU)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (2U 
                                                         ^ 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000001cU)))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_1 = (0U == (
                                                   (((4U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001dU)) 
                                                     | ((2U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000001cU))))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000000eU)) 
                                                      | (3U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_2 = (0U == (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001fU)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001cU))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_0 = ((0U == 
                                             ((((4U 
                                                 & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                    >> 0x0000001dU)) 
                                                | ((2U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001cU)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000001cU))))) 
                                               << 3U) 
                                              | ((4U 
                                                  & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                     >> 0x0000000eU)) 
                                                 | (3U 
                                                    & (1U 
                                                       ^ 
                                                       (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                        >> 0x0000000cU)))))) 
                                            | (0U == 
                                               ((4U 
                                                 & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                    >> 0x0000001dU)) 
                                                | (3U 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001cU))))));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state))
            ? ((((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4) 
                 & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel)) 
                & ((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4) 
                       & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
                   & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state))
                               ? ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable)
                                   ? 0U : 1U) : 0U));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    __VdfgRegularize_h6e95ff9d_0_21 = ((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
                                           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
                                       & ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
                                          & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel)));
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0 
        = (((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6) 
                & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
            & ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6) 
               & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel))) 
           | (1U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__state)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state))
            ? (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
                & (IData)(__VdfgRegularize_h6e95ff9d_0_21))
                ? 1U : (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                         & (IData)(__VdfgRegularize_h6e95ff9d_0_21))
                         ? 2U : 0U)) : 0U);
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__is_write 
        = ((IData)(lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i 
        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__is_write)
            ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i)
            : 0U);
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i)) 
           | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i));
}

extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h6c27f87a_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hb60b2f22_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h1d37f4c7_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_he6c51f5f_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h9ba4c414_0;

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0;
    axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.__PVT___lspi_auto_in_pslverr));
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready) 
                                  << 2U)) | (((0x30000000U 
                                               <= (0x3fffffffU 
                                                   & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel) 
                                << 2U) | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)));
    if (VysyxSoCFull__ConstPool__TABLE_h6c27f87a_0[__Vtableidx1]) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state 
            = VysyxSoCFull__ConstPool__TABLE_hb60b2f22_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    __Vtableidx3 = ((((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re) 
                        << 3U) | ((0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))) 
                     << 5U) | ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i)
                                  ? 2U : 1U) << 3U) 
                               | (((8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
        = VysyxSoCFull__ConstPool__TABLE_h1d37f4c7_0
        [__Vtableidx3];
    if ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & ((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                               ? (1U & (0x35U >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                               : 0x0aU));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n))))));
    } else if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                               ? 0x0eU : ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0x0bU : 
                                          ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x00000014U)
                                            : ((3U 
                                                == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x00000010U)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x0000000cU)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U)))))))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    }
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i))) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0x0000000fU & 2U);
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        } else {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0x0000000fU & 0U);
            if (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = 9U;
            } else if (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                            >> 0x0000000bU))))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 8U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 3U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q) 
                              - (IData)(1U)));
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q;
    } else {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0x0000000fU & 0U);
        if (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata 
        = (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)
             ? vlSelfRef.__PVT___lspi_auto_in_prdata
             : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                            ? ((((4U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                  ? ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                      ? ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                      : ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                          : 0U)) : 
                                 ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                   ? ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                       : (0x000000c0U 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                   : ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                       ? ((0x00000080U 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                           ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                              >> 8U)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                       : ((0x00000080U 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                           : vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                          [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                << 0x00000018U) | (
                                                   (0x00ff0000U 
                                                    & (((4U 
                                                         & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                           : 
                                                          (0x000000c0U 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? 
                                                          ((0x00000080U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                            >> 8U)
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                           : 
                                                          ((0x00000080U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                            : 
                                                           vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                           [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                       << 0x00000010U)) 
                                                   | ((0x0000ff00U 
                                                       & (((4U 
                                                            & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? 
                                                           ((2U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                              : 0U))
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                              : 
                                                             (0x000000c0U 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                               >> 8U)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                              : 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                               : 
                                                              vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                              [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & ((4U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((2U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                              : 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                               : 0U))
                                                             : 
                                                            ((2U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                               : 
                                                              (0x000000c0U 
                                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                              : 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                                >> 8U)
                                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                               : 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                                : 
                                                               vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                            : 0U) : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2)
                                             ? (((vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [3U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x00000010U)) 
                                                | ((vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U]))
                                             : 0U) 
                                           | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)
                                                ? vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata
                                                : 0U) 
                                              | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)
                                                    ? 0U
                                                    : 
                                                   (0x000000ffU 
                                                    & vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))]))
                                                   : 0U) 
                                                 | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5)
                                                      ? vlSelfRef.__PVT___lvga_auto_in_prdata
                                                      : 0U) 
                                                    | ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6)
                                                        ? vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q
                                                        : 0U)))))));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready 
        = (1U & (~ (((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                     & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))) 
                        & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)) 
                       | (((~ (((0U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                    ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                    : (0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                               & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))) 
                           & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2)) 
                          | (((~ ((2U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)) 
                                  | (1U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)))) 
                              & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)) 
                             | (((~ ((1U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state)) 
                                     & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable))) 
                                 & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)) 
                                | (((~ (IData)(vlSelfRef.__PVT___lvga_auto_in_pready)) 
                                    & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                      & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6))))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp = 
        ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
          ? ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
             << 1U) : (IData)(vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r));
    if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
          & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
         | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot = 1U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata = 0U;
    } else if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pprot;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot = 1U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata 
        = ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
            ? ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? 0xdeadbeefU : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                  ? 0xdeadbeefU : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                                    ? 0xdeadbeefU
                                                    : 0x00002140U)))
            : ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                    ? 0xdeadbeefU : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                      ? 0x00003140U
                                      : 0x00003040U))
                : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                    ? 1U : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (0x03000000U | (0x00ffffffU 
                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                             : 0xdeadbeefU))));
    if ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata;
    } else if ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata = 0xdeadbeefU;
    }
    if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
          & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
         | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr 
            = (0x0000001fU & (0x3fffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
    } else if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr 
            = (0x0000001fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_psel;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_penable;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr 
            = (0x0000001fU & (0x3fffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out 
        = ((1U & (~ (((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                      & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                     | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))))) 
           && ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))) 
               && (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i 
        = (((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
            | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
           & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready 
        = ((1U & (~ (((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                      & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                     | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))))) 
           && ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))) 
               && (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
            ? (0x16U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
            : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                  ? (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                  : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)));
    vlSelfRef.psram_dio__en = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0x0eU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((0x0dU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (2U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2 
        = ((0x0bU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2)) 
           | (4U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3 
        = ((7U & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3)) 
           | (8U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = 
        (((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready) 
          & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) 
         | (2U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable) 
           & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                     >> 3U))) && (1U & ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                         ? ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                                 ? 
                                                (~ 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                  & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready)))
                                                 : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out))
                                             : ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) 
                                                || (1U 
                                                    & (~ 
                                                       ((2U 
                                                         == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                        & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready))))))
                                         : ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                                   >> 1U)) 
                                            || ((1U 
                                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state)) 
                                                || ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i) 
                                                    & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i))))))));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
           & (IData)(axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    __Vtableidx11 = (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                      << 1U) | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = VysyxSoCFull__ConstPool__TABLE_he6c51f5f_0
        [__Vtableidx11];
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer) 
                                << 4U) | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate 
        = VysyxSoCFull__ConstPool__TABLE_h9ba4c414_0
        [__Vtableidx2];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state 
        = ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                     ? ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready))
                                 ? 8U : 7U) : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out)
                                                ? 7U
                                                : 6U))
                         : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready))
                                 ? 6U : 5U) : (((2U 
                                                 == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                & (2U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                                ? 5U
                                                : 4U)))
                     : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (2U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                 ? 4U : 3U) : (((2U 
                                                 == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                & (2U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                                ? 3U
                                                : 2U))
                         : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (2U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                 ? 2U : 1U) : (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i) 
                                                & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i)))
                                                ? 1U
                                                : 0U)))));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite))));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__12(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__12\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0 
        = vlSymsp->TOP.reset;
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgRegularize_h0a461ea4_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgRegularize_h0a461ea4_0_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgRegularize_h0a461ea4_0_1) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft))
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__state_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_valid 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT____VdfgRegularize_h6644948c_0_2) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt 
            = (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt = 0U;
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied 
            = (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_valid 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_valid;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied 
            = (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                     >> 2U));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_valid 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_size));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_corrupt;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_source;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_opcode;
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_unready 
        = (((4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid)) 
                              | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_mask) 
              << 2U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_unready))));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__winner_1 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__winner_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft))) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_valid) 
               | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__winner_1;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__winner_0;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid 
            = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_valid) 
                & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__state_0)) 
               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid) 
                  & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__state_1)));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__state_1;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__state_0;
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_param 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_d_bits_data 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                ? 0U : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_param = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_d_bits_data = 0U;
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_sink 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1) 
                      << 5U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_size 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_denied 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0) 
            & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied)) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0) 
            & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt)) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_corrupt) 
            | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_denied)) 
           << 1U);
    if (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id 
            = (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram) 
                     >> 2U));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp 
            = (3U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id 
            = (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source) 
                     >> 3U));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp 
            = (3U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp));
    }
    if ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode))) {
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__d_last_beats1 
            = (7U & (~ (7U & (((IData)(0x001fU) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_size)) 
                              >> 2U))));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready 
            = (1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__d_last_beats1 = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready 
            = (1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)));
    }
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_count_0)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_becho_real_last 
        = (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                  ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                      ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last)
                      : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__R0_data))
                  : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                      ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last)
                      : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__R0_data))));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__d_last_beats1)));
    if (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id 
            = (1U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                             >> 0x00000023U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id 
            = (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source) 
                     >> 3U));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last));
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft))
               ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__state_1)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft))
               ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__state_0)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__da_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_ready) 
           & (IData)(vlSelfRef.chipMaster__DOT__ferr__DOT____VdfgRegularize_hccb144a8_0_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_ready));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_bvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__b_allow));
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                                | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid = 
        (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rvalid) 
          << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_last)) 
                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__da_ready) 
                    & (((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__r_counter)) 
                        | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__r_beats1))) 
                       & (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__idle)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en 
        = ((0U != vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
              & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                 & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready) 
                       & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready) 
           & (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT____VdfgRegularize_h6644948c_0_2));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_bvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_ready) 
                                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last)) 
                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready) 
                    & (((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_counter)) 
                        | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_beats1))) 
                       & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)))));
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_bvalid) 
            << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rvalid)) 
                              | (IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
                 & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                     ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready)
                     : (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys = 
        (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready) 
                   >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready 
        = (1U & (((vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
                   >> 0x0000001eU) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_ready)) 
                 | ((~ (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
                        >> 0x0000001eU)) & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full)))));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_bvalid)) 
                              | (IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_1)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_0)));
    vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rvalid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1))));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
    if (vlSelfRef.__PVT__axi4xbar__DOT__idle_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_2_0;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_2_1;
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
               ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__state_0)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
               ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__state_1)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
                    & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
                        ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                           >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_1)))));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_bvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
                    & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_0)))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_0) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_deq_ready 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_0) 
            & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)) 
              >> 1U));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arready));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_wready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_ready) 
           & ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_wvalid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_bready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__b_allow));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_3 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_bready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_bvalid));
    if (vlSelfRef.__PVT__axi4xbar__DOT__idle_3) {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_3_0;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_3_1;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_arready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_1) 
           & ((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_1) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arid)) 
              >> 1U));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_wready) 
           & (IData)(vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_1));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_2));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_4 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awready));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_3) 
           & ((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_3) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)) 
              >> 1U));
    vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6f8a9b67_0_0));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_arvalid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_enq_valid))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_valid))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_wvalid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_awready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_4) 
           & ((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_4) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready = 
        (1U & (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                   >> 2U) & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_valid))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_valid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_enq_valid))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.__PVT__axi4ram__DOT___GEN = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready) 
                                           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready)));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_awvalid)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h9f077f37_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT___GEN) 
           & (0x0f000000U == (0x0fffe000U & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_8 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6f8a9b67_0_1));
    vlSelfRef.__PVT__axi4frag__DOT__in_awready = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__8(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din 
        = ((((((1U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
               | ((2U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                         & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
                  | ((4U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2) 
                            & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
                     | (8U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3) 
                              & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten)))))) 
              & (IData)(vlSelfRef.psram_dio__en)) & (IData)(vlSelfRef.psram_dio__en)) 
            & (IData)(vlSelfRef.psram_dio__en)) | (
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull.psram__DOT____VdfgRegularize_h886b63e5_0_0)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)
                                                       ? 0x0aU
                                                       : 
                                                      (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)) 
                                                        & (7U 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state)))
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata 
                                                        >> 4U)
                                                        : 
                                                       (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)) 
                                                         & (6U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state)))
                                                         ? vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata
                                                         : 0x0aU)))
                                                      : 0U) 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.psram__DOT____VdfgRegularize_h886b63e5_0_0)
                                                        ? 0x0fU
                                                        : 0U)) 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.psram__DOT____VdfgRegularize_h886b63e5_0_0)
                                                       ? 0x0fU
                                                       : 0U)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__9(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
        = (((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q) 
                                       & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | (((vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en0 
                                          & ((vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out2 
                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                                  ? 0xffffU
                                                  : 0U)) 
                                             | (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out3 
                                                & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U)))) 
                                         | (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en1 
                                            & ((vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out2 
                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                                    ? 0xffffU
                                                    : 0U)) 
                                               | (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out3 
                                                  & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                                       ? 0xffffU
                                                       : 0U) 
                                                     << 0x10U))))) 
                                        & (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en0 
                                           | vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en1)));
}

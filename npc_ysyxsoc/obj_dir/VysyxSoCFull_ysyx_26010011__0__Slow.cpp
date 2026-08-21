// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__S_arid = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0;
extern const VlUnpacked<CData/*0:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0;
extern const VlUnpacked<CData/*2:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h986ffb83_0;

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_17;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_17 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_20;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_20 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_21;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_33;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_33 = 0;
    CData/*0:0*/ EXU_0__DOT____VdfgExtracted_hbeeeed61__0;
    EXU_0__DOT____VdfgExtracted_hbeeeed61__0 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_24 
        = ((0x17U == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 
        = ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception) 
               >> 4U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid));
    vlSelfRef.__PVT__u_bridge__DOT__aw_sel_now = ((0x02000000U 
                                                   <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q) 
                                                  & (0x02000008U 
                                                     > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q));
    vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception)
            : 0U);
    vlSelfRef.__PVT__IDU_0__DOT__isXOR = (IData)((0x00004033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isOR = (IData)((0x00006033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isAND = (IData)((0x00007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLT = (IData)((0x00002033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSB = (IData)((0x00000023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSH = (IData)((0x00001023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSW = (IData)((0x00002023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLT = (IData)((0x00004063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGE = (IData)((0x00005063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isU = ((0x37U == (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                        | (0x17U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTU = (IData)((0x00003033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBEQ = (IData)((0x00000063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBNE = (IData)((0x00001063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLTU = (IData)((0x00006063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGEU = (IData)((0x00007063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isADDI = (IData)((0x00000013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isXORI = (IData)((0x00004013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isORI = (IData)((0x00006013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isANDI = (IData)((0x00007013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTI = (IData)((0x00002013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isJALR = (IData)((0x00000067U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLB = (IData)((3U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLH = (IData)((0x00001003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLHU = (IData)((0x00005003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTIU = (IData)(
                                                   (0x00003013U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLW = (IData)((0x00002003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLBU = (IData)((0x00004003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_20 = (IData)(
                                                          (0x00000033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = (IData)(
                                                          (0x00005033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_33 = (IData)(
                                                          (0x00001000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRS = (IData)(
                                                   (0x00002073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI = (IData)(
                                                    (0x00006073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRC = (IData)(
                                                   (0x00003073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI = (IData)(
                                                    (0x00007073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRW = (IData)(
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI = (IData)(
                                                    (0x00005073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_17 = (IData)(
                                                          (0x00005013U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    __Vtableidx3 = vlSelfRef.__PVT__u_clint__DOT__wstate;
    vlSelfRef.__PVT__CLINT_awready = VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__CLINT_wready = VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__CLINT_bvalid = VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0
        [__Vtableidx3];
    vlSelfRef.__PVT__EXU_0__DOT__comp_b = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_isUseImm)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_imm
                                            : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val);
    __Vtableidx5 = vlSelfRef.__PVT__u_clint__DOT__rstate;
    vlSelfRef.__PVT__CLINT_arready = VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0
        [__Vtableidx5];
    vlSelfRef.__PVT__CLINT_rvalid = VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0
        [__Vtableidx5];
    vlSelfRef.__PVT__CLINT_rlast = VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0
        [__Vtableidx5];
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_isUseImm) {
        vlSelfRef.__PVT__EXU_0__DOT__b = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_imm;
        vlSelfRef.__PVT__EXU_0__DOT__a = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUsePC)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc
                                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val);
    } else {
        vlSelfRef.__PVT__EXU_0__DOT__b = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val;
        vlSelfRef.__PVT__EXU_0__DOT__a = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val;
    }
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__io_master_rvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid)
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0)) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1))));
    vlSelfRef.__PVT__io_master_rid = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)
                                        : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                                  ? 
                                                 vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w
                                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                                  : 0U));
    vlSelfRef.__PVT__io_master_rlast = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0) 
                                         & (((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                                              : ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast)));
    vlSelfRef.__PVT__io_master_bvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1)
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bvalid_reg) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1))));
    vlSelfRef.__PVT__io_master_bid = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)
                                        : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bid_reg)
                                                  : 0U));
    vlSelfRef.flush_exception_valid = (1U & ((IData)(vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception) 
                                             >> 4U));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isSTORE 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB) 
              | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_2 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isU) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_32 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLT) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_26 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBEQ) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBNE));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLTU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGEU));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_28 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLW) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLBU));
    vlSelfRef.__PVT__IDU_0__DOT__isADD = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_20) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSUB = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_20) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRL = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRA = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLL = ((0x33U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                          & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_33));
    vlSelfRef.__PVT__IDU_0__DOT__isSLLI = ((0x13U == 
                                            (0x0000007fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                           & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_33));
    __Vtableidx6 = ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS))));
    vlSelfRef.__PVT__idu_out_bus_opCSR = VysyxSoCFull__ConstPool__TABLE_h986ffb83_0
        [__Vtableidx6];
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI) 
                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                       | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI))))));
    vlSelfRef.__PVT__IDU_0__DOT__isSRLI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_17) 
                                           & (0U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRAI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_17) 
                                           & (0x20U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000019U)));
    vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out = ((IData)(1U) 
                                                   + 
                                                   ((~ vlSelfRef.__PVT__EXU_0__DOT__comp_b) 
                                                    + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val));
    vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL = (0xffffffffU 
                                                 == 
                                                 (~ 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                   ^ vlSelfRef.__PVT__EXU_0__DOT__comp_b)));
    vlSelfRef.__PVT__EXU_0__DOT__op_and = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                           & vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__op_or = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                          | vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__S_rvalid = ((IData)(vlSelfRef.__PVT__u_bridge__DOT__R_state) 
                                 && ((IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg)
                                      ? (IData)(vlSelfRef.__PVT__CLINT_rvalid)
                                      : (IData)(vlSelfRef.__PVT__io_master_rvalid)));
    vlSelfRef.__PVT__S_rid = ((IData)(vlSelfRef.__PVT__u_bridge__DOT__R_state)
                               ? ((IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg)
                                   ? (IData)(vlSelfRef.__PVT__u_bridge__DOT__CLINT_rid)
                                   : (IData)(vlSelfRef.__PVT__io_master_rid))
                               : 0U);
    vlSelfRef.__PVT__S_rlast = ((IData)(vlSelfRef.__PVT__u_bridge__DOT__R_state) 
                                && ((IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg)
                                     ? (IData)(vlSelfRef.__PVT__CLINT_rlast)
                                     : (IData)(vlSelfRef.__PVT__io_master_rlast)));
    vlSelfRef.__PVT__S_bvalid = ((IData)(vlSelfRef.__PVT__u_bridge__DOT__W_state) 
                                 && ((IData)(vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg)
                                      ? (IData)(vlSelfRef.__PVT__CLINT_bvalid)
                                      : (IData)(vlSelfRef.__PVT__io_master_bvalid)));
    vlSelfRef.__PVT__S_bid = ((IData)(vlSelfRef.__PVT__u_bridge__DOT__W_state)
                               ? ((IData)(vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg)
                                   ? (IData)(vlSelfRef.__PVT__u_bridge__DOT__CLINT_bid)
                                   : (IData)(vlSelfRef.__PVT__io_master_bid))
                               : 0U);
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_3 
        = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_2) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH 
        = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_26) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                 | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29))));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isLOAD 
        = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                 | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU))));
    vlSelfRef.__VdfgRegularize_he0d61652_0_2 = (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR))));
    vlSelfRef.__PVT__IDU_0__DOT__isI = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                          | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                             | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR) 
                                                                   | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
                                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                                                                         | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                                                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                                                               | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34)))))))))))))));
    EXU_0__DOT____VdfgExtracted_hbeeeed61__0 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUnSigned)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (1ULL 
                                                                   & ((1ULL 
                                                                       + 
                                                                       ((~ (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_b))) 
                                                                        + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)))) 
                                                                      >> 0x00000020U)))) 
                                                       & (0U 
                                                          != vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out))
                                                       : 
                                                      ((~ 
                                                        (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                           ^ vlSelfRef.__PVT__EXU_0__DOT__comp_b) 
                                                          | vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out) 
                                                         >> 0x0000001fU)) 
                                                       | ((~ 
                                                           (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                            >> 0x0000001fU)) 
                                                          & (vlSelfRef.__PVT__EXU_0__DOT__comp_b 
                                                             >> 0x0000001fU))))));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result 
        = ((IData)((0U != (0x0300U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))))
            ? ((0x00000100U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? (vlSelfRef.__PVT__EXU_0__DOT__a - vlSelfRef.__PVT__EXU_0__DOT__b)
                : (vlSelfRef.__PVT__EXU_0__DOT__a + vlSelfRef.__PVT__EXU_0__DOT__b))
            : ((0x00000020U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                : ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                    (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                    : ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                         (0x0000001fU 
                                          & vlSelfRef.__PVT__EXU_0__DOT__b))
                        : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                            ? vlSelfRef.__PVT__EXU_0__DOT__op_and
                            : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                ? vlSelfRef.__PVT__EXU_0__DOT__op_or
                                : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                    ? (vlSelfRef.__PVT__EXU_0__DOT__a 
                                       ^ vlSelfRef.__PVT__EXU_0__DOT__b)
                                    : vlSelfRef.__PVT__EXU_0__DOT__b)))))));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_exception 
        = ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception))
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception)
            : (((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_3) 
                | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_26) 
                   | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                         | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29) 
                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                               | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                  | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
                                     | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
                                                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
                                                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
                                                          | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                                             | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                                   | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                                         | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADD) 
                                                                               | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSUB) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLL) 
                                                                                | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_32) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXOR) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRL) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRA) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isOR) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isAND) 
                                                                                | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34) 
                                                                                | ((0x00000073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x00100073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x30200073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | (0x0000100fU 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)))))))))))))))))))))))))))))))))))
                ? ((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                    ? 0x13U : ((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                ? 0x1bU : ((0x30200073U 
                                            == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                            ? 0x1eU
                                            : ((0x0000100fU 
                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                ? 0x0eU
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception)))))
                : 0x12U));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result 
        = (1U & ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                  ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                      ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)
                      : (~ (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)))
                  : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                      ? (~ (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))
                      : (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IDU_0__DOT__next_state = (1U & 
                                               ((IData)(vlSelfRef.__PVT__IDU_0__DOT__state)
                                                 ? 
                                                (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__fencei_flush))
                                                 : 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                                 & (0x0000100fU 
                                                    == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
    vlSelfRef.__PVT__io_master_rready = ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                         & ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__rready)
                                             : (~ (IData)(vlSelfRef.reset))));
    vlSelfRef.__PVT__S_rdata = ((IData)(vlSelfRef.__PVT__u_bridge__DOT__R_state)
                                 ? ((IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg)
                                     ? ((0x02000000U 
                                         == vlSelfRef.__PVT__u_clint__DOT__raddr_reg)
                                         ? vlSelfRef.__PVT__u_clint__DOT__mtime_L
                                         : ((0x02000004U 
                                             == vlSelfRef.__PVT__u_clint__DOT__raddr_reg)
                                             ? vlSelfRef.__PVT__u_clint__DOT__mtime_H
                                             : 0U))
                                     : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                          ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                               ? (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                          >> 3U))
                                               : 0U) 
                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                                  ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                                  : 0U) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((((0x0000ff00U 
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
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                                                   [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                                    : 0U)))
                                 : 0U);
}

extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_hc136131a_0;

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_0;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    // Body
    vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_in_ready)));
    vlSelfRef.idu_isRAW = (((0U != (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x0000000fU))) 
                            && (1U & (((((0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x0000000fU)) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                       ? (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                             & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD))))
                                       : (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                           ? ((1U & 
                                               (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                              && (1U 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x0000000fU)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR)) 
                                              && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))) 
                                                  && (1U 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))))))))) 
                           | (((0U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                       >> 0x00000014U)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR)) 
                                  & ((0x0b00U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U)) 
                                     & ((((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U) 
                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_csrrd)) 
                                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                            & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR)))) 
                                        | ((((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000014U) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csrrd)) 
                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_opCSR)))) 
                                           | (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                >> 0x00000014U) 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR))))))))) 
                              | ((0U != (0x0000001fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                            >> 0x00000014U))) 
                                 && (1U & (((((0x0000001fU 
                                               & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U)) 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                            ? (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD))))
                                            : (((((0x0000001fU 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U)) 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                        & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                                   && (1U 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                                : (
                                                   ((((0x0000001fU 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                          >> 0x00000014U)) 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR)) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                            & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))) 
                                                       && (1U 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))))))))));
    if (vlSelfRef.__PVT__u_bridge__DOT__W_state) {
        vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 1U;
        vlSelfRef.__PVT__CLINT_wvalid = (1U & ((IData)(vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg) 
                                               && (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid)));
        vlSelfRef.__PVT__CLINT_awvalid = (1U & ((IData)(vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg) 
                                                && (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid)));
        vlSelfRef.__PVT__io_master_wvalid = (1U & (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg))) 
                                                   && (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid)));
        vlSelfRef.__PVT__io_master_awvalid = (1U & 
                                              ((1U 
                                                & (~ (IData)(vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg))) 
                                               && (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid)));
        if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
             & (IData)(vlSelfRef.__PVT__S_bvalid))) {
            vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 0U;
        if (vlSelfRef.__PVT__u_bridge__DOT__aw_sel_now) {
            vlSelfRef.__PVT__CLINT_wvalid = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
            vlSelfRef.__PVT__CLINT_awvalid = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
            vlSelfRef.__PVT__io_master_wvalid = (1U 
                                                 & 0U);
            vlSelfRef.__PVT__io_master_awvalid = (1U 
                                                  & 0U);
        } else {
            vlSelfRef.__PVT__CLINT_wvalid = (1U & 0U);
            vlSelfRef.__PVT__CLINT_awvalid = (1U & 0U);
            vlSelfRef.__PVT__io_master_wvalid = (1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
            vlSelfRef.__PVT__io_master_awvalid = (1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
        }
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid) {
            vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 1U;
        }
    }
    vlSelfRef.__PVT__idu_ra_bypass = ((0U != (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)))
                                       ? (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                           ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP)
                                                   ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
                                               : 0U)
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x0000000fU)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                               ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP)
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_out_bus_rdata
                                                    : 0U))
                                               : ((
                                                   (((0x0000001fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x0000000fU)) 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                                     : 0U))
                                                   : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_a)))
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_a);
    vlSelfRef.__PVT__idu_rb_bypass = ((0U != (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)))
                                       ? (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                           ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP)
                                                   ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
                                               : 0U)
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x00000014U)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                               ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP)
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_out_bus_rdata
                                                    : 0U))
                                               : ((
                                                   (((0x0000001fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x00000014U)) 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                                     : 0U))
                                                   : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_b)))
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_b);
    vlSelfRef.__PVT__exu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception)
                                               : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                   & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                                       & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result)))
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
                                                     ? 0x10U
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception)));
    vlSelfRef.__PVT__exu_out_bus_dnpc_valid = ((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception) 
                                                    >> 4U))) 
                                               && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                    & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready)) 
                                                   && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                                           & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result))) 
                                                       && (1U 
                                                           & (~ 
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result)))))));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.idu_isRAW)) 
                                                     | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_exception) 
                                                        >> 4U)));
    __Vtableidx2 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__CLINT_awvalid) 
                                << 4U) | (IData)(vlSelfRef.__PVT__u_clint__DOT__wstate)));
    vlSelfRef.__PVT__u_clint__DOT__wnext_state = VysyxSoCFull__ConstPool__TABLE_hc136131a_0
        [__Vtableidx2];
    vlSelfRef.__PVT__IDU_0__DOT__idu_in_ready = (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                                  | (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready)) 
                                                 & ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_0) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__next_state)))));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                                     & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_0)));
    __VdfgRegularize_h6e95ff9d_0_32 = (1U & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_valid)) 
                                             | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                != vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result)));
    vlSelfRef.flush_valid = ((IData)(vlSelfRef.flush_exception_valid) 
                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                    & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready)))
                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                 : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                    & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready) 
                                       & ((IData)(vlSelfRef.__PVT__exu_out_bus_dnpc_valid)
                                           ? (IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                           : ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_valid)) 
                                              | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                 != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc)))))));
    vlSelfRef.__PVT__IDU_0__DOT__flush_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__fencei_flush) 
                                                | (IData)(vlSelfRef.flush_valid));
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
    vlSelf->__PVT__idu_ra_bypass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18356435993976681273ull);
    vlSelf->__PVT__idu_rb_bypass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12395343302792411567ull);
    vlSelf->idu_isRAW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12484043471940668578ull);
    vlSelf->flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301687952925534331ull);
    vlSelf->flush_exception_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2546405369257597732ull);
    vlSelf->__PVT__IROM_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2564055601578176104ull);
    vlSelf->__PVT__idu_out_bus_csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14612417427095553734ull);
    vlSelf->__PVT__idu_out_bus_signals = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4307571169491265713ull);
    vlSelf->__PVT__idu_out_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16111935974516961794ull);
    vlSelf->__PVT__exu_in_bus_signals = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10157523231169252476ull);
    vlSelf->__PVT__exu_out_bus_dnpc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 823560455559887883ull);
    vlSelf->__PVT__exu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12053201596965599409ull);
    vlSelf->__PVT__DRAM_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5977303994642059722ull);
    vlSelf->tb_isFINAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11082856627143475112ull);
    vlSelf->tb_dnpc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1563376191479858902ull);
    vlSelf->tb_isMEM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3061164873628217955ull);
    vlSelf->tb_FINAL_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9104091567488805747ull);
    vlSelf->tb_FINAL_npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14752332200549946389ull);
    vlSelf->tb_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8841514647440332300ull);
    vlSelf->tb_FINAL_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8747687828424263726ull);
    vlSelf->__PVT__S_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7938765848120282132ull);
    vlSelf->__PVT__S_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1989296464173262834ull);
    vlSelf->__PVT__S_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15658670427839457430ull);
    vlSelf->__PVT__S_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10761587303181714715ull);
    vlSelf->__PVT__S_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17849579045641473566ull);
    vlSelf->__PVT__S_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15435730343987244982ull);
    vlSelf->__PVT__S_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17122809408996733240ull);
    vlSelf->__PVT__S_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17014021805460904505ull);
    vlSelf->__PVT__S_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12852217189061255496ull);
    vlSelf->__PVT__S_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16968790080563890634ull);
    vlSelf->__PVT__S_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13549630278632760757ull);
    vlSelf->__PVT__S_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3827061764519651058ull);
    vlSelf->__PVT__S_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3476913524963226392ull);
    vlSelf->__PVT__S_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 774052082752397629ull);
    vlSelf->__PVT__S_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18115728767137224371ull);
    vlSelf->__PVT__CLINT_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18369756256379185791ull);
    vlSelf->__PVT__CLINT_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9738362805277294602ull);
    vlSelf->__PVT__CLINT_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6442187832335141260ull);
    vlSelf->__PVT__CLINT_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14648121147685536134ull);
    vlSelf->__PVT__CLINT_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8745694234458599952ull);
    vlSelf->__PVT__CLINT_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7946519429237841855ull);
    vlSelf->__PVT__CLINT_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10330124965946453220ull);
    vlSelf->__PVT__CLINT_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15570911825675686818ull);
    vlSelf->__PVT__CLINT_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261343286847082126ull);
    vlSelf->__VdfgRegularize_he0d61652_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13585657684134075245ull);
    vlSelf->__PVT__IDU_0__DOT__flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14606055568787714890ull);
    vlSelf->__PVT__IDU_0__DOT__idu_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14517647677361810231ull);
    vlSelf->__PVT__IDU_0__DOT__idu_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18080012761385849434ull);
    vlSelf->__PVT__IDU_0__DOT__idu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16320428996405793283ull);
    vlSelf->__PVT__IDU_0__DOT__idu_out_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15972667424962257401ull);
    vlSelf->__PVT__IDU_0__DOT__idu_out_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1528139171483306698ull);
    vlSelf->__PVT__IDU_0__DOT__idu_out_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7265443920011843129ull);
    vlSelf->__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6215337356815067075ull);
    vlSelf->__PVT__IDU_0__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5420118350948990268ull);
    vlSelf->__PVT__IDU_0__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 218229782486346919ull);
    vlSelf->__PVT__IDU_0__DOT__isJALR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5246149202446548276ull);
    vlSelf->__PVT__IDU_0__DOT__isBEQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16052159536828083514ull);
    vlSelf->__PVT__IDU_0__DOT__isBNE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7573166809711900707ull);
    vlSelf->__PVT__IDU_0__DOT__isBLT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1141464623126889649ull);
    vlSelf->__PVT__IDU_0__DOT__isBGE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7802581112442791722ull);
    vlSelf->__PVT__IDU_0__DOT__isBLTU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8219159764997172982ull);
    vlSelf->__PVT__IDU_0__DOT__isBGEU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10767002943737606556ull);
    vlSelf->__PVT__IDU_0__DOT__isLB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14686421087291650575ull);
    vlSelf->__PVT__IDU_0__DOT__isLH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15608676163218457916ull);
    vlSelf->__PVT__IDU_0__DOT__isLW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6035066000229272285ull);
    vlSelf->__PVT__IDU_0__DOT__isLBU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3618939125699111747ull);
    vlSelf->__PVT__IDU_0__DOT__isLHU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11265891556167448282ull);
    vlSelf->__PVT__IDU_0__DOT__isSB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10047481134680103685ull);
    vlSelf->__PVT__IDU_0__DOT__isSH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12813293913198865556ull);
    vlSelf->__PVT__IDU_0__DOT__isSW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548530652802062501ull);
    vlSelf->__PVT__IDU_0__DOT__isADDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 308264836148441354ull);
    vlSelf->__PVT__IDU_0__DOT__isSLTI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16494929350488106398ull);
    vlSelf->__PVT__IDU_0__DOT__isSLTIU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11305976460291018845ull);
    vlSelf->__PVT__IDU_0__DOT__isXORI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12050086381736083045ull);
    vlSelf->__PVT__IDU_0__DOT__isORI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11989650033469134143ull);
    vlSelf->__PVT__IDU_0__DOT__isANDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14991955500157704385ull);
    vlSelf->__PVT__IDU_0__DOT__isSLLI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808129155818158052ull);
    vlSelf->__PVT__IDU_0__DOT__isSRLI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12708252932749187312ull);
    vlSelf->__PVT__IDU_0__DOT__isSRAI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 226138326744667389ull);
    vlSelf->__PVT__IDU_0__DOT__isADD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8334213873409465367ull);
    vlSelf->__PVT__IDU_0__DOT__isSUB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477649225604654441ull);
    vlSelf->__PVT__IDU_0__DOT__isSLL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9989061493419673658ull);
    vlSelf->__PVT__IDU_0__DOT__isSLT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17978955048165802060ull);
    vlSelf->__PVT__IDU_0__DOT__isSLTU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2352758174237464652ull);
    vlSelf->__PVT__IDU_0__DOT__isXOR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12928640374879442140ull);
    vlSelf->__PVT__IDU_0__DOT__isSRL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15316912922987016519ull);
    vlSelf->__PVT__IDU_0__DOT__isSRA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5660971777432264299ull);
    vlSelf->__PVT__IDU_0__DOT__isOR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3838239279485465388ull);
    vlSelf->__PVT__IDU_0__DOT__isAND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14356565034287140481ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812807253477557170ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10186486172149556751ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2600342929540430619ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRWI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16886644062605410102ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRSI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9009933350732455514ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRCI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17949476902630401196ull);
    vlSelf->__PVT__IDU_0__DOT__isI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17630841040017951095ull);
    vlSelf->__PVT__IDU_0__DOT__isU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18373776593487244617ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17953400318250727758ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11851339633746568984ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17545921701959383810ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9571503348699512136ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13534344279494301422ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7034304805480667074ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8829797479805470112ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9453153480079687804ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_hd1728725_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7685061629205742388ull);
    vlSelf->__PVT__EXU_0__DOT__exu_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9341556635326236284ull);
    vlSelf->__PVT__EXU_0__DOT__exu_out_bus_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2754888502402517461ull);
    vlSelf->__PVT__EXU_0__DOT__exu_out_bus_comp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8720627632724693175ull);
    vlSelf->__PVT__EXU_0__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13652677756713014227ull);
    vlSelf->__PVT__EXU_0__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8215853323861242264ull);
    vlSelf->__PVT__EXU_0__DOT__comp_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16952493944377901889ull);
    vlSelf->__PVT__EXU_0__DOT__op_or = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11667415920505550309ull);
    vlSelf->__PVT__EXU_0__DOT__op_and = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9740566813049106484ull);
    vlSelf->__PVT__EXU_0__DOT__comp_isEQUAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11674233027819119710ull);
    vlSelf->__PVT__EXU_0__DOT__comp_suber_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16892173914364491116ull);
    vlSelf->__PVT__WBU_0__DOT__wbu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11638232996607660697ull);
    vlSelf->WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12865560808515542011ull);
    vlSelf->__PVT__RAM_AXI4Arbiter__DOT__R_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8295886986111117788ull);
    vlSelf->__PVT__RAM_AXI4Arbiter__DOT__R_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11101650068390281325ull);
    vlSelf->__PVT__RAM_AXI4Arbiter__DOT__R_master_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4693431511555116030ull);
    vlSelf->__PVT__RAM_AXI4Arbiter__DOT__R_master_sel_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17927734390465701358ull);
    vlSelf->__PVT__u_bridge__DOT__CLINT_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15252974112170685867ull);
    vlSelf->__PVT__u_bridge__DOT__CLINT_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11989763900120530470ull);
    vlSelf->__PVT__u_bridge__DOT__aw_sel_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2216584772265930645ull);
    vlSelf->__PVT__u_bridge__DOT__ar_sel_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8784515397783432852ull);
    vlSelf->__PVT__u_bridge__DOT__aw_sel_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13271771386913532612ull);
    vlSelf->__PVT__u_bridge__DOT__ar_sel_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11103760887218067669ull);
    vlSelf->__PVT__u_bridge__DOT__R_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11197853852932998707ull);
    vlSelf->__PVT__u_bridge__DOT__R_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216759082398079978ull);
    vlSelf->__PVT__u_bridge__DOT__W_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7430020256745362677ull);
    vlSelf->__PVT__u_bridge__DOT__W_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 780989717003925298ull);
    vlSelf->__PVT__u_clint__DOT__wstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2125680985237493467ull);
    vlSelf->__PVT__u_clint__DOT__wnext_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5606325698264214943ull);
    vlSelf->__PVT__u_clint__DOT__rstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11792870988280930054ull);
    vlSelf->__PVT__u_clint__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8184077289912880412ull);
    vlSelf->__PVT__u_clint__DOT__raddr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6239630701339536848ull);
    vlSelf->__PVT__u_clint__DOT__mtime_L = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2852945115331758710ull);
    vlSelf->__PVT__u_clint__DOT__mtime_H = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11716648817237412802ull);
}

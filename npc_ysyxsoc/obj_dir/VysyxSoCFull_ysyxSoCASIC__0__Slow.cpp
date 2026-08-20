// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read = 0U;
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write = 0U;
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record = 7U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_initial__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___eval_initial__TOP__ysyxSoCFull__asic\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[0U] = 0U;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[1U] = 0U;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[2U] = 0U;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[3U] = 0U;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[4U] = 0U;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[5U] = 0U;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[6U] = 0U;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rresp_w[7U] = 0U;
    VL_READMEM_N(true, 24, 307200, 0, "/home/seaber/ysyx-workbench/ysyxSoC/perip/vga/image_data.mif"s
                 ,  &(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram)
                 , 0, ~0ULL);
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hcfb222df_0;
extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_hef6775a3_0;
extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h45f54a83_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h1d37f4c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h6c27f87a_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hb60b2f22_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_he6c51f5f_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h9ba4c414_0;

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_1;
    __PVT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_3;
    __PVT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_mask_T;
    __PVT__axi4xbar_1__DOT___readys_mask_T = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_mask_T_8;
    __PVT__axi4xbar_1__DOT___readys_mask_T_8 = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*9:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = (0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done 
        = (8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_full 
        = (8U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 0x0000002dU)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst = 1U;
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q;
    }
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read) 
           == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                      >> 1U)));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q));
    }
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
            ? (8U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
            : (0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)));
    __Vtableidx5 = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][0U];
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][1U];
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][2U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x00000080U & ((~ (0U != (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                           << 7U)) | (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                     >> 3U))) && (1U & ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                         ? (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                               >> 1U))
                                         : ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                                   >> 1U)) 
                                            || (1U 
                                                & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss = 
        (0x000000ffU & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                           & ((- (IData)(((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                          & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                             >> 0x0000000dU)))) 
                              | (- (IData)((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                   >> 0x0000000dU)))))))));
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 0x0000002dU)));
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid 
            = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid));
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_psel 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
               || (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_penable 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
               && (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd 
        = (0x0000000fU & vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input);
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[0U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 4U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[1U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 8U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[2U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x0cU));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[3U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x10U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[4U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x14U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[5U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x18U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[6U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd 
        = (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
           >> 0x1cU);
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[7U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout;
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_valid 
        = ((0x0090U < (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt)) 
           & (0x0310U >= (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt)));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_valid 
        = ((0x0023U < (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)) 
           & (0x0203U >= (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)));
    vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q 
                                 >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q 
                                                      >> 0x0000001cU))))));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable 
        = ((2U != (3U & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                         >> 1U))) & (1U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o 
        = ((4U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full));
    vlSelfRef.__PVT__axi4frag__DOT___in_awready_T = 
        ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
        = (((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                       & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
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
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0x000000ffU & ((0x00000800U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                           ? ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                              - ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                 + (1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                          >> 9U))))
                           : ((0x00000200U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                               ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                               : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                  - (IData)(1U)))));
    if (vlSelfRef.__PVT__axi4frag__DOT__busy_1) {
        vlSelfRef.__PVT__axi4frag__DOT__len_1 = vlSelfRef.__PVT__axi4frag__DOT__r_len_1;
        vlSelfRef.__PVT__axi4frag__DOT__addr_1 = vlSelfRef.__PVT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__len_1 = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len;
        vlSelfRef.__PVT__axi4frag__DOT__addr_1 = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite)
                : ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                   && (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite))));
    vlSelfRef.__PVT__axi4frag__DOT__len = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                            ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len)
                                            : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr = 
        ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_valid)
          ? (0x000003ffU & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt) 
                            - (IData)(0x0091U))) : 0U);
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr = 
        ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_valid)
          ? (0x000003ffU & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt) 
                            - (IData)(0x0024U))) : 0U);
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w
        [vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt];
    if ((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid = 0U;
    }
    if ((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid = 0U;
    }
    if ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid = 0U;
    }
    if ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid = 0U;
    }
    if ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid = 0U;
    }
    if ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid = 0U;
    }
    if ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid = 0U;
    }
    if ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid = 0U;
    }
    vlSelfRef.__PVT__axi4yank__DOT__casez_tmp = (1U 
                                                 & ((8U 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))));
    vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o) 
           & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2 = (1U 
                                                   & ((8U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast 
        = ((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast 
        = ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast 
        = ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast 
        = ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast 
        = ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast 
        = ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast 
        = ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 5U)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_3 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w
        [vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr 
        = (0x0007ffffU & (((IData)(0x00000280U) * (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr)) 
                          + (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
                << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0))
            : vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata;
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid 
        = ((IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid 
        = ((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid 
        = ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid 
        = ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid 
        = ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid 
        = ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid 
        = ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)));
    vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_3 = 
        (vlSelfRef.__PVT__axi4frag__DOT__addr_1 + (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full) 
            << 2U) | (((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     | ((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full))));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vga_data 
        = (((0x01e0U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr)) 
            & (0x0280U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr)))
            ? ((0x0004afffU >= vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr)
                ? vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram
               [vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr]
                : 0U) : 0U);
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                          >> 0x0000001cU)) | (1U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x00000018U)))) 
           | ((0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001bU)))) 
                      | (1U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                  >> 0x00000018U))))) 
              | (3U == (3U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                         >> 0x0000001bU)) | (1U & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x00000018U)))));
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)) 
           & ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x0000001eU 
                                            & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000001bU)))) 
                               | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                        >> 0x00000018U)))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                  << 2U)) 
                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full) 
                                     << 1U)) | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx7];
    if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq 
            = (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq 
            = (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
            = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U));
    } else {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
            = vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r;
    }
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
              | (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelfRef.__PVT__axi42apb__DOT__is_write_r));
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                  << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))) 
                                 | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                     << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx6];
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)
            : (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full)))));
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                                | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid = 
        (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid) 
          << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1))));
    if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) {
        if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data));
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU));
        } else {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__axi42apb__DOT__wstrb_reg_r));
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                = vlSelfRef.__PVT__axi42apb__DOT__awaddr_reg_r;
        }
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__araddr_reg_r);
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready))));
    __PVT__axi4xbar__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask)) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
    __PVT__axi4xbar_1__DOT___readys_mask_T_8 = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
          >> 2U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0x000000ffU & ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                           ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                              >> 8U) : (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                        >> 0x00000018U)));
    __Vtableidx8 = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = VysyxSoCFull__ConstPool__TABLE_h45f54a83_0
        [__Vtableidx8];
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
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel 
        = (IData)(((0x20000000U == (0x30000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                   & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel)));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable 
        = (IData)(((0x20000000U == (0x30000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                   & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_4 = (0U == (
                                                   (0x00000010U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x00000019U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x00000010U)) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (1U 
                                                               ^ 
                                                               (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                                >> 0x0000000cU)))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_3 = (0U == (
                                                   (0x00000010U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x00000019U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000eU)) 
                                                         | (3U 
                                                            & (2U 
                                                               ^ 
                                                               (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                                >> 0x0000000cU)))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_1 = (0U == (
                                                   (0x00000010U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x00000019U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000eU)) 
                                                         | (3U 
                                                            & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000000cU))))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = (IData)(((0U == (0x30000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                   & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel)));
    vlSelfRef.__PVT__apbxbar__DOT__sel_0 = ((0U == 
                                             ((0x00000010U 
                                               & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                  >> 0x00000019U)) 
                                              | ((8U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001cU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                        >> 0x0000000eU)) 
                                                    | (3U 
                                                       & (1U 
                                                          ^ 
                                                          (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                           >> 0x0000000cU))))))) 
                                            | (3U == 
                                               (3U 
                                                & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                   >> 0x0000001cU))));
    __PVT__axi4xbar_1__DOT___readys_mask_T = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 1U) & (IData)(vlSelfRef.__PVT__lmrom__DOT__state));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 2U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_11 
        = (7U & ((IData)(__PVT__axi4xbar_1__DOT___readys_mask_T_8) 
                 | VL_SHIFTL_III(3,3,32, (IData)(__PVT__axi4xbar_1__DOT___readys_mask_T_8), 1U)));
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
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0x000000ffU & ((IData)(7U) 
                                             + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
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
    __VdfgRegularize_h6e95ff9d_0_32 = ((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
                                           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
                                       & ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
                                          & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_3 
        = (7U & ((IData)(__PVT__axi4xbar_1__DOT___readys_mask_T) 
                 | VL_SHIFTL_III(3,3,32, (IData)(__PVT__axi4xbar_1__DOT___readys_mask_T), 1U)));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys = 
        (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready) 
                   >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (3U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data)
                   : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                            ? ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                               >> 2U) : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_id)
                                                : 0U)));
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
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state))
            ? (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
                & (IData)(__VdfgRegularize_h6e95ff9d_0_32))
                ? 1U : (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                         & (IData)(__VdfgRegularize_h6e95ff9d_0_32))
                         ? 2U : 0U)) : 0U);
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
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n))))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & ((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                               ? (1U & (0x35U >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                               : 0x0aU));
    } else if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout));
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
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
    }
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0)
                            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x00000023U))
                            : 0U) | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                       ? (IData)(vlSelfRef.__PVT__lmrom__DOT__nodeIn_rid_r)
                                       : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_id)
                                                 : 0U))));
    vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid));
    vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last 
        = ((8U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
            ? ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last)))
                : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last))))
            : ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last)))
                : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
            ? (0x16U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
            : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                  ? (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                  : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)));
    vlSelfRef.psram_dio__en = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot 
        = ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
             & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
            | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))
            ? 1U : ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                      & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                     | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))
                     ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pprot)
                     : 1U));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb 
        = ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
            ? ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                         ? 0U : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                  ? 0U : 0x0fU))) : 
           ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
             ? 0x0fU : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? 1U : 3U) : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                            ? 0x0fU
                                            : 0U))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb 
        = ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
            ? 0U : ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                     ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb)
                     : ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                         ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb)
                         : 0U)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr 
        = ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
            ? ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                         ? 0U : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                  ? 0U : 0x10U))) : 
           ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
             ? ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                 ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                     ? 0U : 0x10U) : 0x10U) : ((2U 
                                                & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                                    ? 0x18U
                                                    : 0x14U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                                    ? 4U
                                                    : 0U))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr 
        = ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
            ? 0U : ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                     ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr)
                     : ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                         ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr)
                         : 0U)));
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
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata 
        = ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
            ? 0U : ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                     ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata
                     : ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                         ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata
                         : 0U)));
    if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
          & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
         | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata = 0U;
    } else if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
        = ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
            ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata
            : ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata
                : ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                    ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata
                    : 0xdeadbeefU)));
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
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr 
            = (0x0000001fU & (0x3fffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i;
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
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
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
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                                                  | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg) 
            << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    __Vtableidx9 = (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                     << 1U) | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = VysyxSoCFull__ConstPool__TABLE_he6c51f5f_0
        [__Vtableidx9];
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
    __PVT__axi4xbar__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1)) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite))));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1))));
    vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T_5 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg));
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    // Body
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
                    & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_0)))));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((0U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                                                  & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)) 
                                                 | (((~ 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))) 
                                                     & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)) 
                                                    | ((IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0x30000000U 
                                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                                                & (~ 
                                                                   (((0U 
                                                                      != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                                                     & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                                         ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                                                         : 
                                                                        (0x16U 
                                                                         == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                                                                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))))) 
                                                       | (((~ 
                                                            ((2U 
                                                              == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)) 
                                                             | (1U 
                                                                == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)))) 
                                                           & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)) 
                                                          | (((~ 
                                                               ((1U 
                                                                 == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state)) 
                                                                & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable))) 
                                                              & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)) 
                                                             | ((~ (IData)(vlSelfRef.__PVT___apbxbar_auto_anon_out_5_pready)) 
                                                                & (0x20000000U 
                                                                   == 
                                                                   (0x30000000U 
                                                                    & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))))))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid)
                    ? 2U : 1U) : 0U));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
              & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
                  ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)
                  : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
            ? (((1U != (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
                & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                   ? 1U : 2U) : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
                                                  ? 
                                                 ((0x00000032U 
                                                   > vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
    __VdfgRegularize_h6e95ff9d_0_2 = ((2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)));
    if (__VdfgRegularize_h6e95ff9d_0_2) {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__prdata_reg;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__pslverr_reg;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__pready_reg;
    } else {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata = 0xdeaddeadU;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready = 0U;
    }
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp = 
        ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
          ? ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
             << 1U) : (IData)(vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
            & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)) 
           | (2U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
               & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))) 
           & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
              & (IData)(vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
               & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))) 
           & ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
              & (IData)(vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (2U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                     | (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en))) 
                                                   << 1U));
    vlSelfRef.__PVT__axi42apb__DOT__casez_tmp = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                  ? 
                                                 (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                    : (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_0)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_1)));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready = 
        (1U & (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                   >> 2U) & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__VdfgRegularize_h9fc36335_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
              & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                  ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)
                  : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset 
        = ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready) 
                                          & ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid) 
                                             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready 
        = ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready 
        = ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready 
        = ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready 
        = ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready 
        = ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready 
        = ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready)) 
           | (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid) 
               & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)) 
              | ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready)));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready;
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__in_awready = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000fU));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready) 
                                              & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full));
}

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001cU))))));
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                 >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_1 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize)));
    vlSelfRef.__PVT__axi4frag__DOT__addr = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                             ? vlSelfRef.__PVT__axi4frag__DOT__r_addr
                                             : vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4xbar__DOT__casez_tmp = ((8U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count)))))));
    vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_1 = 
        (vlSelfRef.__PVT__axi4frag__DOT__addr + (0x0000ffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr)))));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 0x0000001cU)) | (1U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                               >> 0x00000018U)))) 
           | ((0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                  >> 0x0000001bU)))) 
                      | (1U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                  >> 0x00000018U))))) 
              | (3U == (3U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                              >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                         >> 0x0000001bU)) | (1U & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                              >> 0x0000001bU)))) 
                  | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready))));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q) 
              & ((4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)) 
                       | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
               | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
                ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                   [0U] ? 0U : 3U) : ((0x00000032U 
                                       > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt)
                                       ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                                          [0U] ? 0U
                                           : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate))
                ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                   [1U] ? 0U : 3U) : ((0x00000032U 
                                       > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt)
                                       ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                                          [1U] ? 0U
                                           : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q
                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
           & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
              & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2)));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T = ((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                                                  & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000fU));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if (((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                 & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i))) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0x0000000fU & 2U);
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0x0000000fU & 0U);
            if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                            >> 0x0000000bU))))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                              - (IData)(1U)));
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0x0000000fU & 0U);
        if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid)));
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr), vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata);
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata;
    } else {
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__spi_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7598659639805510901ull);
    vlSelf->__PVT__spi_ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13814856865517674682ull);
    vlSelf->__PVT__spi_mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 852284730959930751ull);
    vlSelf->__PVT__spi_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140560756394917646ull);
    vlSelf->__PVT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2399467654730215438ull);
    vlSelf->__PVT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
    vlSelf->__PVT__psram_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9366220501501135442ull);
    vlSelf->__PVT__psram_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 253043257259189995ull);
    vlSelf->__PVT__psram_dio = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7566955548280960593ull);
    vlSelf->__PVT__sdram_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3688931996657638843ull);
    vlSelf->__PVT__sdram_cke = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4754305267450575977ull);
    vlSelf->__PVT__sdram_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16476245496016217047ull);
    vlSelf->__PVT__sdram_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 879436976897849305ull);
    vlSelf->__PVT__sdram_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1090110278223692672ull);
    vlSelf->__PVT__sdram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2133868856751517442ull);
    vlSelf->__PVT__sdram_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 47095864137989737ull);
    vlSelf->__PVT__sdram_ba = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 116281543022381152ull);
    vlSelf->__PVT__sdram_dqm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5598410593993685894ull);
    vlSelf->__PVT__sdram_dq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10123542867212601932ull);
    vlSelf->__PVT__gpio_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3528322381442655819ull);
    vlSelf->__PVT__gpio_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 629115553822814742ull);
    vlSelf->__PVT__gpio_seg_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2874352041989383406ull);
    vlSelf->__PVT__gpio_seg_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11660916694634843299ull);
    vlSelf->__PVT__gpio_seg_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3355026330325360832ull);
    vlSelf->__PVT__gpio_seg_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12579448052773675551ull);
    vlSelf->__PVT__gpio_seg_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2598781719187582241ull);
    vlSelf->__PVT__gpio_seg_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18317550120865695721ull);
    vlSelf->__PVT__gpio_seg_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6828238858359763151ull);
    vlSelf->__PVT__gpio_seg_7 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4021738834285570565ull);
    vlSelf->__PVT__ps2_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416932302485436191ull);
    vlSelf->__PVT__ps2_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12987539744063830537ull);
    vlSelf->__PVT__vga_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2055607138462276192ull);
    vlSelf->__PVT__vga_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5773750216550251743ull);
    vlSelf->__PVT__vga_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17771436561197612375ull);
    vlSelf->__PVT__vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248359358575596599ull);
    vlSelf->__PVT__vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10946138257059144876ull);
    vlSelf->__PVT__vga_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 189766124944320893ull);
    vlSelf->__PVT___apbxbar_auto_anon_out_5_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11677220136904898042ull);
    vlSelf->__PVT___apbxbar_auto_anon_out_5_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3598144243487195648ull);
    vlSelf->__PVT___apbxbar_auto_anon_out_0_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15953252834920463411ull);
    vlSelf->__PVT___apbxbar_auto_anon_out_0_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15153714106356751687ull);
    vlSelf->psram_dio__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18078776649995427933ull);
    vlSelf->psram_dio__en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2394873121988885869ull);
    vlSelf->sdram_dq__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5106991934345852594ull);
    vlSelf->sdram_dq__en = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14748481808244907759ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15089176763799671615ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5866171623313431798ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 649398297178935885ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15450014840472770701ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7932843886712890013ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9623571337498339506ull);
    vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6953271025114686175ull);
    vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3670478953301297784ull);
    vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17540428667260160248ull);
    vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12948352526348496915ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_0_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1171840972791057391ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12929392060266173242ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8662487427123979724ull);
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6016739304919224055ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15205076619448782207ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14313767752101177655ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_1_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8301469880323453895ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14930748275988917806ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16548697367335644057ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 668830792982427031ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4433541097258821392ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_2_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15469070718510499453ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12019740019127383238ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5097778021787831754ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17659882400549553254ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10260846214820916966ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_3_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8051363839856272049ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3614333750212439194ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17186450973968965220ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15707149411922886480ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484473393115370550ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_4_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15074255894959169230ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9472281667868783641ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4377548267964126877ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5797608840446815879ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 499880712434501245ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_5_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 196315390031270672ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8776133202712571985ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9972514395381915681ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15642270744505893350ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4657694278968090251ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_6_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11265127646353220959ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2816009239071455990ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9074333727993948295ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2251469999464045075ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14800825948033012620ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_7_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10881774215488630278ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13052255828798601875ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6194989966776162594ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11890659895643287113ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10694520639157387910ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_8_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5713968082519582330ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11303856981310684607ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4301383595430057705ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11291821528894718461ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3619486137627459041ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_9_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8082863651685605248ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8507351786283496877ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9315255976117463031ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4848569959249849605ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4282277835841815097ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_10_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11296974305959560267ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14121409855811633992ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6794970176832056530ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3192590060449004010ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1561672849636751674ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_11_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8645506096078344273ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18120851600936324563ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507505910749582277ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13534154735639557814ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1590908585069906588ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_12_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14138065732299385004ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2187742343785805447ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5244107058204786522ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5057684374980170319ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18129339298501101293ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_13_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11649759266282072271ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7546982577713845652ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5412072013763093858ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2541476074559590984ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 256236955038958693ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_14_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12611432710826442541ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8458205565679699699ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9921668346186142250ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8713855414588311765ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1839632269047933109ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16556276677235654384ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6041968671142576513ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10785547459077151400ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1825586337522871770ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 346353962609707070ull);
    vlSelf->__PVT__axi4xbar__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14291200013716186704ull);
    vlSelf->__PVT__axi4xbar__DOT__in_0_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9320174922687932834ull);
    vlSelf->__PVT__axi4xbar__DOT__latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9209520238461134478ull);
    vlSelf->__PVT__axi4xbar__DOT__idle_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6283930424105716910ull);
    vlSelf->__PVT__axi4xbar__DOT__anyValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3338663373188252579ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15395527161901467310ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7010718539035048454ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_unready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5327636134342098688ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_readys = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 915091841685356507ull);
    vlSelf->__PVT__axi4xbar__DOT__prefixOR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13655619057206656423ull);
    vlSelf->__PVT__axi4xbar__DOT__winner_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15938168572649865132ull);
    vlSelf->__PVT__axi4xbar__DOT__state_2_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3616309283688425490ull);
    vlSelf->__PVT__axi4xbar__DOT__state_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14536887185364796978ull);
    vlSelf->__PVT__axi4xbar__DOT__muxState_2_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6289207575164090551ull);
    vlSelf->__PVT__axi4xbar__DOT__muxState_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10451183512591441528ull);
    vlSelf->__PVT__axi4xbar__DOT__idle_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2495085723420348198ull);
    vlSelf->__PVT__axi4xbar__DOT__anyValid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14665212957597047368ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_valid_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15729069533190745704ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_mask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14521966491825129938ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_unready_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17976375511948721535ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_readys_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10874008820459512089ull);
    vlSelf->__PVT__axi4xbar__DOT__winner_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14429219634250155735ull);
    vlSelf->__PVT__axi4xbar__DOT__winner_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6848311591795756249ull);
    vlSelf->__PVT__axi4xbar__DOT__state_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15369217587818450018ull);
    vlSelf->__PVT__axi4xbar__DOT__state_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9938968759587118637ull);
    vlSelf->__PVT__axi4xbar__DOT___readys_mask_T = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8722523329213524662ull);
    vlSelf->__PVT__axi4xbar__DOT___readys_mask_T_5 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9508993853944680163ull);
    vlSelf->axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16941371637842739535ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4706039881568057183ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2794002858011591390ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17415620399727833574ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2764611420372583930ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14387218296413564052ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2220966597068785412ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11735373242389755561ull);
    }
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14233877267724937349ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2708905533281378870ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11309248002135237950ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6585461086534017042ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7295039832326570645ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3438514570129384237ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 500522115054088244ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5433701295158137500ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16954952008417704501ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6397316345175946549ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1255380734012332000ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15147203262030162559ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6946249344814826708ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15587166174961684900ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14358404171601536373ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18119774381611045325ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18215176247651285330ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12408886324655281962ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3767981758833376674ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13400119076519056801ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11845486675392985350ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8623276702187890306ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3888187932698055437ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4129089087754105157ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9787553520583950673ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12073713726128151206ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6909295354113232405ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13347691880109481321ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9392515379129677418ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9809801357063897308ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12241681196938358540ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5015183583987739682ull);
    vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477282257252305896ull);
    vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8117135545533775490ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2459399174123510491ull);
    vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5654326624599730792ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3676850980961660111ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3442094997372261258ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 733732335676170786ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9936533001283364459ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13987619927028701577ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9171017818510247772ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9584240792751406046ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1051870242998091557ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9425704770602297121ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 305233479866474037ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13279740345553062005ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11568908477072301208ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10959191540981881920ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7235851647992490670ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9194776536644650710ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9720429070833387705ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 745945954578421444ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2216843708953187680ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4986761146728321756ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15961332007564360498ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6569189486537373886ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10894785164721756129ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16079346211722722055ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4842741206565677155ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4398015511010296706ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9997694511843418433ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18127139038502717111ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15253128207687174916ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370331626889823804ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13677529846012156660ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11690756913978539133ull);
    vlSelf->__PVT__axi4xbar_1__DOT__latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9567330264774228074ull);
    vlSelf->__PVT__axi4xbar_1__DOT___anonIn_awready_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15803594098179028950ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2903800529778097111ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15116494101157677741ull);
    vlSelf->__PVT__axi4xbar_1__DOT__idle_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13953615042175146246ull);
    vlSelf->__PVT__axi4xbar_1__DOT__anyValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15573218994569573210ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16472849743258188670ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_mask = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8324826955126768166ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_unready = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13695295949666821284ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 549549167709074317ull);
    vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16638241922990876910ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8890091044770774138ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16729852789540213089ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5328171774502030811ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 402811521083892530ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 896592834675732310ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5859750171550807911ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4326981574198161292ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15389507061229983698ull);
    vlSelf->__PVT__axi4xbar_1__DOT__idle_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6554304493003137518ull);
    vlSelf->__PVT__axi4xbar_1__DOT__anyValid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4462377153285318706ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_valid_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4238195463066033210ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_mask_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11340536702687096462ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_unready_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8929736816866525101ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17502729741328287526ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6658266417275293438ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413187434859631569ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13042605641223795615ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9501865779409320547ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5394437782959648758ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7962235001441157996ull);
    vlSelf->__PVT__axi4xbar_1__DOT___readys_mask_T_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16044272913414857523ull);
    vlSelf->__PVT__axi4xbar_1__DOT___readys_mask_T_11 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16133865883351717127ull);
    vlSelf->axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7406898261132086549ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11152740934140264139ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249942609780989366ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 527268637287294890ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1643461519614714705ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1643174249176325222ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11402933686797186763ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13438695119561147112ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11148821316110933953ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12029732923110758721ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7590117786640122871ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17834932667324152170ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13590950197929583311ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8777405397315111564ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12338873418343150834ull);
    }
    vlSelf->__PVT__apbxbar__DOT__sel_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13144884058532894402ull);
    vlSelf->__PVT__apbxbar__DOT__sel_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7137123927387472366ull);
    vlSelf->__PVT__apbxbar__DOT__sel_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15850093552363793635ull);
    vlSelf->__PVT__apbxbar__DOT__sel_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6109157710635756677ull);
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13224835019005729492ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15545975582701117116ull);
    }
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10047532407834246991ull);
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__reg_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6519417518925903368ull);
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2176921942008642045ull);
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9297957095283630748ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2086804620451178011ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14513230597596227125ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17107485752177783072ull);
    }
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9476837361234249048ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6554624006040588906ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15429411584649953314ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13890081889793144679ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__pop_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8568506670864641515ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4135773306332554955ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13197843305863919594ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__next_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 903581302357498322ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5937660539971531956ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6190015133185259762ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__in_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2655765355461865813ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__vga_data = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11805507846535862600ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__h_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12542713249617522331ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__v_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11746626115182148628ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 53380169274943626ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4751228119108564068ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16607061152432848089ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12709805147687894710ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__h_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9267836749288648392ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__v_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10072357056719766281ull);
    for (int __Vi0 = 0; __Vi0 < 307200; ++__Vi0) {
        vlSelf->__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11850330312921631124ull);
    }
    vlSelf->__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 2557798870371193149ull);
    vlSelf->__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 3453386451593313220ull);
    vlSelf->lvga__DOT__mvga__DOT__vmem_inst__DOT____Vlvbound_heacdd1d6__0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13554535694831031685ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14947606545221717669ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6020510856435459155ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_irq_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430036266177605201ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9239967481689119534ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13318847950166602255ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipmaster_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1656275842874012153ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8683893471510835457ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2778827157181703254ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3787482632565644986ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_paddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13981206695556973355ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17688755574716255931ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 746929911960616800ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_pprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18212789910506773493ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2471226236914938445ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 825813096968621415ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13329841106779100388ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17230386875922262110ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9919241297417191568ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9346240541311208647ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_paddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10895526426234369575ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14606263340497016811ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3931742555249857488ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_pprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3105759954731150545ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15280025090122457943ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4680608670742559194ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16067039324913389725ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7326895321633703521ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16206068699665685661ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1708012172863569297ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3134516744196061117ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13240614590552711052ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14960549765586660509ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13146477883632782344ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4817836469840890607ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13297202417738205769ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11380752242270308976ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16553785554212527424ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14786973021596341852ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14628123025920674135ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14066435969600306028ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18011931704600844600ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18035318597484894851ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7182621837834799556ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5108930333879693856ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4390908510840700349ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857023280675280487ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2947762610981105494ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13181664840117216337ull);
    vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15180561320548758472ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 644590376845719635ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3910474596669945300ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13242777201522184984ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17182997472542660373ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data, __VscopeHash, 10769708346121256460ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7061366722750831970ull);
    vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14678237983754486466ull);
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12640074304527478642ull);
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18066281370162488641ull);
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5905316872117239945ull);
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1449387635132607376ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14352061369924704006ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10749744228659382317ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14244029713671749022ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1226391295030814377ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12085310864243416710ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14409493214508509652ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7288907944600200523ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10095081171821249374ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15672297079786849916ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10494147561354863401ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17678433956876312254ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1695570284577403937ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4484322718979620543ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16584314446927072343ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 902238868347573212ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7294232726199591053ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7329763989879975223ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15620573805283309268ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2420868887699628807ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16219307545402697637ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10462407614607110856ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7139493472168904540ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10710088029662621911ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5026997017867721311ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2509803642007340976ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10525754312349505601ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14454070706119894543ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11323854015692722732ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5836925311249682659ull);
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12131206599252518318ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13779008715875506105ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16247186253368122284ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6969201264129342485ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7532633752303489210ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13255903205787753925ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17774245124012736743ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8268692566292746049ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5840087727773052590ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11587695573674270162ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6653877548299490913ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2141861447626660033ull);
    vlSelf->__PVT__lmrom__DOT___mrom_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8269513320011078604ull);
    vlSelf->__PVT__lmrom__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12538910612361852885ull);
    vlSelf->__PVT__lmrom__DOT___nodeIn_rid_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2465331029963038942ull);
    vlSelf->__PVT__lmrom__DOT__nodeIn_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16343562938298624082ull);
    vlSelf->__PVT__lmrom__DOT__nodeIn_rid_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13447699915520454923ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15275119439118525320ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8385235729546720451ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12396675415353897926ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9168274888155058988ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4532751074915866218ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 176957929463088331ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2944649196628726490ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17814158195767175491ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14002778633473449945ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15631438950027333035ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4911931088639203053ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4731839020138181041ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8086843173865010078ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17612134413798491578ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16462123947140920042ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15929410681137419963ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13143557386647492427ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12080913690512304525ull);
    vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10786870802602135262ull);
    vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9967936958318301724ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1736500143003842435ull);
    }
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8896100628442971692ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17089710772624571781ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14344358053377770395ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14490398404835820888ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13857687836852211880ull);
    }
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16182563278401105963ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12013149338896254085ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4014024846427432041ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 911394274096374449ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17122763385268190046ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9500523384271893108ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6499937604036296972ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2106541262216514204ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14454462382758469798ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7986073571300779202ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8132550721847657236ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18183126636228192780ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15416138805471912279ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10837177187817497255ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7869142690573851235ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9036735674702327801ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16192417219990616562ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2601429083664836829ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4568815702093272841ull);
    }
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11472190568306441867ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11357437701224297739ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1912514789972375656ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10879792806128553897ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3459757099485154755ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3368394693004835608ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8481124349550908587ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1625210357854589017ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15364966232344856435ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12534772634949524803ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13842872167150269340ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6557795301068587209ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12261961897518824315ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state, __VscopeHash, 289357288136558161ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2240829980980816492ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14180421746262956313ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10652483792995584874ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2306506868134122868ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12027837813733014949ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16263267993403088176ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17129012749913784217ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__prdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5144263226362657952ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__pslverr_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304347686000864082ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__pready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10485841580197117934ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8081982214013582603ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13769396185752909130ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2937454572414227156ull);
    vlSelf->__PVT__axi42apb__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9705982954278384235ull);
    vlSelf->__PVT__axi42apb__DOT__is_write_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13282392738077469896ull);
    vlSelf->__PVT__axi42apb__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1782235127049144666ull);
    vlSelf->__PVT__axi42apb__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13619464707757450994ull);
    vlSelf->__PVT__axi42apb__DOT__bid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13413470870835230633ull);
    vlSelf->__PVT__axi42apb__DOT__araddr_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6928674691592159332ull);
    vlSelf->__PVT__axi42apb__DOT__awaddr_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13033263405455353723ull);
    vlSelf->__PVT__axi42apb__DOT__wdata_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10637637094925341150ull);
    vlSelf->__PVT__axi42apb__DOT__wstrb_reg_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15595579111481911611ull);
    vlSelf->__PVT__axi42apb__DOT__resp_hold_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11405795289863029789ull);
    vlSelf->__PVT__axi42apb__DOT__nodeIn_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18021486804095963948ull);
    vlSelf->axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15343533361948994505ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10473559554540846271ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6009209921835948708ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1334162424865939345ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5914730436684399377ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15627690729488627474ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11426978863129901647ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8949135287553301380ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 8435876338929436445ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6479512917478854077ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 6722162307770867881ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15829757596783642315ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10012402223297907014ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 155311503405793468ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2902559057465854056ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17469750220144702840ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4509930728987144832ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6545172325795084172ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17200701630096091092ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7126820896802709372ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17389595912783741573ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12016671503647130378ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652857676324253907ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11963558665106695175ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11925671675748610106ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261238333846256683ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15408785672033939971ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14176054862926624424ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2584253771658303941ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4726306879313295812ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16634360690938854049ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707325519967678822ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1218111669468671305ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5011241247775211647ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3340012332524401678ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15545343086066800433ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16012712260378215411ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 8808128999976665913ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10682400441049668684ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 14518328525426037818ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9479499258135999557ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1202565026854317049ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 281670130642337980ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17006836825506309867ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10641183153888172782ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15593391246998215545ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 15523847266823868013ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9435620111580845335ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 3840303790117310275ull);
    }
    vlSelf->__PVT__axi4yank__DOT__auto_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10501332893727281197ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16135762463848210548ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_becho_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7909159083332648406ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4305813420536112759ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14465717790717139109ull);
    vlSelf->__PVT__axi4yank__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11287258723003218366ull);
    vlSelf->__PVT__axi4yank__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 56214351358520509ull);
    vlSelf->__PVT__axi4yank__DOT__casez_tmp_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6731239243288615705ull);
    vlSelf->__PVT__axi4yank__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5453648397764305320ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5708096578856462032ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2156363974662462633ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5001013588039595999ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6613003400846535873ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10774687401169883704ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11273991983295946464ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2646260310797893723ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13017360852177370074ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14712028299855425648ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2955732254440675370ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5634716237171944524ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3711620899680738347ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771641218542564208ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2055394051220304886ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18181655508869634069ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9500182134102357217ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 385732355052406528ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2664657577512162589ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12602938014975077900ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973783206474239267ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10574126881363015200ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8544965800987274218ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11743692550761793006ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12361375481864400332ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5190567631181843613ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15671356132876390319ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2940727018221791912ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9116957328584618512ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7628592422185269851ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11017388892716131080ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2183750440762471012ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15730586661451695830ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2379831817431122186ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18427737508033020185ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16628598530681168390ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13901223014718152325ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3680838996457700985ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17769632216195591091ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9411772542566315314ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9754782679679598032ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4123952036633559227ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13062677180360193290ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11501841644440761316ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4492216044628107580ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12144853598366136103ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14983399035807249178ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8097950737411044833ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7851537227260820138ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12499197937140330414ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10826824189634360568ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16259387012763738816ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8672662269621042735ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2792002159562400978ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16121049870606753598ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10313535917575674609ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2236990070705637266ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15533785342802256430ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6138498411769188003ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10451711220545752526ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8629935159108098014ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786246882904579443ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2734526763126950068ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3787779361864970425ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 851641892983717966ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3440495541263622469ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2635535611848975679ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2547234677541754215ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432599379228026236ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12341126575748663334ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8972499417820563306ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3207820082451997562ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2838801216601279407ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14450911160607083741ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13316635701147776132ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14559840800544907372ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4066970897326447951ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4879581073225072051ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16449109838938249133ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15348017994995236928ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483885531999238877ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8738038222889152396ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16655776964861579773ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13766138549646311554ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11785124749533049678ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7291599169132689142ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2591552362134554453ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10139725809326181682ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4100679739509213807ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9742230619288848763ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12013445183872236127ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4702254584442951888ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18424453928451571772ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12877723794726648617ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13169853355199507652ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16359905854886062049ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9368454468513368994ull);
    vlSelf->__PVT__axi4frag__DOT__in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4865407170250188201ull);
    vlSelf->__PVT__axi4frag__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10745835378753525736ull);
    vlSelf->__PVT__axi4frag__DOT__r_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10728191224477161096ull);
    vlSelf->__PVT__axi4frag__DOT__r_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3397924650130307068ull);
    vlSelf->__PVT__axi4frag__DOT__len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13891361751467243637ull);
    vlSelf->__PVT__axi4frag__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17287245906237107622ull);
    vlSelf->__PVT__axi4frag__DOT__busy_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6836227137600612328ull);
    vlSelf->__PVT__axi4frag__DOT__r_addr_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13977799707640653293ull);
    vlSelf->__PVT__axi4frag__DOT__r_len_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8574245513625628631ull);
    vlSelf->__PVT__axi4frag__DOT__len_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5321446280744316141ull);
    vlSelf->__PVT__axi4frag__DOT__addr_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11301749099445859812ull);
    vlSelf->__PVT__axi4frag__DOT__wbeats_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14796538934206825436ull);
    vlSelf->__PVT__axi4frag__DOT___in_awready_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3403373395936943084ull);
    vlSelf->__PVT__axi4frag__DOT__wbeats_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 394466718039040619ull);
    vlSelf->__PVT__axi4frag__DOT__w_counter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7601535065274091641ull);
    vlSelf->__PVT__axi4frag__DOT__w_todo = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17318959709654242339ull);
    vlSelf->__PVT__axi4frag__DOT__error_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3065784586732102436ull);
    vlSelf->__PVT__axi4frag__DOT__error_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8288690046960877048ull);
    vlSelf->__PVT__axi4frag__DOT__error_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6173050324282269962ull);
    vlSelf->__PVT__axi4frag__DOT__error_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5884551215470585874ull);
    vlSelf->__PVT__axi4frag__DOT__error_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11537824275499491770ull);
    vlSelf->__PVT__axi4frag__DOT__error_5 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5002828241599292632ull);
    vlSelf->__PVT__axi4frag__DOT__error_6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13712279207882116092ull);
    vlSelf->__PVT__axi4frag__DOT__error_7 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7582959006385210138ull);
    vlSelf->__PVT__axi4frag__DOT__error_8 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4509066877090620848ull);
    vlSelf->__PVT__axi4frag__DOT__error_9 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16977831730550723145ull);
    vlSelf->__PVT__axi4frag__DOT__error_10 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13616920035842303278ull);
    vlSelf->__PVT__axi4frag__DOT__error_11 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14558151013821758798ull);
    vlSelf->__PVT__axi4frag__DOT__error_12 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5863668210220186118ull);
    vlSelf->__PVT__axi4frag__DOT__error_13 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2338794397144378409ull);
    vlSelf->__PVT__axi4frag__DOT__error_14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11193113482524549845ull);
    vlSelf->__PVT__axi4frag__DOT__error_15 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5359719667847588185ull);
    vlSelf->__PVT__axi4frag__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8611091133557170290ull);
    vlSelf->__PVT__axi4frag__DOT___inc_addr_T_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2124020264688527593ull);
    vlSelf->__PVT__axi4frag__DOT___wrapMask_T_1 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2315715410420910185ull);
    vlSelf->__PVT__axi4frag__DOT___inc_addr_T_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18244505756208387209ull);
    vlSelf->__PVT__axi4frag__DOT___wrapMask_T_3 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3856376023164697899ull);
    vlSelf->__PVT__axi4frag__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14622607116890465418ull);
    vlSelf->__PVT__axi4frag__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3942340426014686267ull);
    vlSelf->axi4frag__DOT____VdfgRegularize_h068021ff_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5661712653793753369ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448437204350866794ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15191973429072750448ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1078507717654028640ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15787590159320253643ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2071281573748040089ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7156776479898679472ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2003412297482940060ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7073261893804222976ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8760903768923569129ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17549547853796018041ull);
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 6942967700032419406ull);
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483347222006255888ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17930765101099564685ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16778799026259535744ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15128210253940889122ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12520931381096939888ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7943575502613754854ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6624234593778603172ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8469852520640081399ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13690734601485260595ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8738782905053754660ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__out_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15757709990103847408ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__out_rvalid_w[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14110375577096443105ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__in_rvalid_w[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 29092580446337921ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__in_rready_w[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5743925690192640093ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__out_rid_w[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5920403702074787524ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__in_rid_w[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2503163935061909428ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__out_rdata_w[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18374039883140266241ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__in_rdata_w[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5251223945588472217ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__out_rresp_w[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9698099330595157543ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__in_rresp_w[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3164596647361673909ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__out_rlast_w[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 851347068371764913ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__in_rlast_w[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13547296230231939755ull);
    }
    vlSelf->axi4delay_delayer__DOT____Vcellinp__inst_u0__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12690946741471256861ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__rcnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4668773096778217127ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__rrcnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10225505547657123958ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__wstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1895722647270648580ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__wnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16153475507432588635ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__wcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12860879129620548030ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__bvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14617779326136707274ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__bid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15670354549253301671ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__bresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11781771667419878077ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15398849846274469037ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9491691659102203925ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8672279312616292592ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14790217752628335800ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18268281834043351271ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 381037072519946008ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8507771440700170132ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2521227500136668846ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7940584204096734507ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17905502216367223760ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8777724254238496763ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4364528663046801634ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2338618794727955351ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6729097408307358746ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 361538968437704716ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447692256801523540ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11932789731680948071ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17443929635652843892ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12718227715896743489ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5947434460826677529ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2900793953374900222ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 494892384097561189ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2390422329159504416ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5574418722792731186ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15936182880727870433ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11547625054248811038ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3753391617653796480ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14570611855856403258ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18247171267969944582ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17840454626669454428ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10580763254434657441ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5717754711451572717ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18440080817814019542ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11892673839804059057ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14214854675273479382ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9527757335576101243ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14273975366220328041ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16585571742597231230ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 192847292024942870ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6985225639479091620ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5065205315515676335ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4969145760399907964ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6993280527503388556ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5534608219823047355ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10371050722499026051ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17077837111768452729ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6685863664186127417ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8109483436227588743ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7547348593457277602ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16529998425898910640ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9632095177281172322ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734335292067979024ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18113761799868343661ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4881966539031284476ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1980799411098183711ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15681039932660751436ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16139150642889802618ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13617842078997721834ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2723612512168226754ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7896411318440611061ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7291067626973728690ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 240094824991918730ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12446838229972570140ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 538178947515341171ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2499281002870651116ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2952638959440642576ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4948733298848821259ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15967494603154266028ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13363723656155194708ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6868957792866498902ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 549526255823108078ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13846147999858494154ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17710182880326305479ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18041064818993644634ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8332504921881196731ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12874614514624055352ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1228854127514012739ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11611640570458613822ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4436852690535856602ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10384285807576733755ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2177458283317954047ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3493067868359925630ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6678158528540303751ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5938176321275643776ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2663055364062865032ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4700450475577750111ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6444008539627269644ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17757623855165446761ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1683185563728003745ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4640928436200916181ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1623684469805097727ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6763154781538972728ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9514179175007871791ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10180076284954773953ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16441016057844384370ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17628109161959643690ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5855020167777414077ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11507862319698142858ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5674814037779899266ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2970213372125473065ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3694996232412015035ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13024104096377969435ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8754609232764417811ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2302728856754090738ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13433152081590292273ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12024647850271718154ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13765131017024286782ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7829207861026958431ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10209384675067581121ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4291873453183600658ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3361747725652637542ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13957801796362562013ull);
    vlSelf->__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5436679966404447934ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3200168928706324905ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15568623173444751622ull);
    vlSelf->__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11001034041764109979ull);
    vlSelf->__Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18229491971839175393ull);
    vlSelf->__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11209322346633792936ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u0__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9361199787657857069ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u1__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13546706434970251749ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u2__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5428655802591081545ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u3__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6205805291078056045ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u4__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14313762359382806849ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u5__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15534529097582156532ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u6__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14036563467125365591ull);
    vlSelf->__Vdly__axi4delay_delayer__DOT__inst_u7__DOT__rcnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17505101486247570465ull);
    vlSelf->__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v0 = 0;
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11587881023301601311ull);
    vlSelf->__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8 = 0;
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6594840030668435079ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v10 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10000529351983139508ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v11 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9739246132155602671ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v12 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17695924880515853384ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v13 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14751451902004593046ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v14 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10807788681470296456ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v15 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16189628835158501166ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10116546558957924966ull);
    vlSelf->__VdlyDim0__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10316357292342259005ull);
    vlSelf->__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16 = 0;
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 544037068143359102ull);
    vlSelf->__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17 = 0;
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v18 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8164531005828629091ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v19 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1423248531315688119ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v20 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15301601761736339246ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v21 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11068755031765935045ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v22 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8124282053254579179ull);
    vlSelf->__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v23 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10437837428099247992ull);
    vlSelf->__VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 880866316606921347ull);
    vlSelf->__VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5219721827276679795ull);
    vlSelf->__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
}

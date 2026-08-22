// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0;
    CData/*3:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__cnt;
    __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0;
    // Body
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
        = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
    __Vdly__lkeyboard__DOT__mps2__DOT__cnt = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt;
    if (vlSymsp->TOP.reset) {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt))) {
        if (vlSymsp->TOP.externalPins_ps2_data) {
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
        } else {
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 1U;
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0U;
        }
    } else if ((9U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt))) {
        if ((1U & ((IData)(vlSymsp->TOP.externalPins_ps2_data) 
                   ^ VL_REDXOR_16((0x01feU & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg)))))) {
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
                = (((IData)(vlSymsp->TOP.externalPins_ps2_data) 
                    << 8U) | (0x000000ffU & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg) 
                                             >> 1U)));
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt)));
        } else {
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0U;
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
        }
    } else if ((0x0aU == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt))) {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
            = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
        __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
    } else {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
            = (((IData)(vlSymsp->TOP.externalPins_ps2_data) 
                << 8U) | (0x000000ffU & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg) 
                                         >> 1U)));
        __Vdly__lkeyboard__DOT__mps2__DOT__cnt = (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt)));
    }
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt 
        = __Vdly__lkeyboard__DOT__mps2__DOT__cnt;
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
        = __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u0__DOT__rcnt;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u1__DOT__rcnt;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u2__DOT__rcnt;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u3__DOT__rcnt;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u4__DOT__rcnt;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u5__DOT__rcnt;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u6__DOT__rcnt;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt 
        = vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u7__DOT__rcnt;
    if (vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate = 0U;
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state;
    }
}

extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h45f54a83_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U)) : vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r);
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelfRef.__PVT__axi42apb__DOT__is_write_r));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata 
        = vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata;
    if (vlSelfRef.__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[vlSelfRef.__VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = vlSelfRef.__VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read 
        = vlSelfRef.__Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read;
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v0) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v9;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v10;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v11;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v12;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v13;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v14;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v15;
    }
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[vlSelfRef.__VdlyDim0__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16;
    }
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v18;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v19;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v20;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v21;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v22;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v23;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7U] = 0U;
    }
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
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read) 
           == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
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
    __VdfgRegularize_h6e95ff9d_0_33 = ((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
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
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state))
            ? (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
                & (IData)(__VdfgRegularize_h6e95ff9d_0_33))
                ? 1U : (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                         & (IData)(__VdfgRegularize_h6e95ff9d_0_33))
                         ? 2U : 0U)) : 0U);
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x0000000dU)) : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q);
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
    vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q 
                                 >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
            ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U)) : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q);
    vlSelfRef.__PVT__axi4frag__DOT__addr_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                               ? vlSelfRef.__PVT__axi4frag__DOT__r_addr_1
                                               : vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_2 
        = (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
            | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
           & (((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count)) 
               | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_last) 
                  == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
              & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count))));
    vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_3 = 
        (vlSelfRef.__PVT__axi4frag__DOT__addr_1 + (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x0000001eU 
                                            & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000001bU)))) 
                               | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                        >> 0x00000018U)))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid) 
         & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_2));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits));
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
}

extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h6c27f87a_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hb60b2f22_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h1d37f4c7_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_he6c51f5f_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h9ba4c414_0;

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_1;
    __PVT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_3;
    __PVT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    // Body
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg) 
            << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                                                  | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w
        [vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt];
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w
        [vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt];
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
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
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
    __PVT__axi4xbar__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1)) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid = 
        (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid) 
          << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                                | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vga_data 
        = (((0x01e0U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr)) 
            & (0x0280U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr)))
            ? ((0x0004afffU >= vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr)
                ? vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram
               [vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr]
                : 0U) : 0U);
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
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
            ? (0x16U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
            : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                  ? (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                  : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)));
    vlSelfRef.psram_dio__en = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten));
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
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    __PVT__axi4xbar__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask)) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
            ? (((1U != (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
                & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                   ? 1U : 2U) : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
                                                  ? 
                                                 ((1U 
                                                   > vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
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
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1))));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask) 
              << 2U));
    __VdfgRegularize_h6e95ff9d_0_2 = ((2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)));
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
    vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T_5 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg));
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
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys = 
        (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready) 
                   >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready))));
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
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite))));
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
    vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)
                    ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid)
                    ? 2U : 1U) : (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
                                   | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid))
                                   ? 1U : 0U)));
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
    vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid));
    vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid));
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
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp = 
        ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
          ? ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
             << 1U) : (IData)(vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
            & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)) 
           | (2U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
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
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready)) 
           | (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid) 
               & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)) 
              | ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3))));
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

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bvalid));
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
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
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
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid)));
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
                                              & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid)));
}

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arburst));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arlen));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arsize));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_araddr;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_araddr 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_araddr 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_araddr 
                                                      >> 0x0000001cU))))));
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_araddr 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_araddr 
                                 >> 0x0000001cU)))));
    if (vlSelfRef.__PVT__axi4frag__DOT__busy) {
        vlSelfRef.__PVT__axi4frag__DOT__len = vlSelfRef.__PVT__axi4frag__DOT__r_len;
        vlSelfRef.__PVT__axi4frag__DOT__addr = vlSelfRef.__PVT__axi4frag__DOT__r_addr;
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__len = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
        vlSelfRef.__PVT__axi4frag__DOT__addr = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
    }
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_1 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize)));
    vlSelfRef.__PVT__axi4xbar__DOT__casez_tmp = ((8U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arid))
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
           & (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
               | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
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
              & ((4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid)) 
                       | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T = ((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                                                  & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)));
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
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q 
                            = (0x0000000fU & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i)));
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
            } else {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0x0000000aU));
                if ((9U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                 >> 0x0000000bU));
                }
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (7U & 0U);
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                } else {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x000001ffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                          >> 2U));
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                 >> 0x0000000bU));
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 4U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (7U & 0U);
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x000001ffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 2U));
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                             >> 0x0000000bU));
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x00001fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 0x0000000eU));
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                             >> 0x0000000bU));
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 3U;
            } else {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        } else if ((0x00000032U != vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            if ((0x00000028U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x00000400U | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
            } else {
                if ((1U & (~ ((0x00000014U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                              | (0x0000001eU == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = ((0x0000000aU == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                            ? 0x0020U : 0U);
                }
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = (((0x00000014U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                        | (0x0000001eU == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))
                        ? 1U : ((0x0000000aU == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                 ? 0U : 7U));
            }
            if ((0x00000028U != vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                if ((1U & (~ ((0x00000014U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                              | (0x0000001eU == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                    if ((0x0000000aU != vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    }
                }
            }
        }
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
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
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o 
        = ((4U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o) 
           & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
                ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                   [0U] ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt)
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
                   [1U] ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt)
                                       ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                                          [1U] ? 0U
                                           : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready)
                    ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt)
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
                    ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt)
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
                    ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt)
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
                    ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt)
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
                    ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt)
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
                    ? 0U : 3U) : ((1U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid))
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q)
            : 0U);
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q
                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_araddr));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
              & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2)));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
            | (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i))) 
           & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i)) 
           | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready = (1U 
                                                   & (((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                                                      | (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                                          >> 1U) 
                                                         & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready));
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
            if ((((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
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
            } else if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
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
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awready = 
        (((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
          & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0)) 
         | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__6\n"); );
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

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

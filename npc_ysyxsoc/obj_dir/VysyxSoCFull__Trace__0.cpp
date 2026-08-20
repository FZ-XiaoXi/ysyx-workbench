// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VysyxSoCFull___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid),4);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen),8);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[0]),2);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[1]),2);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[2]),2);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[3]),2);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[4]),2);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[5]),2);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[6]),2);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[7]),2);
        bufp->chgSData(oldp+10,((0x0000ffffU & ((IData)(1U) 
                                                << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)))),16);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [0x0000000dU])))) {
        bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+12,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0)))));
        bufp->chgBit(oldp+13,(((~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1))) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_awready))));
        bufp->chgBit(oldp+14,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4frag__DOT____VdfgRegularize_h068021ff_0_0))));
        bufp->chgBit(oldp+15,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__VdfgRegularize_h9fc36335_0_0))));
        bufp->chgBit(oldp+16,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)))));
        bufp->chgBit(oldp+18,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+19,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+20,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+21,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+22,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+23,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+24,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+25,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))));
        bufp->chgBit(oldp+26,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)))));
        bufp->chgBit(oldp+27,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+28,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+29,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+30,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+31,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+32,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+33,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+34,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+35,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+36,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+37,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+39,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+40,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 7U))));
        bufp->chgBit(oldp+41,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 7U))));
        bufp->chgBit(oldp+42,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 8U))));
        bufp->chgBit(oldp+43,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 8U))));
        bufp->chgBit(oldp+44,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 9U))));
        bufp->chgBit(oldp+45,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 9U))));
        bufp->chgBit(oldp+46,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+47,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+48,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+50,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+51,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+52,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+53,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+54,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+55,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+56,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+57,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+58,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+59,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+60,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+61,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+62,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 7U))));
        bufp->chgBit(oldp+63,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 8U))));
        bufp->chgBit(oldp+64,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 9U))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [0x00000012U])))) {
        bufp->chgBit(oldp+65,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                                     & (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready)))))));
        bufp->chgBit(oldp+66,((1U & (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                         >> 1U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready))))));
        bufp->chgBit(oldp+67,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))));
        bufp->chgBit(oldp+68,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+69,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+70,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+71,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+72,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+73,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+74,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+75,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+76,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+77,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+78,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+79,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+80,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 7U))));
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 8U))));
        bufp->chgBit(oldp+82,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 9U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int));
        bufp->chgCData(oldp+85,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_value),8);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_pad_o));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__serial_in));
        bufp->chgBit(oldp+88,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int))));
        bufp->chgBit(oldp+89,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int))));
        bufp->chgSData(oldp+90,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+91,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__toc_value) 
                                                >> 2U))),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgIData(oldp+92,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_alu_result),32);
        bufp->chgIData(oldp+93,(((IData)((2U == (3U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__op_and
                                  : ((IData)((1U == 
                                              (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__op_or
                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val))),32);
        bufp->chgBit(oldp+94,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0) 
                               & (0x0eU == (0x0000000fU 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception))))));
        bufp->chgCData(oldp+95,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__WBU_0__DOT__wbu_out_bus_exception),5);
        bufp->chgBit(oldp+96,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0))));
        bufp->chgBit(oldp+97,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0))));
        bufp->chgIData(oldp+98,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__a),32);
        bufp->chgIData(oldp+99,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__a 
                                 ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__b)),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__op_or),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__op_and),32);
        bufp->chgIData(oldp+102,(VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__a, 
                                                (0x0000001fU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__b))),32);
        bufp->chgIData(oldp+103,(VL_SHIFTR_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__a, 
                                               (0x0000001fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__b))),32);
        bufp->chgIData(oldp+104,(VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__a, 
                                               (0x0000001fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__b))),32);
        bufp->chgIData(oldp+105,(((0x00000100U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                   ? (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__a 
                                      - vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__b)
                                   : (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__a 
                                      + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__b))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000cU])))) {
        bufp->chgCData(oldp+106,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst),2);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst),2);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__rready));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_we_i));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_re_i));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_reqValid));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000dU])))) {
        bufp->chgBit(oldp+116,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_bready));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[0]));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[1]));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[2]));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[3]));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[4]));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[5]));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[6]));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[7]));
        bufp->chgCData(oldp+128,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__wnext_state),2);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__ysyxSoCFull__asic.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w
                               [0U]));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w
                               [1U]));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awready));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wready));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_next_state));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel_next));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__W0_en));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid));
        bufp->chgIData(oldp+174,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_rdata),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val1),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val2),32);
        bufp->chgBit(oldp+177,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_condition));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir_read));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr_read));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fifo_read));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fifo_write));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__r_fire));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000fU])))) {
        bufp->chgCData(oldp+184,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize),3);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize),3);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_a),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_b),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.__PVT__csr_out_data),32);
        bufp->chgBit(oldp+189,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__next_state));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000011U])))) {
        bufp->chgBit(oldp+190,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgIData(oldp+191,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr),32);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid));
        bufp->chgIData(oldp+194,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr),32);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arvalid));
        bufp->chgIData(oldp+197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
        bufp->chgBit(oldp+199,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__casez_tmp));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
        bufp->chgBit(oldp+204,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+205,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),28);
        bufp->chgBit(oldp+206,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+207,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),30);
        bufp->chgBit(oldp+208,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgIData(oldp+211,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),32);
        bufp->chgBit(oldp+212,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+213,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___mrom_rdata),32);
        bufp->chgCData(oldp+214,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)
                                   : 0U)),8);
        bufp->chgBit(oldp+215,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
        bufp->chgSData(oldp+216,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                 >> 2U))),11);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000012U])))) {
        bufp->chgBit(oldp+217,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arready));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arready));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq));
        bufp->chgIData(oldp+240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i),32);
        bufp->chgBit(oldp+241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgCData(oldp+244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+246,((0x000001ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                 >> 2U))),13);
        bufp->chgSData(oldp+247,((0x00001fffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                 >> 0x0000000eU))),13);
        bufp->chgCData(oldp+248,((7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                        >> 0x0000000bU))),3);
        bufp->chgCData(oldp+249,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgBit(oldp+250,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_en));
        bufp->chgIData(oldp+251,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_ra_bypass),32);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__flush_valid));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IROM_arready));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_valid));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_in_ready));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__exu_out_bus_dnpc_valid));
        bufp->chgCData(oldp+257,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__exu_out_bus_exception),5);
        bufp->chgBit(oldp+258,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_in_ready));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_arready));
        bufp->chgIData(oldp+260,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_out_bus_rdata),32);
        bufp->chgCData(oldp+261,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__next_state),3);
        bufp->chgBit(oldp+262,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__ar_fire));
        bufp->chgIData(oldp+263,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_rdata1),32);
        bufp->chgCData(oldp+265,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__next_state),3);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__ar_fire));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000015U])))) {
        bufp->chgCData(oldp+267,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state),2);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state),2);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state),2);
        bufp->chgCData(oldp+270,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state),2);
        bufp->chgCData(oldp+271,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state),2);
        bufp->chgCData(oldp+272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state),2);
        bufp->chgCData(oldp+273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state),2);
        bufp->chgCData(oldp+274,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+275,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__cnt),8);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata),32);
        bufp->chgIData(oldp+277,(((((0x0000ff00U & 
                                     (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                      << 8U)) | (0x000000ffU 
                                                 & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                                    >> 8U))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                       >> 8U)) | (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                                  >> 0x00000018U)))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+278,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__counter),10);
        bufp->chgCData(oldp+279,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_command),8);
        bufp->chgCData(oldp+280,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in0),6);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in1),6);
        bufp->chgCData(oldp+282,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in2),6);
        bufp->chgCData(oldp+283,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in3),6);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr),24);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_wdata),8);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
        bufp->chgBit(oldp+288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel));
        bufp->chgBit(oldp+289,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+290,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable))));
        bufp->chgBit(oldp+291,(((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state)) 
                                | (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state)))));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_awready));
        bufp->chgBit(oldp+293,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+294,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+295,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+296,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+297,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+298,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+299,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+300,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))),4);
        bufp->chgBit(oldp+301,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))))));
        bufp->chgCData(oldp+302,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg),4);
        bufp->chgBit(oldp+303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_arready));
        bufp->chgBit(oldp+304,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+305,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+306,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+307,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+308,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+309,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))))));
        bufp->chgCData(oldp+310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+311,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+313,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+315,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+316,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+319,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
        bufp->chgBit(oldp+320,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgCData(oldp+321,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid),4);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr),32);
        bufp->chgCData(oldp+323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize),3);
        bufp->chgCData(oldp+324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst),2);
        bufp->chgBit(oldp+325,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+326,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits))));
        bufp->chgCData(oldp+327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb),4);
        bufp->chgBit(oldp+328,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+329,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+330,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                                                 >> 2U))),4);
        bufp->chgCData(oldp+331,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+332,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgCData(oldp+333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid),4);
        bufp->chgBit(oldp+334,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+335,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x00000023U)))),4);
        bufp->chgIData(oldp+336,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 3U))),32);
        bufp->chgCData(oldp+337,((3U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+338,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
        bufp->chgBit(oldp+344,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))));
        bufp->chgCData(oldp+345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data),6);
        bufp->chgCData(oldp+346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
        bufp->chgCData(oldp+347,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
        bufp->chgBit(oldp+348,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+353,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))));
        bufp->chgQData(oldp+354,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data),39);
        bufp->chgQData(oldp+356,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
        bufp->chgQData(oldp+358,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
        bufp->chgBit(oldp+360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq));
        bufp->chgQData(oldp+367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+373,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq));
        bufp->chgQData(oldp+381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+383,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   << 0x0000002bU) 
                                  | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                      << 0x0000000bU) 
                                     | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))))),47);
        bufp->chgQData(oldp+385,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+387,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq));
        bufp->chgQData(oldp+397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),36);
        bufp->chgQData(oldp+399,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
        bufp->chgQData(oldp+401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
        bufp->chgIData(oldp+403,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q),32);
        bufp->chgCData(oldp+404,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q),3);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q),4);
        bufp->chgBit(oldp+406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[0]));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[1]));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[2]));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[3]));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[4]));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[5]));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[6]));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[7]));
        bufp->chgCData(oldp+414,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[0]),4);
        bufp->chgCData(oldp+415,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[1]),4);
        bufp->chgCData(oldp+416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[2]),4);
        bufp->chgCData(oldp+417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[3]),4);
        bufp->chgCData(oldp+418,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[4]),4);
        bufp->chgCData(oldp+419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[5]),4);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[6]),4);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[7]),4);
        bufp->chgIData(oldp+422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[0]),32);
        bufp->chgIData(oldp+423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[1]),32);
        bufp->chgIData(oldp+424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[2]),32);
        bufp->chgIData(oldp+425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[3]),32);
        bufp->chgIData(oldp+426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[4]),32);
        bufp->chgIData(oldp+427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[5]),32);
        bufp->chgIData(oldp+428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[6]),32);
        bufp->chgIData(oldp+429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[7]),32);
        bufp->chgCData(oldp+430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[0]),2);
        bufp->chgCData(oldp+431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[1]),2);
        bufp->chgCData(oldp+432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[2]),2);
        bufp->chgCData(oldp+433,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[3]),2);
        bufp->chgCData(oldp+434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[4]),2);
        bufp->chgCData(oldp+435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[5]),2);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[6]),2);
        bufp->chgCData(oldp+437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[7]),2);
        bufp->chgBit(oldp+438,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[0]));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[1]));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[2]));
        bufp->chgBit(oldp+441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[3]));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[4]));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[5]));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[6]));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[7]));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rvalid_reg));
        bufp->chgCData(oldp+447,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg),4);
        bufp->chgIData(oldp+448,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg),32);
        bufp->chgCData(oldp+449,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg),2);
        bufp->chgBit(oldp+450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rlast_reg));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rvalid_reg));
        bufp->chgCData(oldp+452,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg),4);
        bufp->chgIData(oldp+453,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg),32);
        bufp->chgCData(oldp+454,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg),2);
        bufp->chgBit(oldp+455,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rlast_reg));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rvalid_reg));
        bufp->chgCData(oldp+457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg),4);
        bufp->chgIData(oldp+458,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg),32);
        bufp->chgCData(oldp+459,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg),2);
        bufp->chgBit(oldp+460,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rlast_reg));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rvalid_reg));
        bufp->chgCData(oldp+462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg),4);
        bufp->chgIData(oldp+463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg),32);
        bufp->chgCData(oldp+464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg),2);
        bufp->chgBit(oldp+465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rlast_reg));
        bufp->chgBit(oldp+466,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rvalid_reg));
        bufp->chgCData(oldp+467,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg),4);
        bufp->chgIData(oldp+468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg),32);
        bufp->chgCData(oldp+469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg),2);
        bufp->chgBit(oldp+470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rlast_reg));
        bufp->chgBit(oldp+471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rvalid_reg));
        bufp->chgCData(oldp+472,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg),4);
        bufp->chgIData(oldp+473,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg),32);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg),2);
        bufp->chgBit(oldp+475,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rlast_reg));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rvalid_reg));
        bufp->chgCData(oldp+477,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg),4);
        bufp->chgIData(oldp+478,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg),32);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg),2);
        bufp->chgBit(oldp+480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rlast_reg));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rvalid_reg));
        bufp->chgCData(oldp+482,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg),4);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg),32);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg),2);
        bufp->chgBit(oldp+485,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rlast_reg));
        bufp->chgBit(oldp+486,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+487,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
        bufp->chgCData(oldp+489,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid),4);
        bufp->chgCData(oldp+490,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                  | ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                      ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                                          : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
                                      : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                                          : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))))),2);
        bufp->chgBit(oldp+491,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
        bufp->chgCData(oldp+493,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid),4);
        bufp->chgCData(oldp+494,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 1U))
                                          : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+495,((((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                  ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                                          : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                                      : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                                          : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                                  : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                                          : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                                      : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                                          : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))));
        bufp->chgBit(oldp+496,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awvalid));
        bufp->chgBit(oldp+497,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        bufp->chgCData(oldp+500,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp),2);
        bufp->chgBit(oldp+501,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_becho_real_last));
        bufp->chgBit(oldp+502,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len))))));
        bufp->chgBit(oldp+503,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                 ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                                 : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
        bufp->chgBit(oldp+505,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len),8);
        bufp->chgBit(oldp+510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+512,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+513,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_latched));
        bufp->chgBit(oldp+516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter),9);
        bufp->chgSData(oldp+518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo),9);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15),2);
        bufp->chgCData(oldp+535,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                   ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                       ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                                       : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
                                   : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                       ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                                       : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0)))))),2);
        bufp->chgCData(oldp+536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
        bufp->chgQData(oldp+537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgIData(oldp+541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
        bufp->chgBit(oldp+543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+544,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1));
        bufp->chgCData(oldp+547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgBit(oldp+548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_last));
        bufp->chgCData(oldp+549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgBit(oldp+551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_1_last));
        bufp->chgCData(oldp+552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgBit(oldp+554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_2_last));
        bufp->chgCData(oldp+555,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgBit(oldp+557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_3_last));
        bufp->chgCData(oldp+558,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgCData(oldp+559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgBit(oldp+560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_4_last));
        bufp->chgCData(oldp+561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgBit(oldp+563,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_5_last));
        bufp->chgCData(oldp+564,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgBit(oldp+566,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_6_last));
        bufp->chgCData(oldp+567,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgCData(oldp+568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgBit(oldp+569,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_7_last));
        bufp->chgCData(oldp+570,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgCData(oldp+571,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_8_count),3);
        bufp->chgBit(oldp+572,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_8_last));
        bufp->chgCData(oldp+573,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_8_count),3);
        bufp->chgCData(oldp+574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_9_count),3);
        bufp->chgBit(oldp+575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_9_last));
        bufp->chgCData(oldp+576,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_9_count),3);
        bufp->chgCData(oldp+577,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_10_count),3);
        bufp->chgBit(oldp+578,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_10_last));
        bufp->chgCData(oldp+579,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_10_count),3);
        bufp->chgCData(oldp+580,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_11_count),3);
        bufp->chgBit(oldp+581,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_11_last));
        bufp->chgCData(oldp+582,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_11_count),3);
        bufp->chgCData(oldp+583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_12_count),3);
        bufp->chgBit(oldp+584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_12_last));
        bufp->chgCData(oldp+585,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_12_count),3);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_13_count),3);
        bufp->chgBit(oldp+587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_13_last));
        bufp->chgCData(oldp+588,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_13_count),3);
        bufp->chgCData(oldp+589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_14_count),3);
        bufp->chgBit(oldp+590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_14_last));
        bufp->chgCData(oldp+591,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_14_count),3);
        bufp->chgCData(oldp+592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_15_count),3);
        bufp->chgBit(oldp+593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_15_last));
        bufp->chgCData(oldp+594,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_15_count),3);
        bufp->chgBit(oldp+595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+596,((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_last) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                & (7U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count)))));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2));
        bufp->chgCData(oldp+598,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask),2);
        bufp->chgBit(oldp+599,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+600,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3));
        bufp->chgCData(oldp+602,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgBit(oldp+603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+605,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full))))));
        bufp->chgCData(oldp+606,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0))),2);
        bufp->chgBit(oldp+607,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)))));
        bufp->chgCData(oldp+608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits),2);
        bufp->chgBit(oldp+609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+614,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full))));
        bufp->chgCData(oldp+615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgBit(oldp+616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+618,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)),28);
        bufp->chgBit(oldp+619,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full));
        bufp->chgCData(oldp+621,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_id),4);
        bufp->chgCData(oldp+622,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+623,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full));
        bufp->chgCData(oldp+624,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_id),4);
        bufp->chgCData(oldp+625,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+626,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (0U == ((6U & (4U 
                                                 ^ 
                                                 (0x0000001eU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                     >> 0x0000001bU)))) 
                                          | (1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x00000018U)))))));
        bufp->chgBit(oldp+627,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+628,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state));
        bufp->chgCData(oldp+630,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+633,((0U == ((6U & (4U ^ 
                                              (0x0000001eU 
                                               & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001bU)))) 
                                       | (1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x00000018U))))));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgSData(oldp+635,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))),16);
        bufp->chgSData(oldp+636,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))),16);
        bufp->chgSData(oldp+637,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)))),16);
        bufp->chgSData(oldp+638,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)))),16);
        bufp->chgBit(oldp+639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+662,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+666,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+674,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+676,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+677,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+681,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+684,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+685,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+686,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+690,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+692,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+693,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+694,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+695,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+696,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+697,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+702,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+703,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),3);
        bufp->chgBit(oldp+704,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+705,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits),3);
        bufp->chgBit(oldp+706,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+710,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+711,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+712,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+715,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__casez_tmp));
        bufp->chgBit(oldp+716,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                 ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))
                                 : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__casez_tmp_2));
        bufp->chgBit(oldp+718,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                 ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))
                                 : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))));
        bufp->chgBit(oldp+719,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+722,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+725,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+728,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+730,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+731,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+732,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+733,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+734,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+737,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+740,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+743,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+746,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+747,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+749,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+750,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+752,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+755,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+757,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+758,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+759,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+760,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+761,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+764,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+765,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+767,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+768,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+769,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+770,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+771,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+773,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+774,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+775,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+776,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+778,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+779,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+780,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+781,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+782,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+783,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+784,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+785,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+786,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+788,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+791,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+794,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+796,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+797,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+800,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+803,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+806,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+809,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+812,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+815,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+817,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+818,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+819,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+820,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+821,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+822,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgIData(oldp+825,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input),32);
        bufp->chgCData(oldp+826,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[0]),8);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[1]),8);
        bufp->chgCData(oldp+828,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[2]),8);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[3]),8);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[4]),8);
        bufp->chgCData(oldp+831,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[5]),8);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[6]),8);
        bufp->chgCData(oldp+833,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[7]),8);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state),2);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state),2);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write),4);
        bufp->chgBit(oldp+837,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write))));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable));
        bufp->chgCData(oldp+839,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record),3);
        bufp->chgBit(oldp+840,((2U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                                             >> 1U)))));
        bufp->chgSData(oldp+841,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_addr),10);
        bufp->chgSData(oldp+842,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt),10);
        bufp->chgBit(oldp+843,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
        bufp->chgBit(oldp+844,((0x7800U == (0x00007fffU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000000dU)))));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_sel1));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_sel1));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG));
        bufp->chgCData(oldp+848,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r0),8);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r1),8);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r2),8);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r3),8);
        bufp->chgBit(oldp+852,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel));
        bufp->chgCData(oldp+854,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w_reg),8);
        bufp->chgSData(oldp+855,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U))),11);
        bufp->chgBit(oldp+856,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__ifu_out_valid_r));
        bufp->chgIData(oldp+857,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__ifu_out_bus_pc_r),32);
        bufp->chgIData(oldp+858,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__i),32);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+862,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+863,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+865,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+866,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgIData(oldp+875,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_mem[0]),32);
        bufp->chgIData(oldp+876,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_mem[1]),32);
        bufp->chgIData(oldp+877,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_mem[2]),32);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_mem[3]),32);
        bufp->chgBit(oldp+879,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_valid[0]));
        bufp->chgBit(oldp+880,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_valid[1]));
        bufp->chgBit(oldp+881,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_valid[2]));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_valid[3]));
        bufp->chgIData(oldp+883,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_tag[0]),28);
        bufp->chgIData(oldp+884,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_tag[1]),28);
        bufp->chgIData(oldp+885,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_tag[2]),28);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_tag[3]),28);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__state),3);
        bufp->chgBit(oldp+888,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__burst_cnt));
        bufp->chgIData(oldp+889,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000cU])))) {
        bufp->chgBit(oldp+890,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+891,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+892,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+893,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+894,((IData)(((0U == (0x30000000U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                        & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))));
        bufp->chgQData(oldp+895,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                                   << 4U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb)))),36);
        bufp->chgCData(oldp+897,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
                                   ? ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel)) 
                                       & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))) 
                                          & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))))
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable)
                                        ? 0U : 1U) : 0U))),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000dU])))) {
        bufp->chgIData(oldp+898,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                   ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                   : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r)),32);
        bufp->chgCData(oldp+899,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                   ? (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_3)))
                                   : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready)
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_4)
                                           : 1U) : 
                                      ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_4)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))),2);
        bufp->chgCData(oldp+900,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg) 
                                   << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp))),6);
        bufp->chgQData(oldp+901,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg)) 
                                   << 0x00000023U) 
                                  | (((QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                        ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                                        : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                      << 3U) | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp) 
                                                                   << 1U))))))),39);
        bufp->chgBit(oldp+903,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_0)
                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0))));
        bufp->chgBit(oldp+904,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_1)
                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1))));
        bufp->chgBit(oldp+905,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)))));
        bufp->chgCData(oldp+906,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)
                                   : 0U)),4);
        bufp->chgBit(oldp+907,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+908,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgCData(oldp+911,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__state),2);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__cnt),32);
        bufp->chgIData(oldp+913,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__prdata_reg),32);
        bufp->chgBit(oldp+914,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__pslverr_reg));
        bufp->chgBit(oldp+915,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__pready_reg));
        bufp->chgBit(oldp+916,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_pready));
        bufp->chgBit(oldp+917,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state))));
        bufp->chgBit(oldp+918,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_pslverr));
        bufp->chgIData(oldp+919,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_prdata),32);
        bufp->chgBit(oldp+920,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bvalid_reg));
        bufp->chgCData(oldp+921,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bid_reg),4);
        bufp->chgCData(oldp+922,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bresp_reg),2);
        bufp->chgBit(oldp+923,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid));
        bufp->chgCData(oldp+924,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
        bufp->chgIData(oldp+925,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata),32);
        bufp->chgBit(oldp+926,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                      >> 4U))));
        bufp->chgBit(oldp+927,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_bvalid));
        bufp->chgBit(oldp+928,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[0]));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[1]));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[2]));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[3]));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[4]));
        bufp->chgBit(oldp+933,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[5]));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[6]));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[7]));
        bufp->chgCData(oldp+936,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[0]),4);
        bufp->chgCData(oldp+937,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[1]),4);
        bufp->chgCData(oldp+938,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[2]),4);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[3]),4);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[4]),4);
        bufp->chgCData(oldp+941,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[5]),4);
        bufp->chgCData(oldp+942,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[6]),4);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[7]),4);
        bufp->chgIData(oldp+944,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[0]),32);
        bufp->chgIData(oldp+945,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[1]),32);
        bufp->chgIData(oldp+946,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[2]),32);
        bufp->chgIData(oldp+947,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[3]),32);
        bufp->chgIData(oldp+948,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[4]),32);
        bufp->chgIData(oldp+949,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[5]),32);
        bufp->chgIData(oldp+950,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[6]),32);
        bufp->chgIData(oldp+951,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[7]),32);
        bufp->chgBit(oldp+952,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[0]));
        bufp->chgBit(oldp+953,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[1]));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[2]));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[3]));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[4]));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[5]));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[6]));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[7]));
        bufp->chgCData(oldp+960,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rcnt),3);
        bufp->chgCData(oldp+961,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt),3);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__wstate),2);
        bufp->chgIData(oldp+963,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__wcnt),32);
        bufp->chgBit(oldp+964,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid));
        bufp->chgCData(oldp+965,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid),4);
        bufp->chgIData(oldp+966,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata),32);
        bufp->chgBit(oldp+967,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast));
        bufp->chgBit(oldp+968,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid));
        bufp->chgCData(oldp+969,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid),4);
        bufp->chgIData(oldp+970,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata),32);
        bufp->chgBit(oldp+971,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid));
        bufp->chgCData(oldp+973,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid),4);
        bufp->chgIData(oldp+974,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata),32);
        bufp->chgBit(oldp+975,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid));
        bufp->chgCData(oldp+977,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid),4);
        bufp->chgIData(oldp+978,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata),32);
        bufp->chgBit(oldp+979,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid));
        bufp->chgCData(oldp+981,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid),4);
        bufp->chgIData(oldp+982,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata),32);
        bufp->chgBit(oldp+983,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid));
        bufp->chgCData(oldp+985,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid),4);
        bufp->chgIData(oldp+986,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata),32);
        bufp->chgBit(oldp+987,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid));
        bufp->chgCData(oldp+989,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid),4);
        bufp->chgIData(oldp+990,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata),32);
        bufp->chgBit(oldp+991,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid));
        bufp->chgCData(oldp+993,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid),4);
        bufp->chgIData(oldp+994,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata),32);
        bufp->chgBit(oldp+995,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+997,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+998,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0x0000000eU : 
                                  ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                    ? 0x0000000bU : 
                                   (0x0000000fU & (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x00000014U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x00000010U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x0000000cU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
        bufp->chgBit(oldp+999,((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1000,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+1002,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
        bufp->chgBit(oldp+1004,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
        bufp->chgCData(oldp+1005,(((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                    ? (1U & (0x35U 
                                             >> (7U 
                                                 & ((IData)(7U) 
                                                    - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                                    : 0x0aU)),4);
        bufp->chgBit(oldp+1006,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
        bufp->chgBit(oldp+1007,((0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1008,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
        bufp->chgBit(oldp+1009,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))));
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+1014,((0x000000ffU & (VL_SHIFTR_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter), 1U) 
                                                  - (IData)(3U)))),8);
        bufp->chgCData(oldp+1015,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+1017,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+1018,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state));
        bufp->chgBit(oldp+1020,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
                                  ? (8U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                  : (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)))));
        bufp->chgCData(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter),8);
        bufp->chgBit(oldp+1022,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+1037,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+1038,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+1039,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+1040,(((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                     >> 5U)) & (0U 
                                                != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+1041,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 5U))));
        bufp->chgBit(oldp+1042,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+1043,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+1044,((1U & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+1045,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+1046,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+1047,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+1048,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1051,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+1052,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+1053,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+1054,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+1055,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+1056,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgIData(oldp+1061,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+1064,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
        bufp->chgSData(oldp+1065,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+1066,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+1067,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+1068,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgSData(oldp+1069,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
        bufp->chgSData(oldp+1070,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
        bufp->chgSData(oldp+1071,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
        bufp->chgSData(oldp+1072,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+1076,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+1077,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),3);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state),2);
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready));
        bufp->chgIData(oldp+1081,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata),32);
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr));
        bufp->chgBit(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out));
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr),5);
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_psel));
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_penable));
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite));
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb),4);
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pready));
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata),32);
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out));
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate),4);
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state),4);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr),5);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb),4);
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite));
        bufp->chgSData(oldp+1097,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+1100,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+1104,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+1105,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1106,((0x0000007fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+1107,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+1108,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+1109,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+1110,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+1111,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+1114,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+1115,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+1116,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+1117,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+1118,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+1119,((0x000000ffU & ((0x00000800U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                   - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                   - (IData)(1U))))),8);
        bufp->chgCData(oldp+1120,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+1121,((((0x00000200U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                 & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck)))));
        bufp->chgBit(oldp+1122,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                 & ((0x00000400U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
        bufp->chgSData(oldp+1123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_addr),10);
        bufp->chgSData(oldp+1124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt),10);
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid));
        bufp->chgBit(oldp+1126,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1127,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr))));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__int_o));
        bufp->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__enable));
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__srx_pad));
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier),4);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir),4);
        bufp->chgCData(oldp+1134,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fcr),2);
        bufp->chgCData(oldp+1135,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr),5);
        bufp->chgCData(oldp+1136,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr),8);
        bufp->chgSData(oldp+1137,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl),16);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch),8);
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__start_dlc));
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_d));
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msi_reset));
        bufp->chgSData(oldp+1142,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dlc),16);
        bufp->chgCData(oldp+1143,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__trigger_level),4);
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rx_reset));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tx_reset));
        bufp->chgBit(oldp+1146,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+1147,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_30) 
                                       >> 3U))));
        bufp->chgBit(oldp+1148,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_30) 
                                       >> 2U))));
        bufp->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_30) 
                                       >> 1U))));
        bufp->chgBit(oldp+1150,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_30))));
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0));
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_overrun));
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2));
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7));
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0r));
        bufp->chgBit(oldp+1160,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1r));
        bufp->chgBit(oldp+1161,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2r));
        bufp->chgBit(oldp+1162,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3r));
        bufp->chgBit(oldp+1163,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4r));
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5r));
        bufp->chgBit(oldp+1165,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6r));
        bufp->chgBit(oldp+1166,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7r));
        bufp->chgBit(oldp+1167,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int));
        bufp->chgBit(oldp+1168,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int));
        bufp->chgBit(oldp+1169,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int));
        bufp->chgBit(oldp+1170,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_push));
        bufp->chgBit(oldp+1171,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_pop));
        bufp->chgBit(oldp+1172,((0U != (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0U] | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                [1U] 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0x0aU] 
                                                                           | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0x0bU] 
                                                                              | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0cU] 
                                                                                | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0dU] 
                                                                                | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU]))))))))))))))))));
        bufp->chgBit(oldp+1173,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_count),5);
        bufp->chgCData(oldp+1175,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_count),5);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tstate),3);
        bufp->chgCData(oldp+1177,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rstate),4);
        bufp->chgSData(oldp+1178,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__counter_t),10);
        bufp->chgBit(oldp+1179,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt))))));
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt),8);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1182,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0_d));
        bufp->chgBit(oldp+1183,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1_d));
        bufp->chgBit(oldp+1184,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2_d));
        bufp->chgBit(oldp+1185,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3_d));
        bufp->chgBit(oldp+1186,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4_d));
        bufp->chgBit(oldp+1187,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5_d));
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6_d));
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7_d));
        bufp->chgBit(oldp+1190,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d));
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d));
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d));
        bufp->chgBit(oldp+1193,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d));
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d));
        bufp->chgBit(oldp+1195,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int))));
        bufp->chgBit(oldp+1196,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int))));
        bufp->chgBit(oldp+1197,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int))));
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_pnd));
        bufp->chgBit(oldp+1199,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_pnd));
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_pnd));
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_pnd));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_pnd));
        bufp->chgBit(oldp+1203,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1205,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1207,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1208,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1210,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+1211,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1213,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1214,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1215,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1216,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1217,((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1218,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1219,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1220,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16) 
                                                  - (IData)(1U)))),4);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1224,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1230,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1231,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1239,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1240,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1241,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1243,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1246,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0aU]),3);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0bU]),3);
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0cU]),3);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0dU]),3);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0eU]),3);
        bufp->chgCData(oldp+1255,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0fU]),3);
        bufp->chgCData(oldp+1256,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in) 
                                                  >> 3U))),8);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1267,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+1268,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1269,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1270,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1271,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1272,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1273,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1274,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode),13);
        bufp->chgBit(oldp+1275,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1276,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1277,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1278,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1279,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state),4);
        bufp->chgCData(oldp+1281,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count),4);
        bufp->chgIData(oldp+1282,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
        bufp->chgSData(oldp+1283,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1284,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1285,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1286,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1287,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1288,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1289,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode),13);
        bufp->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1291,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1292,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1293,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1294,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state),4);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count),4);
        bufp->chgIData(oldp+1297,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgSData(oldp+1298,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1299,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1300,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1301,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1302,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1303,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1304,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode),13);
        bufp->chgBit(oldp+1305,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1306,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1307,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1308,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1309,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state),4);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count),4);
        bufp->chgIData(oldp+1312,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
        bufp->chgSData(oldp+1313,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1314,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1315,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1316,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1317,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1318,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1319,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode),13);
        bufp->chgBit(oldp+1320,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1321,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1322,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1323,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1324,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state),4);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count),4);
        bufp->chgIData(oldp+1327,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+1328,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction),32);
        bufp->chgIData(oldp+1329,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_snpc),32);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception),5);
        bufp->chgSData(oldp+1331,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                   >> 0x00000014U)),12);
        bufp->chgIData(oldp+1332,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI)
                                    ? (((- (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x00000014U))
                                    : ((0x6fU == (0x0000007fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))
                                        ? ((((0x00000ffeU 
                                              & ((- (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001fU))) 
                                                 << 1U)) 
                                             | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                >> 0x0000001fU)) 
                                            << 0x00000014U) 
                                           | ((((0x000001feU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U))) 
                                               << 0x0000000bU) 
                                              | (0x000007feU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U))))
                                        : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE)
                                            ? (((- (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000cU) 
                                               | ((0x00000fe0U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                        >> 7U))))
                                            : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isU)
                                                ? (0xfffff000U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000dU) 
                                                    | ((((2U 
                                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001eU)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                               >> 7U))) 
                                                        << 0x0000000bU) 
                                                       | ((0x000007e0U 
                                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                >> 7U)))))
                                                    : 0U)))))),32);
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isLOAD));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE));
        bufp->chgBit(oldp+1335,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_3) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADDI) 
                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXORI) 
                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isORI) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isANDI) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLLI) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRLI) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRAI) 
                                                         | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADD) 
                                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB)) 
                                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLL) 
                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT)) 
                                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTU) 
                                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXOR) 
                                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRL) 
                                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRA) 
                                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR) 
                                                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND)) 
                                                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isLOAD) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_34))))))))))))))))))));
        bufp->chgBit(oldp+1336,(((0x6fU == (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isJALR))));
        bufp->chgBit(oldp+1337,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_32))));
        bufp->chgBit(oldp+1338,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH));
        bufp->chgBit(oldp+1339,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_29) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_28))))));
        bufp->chgBit(oldp+1340,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH))));
        bufp->chgBit(oldp+1341,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE) 
                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_2))))));
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm));
        bufp->chgSData(oldp+1343,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isJALR) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADD) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLW) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLB) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLH) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSW) 
                                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSH) 
                                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSB) 
                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADDI) 
                                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH))))))))))))) 
                                    << 9U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB) 
                                               << 8U) 
                                              | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLLI) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLL)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRLI) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRL)) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRAI) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRA)) 
                                                        << 3U))) 
                                                 | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isANDI) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND)) 
                                                     << 2U) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isORI) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR)) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXORI) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXOR)))))))),10);
        bufp->chgCData(oldp+1344,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGE) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGEU))
                                    ? 0U : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLTU) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLT) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTI) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_28)))))
                                             ? 1U : 
                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBNE)
                                              ? 2U : 
                                             ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBEQ)
                                               ? 3U
                                               : 0U))))),2);
        bufp->chgCData(oldp+1345,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLW) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSW))
                                    ? 2U : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLB) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSB)))
                                             ? 0U : 
                                            (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLH) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSH)))
                                              ? 1U : 3U)))),2);
        bufp->chgCData(oldp+1346,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_out_bus_opCSR),3);
        bufp->chgCData(oldp+1347,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 7U))),5);
        bufp->chgCData(oldp+1348,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_exception),5);
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD));
        bufp->chgBit(oldp+1350,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isSTORE));
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR));
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP));
        bufp->chgBit(oldp+1353,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP));
        bufp->chgBit(oldp+1354,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH));
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUnSigned));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUsePC));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_isUseImm));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_isUseImm));
        bufp->chgCData(oldp+1359,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd),5);
        bufp->chgCData(oldp+1360,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1),5);
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2),5);
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception),5);
        bufp->chgIData(oldp+1363,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val),32);
        bufp->chgIData(oldp+1364,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val),32);
        bufp->chgIData(oldp+1365,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_imm),32);
        bufp->chgIData(oldp+1366,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_instruction),32);
        bufp->chgIData(oldp+1367,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc),32);
        bufp->chgSData(oldp+1368,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op),10);
        bufp->chgCData(oldp+1369,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op),2);
        bufp->chgCData(oldp+1370,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_perip_mask),2);
        bufp->chgCData(oldp+1371,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR),3);
        bufp->chgSData(oldp+1372,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_csrrd),12);
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_comp_result));
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result));
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD));
        bufp->chgBit(oldp+1376,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE));
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR));
        bufp->chgBit(oldp+1378,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP));
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP));
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isBRANCH));
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isUnSigned));
        bufp->chgIData(oldp+1382,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_instruction),32);
        bufp->chgIData(oldp+1383,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc),32);
        bufp->chgIData(oldp+1384,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csr_result),32);
        bufp->chgCData(oldp+1385,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask),2);
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd),5);
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception),5);
        bufp->chgSData(oldp+1388,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csrrd),12);
        bufp->chgCData(oldp+1389,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_opCSR),3);
        bufp->chgCData(oldp+1390,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                    ? 0U : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                             ? 1U : 2U))),3);
        bufp->chgBit(oldp+1391,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD));
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isSTORE));
        bufp->chgBit(oldp+1393,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR));
        bufp->chgBit(oldp+1394,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP));
        bufp->chgBit(oldp+1395,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP));
        bufp->chgBit(oldp+1396,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isBRANCH));
        bufp->chgIData(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc),32);
        bufp->chgIData(oldp+1398,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_instruction),32);
        bufp->chgIData(oldp+1399,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result),32);
        bufp->chgIData(oldp+1400,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result),32);
        bufp->chgIData(oldp+1401,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result),32);
        bufp->chgBit(oldp+1402,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result));
        bufp->chgSData(oldp+1403,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd),12);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR),3);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd),5);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception),5);
        bufp->chgCData(oldp+1407,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x0000000fU))),5);
        bufp->chgCData(oldp+1408,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U))),5);
        bufp->chgIData(oldp+1409,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)
                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                    : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                        ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                        : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                            : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result)))),32);
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__b),32);
        bufp->chgIData(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_b),32);
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_isEQUAL));
        bufp->chgBit(oldp+1413,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUnSigned)
                                        ? ((~ (IData)(
                                                      (1ULL 
                                                       & ((1ULL 
                                                           + 
                                                           ((~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_b))) 
                                                            + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)))) 
                                                          >> 0x00000020U)))) 
                                           & (0U != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_suber_out))
                                        : ((~ (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                 ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_b) 
                                                | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_suber_out) 
                                               >> 0x0000001fU)) 
                                           | ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                  >> 0x0000001fU)) 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_b 
                                                 >> 0x0000001fU)))))));
        bufp->chgBit(oldp+1414,((1U & (IData)((1ULL 
                                               & ((1ULL 
                                                   + 
                                                   ((~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_b))) 
                                                    + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)))) 
                                                  >> 0x00000020U))))));
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__comp_suber_out),32);
        bufp->chgCData(oldp+1416,((0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)),7);
        bufp->chgSData(oldp+1417,(((0x00000fe0U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U)) 
                                   | (0x0000001fU & 
                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                       >> 7U)))),12);
        bufp->chgSData(oldp+1418,(((((2U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                            >> 0x0000001eU)) 
                                     | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 7U))) 
                                    << 0x0000000aU) 
                                   | ((0x000003f0U 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x00000015U)) 
                                      | (0x0000000fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                            >> 8U))))),12);
        bufp->chgIData(oldp+1419,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                   >> 0x0000000cU)),20);
        bufp->chgIData(oldp+1420,(((0x00080000U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x0000000cU)) 
                                   | ((0x0007f800U 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 1U)) | 
                                      ((0x00000400U 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x0000000aU)) 
                                       | (0x000003ffU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x00000015U)))))),20);
        bufp->chgCData(oldp+1421,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                         >> 0x0000000cU))),3);
        bufp->chgCData(oldp+1422,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                   >> 0x00000019U)),7);
        bufp->chgBit(oldp+1423,((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
        bufp->chgBit(oldp+1424,((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
        bufp->chgBit(oldp+1425,((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
        bufp->chgBit(oldp+1426,((0x0000100fU == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
        bufp->chgBit(oldp+1427,((0x37U == (0x0000007fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
        bufp->chgBit(oldp+1428,((0x17U == (0x0000007fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
        bufp->chgBit(oldp+1429,((0x6fU == (0x0000007fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isJALR));
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBEQ));
        bufp->chgBit(oldp+1432,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBNE));
        bufp->chgBit(oldp+1433,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLT));
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGE));
        bufp->chgBit(oldp+1435,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLTU));
        bufp->chgBit(oldp+1436,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGEU));
        bufp->chgBit(oldp+1437,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLB));
        bufp->chgBit(oldp+1438,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLH));
        bufp->chgBit(oldp+1439,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLW));
        bufp->chgBit(oldp+1440,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU));
        bufp->chgBit(oldp+1441,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU));
        bufp->chgBit(oldp+1442,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSB));
        bufp->chgBit(oldp+1443,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSH));
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSW));
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADDI));
        bufp->chgBit(oldp+1446,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTI));
        bufp->chgBit(oldp+1447,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTIU));
        bufp->chgBit(oldp+1448,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXORI));
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isORI));
        bufp->chgBit(oldp+1450,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isANDI));
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLLI));
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRLI));
        bufp->chgBit(oldp+1453,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRAI));
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADD));
        bufp->chgBit(oldp+1455,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB));
        bufp->chgBit(oldp+1456,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLL));
        bufp->chgBit(oldp+1457,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT));
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTU));
        bufp->chgBit(oldp+1459,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXOR));
        bufp->chgBit(oldp+1460,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRL));
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRA));
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR));
        bufp->chgBit(oldp+1463,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND));
        bufp->chgBit(oldp+1464,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isCSRRW));
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isCSRRS));
        bufp->chgBit(oldp+1466,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isCSRRC));
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isCSRRWI));
        bufp->chgBit(oldp+1468,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isCSRRSI));
        bufp->chgBit(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isCSRRCI));
        bufp->chgBit(oldp+1470,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADD) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB)) 
                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLL) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT)) 
                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTU) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXOR) 
                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRL) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRA) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND))))))))));
        bufp->chgBit(oldp+1471,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI));
        bufp->chgBit(oldp+1472,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isU));
        bufp->chgBit(oldp+1473,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_3) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_26) 
                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLT) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGE) 
                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_29) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLB) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLH) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSB) 
                                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSH) 
                                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSW) 
                                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADDI) 
                                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTI) 
                                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTIU) 
                                                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXORI) 
                                                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isORI) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isANDI) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLLI) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRLI) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRAI) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADD) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLL) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_32) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXOR) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRL) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRA) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_34) 
                                                                                | ((0x00000073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x00100073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x30200073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | (0x0000100fU 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)))))))))))))))))))))))))))))))))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state),3);
        bufp->chgCData(oldp+1475,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter),8);
        bufp->chgCData(oldp+1476,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+1477,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr),24);
        bufp->chgIData(oldp+1478,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data),32);
        bufp->chgBit(oldp+1479,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000aU]))) {
        bufp->chgCData(oldp+1480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate),2);
        bufp->chgIData(oldp+1481,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt),32);
        bufp->chgCData(oldp+1482,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate),2);
        bufp->chgIData(oldp+1483,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt),32);
        bufp->chgCData(oldp+1484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate),2);
        bufp->chgIData(oldp+1485,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt),32);
        bufp->chgCData(oldp+1486,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate),2);
        bufp->chgIData(oldp+1487,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt),32);
        bufp->chgCData(oldp+1488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate),2);
        bufp->chgIData(oldp+1489,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt),32);
        bufp->chgCData(oldp+1490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate),2);
        bufp->chgIData(oldp+1491,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt),32);
        bufp->chgCData(oldp+1492,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate),2);
        bufp->chgIData(oldp+1493,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt),32);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate),2);
        bufp->chgIData(oldp+1495,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000bU]))) {
        bufp->chgBit(oldp+1496,(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso));
        bufp->chgCData(oldp+1497,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__state),2);
        bufp->chgSData(oldp+1498,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rev),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000cU]))) {
        bufp->chgIData(oldp+1499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i),32);
        bufp->chgBit(oldp+1500,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i),32);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i),4);
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel));
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable));
        bufp->chgIData(oldp+1505,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),30);
        bufp->chgIData(oldp+1506,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),29);
        bufp->chgIData(oldp+1507,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)
                                    ? 0U : (0x000000ffU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                                            [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))]))),32);
        bufp->chgIData(oldp+1508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata),32);
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
        bufp->chgIData(oldp+1510,((((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                     [3U] << 0x00000018U) 
                                    | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [2U] << 0x00000010U)) 
                                   | ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [1U] << 8U) 
                                      | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [0U]))),32);
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel));
        bufp->chgBit(oldp+1512,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable));
        bufp->chgBit(oldp+1513,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))));
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__in_psel));
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i));
        bufp->chgBit(oldp+1516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1518,((0U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+1519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1521,((2U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000001cU)))));
        bufp->chgIData(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata),32);
        bufp->chgIData(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q),32);
        bufp->chgIData(oldp+1524,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgCData(oldp+1525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__next_state),2);
        bufp->chgSData(oldp+1526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0]),9);
        bufp->chgSData(oldp+1527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1]),9);
        bufp->chgSData(oldp+1528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2]),9);
        bufp->chgSData(oldp+1529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3]),9);
        bufp->chgSData(oldp+1530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4]),9);
        bufp->chgSData(oldp+1531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5]),9);
        bufp->chgSData(oldp+1532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6]),9);
        bufp->chgSData(oldp+1533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7]),9);
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read),4);
        bufp->chgBit(oldp+1535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty));
        bufp->chgBit(oldp+1536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+1541,((0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1542,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                   >> 0x00000018U)),8);
        bufp->chgIData(oldp+1543,(((0xffff0000U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+1544,((0x00fffffcU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgCData(oldp+1545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+1546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+1547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+1548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgIData(oldp+1549,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgCData(oldp+1550,((0x000000ffU & ((IData)(7U) 
                                                  + 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgIData(oldp+1551,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgBit(oldp+1552,((0x30000000U <= (0x3fffffffU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
        bufp->chgIData(oldp+1553,(VL_MODDIV_III(32, 
                                                VL_MODDIV_III(32, 
                                                              VL_SHIFTR_III(32,32,32, 
                                                                            ((0x3fffffffU 
                                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                             - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
        bufp->chgIData(oldp+1554,(VL_DIV_III(32, VL_MODDIV_III(32, 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             ((0x3fffffffU 
                                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                              - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
        bufp->chgBit(oldp+1555,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                                 & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)))));
        bufp->chgSData(oldp+1556,((0x000003ffU & VL_DIV_III(32, 
                                                            VL_MODDIV_III(32, 
                                                                          VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
        bufp->chgSData(oldp+1557,((0x000003ffU & VL_MODDIV_III(32, 
                                                               VL_MODDIV_III(32, 
                                                                             VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
        bufp->chgIData(oldp+1558,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i)),24);
        bufp->chgIData(oldp+1559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr),19);
        bufp->chgBit(oldp+1560,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__state));
        bufp->chgCData(oldp+1561,((7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),3);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w),8);
        bufp->chgIData(oldp+1563,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__ifu_out_bus_instruction_r),32);
        bufp->chgBit(oldp+1564,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__in_reqValid));
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_in),8);
        bufp->chgCData(oldp+1566,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1567,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1568,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1571,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1572,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1573,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1575,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1577,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1579,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1580,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1581,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000dU]))) {
        bufp->chgBit(oldp+1582,(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n));
        bufp->chgBit(oldp+1583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready));
        bufp->chgIData(oldp+1584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata),32);
        bufp->chgBit(oldp+1585,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr));
        bufp->chgBit(oldp+1586,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_15)))));
        bufp->chgCData(oldp+1587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__next_state),2);
        bufp->chgCData(oldp+1588,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp),2);
        bufp->chgCData(oldp+1589,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid));
        bufp->chgBit(oldp+1593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast));
        bufp->chgBit(oldp+1594,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bvalid));
        bufp->chgCData(oldp+1595,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid),4);
        bufp->chgBit(oldp+1596,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid));
        bufp->chgCData(oldp+1597,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid),4);
        bufp->chgBit(oldp+1598,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
        bufp->chgSData(oldp+1599,((0x0000ffffU & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)))),16);
        bufp->chgSData(oldp+1600,((0x0000ffffU & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)))),16);
        bufp->chgBit(oldp+1601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+1602,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+1603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+1604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+1605,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+1606,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+1608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+1609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+1610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+1611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+1612,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+1613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+1614,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_1));
        bufp->chgCData(oldp+1615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
        bufp->chgCData(oldp+1616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
        bufp->chgCData(oldp+1617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout),4);
        bufp->chgBit(oldp+1618,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
        bufp->chgBit(oldp+1619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr));
        bufp->chgBit(oldp+1620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done));
        bufp->chgCData(oldp+1621,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgCData(oldp+1622,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__next_state),2);
        bufp->chgBit(oldp+1623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i));
        bufp->chgIData(oldp+1624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata),32);
        bufp->chgBit(oldp+1625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pready));
        bufp->chgIData(oldp+1626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata),32);
        bufp->chgBit(oldp+1627,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out));
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr),5);
        bufp->chgBit(oldp+1629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_psel));
        bufp->chgBit(oldp+1630,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_penable));
        bufp->chgCData(oldp+1631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot),3);
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite));
        bufp->chgIData(oldp+1633,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata),32);
        bufp->chgCData(oldp+1634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb),4);
        bufp->chgCData(oldp+1635,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate),4);
        bufp->chgCData(oldp+1636,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state),4);
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer));
        bufp->chgIData(oldp+1638,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata),32);
        bufp->chgIData(oldp+1639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata),32);
        bufp->chgBit(oldp+1640,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x14U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgBit(oldp+1641,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x10U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgCData(oldp+1642,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
        bufp->chgBit(oldp+1643,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x18U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgCData(oldp+1644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch),4);
        bufp->chgIData(oldp+1645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data),24);
        bufp->chgIData(oldp+1646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr),19);
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rlast));
        bufp->chgCData(oldp+1648,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_out),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000eU]))) {
        bufp->chgBit(oldp+1649,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                       >> 7U))));
        bufp->chgBit(oldp+1650,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))));
        bufp->chgBit(oldp+1651,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1652,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1653,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1654,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgSData(oldp+1655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
        bufp->chgCData(oldp+1657,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgCData(oldp+1658,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))),3);
        bufp->chgBit(oldp+1659,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__comm_active));
        bufp->chgCData(oldp+1660,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
        bufp->chgCData(oldp+1661,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1662,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
        bufp->chgCData(oldp+1663,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss),8);
        bufp->chgBit(oldp+1664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
        bufp->chgCData(oldp+1665,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgCData(oldp+1666,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgIData(oldp+1667,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1668,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000010U]))) {
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__now_sel));
        bufp->chgBit(oldp+1672,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0));
        bufp->chgBit(oldp+1673,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000013U]))) {
        bufp->chgBit(oldp+1674,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1675,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state),4);
        bufp->chgBit(oldp+1676,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1677,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000014U]))) {
        bufp->chgBit(oldp+1678,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1679,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state),4);
        bufp->chgBit(oldp+1680,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1681,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000016U]))) {
        bufp->chgIData(oldp+1682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i),32);
        bufp->chgSData(oldp+1683,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                   >> 0x00000010U)),16);
        bufp->chgSData(oldp+1684,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i)),16);
    }
    bufp->chgBit(oldp+1685,(vlSelfRef.clock));
    bufp->chgBit(oldp+1686,(vlSelfRef.reset));
    bufp->chgSData(oldp+1687,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+1688,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+1689,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+1690,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+1691,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+1692,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+1693,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+1694,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+1695,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+1696,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+1697,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+1698,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+1699,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+1700,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+1701,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+1702,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+1703,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+1704,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+1705,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+1706,(vlSelfRef.externalPins_uart_tx));
    bufp->chgCData(oldp+1707,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_cnt),8);
    bufp->chgCData(oldp+1708,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_state),2);
    bufp->chgBit(oldp+1709,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                   | (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                       ? (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                          >> 7U) : 
                                      (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data 
                                       >> 0x0000001fU))))));
    bufp->chgIData(oldp+1710,(((0x00fffffeU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi))),32);
    bufp->chgBit(oldp+1711,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)
                              : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    bufp->chgCData(oldp+1712,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din),4);
    bufp->chgCData(oldp+1713,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state),4);
    bufp->chgCData(oldp+1714,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__next_state),4);
    bufp->chgBit(oldp+1715,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__is_QPI));
    bufp->chgCData(oldp+1716,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)
                                ? 0x0000000aU : (0x0000000fU 
                                                 & (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)) 
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
                                                      : 0x0aU))))),4);
    bufp->chgBit(oldp+1717,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgBit(oldp+1718,(((~ (IData)(vlSelfRef.clock)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q))));
    bufp->chgCData(oldp+1719,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__reg_ba),3);
    bufp->chgIData(oldp+1720,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->chgCData(oldp+1721,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))
                                ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                         ? 1U : (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                                  ? 1U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count)))))))),4);
    bufp->chgBit(oldp+1722,(((~ (IData)(vlSelfRef.clock)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)))));
    bufp->chgIData(oldp+1723,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->chgCData(oldp+1724,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))
                                ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                         ? 1U : (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                                  ? 1U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count)))))))),4);
    bufp->chgIData(oldp+1725,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->chgCData(oldp+1726,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))
                                ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                         ? 1U : (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                                  ? 1U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count)))))))),4);
    bufp->chgBit(oldp+1727,(((~ (IData)(vlSelfRef.clock)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)))));
    bufp->chgIData(oldp+1728,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->chgCData(oldp+1729,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))
                                ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                         ? 1U : (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                                  ? 1U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count)))))))),4);
    bufp->chgBit(oldp+1730,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                | (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                    & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                    ? (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                       >> 7U) : (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data 
                                                 >> 0x0000001fU))))));
    bufp->chgIData(oldp+1731,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0)
                                 ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_prdata
                                 : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1)
                                            ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                                                ? (
                                                   (((4U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? 
                                                     ((2U 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                       : 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                        : 
                                                       (0x000000c0U 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                       : 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                                    << 0x00000018U) 
                                                   | ((0x00ff0000U 
                                                       & (((4U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? 
                                                           ((2U 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                             : 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                              : 0U))
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                              : 
                                                             (0x000000c0U 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                             : 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((2U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                                : 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                                 : 0U))
                                                               : 
                                                              ((2U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                                 : 
                                                                (0x000000c0U 
                                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                                : 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? 
                                                               ((2U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                                 : 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                                  : 0U))
                                                                : 
                                                               ((2U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                                  : 
                                                                 (0x000000c0U 
                                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                                 : 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                                : 0U)
                                            : 0U) | 
                                          (((0U == 
                                             (3U & 
                                              (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                               >> 0x0000001cU)))
                                             ? (((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [3U] 
                                                  << 0x00000018U) 
                                                 | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x00000010U)) 
                                                | ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U]))
                                             : 0U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3)
                                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata
                                                : 0U) 
                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)
                                                    ? 0U
                                                    : 
                                                   (0x000000ffU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                                                    [
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))]))
                                                   : 0U) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001cU)))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_prdata
                                                     : 0U))))))),32);
    bufp->chgBit(oldp+1732,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_pslverr))));
    bufp->chgBit(oldp+1733,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                  : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->chgIData(oldp+1734,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                                ? ((((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                      ? ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                          : ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                              : 0U))
                                      : ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                              : (0x000000c0U 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                          : ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? ((0x00000080U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                  >> 8U)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                              : ((0x00000080U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                  : 
                                                 vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                 [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                    << 0x00000018U) 
                                   | ((0x00ff0000U 
                                       & (((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                            ? ((2U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                    : 0U))
                                            : ((2U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                          & (((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                    : 0U))
                                               : ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                : 0U)),32);
    bufp->chgBit(oldp+1735,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0))));
    bufp->chgBit(oldp+1736,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0))));
    bufp->chgQData(oldp+1737,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                << 0x0000002bU) | (
                                                   ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                                    << 0x0000000bU) 
                                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))))),47);
    bufp->chgCData(oldp+1739,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w
                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]),4);
    bufp->chgIData(oldp+1740,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]),32);
    bufp->chgCData(oldp+1741,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w
                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]),2);
    bufp->chgBit(oldp+1742,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready))));
    bufp->chgBit(oldp+1743,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1)
                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)))));
    bufp->chgIData(oldp+1744,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((0x0000ff00U 
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
                                            : 0U)))),32);
    bufp->chgBit(oldp+1745,(((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0)) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
                                 & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready)))) 
                             & (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full))) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__latched)) 
                                & (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_last) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                   & (7U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count)))))));
    bufp->chgCData(oldp+1746,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_0)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0))
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                    | ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? ((2U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                                            : ((2U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
                                        : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? ((2U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                                            : ((2U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))))
                                 : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_1)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bresp_reg)
                                           : 0U))),2);
    bufp->chgIData(oldp+1747,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                 ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                      ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                 >> 3U))
                                      : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
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
                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                                          [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                           : 0U))),32);
    bufp->chgCData(oldp+1748,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                       ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                            ? (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 1U))
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U)) : 0U) 
                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                         ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w
                                        [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                         : 0U)))),2);
    bufp->chgBit(oldp+1749,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0)) 
                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready))))));
    bufp->chgBit(oldp+1750,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready)))));
    bufp->chgIData(oldp+1751,(((((0x0000ff00U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                   ? 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                   >> 0x00000018U)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r3)) 
                                                 << 8U)) 
                                 | (0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                    >> 0x00000010U)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r2)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                         ? 
                                                        (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                         >> 8U)
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r1)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                          ? vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r0)))))),32);
    bufp->chgCData(oldp+1752,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__cnt),4);
    bufp->chgSData(oldp+1753,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg),9);
    bufp->chgBit(oldp+1754,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                 : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    bufp->chgBit(oldp+1755,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+1756,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                              ? (0x16U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd))));
    bufp->chgBit(oldp+1757,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                                    ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)))));
    bufp->chgCData(oldp+1758,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready))
                                ? (0x00000020U | ((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)) 
                                                   << 4U) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)))
                                : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
                                    << 5U) | (((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                               << 4U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q))))),6);
    bufp->chgIData(oldp+1759,(((0U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                             >> 2U)))
                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                : ((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                 >> 2U)))
                                    ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                    : ((2U == (7U & 
                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                >> 2U)))
                                        ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                        : ((3U == (7U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                      >> 2U)))
                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                    >> 2U)))
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                        >> 2U)))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                         >> 2U)))
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                                     : 0U)))))))),32);
    bufp->chgBit(oldp+1760,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset));
    bufp->chgBit(oldp+1761,(((0U != (0x0000001fU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
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
                                            ? ((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
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
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))))))))));
    bufp->chgBit(oldp+1762,(((0U != (0x0000001fU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
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
                                            ? ((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                               && (1U 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                            : (((((0x0000001fU 
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
    bufp->chgBit(oldp+1763,(((0U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                     >> 0x00000014U)) 
                             & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_out_bus_opCSR)) 
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
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR)))))))))));
    bufp->chgIData(oldp+1764,(((0U != (0x0000001fU 
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
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_comp_result)
                                            : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
                                        : 0U) : (((
                                                   ((0x0000001fU 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                        >> 0x00000014U)) 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
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
                                                  : 
                                                 (((((0x0000001fU 
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
                                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_b)),32);
    bufp->chgBit(oldp+1765,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.idu_isRAW));
    bufp->chgIData(oldp+1766,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_exception_valid)
                                ? ((0x0eU == (0x0000000fU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__WBU_0__DOT__wbu_out_bus_exception)))
                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                    : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC)
                                : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__exu_out_bus_dnpc_valid)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH))
                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                    : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_alu_result))),32);
    bufp->chgBit(oldp+1767,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid));
    bufp->chgBit(oldp+1768,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_exception_valid));
    bufp->chgIData(oldp+1769,((0xfffffffcU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC)),32);
    bufp->chgIData(oldp+1770,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata),32);
    bufp->chgBit(oldp+1771,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))));
    bufp->chgCData(oldp+1772,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                                ? (3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                           ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                                ? (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 1U))
                                                : 0U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                                  : 0U))
                                           : 0U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w
                                          [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                           : 0U))) : 0U)),2);
    bufp->chgBit(oldp+1773,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_valid));
    bufp->chgBit(oldp+1774,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid)) 
                                   | (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_in_ready)) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_0) 
                                         & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__state)) 
                                            & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__next_state)))))))));
    bufp->chgIData(oldp+1775,((((0U != (3U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC))
                                 ? 0x00000010U : 0U)
                                ? 0x00000013U : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__VdfgRegularize_hb9205a68_0_0)
                                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_rdata
                                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__ifu_out_bus_instruction_r))),32);
    bufp->chgIData(oldp+1776,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_pc),32);
    bufp->chgIData(oldp+1777,(((IData)(4U) + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_pc)),32);
    bufp->chgIData(oldp+1778,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_fetching),32);
    bufp->chgCData(oldp+1779,(((0U != (3U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC))
                                ? 0x10U : 0U)),5);
    bufp->chgBit(oldp+1780,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid));
    bufp->chgBit(oldp+1781,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_in_ready)) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_0) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__state)) 
                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__next_state)))))));
    bufp->chgIData(oldp+1782,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc),32);
    bufp->chgBit(oldp+1783,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_in_ready)))));
    bufp->chgBit(oldp+1784,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                             & ((0x0000100fU == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__state)) 
                                   & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_exception) 
                                         >> 4U)))))));
    bufp->chgBit(oldp+1785,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid));
    bufp->chgIData(oldp+1786,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc),32);
    bufp->chgBit(oldp+1787,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid));
    bufp->chgIData(oldp+1788,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result),32);
    bufp->chgIData(oldp+1789,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_lsu_val),32);
    bufp->chgIData(oldp+1790,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_bus_pc),32);
    bufp->chgBit(oldp+1791,(((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_7)) 
                              | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_10))));
    bufp->chgBit(oldp+1792,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid));
    bufp->chgCData(oldp+1793,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_out_bus_exception),5);
    bufp->chgBit(oldp+1794,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid));
    bufp->chgIData(oldp+1795,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_bus_pc),32);
    bufp->chgBit(oldp+1796,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.tb_isFINAL));
    bufp->chgBit(oldp+1797,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.tb_dnpc_valid));
    bufp->chgBit(oldp+1798,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.tb_isMEM));
    bufp->chgIData(oldp+1799,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.tb_FINAL_pc),32);
    bufp->chgIData(oldp+1800,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.tb_FINAL_npc),32);
    bufp->chgIData(oldp+1801,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.tb_alu_result),32);
    bufp->chgIData(oldp+1802,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.tb_FINAL_inst),32);
    bufp->chgIData(oldp+1803,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC),32);
    bufp->chgIData(oldp+1804,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC),32);
    bufp->chgCData(oldp+1805,((0x000000ffU & ((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                    : 0U))
                                               : ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
                                                    [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))))),8);
    bufp->chgIData(oldp+1806,(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data),32);
    bufp->chgBit(oldp+1807,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_ready));
    bufp->chgIData(oldp+1808,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC),32);
    bufp->chgBit(oldp+1809,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit));
    bufp->chgBit(oldp+1810,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit_inst));
    bufp->chgBit(oldp+1811,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_get_inst));
    bufp->chgCData(oldp+1812,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state),3);
    bufp->chgBit(oldp+1813,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid) 
                             & ((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0)) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
                                    & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready)))) 
                                & (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full))) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__latched)) 
                                   & (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_last) 
                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                      & (7U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count))))))));
    bufp->chgBit(oldp+1814,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                                & (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                       >> 1U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready)))))));
    bufp->chgBit(oldp+1815,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.b_fire));
    bufp->chgBit(oldp+1816,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.r_fire));
    bufp->chgIData(oldp+1817,((((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata 
                                            >> 0x0000001fU))) 
                                << 0x00000018U) | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val2 
                                                   >> 8U))),32);
    bufp->chgIData(oldp+1818,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isUnSigned)
                                ? (0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                : (((- (IData)((1U 
                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))),32);
    bufp->chgBit(oldp+1819,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_LOADING));
    bufp->chgBit(oldp+1820,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_WRITING));
    bufp->chgBit(oldp+1821,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_WRITE_FINAL));
    bufp->chgBit(oldp+1822,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_LOAD_FINAL));
    bufp->chgIData(oldp+1823,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_34)
                                ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_out_bus_opCSR))
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_he0d61652_0_2)
                                        ? (~ (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)))
                                        : (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x0000000fU)))
                                    : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_he0d61652_0_2)
                                        ? (~ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_ra_bypass)
                                        : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_ra_bypass))
                                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_ra_bypass)),32);
    bufp->chgIData(oldp+1824,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_34)
                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.__PVT__csr_out_data
                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI)
                                    ? (((- (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x00000014U))
                                    : ((0x6fU == (0x0000007fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))
                                        ? ((((0x00000ffeU 
                                              & ((- (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001fU))) 
                                                 << 1U)) 
                                             | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                >> 0x0000001fU)) 
                                            << 0x00000014U) 
                                           | ((((0x000001feU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U))) 
                                               << 0x0000000bU) 
                                              | (0x000007feU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U))))
                                        : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE)
                                            ? (((- (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000cU) 
                                               | ((0x00000fe0U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                        >> 7U))))
                                            : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isU)
                                                ? (0xfffff000U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000dU) 
                                                    | ((((2U 
                                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001eU)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                               >> 7U))) 
                                                        << 0x0000000bU) 
                                                       | ((0x000007e0U 
                                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                >> 7U)))))
                                                    : 0U))))))),32);
    bufp->chgIData(oldp+1825,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[0]),32);
    bufp->chgIData(oldp+1826,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[1]),32);
    bufp->chgIData(oldp+1827,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[2]),32);
    bufp->chgIData(oldp+1828,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[3]),32);
    bufp->chgIData(oldp+1829,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[4]),32);
    bufp->chgIData(oldp+1830,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[5]),32);
    bufp->chgIData(oldp+1831,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[6]),32);
    bufp->chgIData(oldp+1832,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[7]),32);
    bufp->chgIData(oldp+1833,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[8]),32);
    bufp->chgIData(oldp+1834,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[9]),32);
    bufp->chgIData(oldp+1835,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[10]),32);
    bufp->chgIData(oldp+1836,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[11]),32);
    bufp->chgIData(oldp+1837,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[12]),32);
    bufp->chgIData(oldp+1838,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[13]),32);
    bufp->chgIData(oldp+1839,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[14]),32);
    bufp->chgIData(oldp+1840,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[15]),32);
    bufp->chgIData(oldp+1841,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[16]),32);
    bufp->chgIData(oldp+1842,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[17]),32);
    bufp->chgIData(oldp+1843,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[18]),32);
    bufp->chgIData(oldp+1844,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[19]),32);
    bufp->chgIData(oldp+1845,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[20]),32);
    bufp->chgIData(oldp+1846,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[21]),32);
    bufp->chgIData(oldp+1847,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[22]),32);
    bufp->chgIData(oldp+1848,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[23]),32);
    bufp->chgIData(oldp+1849,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[24]),32);
    bufp->chgIData(oldp+1850,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[25]),32);
    bufp->chgIData(oldp+1851,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[26]),32);
    bufp->chgIData(oldp+1852,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[27]),32);
    bufp->chgIData(oldp+1853,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[28]),32);
    bufp->chgIData(oldp+1854,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[29]),32);
    bufp->chgIData(oldp+1855,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[30]),32);
    bufp->chgIData(oldp+1856,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR[31]),32);
    bufp->chgIData(oldp+1857,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+1858,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+1859,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MISA),32);
    bufp->chgIData(oldp+1860,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSCRATCH),32);
    bufp->chgIData(oldp+1861,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+1862,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+1863,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+1864,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MARCHID),32);
    bufp->chgIData(oldp+1865,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVAL),32);
    bufp->chgCData(oldp+1866,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr),8);
    bufp->chgBit(oldp+1867,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr) 
                                   >> 7U))));
    bufp->chgCData(oldp+1868,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr),8);
    bufp->chgSData(oldp+1869,(((vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgCData(oldp+1870,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgBit(oldp+1871,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.pc_flush));
    bufp->chgIData(oldp+1872,((0xfffffffeU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC)),32);
    bufp->chgCData(oldp+1873,((3U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                     >> 2U))),2);
    bufp->chgIData(oldp+1874,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                               >> 4U)),28);
    bufp->chgCData(oldp+1875,((2U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC)),3);
    bufp->chgBit(oldp+1876,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.pc_flushed));
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000010U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000011U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000012U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000013U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000014U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000015U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000016U] = 0U;
}

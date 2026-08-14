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
        bufp->chgCData(oldp+0,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid),4);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+2,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr),32);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize),3);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst),2);
        bufp->chgBit(oldp+6,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits))));
        bufp->chgIData(oldp+7,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata),32);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb),4);
        bufp->chgBit(oldp+9,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+10,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgIData(oldp+12,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr),32);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize),3);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst),2);
        bufp->chgBit(oldp+15,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0)))));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+19,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  << 0x0000002bU) | 
                                 (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                   << 0x0000000bU) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))))),47);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+22,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  << 0x0000002bU) | 
                                 (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                   << 0x0000000bU) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))))),47);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+25,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                                  << 4U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb)))),36);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
        bufp->chgIData(oldp+28,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr),32);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awsize),3);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awburst),2);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid));
        bufp->chgIData(oldp+32,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata),32);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb),4);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast));
        bufp->chgBit(oldp+35,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)))));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
        bufp->chgIData(oldp+37,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr),32);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize),3);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst),2);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awready));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awvalid));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wready));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arready));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arvalid));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_awready));
        bufp->chgIData(oldp+49,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+52,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo),9);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready));
        bufp->chgIData(oldp+54,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
        bufp->chgBit(oldp+55,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
        bufp->chgIData(oldp+58,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast)))));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+66,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)),28);
        bufp->chgBit(oldp+67,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
        bufp->chgBit(oldp+68,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                  >> 2U))));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready));
        bufp->chgBit(oldp+71,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+72,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),28);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready));
        bufp->chgBit(oldp+74,((0x7800U == (0x00007fffU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                              >> 0x0000000dU)))));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en));
        bufp->chgSData(oldp+76,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                >> 2U))),11);
        bufp->chgSData(oldp+77,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 2U))),11);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
        bufp->chgBit(oldp+83,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                               & (0U == ((((4U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001dU)) 
                                           | (3U & 
                                              (2U ^ 
                                               (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x0000001cU)))) 
                                          << 2U) | 
                                         ((2U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 0x00000017U)) 
                                          | (1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x0000000cU))))))));
        bufp->chgBit(oldp+84,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                  >> 1U))));
        bufp->chgBit(oldp+85,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+86,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),30);
        bufp->chgBit(oldp+87,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+94,((0U == ((((4U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000001dU)) 
                                        | (3U & (2U 
                                                 ^ 
                                                 (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001cU)))) 
                                       << 2U) | ((2U 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                     >> 0x00000017U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                       >> 0x0000000cU)))))));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+99,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),3);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+102,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits),3);
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+105,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))));
        bufp->chgBit(oldp+106,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)))));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq));
        bufp->chgBit(oldp+108,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+109,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+111,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+112,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq));
        bufp->chgBit(oldp+114,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+115,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+118,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+120,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+121,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+123,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+124,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq));
        bufp->chgBit(oldp+126,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+127,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq));
        bufp->chgBit(oldp+129,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))));
        bufp->chgBit(oldp+130,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)))));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq));
        bufp->chgBit(oldp+132,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+133,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq));
        bufp->chgBit(oldp+135,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+136,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq));
        bufp->chgBit(oldp+138,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+139,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq));
        bufp->chgBit(oldp+141,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+142,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+144,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+145,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq));
        bufp->chgBit(oldp+147,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+148,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq));
        bufp->chgBit(oldp+150,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+151,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq));
        bufp->chgBit(oldp+153,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+154,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq));
        bufp->chgBit(oldp+156,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+157,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq));
        bufp->chgBit(oldp+159,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+160,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq));
        bufp->chgBit(oldp+162,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+163,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq));
        bufp->chgBit(oldp+165,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+166,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq));
        bufp->chgBit(oldp+168,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+169,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq));
        bufp->chgBit(oldp+171,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+172,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq));
        bufp->chgBit(oldp+174,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+175,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+177,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+178,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq));
        bufp->chgBit(oldp+180,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+181,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq));
        bufp->chgBit(oldp+183,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+184,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+186,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+187,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+189,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+190,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+192,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+193,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+195,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+196,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+198,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+199,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq));
        bufp->chgIData(oldp+201,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),32);
        bufp->chgBit(oldp+202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+203,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___mrom_rdata),32);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_final));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__lsu_reqEN));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI));
        bufp->chgBit(oldp+207,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL) 
                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isGREATER))))));
        bufp->chgIData(oldp+208,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__CSR_BUS),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__inData),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm),32);
        bufp->chgIData(oldp+214,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                   ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                       ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                               ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val
                                               : 0xffffffffU)
                                           : 0xffffffffU)
                                       : 0xffffffffU)
                                   : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                       ? 0xffffffffU
                                       : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_15)
                                                   ? 
                                                  (0x0000ffffU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                   >> 0x0000000fU)))) 
                                                    << 0x00000010U) 
                                                   | (0x0000ffffU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                               : 0xffffffffU)
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_15)
                                                   ? 
                                                  (0x000000ffU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                               : 0xffffffffU))))),32);
        bufp->chgBit(oldp+215,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__gpr_WEN));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isGREATER));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBEQ)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL)
                                       : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBNE)
                                           ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL))
                                           : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLT) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLTU))
                                               ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_7))
                                               : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU)) 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_7))))))));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid));
        bufp->chgBit(oldp+220,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                           ? 0U : (1U 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full))))
                                       : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                          && (1U & 
                                              (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full))))))));
        bufp->chgIData(oldp+221,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wdata),32);
        bufp->chgCData(oldp+223,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wstrb),4);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                           ? (1U & 
                                              (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))
                                           : 0U) : 
                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                       && (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full))))))));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_wready));
        bufp->chgBit(oldp+228,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                           ? (1U & 
                                              (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))
                                           : 0U) : 
                                      ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid))) 
                                       && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                                           && (1U & 
                                               (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))))))));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
        bufp->chgCData(oldp+231,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awsize),3);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out),32);
        bufp->chgBit(oldp+233,((1U & (IData)((1ULL 
                                              & ((1ULL 
                                                  + 
                                                  ((~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB))) 
                                                   + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA)))) 
                                                 >> 0x00000020U))))));
        bufp->chgBit(oldp+234,((1U & ((~ (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA 
                                            ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB) 
                                           | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out) 
                                          >> 0x0000001fU)) 
                                      | ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA 
                                             >> 0x0000001fU)) 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB 
                                            >> 0x0000001fU))))));
        bufp->chgBit(oldp+235,(((~ (IData)((1ULL & 
                                            ((1ULL 
                                              + ((~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB))) 
                                                 + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA)))) 
                                             >> 0x00000020U)))) 
                                & (0U != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out))));
        bufp->chgQData(oldp+236,((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA))),33);
        bufp->chgQData(oldp+238,((0x00000001ffffffffULL 
                                  & (~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB))))),33);
        bufp->chgIData(oldp+240,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                  ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)),32);
        bufp->chgIData(oldp+241,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                  | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)),32);
        bufp->chgIData(oldp+242,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)),32);
        bufp->chgIData(oldp+243,(VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                (0x0000001fU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))),32);
        bufp->chgIData(oldp+244,(VL_SHIFTR_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                               (0x0000001fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))),32);
        bufp->chgIData(oldp+245,(VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                               (0x0000001fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))),32);
        bufp->chgIData(oldp+246,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                  + ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                     + (IData)((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)))))),32);
        bufp->chgQData(oldp+247,((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA))),33);
        bufp->chgQData(oldp+249,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB),33);
        bufp->chgBit(oldp+251,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA)) 
                                                  + 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                   + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)))) 
                                                 >> 0x00000020U))))));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next));
        bufp->chgBit(oldp+257,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__in_reqValid) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__is_hit) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__r_fire)))
                                 : (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__next_state)))));
        bufp->chgCData(oldp+258,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__next_state),2);
        bufp->chgBit(oldp+259,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__in_reqValid));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__is_hit));
        bufp->chgCData(oldp+261,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__next_state),2);
        bufp->chgBit(oldp+262,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                        ? 0U : (1U 
                                                & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full))))
                                    : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                       && (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full))))))));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__r_fire));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__next_state));
        bufp->chgCData(oldp+265,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__next_state),3);
        bufp->chgBit(oldp+266,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                        ? (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))
                                        : 0U) : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                                 && (1U 
                                                     & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full))))))));
        bufp->chgBit(oldp+267,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_wready))));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__ar_fire));
        bufp->chgIData(oldp+269,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val),32);
        bufp->chgIData(oldp+270,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_15)
                                   ? (0x000000ffU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                   : (((- (IData)((1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                      >> 7U)))) 
                                       << 8U) | (0x000000ffU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))),32);
        bufp->chgIData(oldp+271,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_15)
                                   ? (0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                   : (((- (IData)((1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                      >> 0x0000000fU)))) 
                                       << 0x00000010U) 
                                      | (0x0000ffffU 
                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+272,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int));
        bufp->chgCData(oldp+274,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_value),8);
        bufp->chgBit(oldp+275,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_pad_o));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__serial_in));
        bufp->chgBit(oldp+277,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int))));
        bufp->chgBit(oldp+278,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int))));
        bufp->chgSData(oldp+279,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+280,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000fU])))) {
        bufp->chgBit(oldp+281,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_condition));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir_read));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr_read));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fifo_read));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fifo_write));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+287,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__cnt),8);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata),32);
        bufp->chgIData(oldp+289,(((((0x0000ff00U & 
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
        bufp->chgSData(oldp+290,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__counter),10);
        bufp->chgCData(oldp+291,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_command),8);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in0),6);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in1),6);
        bufp->chgCData(oldp+294,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in2),6);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in3),6);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr),24);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_wdata),8);
        bufp->chgIData(oldp+298,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+299,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
        bufp->chgBit(oldp+300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel));
        bufp->chgBit(oldp+301,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+302,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable))));
        bufp->chgBit(oldp+303,(((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state)) 
                                | (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state)))));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_awready));
        bufp->chgBit(oldp+305,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+306,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+307,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+308,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+309,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+310,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+311,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+312,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))),4);
        bufp->chgBit(oldp+313,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))))));
        bufp->chgCData(oldp+314,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg),4);
        bufp->chgBit(oldp+315,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_arready));
        bufp->chgBit(oldp+316,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+317,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+318,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+319,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+320,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+321,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))))));
        bufp->chgCData(oldp+322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+328,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+331,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
        bufp->chgCData(oldp+332,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid),4);
        bufp->chgBit(oldp+333,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+334,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+335,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                                                 >> 2U))),4);
        bufp->chgCData(oldp+336,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+337,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgCData(oldp+338,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid),4);
        bufp->chgBit(oldp+339,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+340,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x00000023U)))),4);
        bufp->chgIData(oldp+341,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 3U))),32);
        bufp->chgCData(oldp+342,((3U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+343,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
        bufp->chgBit(oldp+349,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))));
        bufp->chgCData(oldp+350,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data),6);
        bufp->chgCData(oldp+351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
        bufp->chgCData(oldp+352,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
        bufp->chgBit(oldp+353,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+358,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))));
        bufp->chgQData(oldp+359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data),39);
        bufp->chgQData(oldp+361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
        bufp->chgQData(oldp+363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
        bufp->chgBit(oldp+365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq));
        bufp->chgQData(oldp+372,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+376,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+378,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq));
        bufp->chgQData(oldp+385,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+387,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq));
        bufp->chgQData(oldp+398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),36);
        bufp->chgQData(oldp+400,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
        bufp->chgQData(oldp+402,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
        bufp->chgBit(oldp+404,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+405,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid));
        bufp->chgCData(oldp+407,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid),4);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp),2);
        bufp->chgBit(oldp+409,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
        bufp->chgCData(oldp+411,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid),4);
        bufp->chgIData(oldp+412,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata),32);
        bufp->chgCData(oldp+413,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp),2);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast));
        bufp->chgBit(oldp+415,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        bufp->chgCData(oldp+417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp),2);
        bufp->chgBit(oldp+418,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_becho_real_last));
        bufp->chgBit(oldp+419,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len))))));
        bufp->chgBit(oldp+420,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                 ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                                 : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))));
        bufp->chgBit(oldp+421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
        bufp->chgBit(oldp+422,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len),8);
        bufp->chgBit(oldp+427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1),8);
        bufp->chgBit(oldp+431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_latched));
        bufp->chgSData(oldp+432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter),9);
        bufp->chgCData(oldp+433,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+438,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+440,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+442,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+443,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+444,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+446,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15),2);
        bufp->chgCData(oldp+449,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                   ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                       ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                                       : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
                                   : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                       ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                                       : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0)))))),2);
        bufp->chgCData(oldp+450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
        bufp->chgQData(oldp+451,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+453,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgCData(oldp+454,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
        bufp->chgQData(oldp+455,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgQData(oldp+458,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+460,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+463,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+466,(((((0x0000ff00U & 
                                     (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                        ? (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                           >> 0x00000018U)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                     >> 0x00000010U)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                         ? (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                            >> 8U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))),32);
        bufp->chgCData(oldp+467,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+472,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+473,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3),8);
        bufp->chgIData(oldp+475,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data),32);
        bufp->chgBit(oldp+476,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state));
        bufp->chgCData(oldp+478,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+479,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgSData(oldp+480,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))),16);
        bufp->chgSData(oldp+481,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))),16);
        bufp->chgSData(oldp+482,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)))),16);
        bufp->chgSData(oldp+483,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)))),16);
        bufp->chgBit(oldp+484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+487,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+489,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+493,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+494,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+495,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+496,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+500,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+501,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+502,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4));
        bufp->chgBit(oldp+533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+538,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+544,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__casez_tmp));
        bufp->chgBit(oldp+555,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                 ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))
                                 : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))));
        bufp->chgBit(oldp+556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__casez_tmp_2));
        bufp->chgBit(oldp+557,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                 ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))
                                 : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))
                                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))
                                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)
                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))));
        bufp->chgBit(oldp+558,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+561,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+564,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+567,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+570,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+571,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+573,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+576,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+578,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+579,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+581,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+582,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+585,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+588,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+591,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+594,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+597,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+600,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+603,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+606,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+609,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+612,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+614,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+615,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+618,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+621,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+624,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+627,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+630,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+633,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+636,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+638,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+639,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+642,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+645,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+648,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+651,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+662,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgIData(oldp+664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input),32);
        bufp->chgCData(oldp+665,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[0]),8);
        bufp->chgCData(oldp+666,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[1]),8);
        bufp->chgCData(oldp+667,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[2]),8);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[3]),8);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[4]),8);
        bufp->chgCData(oldp+670,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[5]),8);
        bufp->chgCData(oldp+671,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[6]),8);
        bufp->chgCData(oldp+672,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[7]),8);
        bufp->chgCData(oldp+673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state),2);
        bufp->chgCData(oldp+674,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state),2);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write),4);
        bufp->chgBit(oldp+676,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write))));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable));
        bufp->chgCData(oldp+678,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record),3);
        bufp->chgBit(oldp+679,((2U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                                             >> 1U)))));
        bufp->chgCData(oldp+680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__state),2);
        bufp->chgSData(oldp+681,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_addr),10);
        bufp->chgSData(oldp+682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt),10);
        bufp->chgBit(oldp+683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
        bufp->chgBit(oldp+684,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__lsu_access_fault));
        bufp->chgBit(oldp+685,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR));
        bufp->chgBit(oldp+686,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU));
        bufp->chgBit(oldp+687,((0x6fU == (0x0000007fU 
                                          & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+688,(((IData)((0x00001073U 
                                         == (0x0000707fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                | ((IData)((0x00002073U 
                                            == (0x0000707fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                   | (IData)((0x00003073U 
                                              == (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))))));
        bufp->chgCData(oldp+689,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+690,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+691,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U))),5);
        bufp->chgSData(oldp+692,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                  >> 0x00000014U)),12);
        bufp->chgCData(oldp+693,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask),4);
        bufp->chgIData(oldp+694,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command),32);
        bufp->chgBit(oldp+695,((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+696,((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+697,((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+698,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_15)))));
        bufp->chgBit(oldp+699,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_20) 
                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU)))));
        bufp->chgBit(oldp+700,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)))));
        bufp->chgCData(oldp+701,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp))
                                   : 0U)),2);
        bufp->chgBit(oldp+702,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast)))));
        bufp->chgCData(oldp+703,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                   : 0U)),4);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata),32);
        bufp->chgBit(oldp+705,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid));
        bufp->chgBit(oldp+706,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid));
        bufp->chgCData(oldp+707,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp),2);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp),2);
        bufp->chgCData(oldp+709,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)
                                       : 0U) : 0U)),4);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize),3);
        bufp->chgBit(oldp+711,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast)))));
        bufp->chgCData(oldp+712,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)
                                       : 0U) : 0U)),4);
        bufp->chgBit(oldp+713,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB));
        bufp->chgBit(oldp+714,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                                && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                     ? 0U : (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))))));
        bufp->chgCData(oldp+715,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                       ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp))
                                   : 0U)),2);
        bufp->chgBit(oldp+716,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid)))));
        bufp->chgCData(oldp+717,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                       ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                   : 0U)),4);
        bufp->chgBit(oldp+718,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel));
        bufp->chgCData(oldp+722,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w_reg),8);
        bufp->chgIData(oldp+723,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[0]),32);
        bufp->chgIData(oldp+724,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[1]),32);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[2]),32);
        bufp->chgIData(oldp+726,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[3]),32);
        bufp->chgIData(oldp+727,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[4]),32);
        bufp->chgIData(oldp+728,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[5]),32);
        bufp->chgIData(oldp+729,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[6]),32);
        bufp->chgIData(oldp+730,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[7]),32);
        bufp->chgIData(oldp+731,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[8]),32);
        bufp->chgIData(oldp+732,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[9]),32);
        bufp->chgIData(oldp+733,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[10]),32);
        bufp->chgIData(oldp+734,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[11]),32);
        bufp->chgIData(oldp+735,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[12]),32);
        bufp->chgIData(oldp+736,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[13]),32);
        bufp->chgIData(oldp+737,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[14]),32);
        bufp->chgIData(oldp+738,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[15]),32);
        bufp->chgBit(oldp+739,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[0]));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[1]));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[2]));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[3]));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[4]));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[5]));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[6]));
        bufp->chgBit(oldp+746,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[7]));
        bufp->chgBit(oldp+747,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[8]));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[9]));
        bufp->chgBit(oldp+749,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[10]));
        bufp->chgBit(oldp+750,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[11]));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[12]));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[13]));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[14]));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[15]));
        bufp->chgIData(oldp+755,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[0]),26);
        bufp->chgIData(oldp+756,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[1]),26);
        bufp->chgIData(oldp+757,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[2]),26);
        bufp->chgIData(oldp+758,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[3]),26);
        bufp->chgIData(oldp+759,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[4]),26);
        bufp->chgIData(oldp+760,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[5]),26);
        bufp->chgIData(oldp+761,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[6]),26);
        bufp->chgIData(oldp+762,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[7]),26);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[8]),26);
        bufp->chgIData(oldp+764,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[9]),26);
        bufp->chgIData(oldp+765,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[10]),26);
        bufp->chgIData(oldp+766,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[11]),26);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[12]),26);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[13]),26);
        bufp->chgIData(oldp+769,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[14]),26);
        bufp->chgIData(oldp+770,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[15]),26);
        bufp->chgCData(oldp+771,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__state),2);
        bufp->chgIData(oldp+772,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+773,((0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)),7);
        bufp->chgCData(oldp+774,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+775,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                  >> 0x00000019U)),7);
        bufp->chgSData(oldp+776,(((0x00000fe0U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 7U)))),12);
        bufp->chgSData(oldp+777,(((((2U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                           >> 0x0000001eU)) 
                                    | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 7U))) 
                                   << 0x0000000aU) 
                                  | ((0x000003f0U & 
                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                       >> 0x00000015U)) 
                                     | (0x0000000fU 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                           >> 8U))))),12);
        bufp->chgIData(oldp+778,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                  >> 0x0000000cU)),20);
        bufp->chgIData(oldp+779,(((0x00080000U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x0000000cU)) 
                                  | ((0x0007f800U & 
                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                       >> 1U)) | ((0x00000400U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                      >> 0x0000000aU)) 
                                                  | (0x000003ffU 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                        >> 0x00000015U)))))),20);
        bufp->chgBit(oldp+780,((0x37U == (0x0000007fU 
                                          & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+781,((0x17U == (0x0000007fU 
                                          & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+782,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR));
        bufp->chgBit(oldp+783,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBEQ));
        bufp->chgBit(oldp+784,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBNE));
        bufp->chgBit(oldp+785,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLT));
        bufp->chgBit(oldp+786,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLTU));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU));
        bufp->chgBit(oldp+789,((IData)((3U == (0x0000707fU 
                                               & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLBU));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSB));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSH));
        bufp->chgBit(oldp+796,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI));
        bufp->chgBit(oldp+798,((IData)((0x00002013U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTIU));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND));
        bufp->chgBit(oldp+815,((IData)((0x00001073U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+816,((IData)((0x00002073U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+817,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
        bufp->chgIData(oldp+818,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val1),32);
        bufp->chgIData(oldp+819,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val2),32);
        bufp->chgIData(oldp+820,((((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                               >> 0x0000001fU))) 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val2 
                                     >> 8U))),32);
        bufp->chgIData(oldp+821,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+822,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+823,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+824,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+825,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+826,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+828,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+831,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+833,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000dU])))) {
        bufp->chgBit(oldp+838,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+839,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+840,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+841,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+842,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+843,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+844,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_2) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+845,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
        bufp->chgCData(oldp+848,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__state),2);
        bufp->chgIData(oldp+849,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__cnt),32);
        bufp->chgIData(oldp+850,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__prdata_reg),32);
        bufp->chgBit(oldp+851,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__pslverr_reg));
        bufp->chgBit(oldp+852,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__pready_reg));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
        bufp->chgIData(oldp+854,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
        bufp->chgBit(oldp+855,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_pready));
        bufp->chgBit(oldp+856,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state))));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_pslverr));
        bufp->chgIData(oldp+858,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_prdata),32);
        bufp->chgBit(oldp+859,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+861,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
        bufp->chgBit(oldp+862,((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+864,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+865,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+866,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
        bufp->chgBit(oldp+867,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
        bufp->chgCData(oldp+868,(((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                   ? (1U & (0x35U >> 
                                            (7U & ((IData)(7U) 
                                                   - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                                   : 0x0aU)),4);
        bufp->chgBit(oldp+869,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
        bufp->chgBit(oldp+870,((0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+871,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
        bufp->chgBit(oldp+872,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))));
        bufp->chgCData(oldp+873,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgBit(oldp+874,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+875,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+876,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+877,((0x000000ffU & (VL_SHIFTR_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter), 1U) 
                                                 - (IData)(3U)))),8);
        bufp->chgCData(oldp+878,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+879,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+880,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+882,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state));
        bufp->chgBit(oldp+883,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
                                 ? (8U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                 : (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)))));
        bufp->chgCData(oldp+884,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter),8);
        bufp->chgBit(oldp+885,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+886,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
        bufp->chgBit(oldp+887,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
        bufp->chgIData(oldp+888,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
        bufp->chgBit(oldp+890,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
        bufp->chgCData(oldp+891,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
        bufp->chgSData(oldp+892,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+893,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+895,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
        bufp->chgSData(oldp+896,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
        bufp->chgSData(oldp+897,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
        bufp->chgSData(oldp+898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
        bufp->chgSData(oldp+899,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+904,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
        bufp->chgCData(oldp+905,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),3);
        bufp->chgCData(oldp+906,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state),2);
        bufp->chgBit(oldp+907,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready));
        bufp->chgIData(oldp+908,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata),32);
        bufp->chgBit(oldp+909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out));
        bufp->chgCData(oldp+911,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr),5);
        bufp->chgBit(oldp+912,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_psel));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_penable));
        bufp->chgBit(oldp+914,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite));
        bufp->chgCData(oldp+915,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb),4);
        bufp->chgBit(oldp+916,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pready));
        bufp->chgIData(oldp+917,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata),32);
        bufp->chgBit(oldp+918,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out));
        bufp->chgCData(oldp+919,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate),4);
        bufp->chgCData(oldp+920,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state),4);
        bufp->chgCData(oldp+921,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr),5);
        bufp->chgCData(oldp+922,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb),4);
        bufp->chgBit(oldp+923,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite));
        bufp->chgSData(oldp+924,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+925,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+926,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+927,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+931,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 9U))));
        bufp->chgBit(oldp+932,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+933,((0x0000007fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+934,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 8U))));
        bufp->chgBit(oldp+935,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+936,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+937,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+939,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+940,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+941,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+942,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+943,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+944,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+945,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+946,((0x000000ffU & ((0x00000800U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                  - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U))))),8);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+948,((((0x00000200U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck)))));
        bufp->chgBit(oldp+949,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                & ((0x00000400U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
        bufp->chgSData(oldp+950,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_addr),10);
        bufp->chgSData(oldp+951,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt),10);
        bufp->chgBit(oldp+952,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid));
        bufp->chgBit(oldp+953,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                         >> 1U)))));
        bufp->chgBit(oldp+954,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr))));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__int_o));
        bufp->chgBit(oldp+956,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__enable));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__srx_pad));
        bufp->chgCData(oldp+959,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier),4);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir),4);
        bufp->chgCData(oldp+961,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fcr),2);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr),5);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr),8);
        bufp->chgSData(oldp+964,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl),16);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch),8);
        bufp->chgBit(oldp+966,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__start_dlc));
        bufp->chgBit(oldp+967,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_d));
        bufp->chgBit(oldp+968,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msi_reset));
        bufp->chgSData(oldp+969,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dlc),16);
        bufp->chgCData(oldp+970,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__trigger_level),4);
        bufp->chgBit(oldp+971,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rx_reset));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tx_reset));
        bufp->chgBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+974,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_23) 
                                      >> 3U))));
        bufp->chgBit(oldp+975,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_23) 
                                      >> 2U))));
        bufp->chgBit(oldp+976,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_23) 
                                      >> 1U))));
        bufp->chgBit(oldp+977,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_23))));
        bufp->chgBit(oldp+978,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0));
        bufp->chgBit(oldp+979,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_overrun));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2));
        bufp->chgBit(oldp+981,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3));
        bufp->chgBit(oldp+982,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4));
        bufp->chgBit(oldp+983,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6));
        bufp->chgBit(oldp+985,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7));
        bufp->chgBit(oldp+986,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0r));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1r));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2r));
        bufp->chgBit(oldp+989,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3r));
        bufp->chgBit(oldp+990,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4r));
        bufp->chgBit(oldp+991,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5r));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6r));
        bufp->chgBit(oldp+993,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7r));
        bufp->chgBit(oldp+994,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int));
        bufp->chgBit(oldp+995,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int));
        bufp->chgBit(oldp+997,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_push));
        bufp->chgBit(oldp+998,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_pop));
        bufp->chgBit(oldp+999,((0U != (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
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
        bufp->chgBit(oldp+1000,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_count),5);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_count),5);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tstate),3);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rstate),4);
        bufp->chgSData(oldp+1005,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__counter_t),10);
        bufp->chgBit(oldp+1006,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt))))));
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt),8);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1009,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0_d));
        bufp->chgBit(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1_d));
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2_d));
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3_d));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4_d));
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5_d));
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6_d));
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7_d));
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d));
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d));
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d));
        bufp->chgBit(oldp+1022,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int))));
        bufp->chgBit(oldp+1023,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int))));
        bufp->chgBit(oldp+1024,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int))));
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_pnd));
        bufp->chgBit(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_pnd));
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_pnd));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_pnd));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_pnd));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1039,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1041,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1042,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1043,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1044,((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1045,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1046,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1047,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16) 
                                                  - (IData)(1U)))),4);
        bufp->chgCData(oldp+1048,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1051,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1052,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1053,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1054,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1055,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1063,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1064,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1066,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1070,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1071,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1072,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0aU]),3);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0bU]),3);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0cU]),3);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0dU]),3);
        bufp->chgCData(oldp+1081,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0eU]),3);
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0fU]),3);
        bufp->chgCData(oldp+1083,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in) 
                                                  >> 3U))),8);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1094,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+1095,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1096,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1097,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1098,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1099,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1100,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1101,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode),13);
        bufp->chgBit(oldp+1102,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1103,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1104,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1105,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1106,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state),4);
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count),4);
        bufp->chgIData(oldp+1109,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
        bufp->chgSData(oldp+1110,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1111,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1112,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1113,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1114,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1115,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1116,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode),13);
        bufp->chgBit(oldp+1117,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1118,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1119,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1120,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1121,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state),4);
        bufp->chgCData(oldp+1123,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count),4);
        bufp->chgIData(oldp+1124,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgSData(oldp+1125,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1126,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1127,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1128,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1129,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1130,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1131,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode),13);
        bufp->chgBit(oldp+1132,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1133,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1134,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1135,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1136,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1137,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state),4);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count),4);
        bufp->chgIData(oldp+1139,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
        bufp->chgSData(oldp+1140,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1141,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1142,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1143,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1144,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1145,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1146,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode),13);
        bufp->chgBit(oldp+1147,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1148,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1149,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1151,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state),4);
        bufp->chgCData(oldp+1153,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count),4);
        bufp->chgIData(oldp+1154,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1155,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state),3);
        bufp->chgCData(oldp+1156,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter),8);
        bufp->chgCData(oldp+1157,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+1158,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr),24);
        bufp->chgIData(oldp+1159,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data),32);
        bufp->chgBit(oldp+1160,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1161,(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso));
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__state),2);
        bufp->chgSData(oldp+1163,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rev),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000aU]))) {
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
        bufp->chgIData(oldp+1165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i),32);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i),4);
        bufp->chgIData(oldp+1167,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)
                                    ? 0U : (0x000000ffU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                                            [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))]))),32);
        bufp->chgIData(oldp+1168,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata),32);
        bufp->chgIData(oldp+1169,((((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                     [3U] << 0x00000018U) 
                                    | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [2U] << 0x00000010U)) 
                                   | ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [1U] << 8U) 
                                      | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [0U]))),32);
        bufp->chgSData(oldp+1170,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0]),9);
        bufp->chgSData(oldp+1171,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1]),9);
        bufp->chgSData(oldp+1172,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2]),9);
        bufp->chgSData(oldp+1173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3]),9);
        bufp->chgSData(oldp+1174,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4]),9);
        bufp->chgSData(oldp+1175,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5]),9);
        bufp->chgSData(oldp+1176,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6]),9);
        bufp->chgSData(oldp+1177,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7]),9);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read),4);
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty));
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+1183,((0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1184,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                   >> 0x00000018U)),8);
        bufp->chgIData(oldp+1185,(((0xffff0000U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgCData(oldp+1186,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+1188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+1190,((0x000000ffU & ((IData)(7U) 
                                                  + 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgIData(oldp+1191,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i)),24);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1198,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1199,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1200,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1201,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1202,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1203,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1205,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1207,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000bU]))) {
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout),4);
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done));
        bufp->chgIData(oldp+1210,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data),24);
        bufp->chgIData(oldp+1211,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr),19);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_out),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000cU]))) {
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                       >> 7U))));
        bufp->chgBit(oldp+1214,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))));
        bufp->chgBit(oldp+1215,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1216,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1217,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1218,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
        bufp->chgSData(oldp+1219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
        bufp->chgCData(oldp+1220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
        bufp->chgCData(oldp+1222,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
        bufp->chgBit(oldp+1223,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__comm_active));
        bufp->chgCData(oldp+1224,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
        bufp->chgCData(oldp+1225,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1226,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss),8);
        bufp->chgBit(oldp+1228,(((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                 | (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
        bufp->chgCData(oldp+1230,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
        bufp->chgIData(oldp+1231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000dU]))) {
        bufp->chgIData(oldp+1235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i),32);
        bufp->chgBit(oldp+1236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel));
        bufp->chgBit(oldp+1237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable));
        bufp->chgIData(oldp+1238,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),30);
        bufp->chgIData(oldp+1239,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),29);
        bufp->chgBit(oldp+1240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
        bufp->chgBit(oldp+1241,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel));
        bufp->chgBit(oldp+1242,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable));
        bufp->chgBit(oldp+1243,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))));
        bufp->chgBit(oldp+1244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__in_psel));
        bufp->chgBit(oldp+1245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i));
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1248,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_2));
        bufp->chgBit(oldp+1249,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1250,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1251,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_5));
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6));
        bufp->chgIData(oldp+1253,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__next_state),2);
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgIData(oldp+1257,((0x00fffffcU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgIData(oldp+1258,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__is_write));
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i),4);
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
        bufp->chgSData(oldp+1263,((0x000001ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                  >> 2U))),13);
        bufp->chgSData(oldp+1264,((0x00001fffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                  >> 0x0000000eU))),13);
        bufp->chgCData(oldp+1265,((7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                         >> 0x0000000bU))),3);
        bufp->chgIData(oldp+1266,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgBit(oldp+1267,((0x30000000U <= (0x3fffffffU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
        bufp->chgIData(oldp+1268,(VL_MODDIV_III(32, 
                                                VL_MODDIV_III(32, 
                                                              VL_SHIFTR_III(32,32,32, 
                                                                            ((0x3fffffffU 
                                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                             - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
        bufp->chgIData(oldp+1269,(VL_DIV_III(32, VL_MODDIV_III(32, 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             ((0x3fffffffU 
                                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                              - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
        bufp->chgSData(oldp+1270,((0x000003ffU & VL_DIV_III(32, 
                                                            VL_MODDIV_III(32, 
                                                                          VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
        bufp->chgSData(oldp+1271,((0x000003ffU & VL_MODDIV_III(32, 
                                                               VL_MODDIV_III(32, 
                                                                             VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
        bufp->chgIData(oldp+1272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr),19);
        bufp->chgCData(oldp+1273,((7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),3);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w),8);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_in),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000eU]))) {
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__now_sel));
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0));
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000fU]))) {
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n));
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready));
        bufp->chgIData(oldp+1281,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata),32);
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr));
        bufp->chgBit(oldp+1283,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_5)))));
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__next_state),2);
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp),2);
        bufp->chgCData(oldp+1286,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+1289,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
        bufp->chgCData(oldp+1290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr));
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__next_state),2);
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i));
        bufp->chgIData(oldp+1299,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata),32);
        bufp->chgBit(oldp+1300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pready));
        bufp->chgIData(oldp+1301,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata),32);
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out));
        bufp->chgCData(oldp+1303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr),5);
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_psel));
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_penable));
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot),3);
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite));
        bufp->chgIData(oldp+1308,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata),32);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb),4);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate),4);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state),4);
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer));
        bufp->chgIData(oldp+1313,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata),32);
        bufp->chgIData(oldp+1314,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata),32);
        bufp->chgBit(oldp+1315,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x14U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgBit(oldp+1316,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x10U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
        bufp->chgBit(oldp+1318,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x18U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgCData(oldp+1319,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000010U]))) {
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state),4);
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1323,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000011U]))) {
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state),4);
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000012U]))) {
        bufp->chgIData(oldp+1328,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i),32);
        bufp->chgSData(oldp+1329,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
                                   >> 0x00000010U)),16);
        bufp->chgSData(oldp+1330,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i)),16);
    }
    bufp->chgBit(oldp+1331,(vlSelfRef.clock));
    bufp->chgBit(oldp+1332,(vlSelfRef.reset));
    bufp->chgSData(oldp+1333,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+1334,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+1335,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+1336,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+1337,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+1338,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+1339,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+1340,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+1341,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+1342,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+1343,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+1344,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+1345,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+1346,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+1347,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+1348,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+1349,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+1350,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+1351,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+1352,(vlSelfRef.externalPins_uart_tx));
    bufp->chgCData(oldp+1353,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_cnt),8);
    bufp->chgCData(oldp+1354,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_state),2);
    bufp->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                   | (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                       ? (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                          >> 7U) : 
                                      (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data 
                                       >> 0x0000001fU))))));
    bufp->chgIData(oldp+1356,(((0x00fffffeU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi))),32);
    bufp->chgBit(oldp+1357,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)
                              : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    bufp->chgCData(oldp+1358,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din),4);
    bufp->chgCData(oldp+1359,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state),4);
    bufp->chgCData(oldp+1360,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__next_state),4);
    bufp->chgBit(oldp+1361,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__is_QPI));
    bufp->chgCData(oldp+1362,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)
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
    bufp->chgBit(oldp+1363,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgBit(oldp+1364,(((~ (IData)(vlSelfRef.clock)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q))));
    bufp->chgCData(oldp+1365,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__reg_ba),3);
    bufp->chgIData(oldp+1366,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->chgCData(oldp+1367,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))
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
    bufp->chgBit(oldp+1368,(((~ (IData)(vlSelfRef.clock)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))));
    bufp->chgIData(oldp+1369,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->chgCData(oldp+1370,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))
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
    bufp->chgIData(oldp+1371,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->chgCData(oldp+1372,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))
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
    bufp->chgBit(oldp+1373,(((~ (IData)(vlSelfRef.clock)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))));
    bufp->chgIData(oldp+1374,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->chgCData(oldp+1375,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))
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
    bufp->chgBit(oldp+1376,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                | (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                    & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                    ? (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                       >> 7U) : (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data 
                                                 >> 0x0000001fU))))));
    bufp->chgIData(oldp+1377,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0)
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
                                          (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_2)
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
                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_5)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_prdata
                                                      : 0U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6)
                                                        ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q
                                                        : 0U)))))))),32);
    bufp->chgBit(oldp+1378,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_pslverr))));
    bufp->chgBit(oldp+1379,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                  : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->chgIData(oldp+1380,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
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
    bufp->chgBit(oldp+1381,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0))));
    bufp->chgBit(oldp+1382,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0))));
    bufp->chgIData(oldp+1383,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->chgCData(oldp+1384,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                ? (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_3)))
                                : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_4)
                                        : 1U) : ((2U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_4)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))),2);
    bufp->chgCData(oldp+1385,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp))),6);
    bufp->chgQData(oldp+1386,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg)) 
                                << 0x00000023U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                                      ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                                                      : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp) 
                                                                         << 1U))))))),39);
    bufp->chgCData(oldp+1388,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
                                ? ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel)) 
                                    & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                           & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))) 
                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))))
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable)
                                                    ? 0U
                                                    : 1U)
                                                   : 0U))),2);
    bufp->chgCData(oldp+1389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__cnt),4);
    bufp->chgSData(oldp+1390,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg),9);
    bufp->chgBit(oldp+1391,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                 : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    bufp->chgBit(oldp+1392,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+1393,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                              ? (0x16U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd))));
    bufp->chgBit(oldp+1394,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                                    ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)))));
    bufp->chgIData(oldp+1395,(((0U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
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
    bufp->chgBit(oldp+1396,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)))));
    bufp->chgBit(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset));
    bufp->chgIData(oldp+1398,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.PC),32);
    bufp->chgIData(oldp+1399,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.dnpc),32);
    bufp->chgIData(oldp+1400,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.snpc),32);
    bufp->chgBit(oldp+1401,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final));
    bufp->chgBit(oldp+1402,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isSTORE));
    bufp->chgBit(oldp+1403,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB));
    bufp->chgIData(oldp+1404,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr),32);
    bufp->chgIData(oldp+1405,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata),32);
    bufp->chgCData(oldp+1406,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask),4);
    bufp->chgBit(oldp+1407,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen));
    bufp->chgBit(oldp+1408,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isLOAD));
    bufp->chgBit(oldp+1409,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isWRITE));
    bufp->chgBit(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isJUMP));
    bufp->chgBit(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isPC));
    bufp->chgCData(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR),2);
    bufp->chgSData(oldp+1413,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR) 
                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW) 
                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI) 
                                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU) 
                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB))))))))))) 
                                << 9U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB) 
                                           << 8U) | 
                                          (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL)) 
                                             << 5U) 
                                            | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI) 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA)) 
                                                  << 3U))) 
                                           | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND)) 
                                               << 2U) 
                                              | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR)) 
                                                  << 1U) 
                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR)))))))),10);
    bufp->chgIData(oldp+1414,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC),32);
    bufp->chgIData(oldp+1415,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC),32);
    bufp->chgBit(oldp+1416,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid));
    bufp->chgIData(oldp+1417,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC),32);
    bufp->chgIData(oldp+1418,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata),32);
    bufp->chgBit(oldp+1419,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))));
    bufp->chgBit(oldp+1420,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_we_i));
    bufp->chgBit(oldp+1421,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_re_i));
    bufp->chgCData(oldp+1422,((0x000000ffU & ((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
    bufp->chgIData(oldp+1423,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__is_hit)
                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem
                               [(0x0000000fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                                >> 2U))]
                                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata)),32);
    bufp->chgCData(oldp+1424,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.state),2);
    bufp->chgBit(oldp+1425,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.r_fire));
    bufp->chgCData(oldp+1426,((0x0000000fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                              >> 2U))),4);
    bufp->chgIData(oldp+1427,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                               >> 6U)),26);
    bufp->chgCData(oldp+1428,(((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR) 
                                   << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isSTORE) 
                                     << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB))) 
                                << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU) 
                                           << 2U) | 
                                          (((0x6fU 
                                             == (0x0000007fU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                                            << 1U) 
                                           | ((IData)(
                                                      (0x00001073U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                              | ((IData)(
                                                         (0x00002073U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                                 | (IData)(
                                                           (0x00003073U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))))))))),7);
    bufp->chgBit(oldp+1429,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.state));
    bufp->chgBit(oldp+1430,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_reqEN));
    bufp->chgCData(oldp+1431,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state),3);
    bufp->chgBit(oldp+1432,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.b_fire));
    bufp->chgBit(oldp+1433,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.r_fire));
    bufp->chgBit(oldp+1434,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))));
    bufp->chgIData(oldp+1435,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[0]),32);
    bufp->chgIData(oldp+1436,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[1]),32);
    bufp->chgIData(oldp+1437,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[2]),32);
    bufp->chgIData(oldp+1438,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[3]),32);
    bufp->chgIData(oldp+1439,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[4]),32);
    bufp->chgIData(oldp+1440,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[5]),32);
    bufp->chgIData(oldp+1441,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[6]),32);
    bufp->chgIData(oldp+1442,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[7]),32);
    bufp->chgIData(oldp+1443,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[8]),32);
    bufp->chgIData(oldp+1444,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[9]),32);
    bufp->chgIData(oldp+1445,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[10]),32);
    bufp->chgIData(oldp+1446,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[11]),32);
    bufp->chgIData(oldp+1447,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[12]),32);
    bufp->chgIData(oldp+1448,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[13]),32);
    bufp->chgIData(oldp+1449,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[14]),32);
    bufp->chgIData(oldp+1450,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[15]),32);
    bufp->chgIData(oldp+1451,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[16]),32);
    bufp->chgIData(oldp+1452,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[17]),32);
    bufp->chgIData(oldp+1453,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[18]),32);
    bufp->chgIData(oldp+1454,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[19]),32);
    bufp->chgIData(oldp+1455,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[20]),32);
    bufp->chgIData(oldp+1456,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[21]),32);
    bufp->chgIData(oldp+1457,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[22]),32);
    bufp->chgIData(oldp+1458,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[23]),32);
    bufp->chgIData(oldp+1459,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[24]),32);
    bufp->chgIData(oldp+1460,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[25]),32);
    bufp->chgIData(oldp+1461,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[26]),32);
    bufp->chgIData(oldp+1462,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[27]),32);
    bufp->chgIData(oldp+1463,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[28]),32);
    bufp->chgIData(oldp+1464,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[29]),32);
    bufp->chgIData(oldp+1465,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[30]),32);
    bufp->chgIData(oldp+1466,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[31]),32);
    bufp->chgIData(oldp+1467,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+1468,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+1470,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+1471,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+1472,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MARCHID),32);
    bufp->chgCData(oldp+1473,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr),8);
    bufp->chgBit(oldp+1474,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr) 
                                   >> 7U))));
    bufp->chgCData(oldp+1475,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr),8);
    bufp->chgSData(oldp+1476,(((vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgCData(oldp+1477,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]),8);
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
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_14;
    VlWide<8>/*255:0*/ __Vtemp_20;
    VlWide<8>/*255:0*/ __Vtemp_26;
    VlWide<8>/*255:0*/ __Vtemp_32;
    VlWide<8>/*255:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<8>/*255:0*/ __Vtemp_46;
    VlWide<8>/*255:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<8>/*255:0*/ __Vtemp_60;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7363);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last));
        bufp->chgCData(oldp+5,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1)))));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last));
        bufp->chgCData(oldp+11,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+12,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 << 0x00000010U) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                   >> 0x00000010U)))),20);
        bufp->chgIData(oldp+13,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                   >> 0x0000001cU)))),20);
        bufp->chgIData(oldp+14,((0x000fffffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                >> 8U))),20);
        bufp->chgIData(oldp+15,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 << 0x0000000cU) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                   >> 0x00000014U)))),20);
        bufp->chgIData(oldp+16,((0x000fffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                                  << 0x00000028U) | 
                                 (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                   << 0x00000014U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))));
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b)))) 
                          << 0x0000001cU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                                                       << 0x00000028U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                                          << 0x00000014U) 
                                                         | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))) 
                                                     >> 0x00000020U)));
        __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                               << 0x00000014U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001cU));
        __Vtemp_1[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b))) 
                                  >> 0x00000020U)) 
                         >> 4U);
        bufp->chgWData(oldp+17,(__Vtemp_1),100);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgBit(oldp+25,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)))));
        bufp->chgIData(oldp+26,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data),32);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
        bufp->chgIData(oldp+29,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data),32);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last));
        bufp->chgCData(oldp+31,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
        bufp->chgIData(oldp+33,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data),32);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last));
        bufp->chgCData(oldp+35,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+36,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 << 0x00000010U) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                   >> 0x00000010U)))),20);
        bufp->chgIData(oldp+37,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                   >> 0x0000001cU)))),20);
        bufp->chgIData(oldp+38,((0x000fffffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                >> 8U))),20);
        bufp->chgIData(oldp+39,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 << 0x0000000cU) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                   >> 0x00000014U)))),20);
        bufp->chgIData(oldp+40,((0x000fffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                                  << 0x00000028U) | 
                                 (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                   << 0x00000014U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b)))) 
                          << 0x0000001cU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                                                       << 0x00000028U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                                          << 0x00000014U) 
                                                         | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))) 
                                                     >> 0x00000020U)));
        __Vtemp_2[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                               << 0x00000014U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001cU));
        __Vtemp_2[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b))) 
                                  >> 0x00000020U)) 
                         >> 4U);
        bufp->chgWData(oldp+41,(__Vtemp_2),100);
        bufp->chgWData(oldp+45,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z),21);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_1),21);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_2),21);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_3),21);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_4),21);
        bufp->chgBit(oldp+54,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full)))));
        bufp->chgSData(oldp+55,((0x00001fffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_address)),13);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid));
        bufp->chgCData(oldp+58,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode),3);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_param),2);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_size),3);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_source),7);
        bufp->chgBit(oldp+62,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_corrupt));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__da_ready));
        bufp->chgBit(oldp+65,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
                               & ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__beatsLeft)) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__state_0)))));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__da_bits_opcode),3);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__idle));
        bufp->chgCData(oldp+68,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_last_beats1),3);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_last_counter),3);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_last));
        bufp->chgCData(oldp+71,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__r_beats1),3);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__r_counter),3);
        bufp->chgBit(oldp+73,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__r_counter))));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__da_valid));
        bufp->chgCData(oldp+76,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_last_beats1),3);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_last_counter),3);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_last));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__winner_0));
        bufp->chgCData(oldp+81,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__beatsLeft),3);
        bufp->chgBit(oldp+82,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__beatsLeft))));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__winner_1));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__state_0));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__state_1));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__muxState_0));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full));
        bufp->chgCData(oldp+88,((7U & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[2U] 
                                        << 1U) | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                                  >> 0x0000001fU)))),3);
        bufp->chgCData(oldp+89,((7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                       >> 0x00000019U))),3);
        bufp->chgCData(oldp+90,((0x0000007fU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                                >> 0x00000012U))),7);
        bufp->chgWData(oldp+91,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram),66);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__full));
        bufp->chgCData(oldp+96,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                               >> 0x0000003bU)))),3);
        bufp->chgCData(oldp+97,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                               >> 0x00000038U)))),3);
        bufp->chgCData(oldp+98,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                               >> 0x00000035U)))),3);
        bufp->chgCData(oldp+99,((0x0000007fU & (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                                        >> 0x0000002eU)))),7);
        bufp->chgQData(oldp+100,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram),62);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgCData(oldp+103,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__source),7);
        bufp->chgSData(oldp+108,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__address),13);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+115,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter),3);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_3),3);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__param_3),3);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__size_3),3);
        bufp->chgCData(oldp+119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__source_3),7);
        bufp->chgSData(oldp+120,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__address_2),13);
        bufp->chgWData(oldp+121,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight),128);
        bufp->chgWData(oldp+125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes),512);
        bufp->chgWData(oldp+141,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes),512);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+158,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+160,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+161,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode))));
        bufp->chgIData(oldp+162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1),128);
        bufp->chgWData(oldp+167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1),512);
        bufp->chgCData(oldp+183,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1),3);
        bufp->chgBit(oldp+184,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+186,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_2));
        bufp->chgCData(oldp+189,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3),3);
        bufp->chgBit(oldp+190,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_set));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+195,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgBit(oldp+196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
        bufp->chgWData(oldp+198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
        bufp->chgBit(oldp+202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgWData(oldp+203,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),128);
        bufp->chgBit(oldp+207,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
        bufp->chgBit(oldp+208,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full)))));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid));
        bufp->chgCData(oldp+210,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode),3);
        bufp->chgCData(oldp+211,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size),3);
        bufp->chgCData(oldp+212,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source),4);
        bufp->chgBit(oldp+213,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt));
        bufp->chgCData(oldp+215,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__da_bits_opcode),3);
        bufp->chgBit(oldp+216,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__idle));
        bufp->chgCData(oldp+217,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_last_beats1),3);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_last_counter),3);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_last));
        bufp->chgCData(oldp+220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__r_beats1),3);
        bufp->chgCData(oldp+221,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__r_counter),3);
        bufp->chgBit(oldp+222,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__r_counter))));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__winner_1));
        bufp->chgCData(oldp+224,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__beatsLeft),3);
        bufp->chgBit(oldp+225,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__beatsLeft))));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__state_1));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full));
        bufp->chgCData(oldp+228,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                                >> 0x0000003cU)))),3);
        bufp->chgCData(oldp+229,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                                >> 0x00000036U)))),3);
        bufp->chgCData(oldp+230,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                                         >> 0x00000032U)))),4);
        bufp->chgQData(oldp+231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram),63);
        bufp->chgBit(oldp+233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgCData(oldp+234,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__source),4);
        bufp->chgSData(oldp+238,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__address),13);
        bufp->chgCData(oldp+239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__source_1),4);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__denied));
        bufp->chgSData(oldp+245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight),16);
        bufp->chgQData(oldp+246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_opcodes),64);
        bufp->chgQData(oldp+248,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes),64);
        bufp->chgCData(oldp+250,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+251,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+253,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+254,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode))));
        bufp->chgIData(oldp+255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1),16);
        bufp->chgQData(oldp+257,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1),64);
        bufp->chgCData(oldp+259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+260,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+261,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+264,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgSData(oldp+265,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),16);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgCData(oldp+267,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__a_first_counter),3);
        bufp->chgBit(oldp+268,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__a_first_counter))));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__d_first_counter),3);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_0));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_1));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_2));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_3));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_4));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_5));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_6));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_7));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_8));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_9));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_10));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_11));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_12));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_13));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_14));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_15));
        bufp->chgCData(oldp+286,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__stalls_id),2);
        bufp->chgCData(oldp+287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__stalls_id_1),2);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+289,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+291,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__source),4);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+296,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__source_1),4);
        bufp->chgCData(oldp+298,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__sink),6);
        bufp->chgBit(oldp+299,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__denied));
        bufp->chgSData(oldp+300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight),16);
        bufp->chgQData(oldp+301,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),64);
        bufp->chgQData(oldp+303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes),64);
        bufp->chgCData(oldp+305,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+306,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+307,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+308,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+309,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1),16);
        bufp->chgQData(oldp+311,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),64);
        bufp->chgCData(oldp+313,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+314,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+315,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+316,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+318,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first));
        bufp->chgCData(oldp+321,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_id),2);
        bufp->chgBit(oldp+322,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_id))));
        bufp->chgCData(oldp+323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter),3);
        bufp->chgBit(oldp+324,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))));
        bufp->chgCData(oldp+325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__d_first_counter),3);
        bufp->chgBit(oldp+326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_16));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_17));
        bufp->chgBit(oldp+328,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_18));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_19));
        bufp->chgBit(oldp+330,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_20));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_21));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_22));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_23));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_24));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_25));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_26));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_27));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_28));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_29));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_30));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_31));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_32));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_33));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_34));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_35));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_36));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_37));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_38));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_39));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_40));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_41));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_42));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_43));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_44));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_45));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_46));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_47));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_48));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_49));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_50));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_51));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_52));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_53));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_54));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_55));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_56));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_57));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_58));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_59));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_60));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_61));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_62));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_63));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_64));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_65));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_66));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_67));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_68));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_69));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_70));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_71));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_72));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_73));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_74));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_75));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_76));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_77));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_78));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_79));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_80));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_81));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_82));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_83));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_84));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_85));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_86));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_87));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_88));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_89));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_90));
        bufp->chgBit(oldp+401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_91));
        bufp->chgBit(oldp+402,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_92));
        bufp->chgBit(oldp+403,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_93));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_94));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_95));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_96));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_97));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_98));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_99));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_100));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_101));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_102));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_103));
        bufp->chgBit(oldp+414,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_104));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_105));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_106));
        bufp->chgBit(oldp+417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_107));
        bufp->chgBit(oldp+418,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_108));
        bufp->chgBit(oldp+419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_109));
        bufp->chgBit(oldp+420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_110));
        bufp->chgBit(oldp+421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_111));
        bufp->chgBit(oldp+422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_112));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_113));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_114));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_115));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_116));
        bufp->chgBit(oldp+427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_117));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_118));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_119));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_120));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_121));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_122));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_123));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_124));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_125));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_126));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_127));
        bufp->chgBit(oldp+438,((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                             >> 3U)))));
        bufp->chgCData(oldp+439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id),2);
        bufp->chgBit(oldp+440,((2U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                             >> 3U)))));
        bufp->chgCData(oldp+441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_1),2);
        bufp->chgBit(oldp+442,((3U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                             >> 3U)))));
        bufp->chgCData(oldp+443,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_2),2);
        bufp->chgBit(oldp+444,((4U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                             >> 3U)))));
        bufp->chgCData(oldp+445,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_3),2);
        bufp->chgBit(oldp+446,((5U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                             >> 3U)))));
        bufp->chgCData(oldp+447,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_4),2);
        bufp->chgBit(oldp+448,((6U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                             >> 3U)))));
        bufp->chgCData(oldp+449,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_5),2);
        bufp->chgCData(oldp+450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_6),2);
        bufp->chgBit(oldp+451,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stall));
        bufp->chgCData(oldp+452,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+453,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+454,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+455,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+456,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+458,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+459,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+460,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter),3);
        bufp->chgCData(oldp+465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_3),3);
        bufp->chgCData(oldp+466,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_3),3);
        bufp->chgCData(oldp+467,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_3),3);
        bufp->chgCData(oldp+468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_3),7);
        bufp->chgIData(oldp+469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address_2),32);
        bufp->chgWData(oldp+470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight),128);
        bufp->chgWData(oldp+474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes),512);
        bufp->chgWData(oldp+490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes),512);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+507,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+509,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1),128);
        bufp->chgWData(oldp+515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1),512);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1),3);
        bufp->chgBit(oldp+532,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+534,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2));
        bufp->chgCData(oldp+537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3),3);
        bufp->chgBit(oldp+538,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_set));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgBit(oldp+544,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1));
        bufp->chgWData(oldp+547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
        bufp->chgBit(oldp+551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgWData(oldp+552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),128);
        bufp->chgBit(oldp+556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
        bufp->chgBit(oldp+557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first));
        bufp->chgBit(oldp+558,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__mapPP));
        bufp->chgCData(oldp+559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_beats1),3);
        bufp->chgCData(oldp+560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter),3);
        bufp->chgBit(oldp+561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_repeat));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full));
        bufp->chgCData(oldp+563,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source),6);
        bufp->chgCData(oldp+564,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_size),3);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_source),6);
        bufp->chgIData(oldp+566,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_address),32);
        bufp->chgCData(oldp+567,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+569,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+570,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+571,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__source),6);
        bufp->chgIData(oldp+572,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+573,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+576,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+577,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__source_1),6);
        bufp->chgBit(oldp+578,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+579,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter),3);
        bufp->chgCData(oldp+580,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_3),3);
        bufp->chgCData(oldp+581,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__param_3),3);
        bufp->chgCData(oldp+582,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__size_3),3);
        bufp->chgCData(oldp+583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__source_3),6);
        bufp->chgIData(oldp+584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__address_2),32);
        bufp->chgQData(oldp+585,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight),64);
        bufp->chgWData(oldp+587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes),256);
        bufp->chgWData(oldp+595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes),256);
        bufp->chgCData(oldp+603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+604,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+605,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+606,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+607,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog),32);
        bufp->chgQData(oldp+608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1),64);
        bufp->chgWData(oldp+610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1),256);
        bufp->chgCData(oldp+618,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1),3);
        bufp->chgBit(oldp+619,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+621,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+622,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2));
        bufp->chgCData(oldp+624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3),3);
        bufp->chgBit(oldp+625,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_set));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+630,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgBit(oldp+631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
        bufp->chgBit(oldp+633,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1));
        bufp->chgQData(oldp+634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),64);
        bufp->chgBit(oldp+636,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgQData(oldp+637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),64);
        bufp->chgBit(oldp+639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
        bufp->chgBit(oldp+640,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_ready) 
                                & ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_readys)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__state_0)))));
        bufp->chgCData(oldp+641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d),3);
        bufp->chgCData(oldp+642,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_size),3);
        bufp->chgCData(oldp+643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_source),7);
        bufp->chgBit(oldp+644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_denied));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_22));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_21));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_20));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_19));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_18));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_17));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_16));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_15));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_14));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_13));
        bufp->chgBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_12));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_11));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_10));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_9));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_8));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_7));
        bufp->chgCData(oldp+661,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_counter),3);
        bufp->chgBit(oldp+662,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_counter))));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__doneAW));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d));
        bufp->chgCData(oldp+665,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__b_delay),3);
        bufp->chgBit(oldp+666,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_first));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_denied_r));
        bufp->chgBit(oldp+668,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_first)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_denied_r))));
        bufp->chgBit(oldp+669,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d)))));
        bufp->chgCData(oldp+670,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count),5);
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write));
        bufp->chgCData(oldp+672,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1),5);
        bufp->chgBit(oldp+673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_1));
        bufp->chgCData(oldp+674,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_2),5);
        bufp->chgBit(oldp+675,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_2));
        bufp->chgCData(oldp+676,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3),5);
        bufp->chgBit(oldp+677,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_3));
        bufp->chgCData(oldp+678,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_4),5);
        bufp->chgBit(oldp+679,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_4));
        bufp->chgCData(oldp+680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5),5);
        bufp->chgBit(oldp+681,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_5));
        bufp->chgCData(oldp+682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6),5);
        bufp->chgBit(oldp+683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_6));
        bufp->chgCData(oldp+684,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+685,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+686,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+687,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+689,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+690,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+691,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+692,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+693,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+694,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+695,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight),128);
        bufp->chgWData(oldp+699,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes),512);
        bufp->chgWData(oldp+715,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes),512);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+732,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+733,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+734,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+735,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+736,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1),128);
        bufp->chgWData(oldp+740,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1),512);
        bufp->chgCData(oldp+756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+757,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+758,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+759,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
        bufp->chgBit(oldp+760,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+761,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgBit(oldp+763,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
        bufp->chgWData(oldp+764,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
        bufp->chgBit(oldp+768,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgBit(oldp+769,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgQData(oldp+770,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+772,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgBit(oldp+773,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)))));
        bufp->chgQData(oldp+774,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram),62);
        bufp->chgBit(oldp+776,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full));
        bufp->chgCData(oldp+777,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft),3);
        bufp->chgBit(oldp+778,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft))));
        bufp->chgCData(oldp+779,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid) 
                                  << 1U)),2);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_mask),2);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+783,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__winner_1));
        bufp->chgBit(oldp+784,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__state_0));
        bufp->chgBit(oldp+785,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__state_1));
        bufp->chgBit(oldp+786,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__muxState_0));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__muxState_1));
        bufp->chgCData(oldp+788,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+789,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+790,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+796,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+797,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+798,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+799,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+800,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter),3);
        bufp->chgCData(oldp+801,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode_3),3);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__param_3),3);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__size_3),3);
        bufp->chgCData(oldp+804,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_3),7);
        bufp->chgIData(oldp+805,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__address_2),32);
        bufp->chgWData(oldp+806,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight),128);
        bufp->chgWData(oldp+810,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes),512);
        bufp->chgWData(oldp+826,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes),512);
        bufp->chgCData(oldp+842,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+843,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+844,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+845,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+846,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode))));
        bufp->chgIData(oldp+847,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+848,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1),128);
        bufp->chgWData(oldp+852,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1),512);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1),3);
        bufp->chgBit(oldp+869,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+870,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+871,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+872,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+873,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_2));
        bufp->chgCData(oldp+874,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3),3);
        bufp->chgBit(oldp+875,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_set));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+880,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgBit(oldp+881,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1));
        bufp->chgWData(oldp+884,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
        bufp->chgBit(oldp+888,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgWData(oldp+889,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),128);
        bufp->chgBit(oldp+893,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__unnamedblk1__DOT__latch));
        bufp->chgCData(oldp+895,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft),3);
        bufp->chgBit(oldp+896,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft))));
        bufp->chgCData(oldp+897,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__readys_mask),2);
        bufp->chgBit(oldp+898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__state_0));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__state_1));
        bufp->chgCData(oldp+900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+903,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source),4);
        bufp->chgIData(oldp+904,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+905,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+906,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+907,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+908,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_1),4);
        bufp->chgCData(oldp+910,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__sink),6);
        bufp->chgBit(oldp+911,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__denied));
        bufp->chgSData(oldp+912,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight),16);
        bufp->chgQData(oldp+913,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_opcodes),64);
        bufp->chgQData(oldp+915,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes),64);
        bufp->chgCData(oldp+917,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+918,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+919,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+920,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+921,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+922,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1),16);
        bufp->chgQData(oldp+923,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1),64);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+926,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+927,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+928,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
        bufp->chgCData(oldp+930,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
        bufp->chgBit(oldp+931,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__unnamedblk1__DOT__latch));
        bufp->chgBit(oldp+933,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+936,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+937,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+939,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+940,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+941,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+942,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgIData(oldp+943,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input),32);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[0]),8);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[1]),8);
        bufp->chgCData(oldp+946,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[2]),8);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[3]),8);
        bufp->chgCData(oldp+948,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[4]),8);
        bufp->chgCData(oldp+949,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[5]),8);
        bufp->chgCData(oldp+950,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[6]),8);
        bufp->chgCData(oldp+951,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[7]),8);
        bufp->chgCData(oldp+952,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state),2);
        bufp->chgCData(oldp+953,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state),2);
        bufp->chgSData(oldp+954,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0]),9);
        bufp->chgSData(oldp+955,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1]),9);
        bufp->chgSData(oldp+956,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2]),9);
        bufp->chgSData(oldp+957,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3]),9);
        bufp->chgSData(oldp+958,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4]),9);
        bufp->chgSData(oldp+959,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5]),9);
        bufp->chgSData(oldp+960,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6]),9);
        bufp->chgSData(oldp+961,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7]),9);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read),4);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write),4);
        bufp->chgBit(oldp+964,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty));
        bufp->chgBit(oldp+965,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write))));
        bufp->chgBit(oldp+966,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable));
        bufp->chgCData(oldp+967,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record),3);
        bufp->chgBit(oldp+968,((2U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                                             >> 1U)))));
        bufp->chgCData(oldp+969,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+970,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+972,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+973,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__state),2);
        bufp->chgSData(oldp+974,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_addr),10);
        bufp->chgSData(oldp+975,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt),10);
        bufp->chgBit(oldp+976,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
        bufp->chgBit(oldp+977,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR));
        bufp->chgBit(oldp+978,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI));
        bufp->chgBit(oldp+979,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSTORE));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB));
        bufp->chgBit(oldp+981,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU));
        bufp->chgBit(oldp+982,((0x6fU == (0x0000007fU 
                                          & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+983,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRW) 
                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRS) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRC)))));
        bufp->chgCData(oldp+984,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+985,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+986,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U))),5);
        bufp->chgSData(oldp+987,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                  >> 0x00000014U)),12);
        bufp->chgIData(oldp+988,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm),32);
        bufp->chgCData(oldp+989,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask),4);
        bufp->chgIData(oldp+990,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command),32);
        bufp->chgBit(oldp+991,((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+992,((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+993,((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+994,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLOAD));
        bufp->chgBit(oldp+995,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isWRITE));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__isJUMP));
        bufp->chgBit(oldp+997,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_10)))));
        bufp->chgBit(oldp+998,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))));
        bufp->chgCData(oldp+999,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSR),2);
        bufp->chgBit(oldp+1000,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_20) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU)))));
        bufp->chgSData(oldp+1001,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21) 
                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25) 
                                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI) 
                                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU) 
                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))))))))))) 
                                    << 9U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB) 
                                               << 8U) 
                                              | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI) 
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
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize),3);
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB));
        bufp->chgBit(oldp+1004,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state));
        bufp->chgBit(oldp+1005,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel));
        bufp->chgBit(oldp+1006,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state));
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel));
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+1009,((0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)),7);
        bufp->chgCData(oldp+1010,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                         >> 0x0000000cU))),3);
        bufp->chgCData(oldp+1011,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                   >> 0x00000019U)),7);
        bufp->chgSData(oldp+1012,(((0x00000fe0U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 0x00000014U)) 
                                   | (0x0000001fU & 
                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                       >> 7U)))),12);
        bufp->chgSData(oldp+1013,(((((2U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                            >> 0x0000001eU)) 
                                     | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 7U))) 
                                    << 0x0000000aU) 
                                   | ((0x000003f0U 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                          >> 0x00000015U)) 
                                      | (0x0000000fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                            >> 8U))))),12);
        bufp->chgIData(oldp+1014,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                   >> 0x0000000cU)),20);
        bufp->chgIData(oldp+1015,(((0x00080000U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 0x0000000cU)) 
                                   | ((0x0007f800U 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                          >> 1U)) | 
                                      ((0x00000400U 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                           >> 0x0000000aU)) 
                                       | (0x000003ffU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x00000015U)))))),20);
        bufp->chgCData(oldp+1016,(((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR) 
                                       << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI) 
                                                 << 2U)) 
                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSTORE) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))) 
                                    << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU) 
                                               << 2U) 
                                              | (((0x6fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                                                  << 1U) 
                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRW) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRS) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRC))))))),7);
        bufp->chgBit(oldp+1017,((0x37U == (0x0000007fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+1018,((0x17U == (0x0000007fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBEQ));
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBNE));
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLT));
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE));
        bufp->chgBit(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLTU));
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU));
        bufp->chgBit(oldp+1026,((IData)((3U == (0x0000707fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLBU));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU));
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSB));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSH));
        bufp->chgBit(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW));
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI));
        bufp->chgBit(oldp+1035,((IData)((0x00002013U 
                                         == (0x0000707fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTIU));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI));
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI));
        bufp->chgBit(oldp+1042,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI));
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD));
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL));
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU));
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR));
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL));
        bufp->chgBit(oldp+1049,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA));
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRW));
        bufp->chgBit(oldp+1053,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRS));
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRC));
        bufp->chgBit(oldp+1055,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__WCSREN));
        bufp->chgIData(oldp+1056,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1063,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1064,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1070,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1071,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1072,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1081,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+1089,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_valid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit))));
        bufp->chgBit(oldp+1090,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid)))))));
        bufp->chgBit(oldp+1091,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_valid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit))));
        bufp->chgBit(oldp+1092,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid)))))));
        bufp->chgSData(oldp+1093,(((vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                    [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                    << 3U) | vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                   [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])),11);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                  [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000fU])))) {
        bufp->chgSData(oldp+1095,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        __Vtemp_8[0U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0;
        __Vtemp_8[1U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1;
        __Vtemp_8[2U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2;
        __Vtemp_8[3U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3;
        __Vtemp_8[4U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4;
        __Vtemp_8[5U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5;
        __Vtemp_8[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))));
        __Vtemp_8[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))) 
                                 >> 0x00000020U));
        bufp->chgIData(oldp+1096,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_8[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_8[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U) 
                                                    >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        __Vtemp_14[0U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0;
        __Vtemp_14[1U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1;
        __Vtemp_14[2U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2;
        __Vtemp_14[3U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3;
        __Vtemp_14[4U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4;
        __Vtemp_14[5U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5;
        __Vtemp_14[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))));
        __Vtemp_14[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1097,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_14[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_14[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        __Vtemp_20[0U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0;
        __Vtemp_20[1U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1;
        __Vtemp_20[2U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2;
        __Vtemp_20[3U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3;
        __Vtemp_20[4U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4;
        __Vtemp_20[5U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5;
        __Vtemp_20[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))));
        __Vtemp_20[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1098,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_20[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_20[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        bufp->chgSData(oldp+1099,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        __Vtemp_26[0U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0;
        __Vtemp_26[1U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1;
        __Vtemp_26[2U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2;
        __Vtemp_26[3U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3;
        __Vtemp_26[4U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4;
        __Vtemp_26[5U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5;
        __Vtemp_26[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))));
        __Vtemp_26[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1100,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_26[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_26[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        __Vtemp_32[0U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0;
        __Vtemp_32[1U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1;
        __Vtemp_32[2U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2;
        __Vtemp_32[3U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3;
        __Vtemp_32[4U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4;
        __Vtemp_32[5U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5;
        __Vtemp_32[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))));
        __Vtemp_32[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1101,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_32[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_32[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        __Vtemp_38[0U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0;
        __Vtemp_38[1U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1;
        __Vtemp_38[2U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2;
        __Vtemp_38[3U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3;
        __Vtemp_38[4U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4;
        __Vtemp_38[5U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5;
        __Vtemp_38[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))));
        __Vtemp_38[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1102,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_38[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_38[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000013U])))) {
        bufp->chgBit(oldp+1103,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode)))));
        bufp->chgIData(oldp+1104,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                    ? (IData)((vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                               >> 3U))
                                    : ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
                                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                            ? 0U : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                        : 0U))),32);
        bufp->chgCData(oldp+1105,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                          ? (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                     >> 1U))
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp)))),2);
        bufp->chgBit(oldp+1106,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last)))));
        bufp->chgIData(oldp+1107,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                        ? 0U : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                    : 0U)),32);
        bufp->chgIData(oldp+1108,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                    ? (IData)((vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                               >> 5U))
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data)),32);
        bufp->chgCData(oldp+1109,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                              >> 1U))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb)))),4);
        bufp->chgBit(oldp+1110,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last)))));
        bufp->chgQData(oldp+1111,((((QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                                 >> 5U))
                                                      : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data))) 
                                    << 4U) | (QData)((IData)(
                                                             (0x0000000fU 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                                             >> 1U))
                                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb))))))),36);
        bufp->chgBit(oldp+1113,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_3))));
        bufp->chgBit(oldp+1114,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_0))));
        bufp->chgCData(oldp+1115,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp) 
                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__error_1)
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__error_0)))),2);
        bufp->chgCData(oldp+1116,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                                          ? ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_extra_id)
                                              : (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                                 [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                                 >> 1U))
                                          : ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_extra_id)
                                              : (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                 [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                 >> 1U))))),3);
        bufp->chgCData(oldp+1117,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                                          ? (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_extra_id)
                                              : (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                                 [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                                 >> 1U))
                                          : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_extra_id)
                                              : (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                 [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                 >> 1U))))),3);
        bufp->chgBit(oldp+1118,((1U & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                                         ? (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                             : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                            [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                                         : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                             : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                            [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value])) 
                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last))))));
        bufp->chgBit(oldp+1119,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                                        ? (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                            : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                           [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                                        : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                            : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                           [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value])))));
        bufp->chgBit(oldp+1120,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_arready) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last))));
        bufp->chgBit(oldp+1121,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__in_awready) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last))));
        bufp->chgBit(oldp+1122,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_wready) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_1))));
        bufp->chgBit(oldp+1123,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_3))));
        bufp->chgBit(oldp+1124,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_0))));
        bufp->chgCData(oldp+1125,(((0x0000000eU & (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_extra_id)
                                                      : 
                                                     (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                                      [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                                      >> 1U))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_extra_id)
                                                      : 
                                                     (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                      [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                      >> 1U))) 
                                                   << 1U)) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id))),4);
        bufp->chgCData(oldp+1126,(((0x0000000eU & (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                                                     ? 
                                                    (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_extra_id)
                                                      : 
                                                     (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                                      [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                                      >> 1U))
                                                     : 
                                                    (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_extra_id)
                                                      : 
                                                     (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                      [vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                      >> 1U))) 
                                                   << 1U)) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id))),4);
        bufp->chgBit(oldp+1127,((1U & ((~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_valid)))));
        bufp->chgBit(oldp+1128,((1U & ((~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_valid)))));
        bufp->chgBit(oldp+1129,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid)))));
        bufp->chgBit(oldp+1130,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid)))));
        bufp->chgIData(oldp+1131,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? 0U : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
        __Vtemp_39[1U] = (IData)((((QData)((IData)(
                                                   (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                       & ((7U 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                       : 
                                                      vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                      [
                                                      (7U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                     << 0x00000010U) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                        & ((7U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                       [
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                        & ((7U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                       [
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                      << 0x00000010U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                         & ((7U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                         : 
                                                        vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                        [
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))));
        __Vtemp_39[2U] = (IData)(((((QData)((IData)(
                                                    (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                        & ((7U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                       [
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                      << 0x00000010U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                         & ((7U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                         : 
                                                        vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                        [
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                         & ((7U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                         : 
                                                        vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                        [
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                       << 0x00000010U) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                          & ((7U 
                                                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                             == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                          : 
                                                         vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                         [
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))) 
                                  >> 0x00000020U));
        __Vtemp_40[0U] = (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                             & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                             : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                            [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                           << 0x00000010U) | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                               & ((7U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                               : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                              [(7U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
        __Vtemp_40[1U] = (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                             & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                             : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                            [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                           << 0x00000010U) | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                               & ((7U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                               : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                              [(7U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
        __Vtemp_40[2U] = __Vtemp_39[1U];
        __Vtemp_40[3U] = __Vtemp_39[2U];
        bufp->chgSData(oldp+1132,((0x0000ffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (7U 
                                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                         >> 3U)), 4U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_40[
                                                    (((IData)(0x0000000fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       (7U 
                                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                           >> 3U)), 4U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      (7U 
                                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                          >> 3U)), 4U))))) 
                                                  | (__Vtemp_40[
                                                     (3U 
                                                      & (VL_SHIFTL_III(7,7,32, 
                                                                       (7U 
                                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                           >> 3U)), 4U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      (7U 
                                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                          >> 3U)), 4U)))))),16);
        bufp->chgIData(oldp+1133,((4U | ((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                                           & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                                           : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                          [0U]) << 0x00000010U))),32);
        bufp->chgSData(oldp+1134,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                                    & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                   [0U])),16);
        bufp->chgBit(oldp+1135,((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6))));
        bufp->chgSData(oldp+1136,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1137,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 1U))));
        bufp->chgSData(oldp+1138,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1139,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 2U))));
        bufp->chgSData(oldp+1140,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1141,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 3U))));
        bufp->chgSData(oldp+1142,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1143,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 4U))));
        bufp->chgSData(oldp+1144,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1145,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 5U))));
        bufp->chgSData(oldp+1146,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1147,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 6U))));
        bufp->chgSData(oldp+1148,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1149,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 7U))));
        bufp->chgSData(oldp+1150,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        __Vtemp_46[0U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0;
        __Vtemp_46[1U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1;
        __Vtemp_46[2U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2;
        __Vtemp_46[3U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3;
        __Vtemp_46[4U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4;
        __Vtemp_46[5U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5;
        __Vtemp_46[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))));
        __Vtemp_46[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1151,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_46[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_46[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        __Vtemp_52[0U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0;
        __Vtemp_52[1U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1;
        __Vtemp_52[2U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2;
        __Vtemp_52[3U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3;
        __Vtemp_52[4U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4;
        __Vtemp_52[5U] = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5;
        __Vtemp_52[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))));
        __Vtemp_52[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1152,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_52[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_52[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        bufp->chgBit(oldp+1153,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_6)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_6) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_6)))));
        bufp->chgBit(oldp+1154,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_5)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_5) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_5)))));
        bufp->chgBit(oldp+1155,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_3)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_3) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_3)))));
        bufp->chgBit(oldp+1156,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_1)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_1) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_1)))));
        bufp->chgBit(oldp+1157,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_6) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6)))));
        bufp->chgBit(oldp+1158,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_5) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5)))));
        bufp->chgBit(oldp+1159,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_3) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)))));
        bufp->chgBit(oldp+1160,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_1) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_1)))));
        bufp->chgCData(oldp+1161,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                                   ? (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                              >> 0x0000002dU))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid)))),4);
        bufp->chgIData(oldp+1162,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)((vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                               >> 5U))
                                    : vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data)),32);
        bufp->chgCData(oldp+1163,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                              >> 1U))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb)))),4);
        bufp->chgBit(oldp+1164,((1U == ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter))
                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter)))));
        bufp->chgCData(oldp+1165,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                              >> 0x0000002dU))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid)))),4);
        bufp->chgQData(oldp+1166,((((QData)((IData)(
                                                    (0x0000000fU 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                                         ? (IData)(
                                                                   (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                                    >> 0x0000002dU))
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))) 
                                    << 0x00000021U) 
                                   | (((QData)((IData)(
                                                       (~ 
                                                        (((~ 
                                                           (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr 
                                                            >> 2U)) 
                                                          << 2U) 
                                                         | (3U 
                                                            & ((~ 
                                                                ((IData)(3U) 
                                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size))) 
                                                               | (~ vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr))))))) 
                                       << 1U) | (QData)((IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len))))))))),37);
        bufp->chgQData(oldp+1168,((((QData)((IData)(
                                                    (0x0000000fU 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                                         ? (IData)(
                                                                   (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                                    >> 0x0000002dU))
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))) 
                                    << 0x00000021U) 
                                   | (((QData)((IData)(
                                                       (~ 
                                                        (((~ 
                                                           (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1 
                                                            >> 2U)) 
                                                          << 2U) 
                                                         | (3U 
                                                            & ((~ 
                                                                ((IData)(3U) 
                                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size))) 
                                                               | (~ vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1))))))) 
                                       << 1U) | (QData)((IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len_1))))))))),37);
        bufp->chgQData(oldp+1170,((((QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                 >> 5U))
                                                      : vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data))) 
                                    << 4U) | (QData)((IData)(
                                                             (0x0000000fU 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                             >> 1U))
                                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb))))))),36);
        bufp->chgSData(oldp+1172,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter))),9);
        bufp->chgBit(oldp+1173,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000014U])))) {
        bufp->chgCData(oldp+1174,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1175,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1176,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1177,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1178,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000015U])))) {
        bufp->chgBit(oldp+1179,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                    : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                          >> 2U))) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid))) 
                                 & ((((((((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__full)))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__full)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__full)))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__full)))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__ptr_match) 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__maybe_full))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__ptr_match) 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__maybe_full))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__ptr_match) 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__maybe_full))))) 
                                                    << 4U)) 
                                                | ((((2U 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ptr_match) 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__maybe_full))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__ptr_match) 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__maybe_full))))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__ptr_match) 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__maybe_full))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ptr_match) 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__maybe_full)))))))) 
                                    >> (0x0000000fU 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid))))));
        bufp->chgIData(oldp+1180,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                    ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                               >> 0x00000019U))
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address)),32);
        bufp->chgCData(oldp+1181,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                                              >> 0x00000011U))
                                                   : 
                                                  (~ 
                                                   (0x000000ffU 
                                                    & (((IData)(0x000003ffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                       >> 2U)))))),8);
        bufp->chgCData(oldp+1182,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                          ? (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                                     >> 0x0000000eU))
                                          : ((0U != 
                                              (3U & 
                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                                >> 1U)))
                                              ? 2U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))))),3);
        bufp->chgBit(oldp+1183,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
                                    & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                           >> 2U)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT___out_wvalid_T_3))))));
        bufp->chgIData(oldp+1184,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)
                                    ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                                               >> 5U))
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_in_a_bits_data)),32);
        bufp->chgCData(oldp+1185,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                                                              >> 1U))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask)))),4);
        bufp->chgBit(oldp+1186,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last)))));
        bufp->chgBit(oldp+1187,((((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                       : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                             >> 2U)))) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid))) 
                                 & ((((((((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__full)))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__full)))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__full)))) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__full)))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap__DOT__full)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ptr_match) 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__maybe_full))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ptr_match) 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__maybe_full))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ptr_match) 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__maybe_full))))) 
                                                    << 4U)) 
                                                | ((((2U 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__ptr_match) 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__maybe_full))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__ptr_match) 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__maybe_full))))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__ptr_match) 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__maybe_full))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ptr_match) 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__maybe_full)))))))) 
                                    >> (0x0000000fU 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid))))));
        bufp->chgBit(oldp+1188,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                   : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                         >> 2U))) & 
                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid)))));
        bufp->chgBit(oldp+1189,(((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                      : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                            >> 2U)))) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid)))));
        bufp->chgIData(oldp+1190,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? 0U : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
        __Vtemp_53[1U] = (IData)((((QData)((IData)(
                                                   (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                       & ((7U 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                       : 
                                                      vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                      [
                                                      (7U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                     << 0x00000010U) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                        & ((7U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                       [
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                        & ((7U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                       [
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                      << 0x00000010U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                         & ((7U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                         : 
                                                        vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                        [
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))));
        __Vtemp_53[2U] = (IData)(((((QData)((IData)(
                                                    (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                        & ((7U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                       [
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                      << 0x00000010U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                         & ((7U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                         : 
                                                        vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                        [
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                         & ((7U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                         : 
                                                        vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                        [
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                       << 0x00000010U) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                          & ((7U 
                                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                          : 
                                                         vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                         [
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))) 
                                  >> 0x00000020U));
        __Vtemp_54[0U] = (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                             & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                             : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                            [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                           << 0x00000010U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                               & ((7U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                               : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                              [(7U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
        __Vtemp_54[1U] = (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                             & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                             : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                            [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                           << 0x00000010U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                               & ((7U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                               : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                              [(7U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
        __Vtemp_54[2U] = __Vtemp_53[1U];
        __Vtemp_54[3U] = __Vtemp_53[2U];
        bufp->chgSData(oldp+1191,((0x0000ffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (7U 
                                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                         >> 3U)), 4U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_54[
                                                    (((IData)(0x0000000fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       (7U 
                                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                           >> 3U)), 4U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      (7U 
                                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                          >> 3U)), 4U))))) 
                                                  | (__Vtemp_54[
                                                     (3U 
                                                      & (VL_SHIFTL_III(7,7,32, 
                                                                       (7U 
                                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                           >> 3U)), 4U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      (7U 
                                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                          >> 3U)), 4U)))))),16);
        bufp->chgBit(oldp+1192,((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5))));
        bufp->chgSData(oldp+1193,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1194,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 1U))));
        bufp->chgSData(oldp+1195,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1196,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 2U))));
        bufp->chgSData(oldp+1197,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1198,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 3U))));
        bufp->chgSData(oldp+1199,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1200,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 4U))));
        bufp->chgSData(oldp+1201,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1202,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 5U))));
        bufp->chgSData(oldp+1203,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1204,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 6U))));
        bufp->chgSData(oldp+1205,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        bufp->chgBit(oldp+1206,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                    >> 7U))));
        bufp->chgSData(oldp+1207,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                    & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                   [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
        __Vtemp_60[0U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0;
        __Vtemp_60[1U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1;
        __Vtemp_60[2U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2;
        __Vtemp_60[3U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3;
        __Vtemp_60[4U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4;
        __Vtemp_60[5U] = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5;
        __Vtemp_60[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))));
        __Vtemp_60[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        bufp->chgIData(oldp+1208,((((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                             ^ 
                                                             (4U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                 >> 1U))), 5U)))
                                     ? 0U : (__Vtemp_60[
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
                                   | (__Vtemp_60[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U) 
                                                     >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                           ^ 
                                                           (4U 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                               >> 1U))), 5U))))),32);
        bufp->chgBit(oldp+1209,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_6) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6)))));
        bufp->chgBit(oldp+1210,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_5) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5)))));
        bufp->chgBit(oldp+1211,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_3) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)))));
        bufp->chgBit(oldp+1212,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1)) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_1) 
                                     != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                  >> 2U))))) 
                                 | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1)))));
        bufp->chgBit(oldp+1213,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
                                 & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                        >> 2U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT___out_wvalid_T_3)))));
        bufp->chgBit(oldp+1214,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid))));
        bufp->chgBit(oldp+1215,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                        : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                              >> 2U))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000016U])))) {
        bufp->chgCData(oldp+1216,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1217,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1218,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1219,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+1220,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x00000017U])))) {
        bufp->chgBit(oldp+1221,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+1222,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6) 
                                 & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+1223,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+1224,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                 & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+1225,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+1226,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                                 & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+1227,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_2) 
                                 & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state),4);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__next_state),4);
        bufp->chgSData(oldp+1230,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__counter),10);
        bufp->chgCData(oldp+1231,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_command),8);
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in0),6);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in1),6);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in2),6);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in3),6);
        bufp->chgIData(oldp+1236,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr),24);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_wdata),8);
        bufp->chgBit(oldp+1238,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__is_QPI));
        bufp->chgIData(oldp+1239,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck));
        bufp->chgBit(oldp+1241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        bufp->chgBit(oldp+1242,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1243,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1244,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1245,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid));
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1249,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1250,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1251,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1253,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1254,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1265,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1266,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_valid));
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1271,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1272,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1283,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1284,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid));
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1291,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1294,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1295,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1297,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1299,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1300,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1301,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid));
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1306,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1310,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1311,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1313,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1316,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1317,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1319,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1323,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1328,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1330,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1337,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1338,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid));
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1346,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1350,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid));
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1353,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1354,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
        bufp->chgIData(oldp+1361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lvga_auto_in_pready));
        bufp->chgBit(oldp+1363,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state))));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lspi_auto_in_pslverr));
        bufp->chgIData(oldp+1365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lspi_auto_in_prdata),32);
        bufp->chgBit(oldp+1366,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_e_valid));
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_valid));
        bufp->chgCData(oldp+1372,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1376,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1377,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1378,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1387,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1388,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1390,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_valid));
        bufp->chgCData(oldp+1391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1396,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1399,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1400,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1402,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1403,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1404,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1405,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1409,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid));
        bufp->chgCData(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1414,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1415,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid));
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1433,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1434,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1438,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1440,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1442,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1443,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1446,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1447,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1448,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1452,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1453,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1455,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1456,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1459,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1460,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid));
        bufp->chgBit(oldp+1466,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1472,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1473,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid));
        bufp->chgBit(oldp+1475,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1477,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1481,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1482,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1483,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+1484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+1485,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                    ? 0x0000000eU : 
                                   ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                     ? 0x0000000bU : 
                                    (0x0000000fU & 
                                     ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                       ? (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                          >> 0x00000014U)
                                       : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                              >> 0x00000010U)
                                           : ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                               ? (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0x0000000cU)
                                               : ((5U 
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
        bufp->chgBit(oldp+1486,((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+1489,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
        bufp->chgCData(oldp+1492,(((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                    ? (1U & (0x35U 
                                             >> (7U 
                                                 & ((IData)(7U) 
                                                    - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                                    : 0x0aU)),4);
        bufp->chgBit(oldp+1493,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
        bufp->chgBit(oldp+1494,((0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1495,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
        bufp->chgBit(oldp+1496,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))));
        bufp->chgCData(oldp+1497,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgBit(oldp+1498,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+1499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+1500,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+1501,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+1503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+1504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+1505,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state));
        bufp->chgBit(oldp+1506,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
                                  ? (8U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                  : (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)))));
        bufp->chgCData(oldp+1507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter),8);
        bufp->chgBit(oldp+1508,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+1509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
        bufp->chgBit(oldp+1510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
        bufp->chgIData(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
        bufp->chgCData(oldp+1512,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
        bufp->chgBit(oldp+1513,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
        bufp->chgCData(oldp+1514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
        bufp->chgSData(oldp+1515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+1516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+1517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+1518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
        bufp->chgSData(oldp+1519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
        bufp->chgSData(oldp+1520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
        bufp->chgSData(oldp+1521,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
        bufp->chgSData(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
        bufp->chgCData(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
        bufp->chgCData(oldp+1524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
        bufp->chgCData(oldp+1525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
        bufp->chgIData(oldp+1526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+1527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
        bufp->chgCData(oldp+1528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),3);
        bufp->chgCData(oldp+1529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state),2);
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready));
        bufp->chgIData(oldp+1531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata),32);
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr));
        bufp->chgBit(oldp+1533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out));
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr),5);
        bufp->chgBit(oldp+1535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_psel));
        bufp->chgBit(oldp+1536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_penable));
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite));
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb),4);
        bufp->chgBit(oldp+1539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pready));
        bufp->chgIData(oldp+1540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata),32);
        bufp->chgBit(oldp+1541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out));
        bufp->chgCData(oldp+1542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate),4);
        bufp->chgCData(oldp+1543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state),4);
        bufp->chgCData(oldp+1544,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr),5);
        bufp->chgCData(oldp+1545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb),4);
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite));
        bufp->chgSData(oldp+1547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+1548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+1549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+1550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+1554,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+1555,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1556,((0x0000007fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+1557,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+1558,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+1559,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+1560,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+1561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+1563,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+1564,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+1565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+1566,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+1567,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+1568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+1569,((0x000000ffU & ((0x00000800U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                   - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                   - (IData)(1U))))),8);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+1571,((((0x00000200U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                 & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck)))));
        bufp->chgBit(oldp+1572,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                 & ((0x00000400U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
        bufp->chgSData(oldp+1573,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_addr),10);
        bufp->chgSData(oldp+1574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt),10);
        bufp->chgBit(oldp+1575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid));
        bufp->chgBit(oldp+1576,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1577,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr))));
        bufp->chgBit(oldp+1578,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__int_o));
        bufp->chgBit(oldp+1579,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+1580,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__enable));
        bufp->chgBit(oldp+1581,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__srx_pad));
        bufp->chgCData(oldp+1582,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier),4);
        bufp->chgCData(oldp+1583,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir),4);
        bufp->chgCData(oldp+1584,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fcr),2);
        bufp->chgCData(oldp+1585,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr),5);
        bufp->chgCData(oldp+1586,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr),8);
        bufp->chgSData(oldp+1587,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl),16);
        bufp->chgCData(oldp+1588,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch),8);
        bufp->chgBit(oldp+1589,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__start_dlc));
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_d));
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msi_reset));
        bufp->chgSData(oldp+1592,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dlc),16);
        bufp->chgCData(oldp+1593,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__trigger_level),4);
        bufp->chgBit(oldp+1594,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rx_reset));
        bufp->chgBit(oldp+1595,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tx_reset));
        bufp->chgBit(oldp+1596,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+1597,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18) 
                                       >> 3U))));
        bufp->chgBit(oldp+1598,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18) 
                                       >> 2U))));
        bufp->chgBit(oldp+1599,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18) 
                                       >> 1U))));
        bufp->chgBit(oldp+1600,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18))));
        bufp->chgBit(oldp+1601,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0));
        bufp->chgBit(oldp+1602,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_overrun));
        bufp->chgBit(oldp+1603,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2));
        bufp->chgBit(oldp+1604,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3));
        bufp->chgBit(oldp+1605,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4));
        bufp->chgBit(oldp+1606,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5));
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6));
        bufp->chgBit(oldp+1608,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7));
        bufp->chgBit(oldp+1609,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0r));
        bufp->chgBit(oldp+1610,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1r));
        bufp->chgBit(oldp+1611,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2r));
        bufp->chgBit(oldp+1612,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3r));
        bufp->chgBit(oldp+1613,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4r));
        bufp->chgBit(oldp+1614,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5r));
        bufp->chgBit(oldp+1615,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6r));
        bufp->chgBit(oldp+1616,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7r));
        bufp->chgBit(oldp+1617,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int));
        bufp->chgBit(oldp+1618,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int));
        bufp->chgBit(oldp+1619,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int));
        bufp->chgBit(oldp+1620,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_push));
        bufp->chgBit(oldp+1621,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_pop));
        bufp->chgBit(oldp+1622,((0U != (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
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
        bufp->chgBit(oldp+1623,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
        bufp->chgCData(oldp+1624,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_count),5);
        bufp->chgCData(oldp+1625,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_count),5);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tstate),3);
        bufp->chgCData(oldp+1627,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rstate),4);
        bufp->chgSData(oldp+1628,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__counter_t),10);
        bufp->chgBit(oldp+1629,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt))))));
        bufp->chgCData(oldp+1630,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt),8);
        bufp->chgCData(oldp+1631,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0_d));
        bufp->chgBit(oldp+1633,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1_d));
        bufp->chgBit(oldp+1634,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2_d));
        bufp->chgBit(oldp+1635,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3_d));
        bufp->chgBit(oldp+1636,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4_d));
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5_d));
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6_d));
        bufp->chgBit(oldp+1639,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7_d));
        bufp->chgBit(oldp+1640,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d));
        bufp->chgBit(oldp+1641,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d));
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d));
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d));
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d));
        bufp->chgBit(oldp+1645,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int))));
        bufp->chgBit(oldp+1646,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int))));
        bufp->chgBit(oldp+1647,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int))));
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_pnd));
        bufp->chgBit(oldp+1649,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_pnd));
        bufp->chgBit(oldp+1650,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_pnd));
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_pnd));
        bufp->chgBit(oldp+1652,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_pnd));
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+1654,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1655,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1656,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1657,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1658,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1659,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1660,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+1661,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1662,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1663,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1664,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1666,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1667,((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1668,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1669,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1670,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16) 
                                                  - (IData)(1U)))),4);
        bufp->chgCData(oldp+1671,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1672,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1673,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1674,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1675,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1676,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1677,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1678,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1679,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1680,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1681,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1682,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1683,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1684,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1685,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1686,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1687,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1688,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1689,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1690,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1691,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1692,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1693,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1694,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1695,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1696,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1697,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1698,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1699,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1700,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0aU]),3);
        bufp->chgCData(oldp+1701,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0bU]),3);
        bufp->chgCData(oldp+1702,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0cU]),3);
        bufp->chgCData(oldp+1703,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0dU]),3);
        bufp->chgCData(oldp+1704,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0eU]),3);
        bufp->chgCData(oldp+1705,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0fU]),3);
        bufp->chgCData(oldp+1706,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in) 
                                                  >> 3U))),8);
        bufp->chgCData(oldp+1707,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1709,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1710,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1711,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1712,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1713,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1714,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1715,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1716,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1717,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgSData(oldp+1718,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1719,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1720,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1721,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1722,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1723,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1724,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode),13);
        bufp->chgBit(oldp+1725,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1726,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1727,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1728,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1729,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1730,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state),4);
        bufp->chgCData(oldp+1731,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count),4);
        bufp->chgIData(oldp+1732,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
        bufp->chgSData(oldp+1733,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1734,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1735,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1736,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1737,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1738,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1739,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode),13);
        bufp->chgBit(oldp+1740,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1741,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1742,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1743,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1744,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1745,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state),4);
        bufp->chgCData(oldp+1746,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count),4);
        bufp->chgIData(oldp+1747,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgSData(oldp+1748,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1749,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1750,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1751,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1752,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1753,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1754,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode),13);
        bufp->chgBit(oldp+1755,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1756,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1757,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1758,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1759,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1760,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state),4);
        bufp->chgCData(oldp+1761,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count),4);
        bufp->chgIData(oldp+1762,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
        bufp->chgSData(oldp+1763,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
        bufp->chgSData(oldp+1764,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
        bufp->chgSData(oldp+1765,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
        bufp->chgSData(oldp+1766,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
        bufp->chgIData(oldp+1767,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
        bufp->chgSData(oldp+1768,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
        bufp->chgSData(oldp+1769,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode),13);
        bufp->chgBit(oldp+1770,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 9U))));
        bufp->chgCData(oldp+1771,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1772,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                       >> 3U))));
        bufp->chgCData(oldp+1774,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode))),3);
        bufp->chgCData(oldp+1775,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state),4);
        bufp->chgCData(oldp+1776,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count),4);
        bufp->chgIData(oldp+1777,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1778,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1780,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1782,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray),4);
        bufp->chgCData(oldp+1783,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray),4);
        bufp->chgCData(oldp+1784,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray),4);
        bufp->chgCData(oldp+1785,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray),4);
        bufp->chgCData(oldp+1786,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray),4);
        bufp->chgBit(oldp+1787,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1788,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1789,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1790,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1791,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgCData(oldp+1794,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1795,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg));
        bufp->chgCData(oldp+1796,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1797,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1799,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1801,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1807,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1809,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1811,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1812,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1813,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1814,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg));
        bufp->chgCData(oldp+1816,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1817,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1818,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1819,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1820,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1821,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1822,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1823,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1824,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1826,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1828,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1829,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1830,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1832,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1833,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1834,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1835,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg));
        bufp->chgCData(oldp+1836,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1837,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1838,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1839,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1840,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1841,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1842,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1843,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1844,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1845,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1846,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1848,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1849,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1850,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1851,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1852,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1853,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1854,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1855,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg));
        bufp->chgCData(oldp+1856,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1857,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1858,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1859,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1860,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1861,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1862,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1863,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1864,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1865,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1866,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1868,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1869,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1870,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1871,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1872,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1873,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1874,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1875,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg));
        bufp->chgCData(oldp+1876,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1877,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1878,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1879,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1880,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1881,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1882,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1883,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1884,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1885,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1886,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1887,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1888,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1889,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1890,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1891,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1892,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1893,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgBit(oldp+1894,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready));
        bufp->chgBit(oldp+1895,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1896,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1897,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1898,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1899,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1900,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1901,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1902,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1903,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready));
        bufp->chgBit(oldp+1905,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1906,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1907,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1908,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1909,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1910,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1911,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1912,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1913,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1914,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray))));
        bufp->chgBit(oldp+1915,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1916,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1917,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1918,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray))));
        bufp->chgBit(oldp+1919,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1920,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1921,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1922,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray))));
        bufp->chgBit(oldp+1923,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1924,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1925,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1926,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray))));
        bufp->chgBit(oldp+1927,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1928,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1929,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1930,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray))));
        bufp->chgBit(oldp+1931,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1932,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1933,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                       >> 3U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000aU]))) {
        bufp->chgBit(oldp+1934,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1935,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1936,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1937,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1938,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray),4);
        bufp->chgCData(oldp+1939,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray),4);
        bufp->chgCData(oldp+1940,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray),4);
        bufp->chgCData(oldp+1941,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray),4);
        bufp->chgCData(oldp+1942,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray),4);
        bufp->chgBit(oldp+1943,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1944,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1945,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1946,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1947,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1948,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1949,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready));
        bufp->chgCData(oldp+1950,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1951,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg));
        bufp->chgCData(oldp+1952,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1953,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1954,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1955,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1956,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1957,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1958,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1959,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1960,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1961,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1962,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1963,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1964,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1965,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1966,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1967,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1968,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1969,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1970,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1971,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg));
        bufp->chgCData(oldp+1972,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1973,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1974,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1975,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1976,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1977,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1978,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1979,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1980,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1981,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1982,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1983,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1984,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1985,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1986,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1987,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1988,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1989,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1990,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+1991,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg));
        bufp->chgCData(oldp+1992,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1993,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1994,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1995,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1996,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1997,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1998,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1999,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+2000,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+2001,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+2002,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+2003,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+2004,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+2005,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2006,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2007,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+2008,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+2009,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+2010,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+2011,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg));
        bufp->chgCData(oldp+2012,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+2013,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2014,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2015,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2016,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+2017,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+2018,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+2019,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+2020,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+2021,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+2022,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+2023,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+2024,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+2025,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2026,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2027,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+2028,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+2029,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+2030,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin),4);
        bufp->chgBit(oldp+2031,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg));
        bufp->chgCData(oldp+2032,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+2033,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2034,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2035,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2036,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+2037,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+2038,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+2039,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+2040,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+2041,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+2042,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+2043,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+2044,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+2045,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2046,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2047,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+2048,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+2049,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx),4);
        bufp->chgBit(oldp+2050,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready));
        bufp->chgBit(oldp+2051,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+2052,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg));
        bufp->chgBit(oldp+2053,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2054,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2055,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2056,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2057,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2058,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2059,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+2060,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready));
        bufp->chgBit(oldp+2061,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+2062,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg));
        bufp->chgBit(oldp+2063,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2064,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2065,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2066,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2067,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2068,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2069,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+2070,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray))));
        bufp->chgBit(oldp+2071,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2072,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2073,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2074,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray))));
        bufp->chgBit(oldp+2075,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2076,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2077,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2078,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray))));
        bufp->chgBit(oldp+2079,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2080,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2081,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2082,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray))));
        bufp->chgBit(oldp+2083,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2084,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2085,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2086,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray))));
        bufp->chgBit(oldp+2087,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2088,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2089,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                       >> 3U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000cU]))) {
        bufp->chgCData(oldp+2090,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state),3);
        bufp->chgCData(oldp+2091,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter),8);
        bufp->chgCData(oldp+2092,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+2093,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr),24);
        bufp->chgIData(oldp+2094,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data),32);
        bufp->chgBit(oldp+2095,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000dU]))) {
        bufp->chgBit(oldp+2096,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
        bufp->chgIData(oldp+2097,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i),32);
        bufp->chgCData(oldp+2098,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i),4);
        bufp->chgCData(oldp+2099,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+2100,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+2101,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+2102,((0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+2103,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                   >> 0x00000018U)),8);
        bufp->chgIData(oldp+2104,(((0xffff0000U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgCData(oldp+2105,((0x000000ffU & ((IData)(7U) 
                                                  + 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgIData(oldp+2106,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i)),24);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000eU]))) {
        bufp->chgBit(oldp+2107,(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso));
        bufp->chgCData(oldp+2108,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__state),2);
        bufp->chgSData(oldp+2109,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rev),16);
        bufp->chgIData(oldp+2110,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000fU]))) {
        bufp->chgBit(oldp+2111,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__err__DOT__c_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+2112,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_e_valid));
        bufp->chgBit(oldp+2113,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid));
        bufp->chgBit(oldp+2114,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
        bufp->chgBit(oldp+2115,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid));
        bufp->chgBit(oldp+2116,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid));
        bufp->chgCData(oldp+2117,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgBit(oldp+2118,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en));
        bufp->chgCData(oldp+2119,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgCData(oldp+2120,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgBit(oldp+2121,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_8));
        bufp->chgBit(oldp+2122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_valid));
        bufp->chgBit(oldp+2123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_valid));
        bufp->chgBit(oldp+2124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid));
        bufp->chgBit(oldp+2125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
        bufp->chgBit(oldp+2126,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid));
        bufp->chgBit(oldp+2127,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid));
        bufp->chgCData(oldp+2128,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgBit(oldp+2129,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en));
        bufp->chgCData(oldp+2130,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgCData(oldp+2131,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgBit(oldp+2132,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_8));
        bufp->chgCData(oldp+2133,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout),4);
        bufp->chgBit(oldp+2134,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done));
        bufp->chgIData(oldp+2135,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data),24);
        bufp->chgIData(oldp+2136,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr),19);
        bufp->chgCData(oldp+2137,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_out),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000010U]))) {
        bufp->chgBit(oldp+2138,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2139,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2142,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2143,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2145,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2148,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2151,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2152,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2153,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2154,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2160,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2168,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2169,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2170,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2171,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2172,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2174,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2175,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2176,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2177,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2178,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2179,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2180,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2181,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2183,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2184,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2186,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2189,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2190,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2191,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2192,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2193,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2194,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2195,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2199,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2200,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2201,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2203,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2204,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2205,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2206,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2207,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2208,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2209,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2210,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2211,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2212,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2213,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2214,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2215,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2216,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2217,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2218,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2221,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2222,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2223,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2224,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2225,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2226,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2227,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2228,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2229,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2230,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2234,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2238,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2247,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2248,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2249,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2250,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2251,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2253,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2254,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2257,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2258,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2261,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000011U]))) {
        bufp->chgBit(oldp+2264,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2265,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2266,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2267,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2268,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2269,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2270,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2271,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2272,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2273,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2274,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2275,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2276,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2277,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2278,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2279,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2280,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2281,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2282,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2283,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2284,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2285,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2286,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2287,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2289,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2291,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2292,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2293,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2294,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2295,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2296,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2297,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2298,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2299,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2300,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2301,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2302,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2303,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2304,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2305,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2306,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2307,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2308,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2309,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2310,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2311,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2312,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2313,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2314,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2315,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2316,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2317,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2318,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2319,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2320,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2321,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2322,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2323,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2324,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2325,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2326,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2327,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2328,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2329,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2330,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2331,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2332,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2333,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2334,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2335,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2336,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2337,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2338,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2339,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2340,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2341,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2342,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2343,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2344,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2345,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2346,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2347,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2348,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2349,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2350,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2351,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2352,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2353,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2354,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2355,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2356,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2357,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2358,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2359,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2360,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2361,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2362,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2363,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2364,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2365,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2366,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2367,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2368,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2369,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2370,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2371,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2372,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2373,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2374,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2375,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2376,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2377,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2378,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2379,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2380,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2382,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2383,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2384,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2385,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2386,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2388,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2389,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000012U]))) {
        bufp->chgBit(oldp+2390,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                       >> 7U))));
        bufp->chgBit(oldp+2391,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))));
        bufp->chgCData(oldp+2392,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2393,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2394,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2395,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2396,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray),4);
        bufp->chgBit(oldp+2397,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+2399,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2400,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2401,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2402,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2403,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2404,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2405,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2406,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2407,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2408,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2409,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2410,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2411,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2412,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2413,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2414,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2415,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2416,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2417,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2418,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2419,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
        bufp->chgBit(oldp+2420,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+2421,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+2423,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+2424,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+2425,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+2426,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
        bufp->chgSData(oldp+2427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
        bufp->chgCData(oldp+2428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
        bufp->chgCData(oldp+2429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
        bufp->chgCData(oldp+2430,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__comm_active));
        bufp->chgCData(oldp+2432,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
        bufp->chgCData(oldp+2433,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+2434,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
        bufp->chgCData(oldp+2435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss),8);
        bufp->chgCData(oldp+2436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2438,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray),4);
        bufp->chgCData(oldp+2440,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray),4);
        bufp->chgBit(oldp+2441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+2442,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+2443,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2444,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2445,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2446,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2447,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2448,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2449,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2450,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2451,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2452,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2453,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2454,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2455,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2456,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2457,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2458,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2459,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray))));
        bufp->chgBit(oldp+2460,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+2461,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+2462,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+2463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
        bufp->chgBit(oldp+2464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+2465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
        bufp->chgBit(oldp+2466,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+2467,(((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                 | (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
        bufp->chgCData(oldp+2468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
        bufp->chgCData(oldp+2469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
        bufp->chgIData(oldp+2470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+2471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000013U]))) {
        bufp->chgBit(oldp+2474,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_out_awvalid));
        bufp->chgCData(oldp+2475,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))),4);
        bufp->chgIData(oldp+2476,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awaddr),32);
        bufp->chgCData(oldp+2477,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awlen),8);
        bufp->chgCData(oldp+2478,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awsize),3);
        bufp->chgBit(oldp+2479,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid));
        bufp->chgIData(oldp+2480,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data),32);
        bufp->chgCData(oldp+2481,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb),4);
        bufp->chgBit(oldp+2482,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last));
        bufp->chgBit(oldp+2483,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_out_arvalid));
        bufp->chgBit(oldp+2484,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2485,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_valid));
        bufp->chgBit(oldp+2486,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2487,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid));
        bufp->chgCData(oldp+2488,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode),3);
        bufp->chgCData(oldp+2489,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_param),3);
        bufp->chgCData(oldp+2490,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size),4);
        bufp->chgCData(oldp+2491,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source),7);
        bufp->chgIData(oldp+2492,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address),32);
        bufp->chgCData(oldp+2493,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb),4);
        bufp->chgIData(oldp+2494,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data),32);
        bufp->chgBit(oldp+2495,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__source_i_ready));
        bufp->chgBit(oldp+2496,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__source_i_valid));
        bufp->chgBit(oldp+2497,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__winner_1));
        bufp->chgBit(oldp+2498,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__muxState_1));
        bufp->chgBit(oldp+2499,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awready));
        bufp->chgBit(oldp+2500,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_wready));
        bufp->chgBit(oldp+2501,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last)))));
        bufp->chgBit(oldp+2502,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_bvalid));
        bufp->chgBit(oldp+2503,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id));
        bufp->chgCData(oldp+2504,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp),2);
        bufp->chgBit(oldp+2505,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_arready));
        bufp->chgBit(oldp+2506,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id));
        bufp->chgBit(oldp+2507,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready));
        bufp->chgBit(oldp+2509,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid));
        bufp->chgCData(oldp+2510,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode),3);
        bufp->chgCData(oldp+2511,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_size),3);
        bufp->chgCData(oldp+2512,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source),4);
        bufp->chgBit(oldp+2513,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_denied));
        bufp->chgBit(oldp+2514,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_corrupt));
        bufp->chgBit(oldp+2515,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__w_out_ready));
        bufp->chgCData(oldp+2516,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp),2);
        bufp->chgCData(oldp+2517,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__d_last_beats1),3);
        bufp->chgBit(oldp+2518,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__b_allow));
        bufp->chgBit(oldp+2519,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode))));
        bufp->chgBit(oldp+2520,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source) 
                                       >> 3U))));
        bufp->chgBit(oldp+2521,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last));
        bufp->chgBit(oldp+2522,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2523,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+2524,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+2525,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+2526,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2527,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_awvalid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_3))));
        bufp->chgBit(oldp+2528,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+2529,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_arvalid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_0))));
        bufp->chgBit(oldp+2530,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_awvalid));
        bufp->chgCData(oldp+2532,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))),4);
        bufp->chgCData(oldp+2533,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size),4);
        bufp->chgCData(oldp+2534,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source),7);
        bufp->chgBit(oldp+2535,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid) 
                                       >> 4U))));
        bufp->chgBit(oldp+2536,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_arvalid));
        bufp->chgBit(oldp+2537,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_bvalid))));
        bufp->chgBit(oldp+2538,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_awready));
        bufp->chgBit(oldp+2539,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last));
        bufp->chgBit(oldp+2540,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_arready));
        bufp->chgBit(oldp+2541,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+2542,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awvalid));
        bufp->chgCData(oldp+2543,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid),5);
        bufp->chgCData(oldp+2544,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size),4);
        bufp->chgCData(oldp+2545,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source),7);
        bufp->chgBit(oldp+2546,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_arvalid));
        bufp->chgBit(oldp+2547,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid) 
                                       >> 4U))));
        bufp->chgCData(oldp+2548,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid),5);
        bufp->chgBit(oldp+2549,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))));
        bufp->chgBit(oldp+2550,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en));
        bufp->chgSData(oldp+2551,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data),12);
        bufp->chgBit(oldp+2552,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2553,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2554,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2555,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2556,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2557,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2558,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2559,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2560,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2561,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2562,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2563,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2564,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2565,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2566,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2567,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2568,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2569,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2570,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2571,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2572,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))));
        bufp->chgBit(oldp+2573,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2574,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2575,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2576,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2577,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2578,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2579,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2580,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2581,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2582,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+2583,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+2584,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+2585,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+2586,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+2587,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+2588,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2589,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+2590,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+2591,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+2592,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+2593,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+2594,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+2595,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2596,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))))));
        bufp->chgBit(oldp+2597,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en));
        bufp->chgSData(oldp+2598,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data),12);
        bufp->chgBit(oldp+2599,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2600,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2601,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2602,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2603,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2604,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2605,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2606,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2607,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2608,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2609,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2610,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2611,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2612,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2613,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2614,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2615,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2616,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2617,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2618,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2619,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))))));
        bufp->chgBit(oldp+2620,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2621,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2622,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2623,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2624,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2625,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2626,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2627,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2628,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2629,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+2630,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+2631,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+2632,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+2633,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+2634,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+2635,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2636,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+2637,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+2638,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+2639,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+2640,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+2641,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+2642,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2643,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_valid));
        bufp->chgBit(oldp+2644,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2645,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_valid));
        bufp->chgBit(oldp+2646,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2647,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid));
        bufp->chgBit(oldp+2648,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_ready));
        bufp->chgBit(oldp+2649,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq));
        bufp->chgBit(oldp+2650,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2651,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid));
        bufp->chgBit(oldp+2652,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_ready));
        bufp->chgBit(oldp+2653,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq));
        bufp->chgBit(oldp+2654,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2655,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready));
        bufp->chgBit(oldp+2656,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
        bufp->chgBit(oldp+2657,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_ready));
        bufp->chgBit(oldp+2658,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready));
        bufp->chgBit(oldp+2659,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid));
        bufp->chgCData(oldp+2660,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode),3);
        bufp->chgCData(oldp+2661,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param),2);
        bufp->chgCData(oldp+2662,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size),3);
        bufp->chgCData(oldp+2663,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source),4);
        bufp->chgCData(oldp+2664,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink),5);
        bufp->chgBit(oldp+2665,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied));
        bufp->chgBit(oldp+2666,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt));
        bufp->chgBit(oldp+2667,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass));
        bufp->chgBit(oldp+2668,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2669,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall));
        bufp->chgBit(oldp+2670,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
        bufp->chgBit(oldp+2671,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready));
        bufp->chgBit(oldp+2672,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready));
        bufp->chgBit(oldp+2673,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid));
        bufp->chgBit(oldp+2674,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready));
        bufp->chgBit(oldp+2675,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_valid));
        bufp->chgCData(oldp+2676,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode),3);
        bufp->chgCData(oldp+2677,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size),4);
        bufp->chgCData(oldp+2678,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source),4);
        bufp->chgBit(oldp+2679,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied));
        bufp->chgBit(oldp+2680,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt));
        bufp->chgBit(oldp+2681,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
        bufp->chgBit(oldp+2682,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall));
        bufp->chgBit(oldp+2683,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode))));
        bufp->chgBit(oldp+2684,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready));
        bufp->chgBit(oldp+2685,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1));
        bufp->chgBit(oldp+2686,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode))));
        bufp->chgBit(oldp+2687,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_valid));
        bufp->chgBit(oldp+2688,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq));
        bufp->chgIData(oldp+2689,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_data),32);
        bufp->chgIData(oldp+2690,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__header),32);
        bufp->chgBit(oldp+2691,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_ready));
        bufp->chgBit(oldp+2692,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2693,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2694,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2695,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2696,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2697,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2698,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2699,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2700,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready));
        bufp->chgCData(oldp+2701,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgCData(oldp+2702,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+2703,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+2704,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready));
        bufp->chgBit(oldp+2705,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en));
        bufp->chgCData(oldp+2706,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgCData(oldp+2707,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+2708,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+2709,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__err__DOT__a_q__DOT__io_enq_valid));
        bufp->chgCData(oldp+2710,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))),3);
        bufp->chgSData(oldp+2711,((0x00001fffU & vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address)),13);
        bufp->chgBit(oldp+2712,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready));
        bufp->chgBit(oldp+2713,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__ferr__DOT__da_ready));
        bufp->chgBit(oldp+2714,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__ferr__DOT__a_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+2715,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgCData(oldp+2716,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_param),2);
        bufp->chgCData(oldp+2717,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_sink),6);
        bufp->chgBit(oldp+2718,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode))));
        bufp->chgBit(oldp+2719,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2720,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
        bufp->chgBit(oldp+2721,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2722,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_valid));
        bufp->chgBit(oldp+2723,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__idStall_4));
        bufp->chgBit(oldp+2724,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__idStall_2));
        bufp->chgBit(oldp+2725,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__idStall_0));
        bufp->chgCData(oldp+2726,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__r_beats1),3);
        bufp->chgBit(oldp+2727,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last));
        bufp->chgBit(oldp+2728,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__stall));
        bufp->chgBit(oldp+2729,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+2730,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc));
        bufp->chgBit(oldp+2731,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_1));
        bufp->chgBit(oldp+2732,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_2));
        bufp->chgBit(oldp+2733,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_3));
        bufp->chgBit(oldp+2734,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_4));
        bufp->chgBit(oldp+2735,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_5));
        bufp->chgBit(oldp+2736,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_6));
        bufp->chgBit(oldp+2737,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2738,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2739,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2740,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000aU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2741,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000bU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2742,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000cU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2743,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000dU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2744,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000eU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2745,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000fU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2746,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000010U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2747,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000011U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2748,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000012U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2749,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000013U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2750,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000014U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2751,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000015U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2752,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000016U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
        bufp->chgBit(oldp+2753,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+2754,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2755,(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2756,((0x000000ffU & (~ 
                                                  (0x000000ffU 
                                                   & (((IData)(0x000003ffU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))) 
                                                      >> 2U))))),8);
        bufp->chgCData(oldp+2757,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_size),3);
        bufp->chgCData(oldp+2758,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))),4);
        bufp->chgBit(oldp+2759,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                          >> 2U)))));
        bufp->chgBit(oldp+2760,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+2761,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+2762,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen));
        bufp->chgBit(oldp+2763,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2764,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_ready));
        bufp->chgBit(oldp+2765,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid));
        bufp->chgIData(oldp+2766,((0x7fffffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address)),31);
        bufp->chgBit(oldp+2767,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_4));
        bufp->chgBit(oldp+2768,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_2));
        bufp->chgBit(oldp+2769,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_0));
        bufp->chgCData(oldp+2770,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__r_beats1),6);
        bufp->chgBit(oldp+2771,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last));
        bufp->chgBit(oldp+2772,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__stall));
        bufp->chgBit(oldp+2773,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+2774,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc));
        bufp->chgBit(oldp+2775,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_1));
        bufp->chgBit(oldp+2776,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_2));
        bufp->chgBit(oldp+2777,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_3));
        bufp->chgBit(oldp+2778,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_4));
        bufp->chgBit(oldp+2779,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_5));
        bufp->chgBit(oldp+2780,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_6));
        bufp->chgBit(oldp+2781,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2782,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2783,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2784,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000aU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2785,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000bU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2786,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000cU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2787,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000dU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2788,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000eU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2789,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000fU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2790,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000010U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2791,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000011U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2792,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000012U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2793,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000013U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2794,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000014U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2795,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000015U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2796,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000016U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2797,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+2798,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2799,((0x000000ffU & (~ 
                                                  (0x000000ffU 
                                                   & (((IData)(0x000003ffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                      >> 2U))))),8);
        bufp->chgCData(oldp+2800,(((0U != (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                                 >> 1U)))
                                    ? 2U : (7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)))),3);
        bufp->chgBit(oldp+2801,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+2802,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+2803,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen));
        bufp->chgBit(oldp+2804,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2805,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__requestAIO_0_1));
        bufp->chgBit(oldp+2806,((0U == (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                                        >> 0x0000001eU))));
        bufp->chgCData(oldp+2807,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__readys_valid),2);
        bufp->chgCData(oldp+2808,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__readys_unready),4);
        bufp->chgCData(oldp+2809,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__readys_readys),2);
        bufp->chgBit(oldp+2810,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__winner_0));
        bufp->chgBit(oldp+2811,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__winner_1));
        bufp->chgBit(oldp+2812,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_0));
        bufp->chgBit(oldp+2813,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_1));
        bufp->chgBit(oldp+2814,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__auto_out_awvalid));
        bufp->chgIData(oldp+2815,((~ (((~ (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size))) 
                                                    | (~ vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1)))))),32);
        bufp->chgCData(oldp+2816,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size),3);
        bufp->chgBit(oldp+2817,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+2818,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.mem__DOT__axi4frag__DOT____VdfgRegularize_h9f077f37_0_0))));
        bufp->chgBit(oldp+2819,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid));
        bufp->chgIData(oldp+2820,((~ (((~ (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size))) 
                                                    | (~ vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr)))))),32);
        bufp->chgCData(oldp+2821,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size),3);
        bufp->chgBit(oldp+2822,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len))))));
        bufp->chgBit(oldp+2823,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2824,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2825,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+2826,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+2827,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr),32);
        bufp->chgCData(oldp+2828,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+2829,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+2830,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgBit(oldp+2831,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready));
        bufp->chgIData(oldp+2832,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+2833,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
        bufp->chgBit(oldp+2834,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2835,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready));
        bufp->chgBit(oldp+2836,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
        bufp->chgIData(oldp+2837,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+2838,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
        bufp->chgBit(oldp+2839,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+2840,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+2841,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+2842,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000014U]))) {
        bufp->chgBit(oldp+2843,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2844,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2845,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2846,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2847,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2848,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2849,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2850,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2851,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2852,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2853,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2854,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2855,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2856,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2857,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2858,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2859,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2860,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2861,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2862,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2863,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2864,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2865,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2866,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2867,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000015U]))) {
        bufp->chgCData(oldp+2868,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid))),4);
        bufp->chgBit(oldp+2869,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2870,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_valid));
        bufp->chgBit(oldp+2871,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2872,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_valid));
        bufp->chgCData(oldp+2873,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode),3);
        bufp->chgCData(oldp+2874,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_param),3);
        bufp->chgCData(oldp+2875,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size),3);
        bufp->chgCData(oldp+2876,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source),7);
        bufp->chgIData(oldp+2877,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address),32);
        bufp->chgCData(oldp+2878,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask),4);
        bufp->chgIData(oldp+2879,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_in_a_bits_data),32);
        bufp->chgBit(oldp+2880,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__source_i_ready));
        bufp->chgBit(oldp+2881,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__source_i_valid));
        bufp->chgBit(oldp+2882,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__winner_1));
        bufp->chgBit(oldp+2883,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__muxState_1));
        bufp->chgCData(oldp+2884,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid),5);
        bufp->chgCData(oldp+2885,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size),4);
        bufp->chgCData(oldp+2886,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source),7);
        bufp->chgBit(oldp+2887,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid) 
                                       >> 4U))));
        bufp->chgSData(oldp+2888,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size) 
                                    << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid) 
                                                    >> 4U))))),12);
        bufp->chgBit(oldp+2889,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready));
        bufp->chgBit(oldp+2890,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
        bufp->chgCData(oldp+2891,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param),2);
        bufp->chgCData(oldp+2892,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink),5);
        bufp->chgBit(oldp+2893,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass));
        bufp->chgBit(oldp+2894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2895,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall));
        bufp->chgBit(oldp+2896,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
        bufp->chgBit(oldp+2897,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall));
        bufp->chgIData(oldp+2898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data),32);
        bufp->chgIData(oldp+2899,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header),32);
        bufp->chgBit(oldp+2900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready));
        bufp->chgBit(oldp+2901,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2902,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2903,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2904,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2906,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2907,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2908,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en));
        bufp->chgBit(oldp+2909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready));
        bufp->chgCData(oldp+2910,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented),4);
        bufp->chgCData(oldp+2911,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+2912,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+2913,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_a_valid));
        bufp->chgSData(oldp+2914,((0x00001fffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address)),13);
        bufp->chgBit(oldp+2915,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready));
        bufp->chgBit(oldp+2916,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
        bufp->chgBit(oldp+2917,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_ready));
        bufp->chgBit(oldp+2918,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_valid));
        bufp->chgBit(oldp+2919,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_4));
        bufp->chgBit(oldp+2920,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_2));
        bufp->chgBit(oldp+2921,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_0));
        bufp->chgCData(oldp+2922,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_beats1),3);
        bufp->chgBit(oldp+2923,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last));
        bufp->chgBit(oldp+2924,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__stall));
        bufp->chgBit(oldp+2925,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+2926,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc));
        bufp->chgBit(oldp+2927,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_1));
        bufp->chgBit(oldp+2928,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_2));
        bufp->chgBit(oldp+2929,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_3));
        bufp->chgBit(oldp+2930,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_4));
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_5));
        bufp->chgBit(oldp+2932,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_6));
        bufp->chgBit(oldp+2933,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2934,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2935,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2936,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000aU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2937,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000bU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2938,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000cU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2939,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000dU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2940,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000eU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2941,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x0000000fU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2942,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000010U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2943,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000011U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2944,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000012U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2945,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000013U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2946,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000014U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2947,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000015U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2948,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x00000016U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
        bufp->chgBit(oldp+2949,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2950,(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2951,((0x000000ffU & (~ 
                                                  (0x000000ffU 
                                                   & (((IData)(0x000003ffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                      >> 2U))))),8);
        bufp->chgCData(oldp+2952,(((0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                                 >> 1U)))
                                    ? 2U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))),3);
        bufp->chgCData(oldp+2953,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size),4);
        bufp->chgBit(oldp+2954,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                          >> 2U)))));
        bufp->chgBit(oldp+2955,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000016U]))) {
        bufp->chgBit(oldp+2956,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2957,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2958,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2959,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2960,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2961,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2962,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2963,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2964,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2965,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2966,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2967,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2968,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2969,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2970,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2971,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2972,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2973,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2974,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2975,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en));
        bufp->chgBit(oldp+2976,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready));
        bufp->chgBit(oldp+2977,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2978,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+2979,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2980,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000017U]))) {
        bufp->chgIData(oldp+2981,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i),32);
        bufp->chgBit(oldp+2982,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel));
        bufp->chgBit(oldp+2983,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable));
        bufp->chgIData(oldp+2984,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),30);
        bufp->chgIData(oldp+2985,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),29);
        bufp->chgBit(oldp+2986,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
        bufp->chgBit(oldp+2987,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel));
        bufp->chgBit(oldp+2988,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable));
        bufp->chgBit(oldp+2989,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))));
        bufp->chgBit(oldp+2990,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__in_psel));
        bufp->chgBit(oldp+2991,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i));
        bufp->chgBit(oldp+2992,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+2993,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+2994,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_2));
        bufp->chgBit(oldp+2995,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+2996,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+2997,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_5));
        bufp->chgBit(oldp+2998,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6));
        bufp->chgIData(oldp+2999,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgCData(oldp+3000,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__next_state),2);
        bufp->chgBit(oldp+3001,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+3002,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgIData(oldp+3003,((0x00fffffcU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgIData(oldp+3004,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgBit(oldp+3005,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i));
        bufp->chgBit(oldp+3006,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__is_write));
        bufp->chgCData(oldp+3007,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i),4);
        bufp->chgBit(oldp+3008,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
        bufp->chgSData(oldp+3009,((0x000001ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                  >> 2U))),13);
        bufp->chgSData(oldp+3010,((0x00001fffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                  >> 0x0000000eU))),13);
        bufp->chgCData(oldp+3011,((7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                         >> 0x0000000bU))),3);
        bufp->chgIData(oldp+3012,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgBit(oldp+3013,((0x30000000U <= (0x3fffffffU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
        bufp->chgIData(oldp+3014,(VL_MODDIV_III(32, 
                                                VL_MODDIV_III(32, 
                                                              VL_SHIFTR_III(32,32,32, 
                                                                            ((0x3fffffffU 
                                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                             - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
        bufp->chgIData(oldp+3015,(VL_DIV_III(32, VL_MODDIV_III(32, 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             ((0x3fffffffU 
                                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                              - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
        bufp->chgSData(oldp+3016,((0x000003ffU & VL_DIV_III(32, 
                                                            VL_MODDIV_III(32, 
                                                                          VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
        bufp->chgSData(oldp+3017,((0x000003ffU & VL_MODDIV_III(32, 
                                                               VL_MODDIV_III(32, 
                                                                             VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
        bufp->chgIData(oldp+3018,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr),19);
        bufp->chgCData(oldp+3019,((7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),3);
        bufp->chgCData(oldp+3020,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w),8);
        bufp->chgCData(oldp+3021,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_in),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000018U]))) {
        bufp->chgCData(oldp+3022,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+3023,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgCData(oldp+3024,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+3025,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgCData(oldp+3026,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+3027,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgBit(oldp+3028,(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n));
        bufp->chgBit(oldp+3029,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready));
        bufp->chgBit(oldp+3030,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr));
        bufp->chgBit(oldp+3031,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bvalid));
        bufp->chgCData(oldp+3032,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp),2);
        bufp->chgBit(oldp+3033,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_rvalid));
        bufp->chgCData(oldp+3034,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+3035,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+3036,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+3037,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+3038,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgCData(oldp+3039,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+3040,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgCData(oldp+3041,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx),4);
        bufp->chgBit(oldp+3042,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
        bufp->chgCData(oldp+3043,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
        bufp->chgCData(oldp+3044,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
        bufp->chgBit(oldp+3045,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
        bufp->chgBit(oldp+3046,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr));
        bufp->chgCData(oldp+3047,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgCData(oldp+3048,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
        bufp->chgCData(oldp+3049,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
        bufp->chgCData(oldp+3050,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
        bufp->chgCData(oldp+3051,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__next_state),2);
        bufp->chgBit(oldp+3052,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i));
        bufp->chgIData(oldp+3053,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata),32);
        bufp->chgBit(oldp+3054,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pready));
        bufp->chgIData(oldp+3055,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata),32);
        bufp->chgBit(oldp+3056,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out));
        bufp->chgCData(oldp+3057,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr),5);
        bufp->chgBit(oldp+3058,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_psel));
        bufp->chgBit(oldp+3059,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_penable));
        bufp->chgCData(oldp+3060,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot),3);
        bufp->chgBit(oldp+3061,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite));
        bufp->chgIData(oldp+3062,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata),32);
        bufp->chgCData(oldp+3063,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb),4);
        bufp->chgCData(oldp+3064,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate),4);
        bufp->chgCData(oldp+3065,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state),4);
        bufp->chgBit(oldp+3066,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer));
        bufp->chgIData(oldp+3067,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata),32);
        bufp->chgIData(oldp+3068,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata),32);
        bufp->chgBit(oldp+3069,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x14U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgBit(oldp+3070,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x10U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgCData(oldp+3071,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
        bufp->chgBit(oldp+3072,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x18U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
        bufp->chgCData(oldp+3073,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x00000019U]))) {
        bufp->chgBit(oldp+3074,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__now_sel));
        bufp->chgBit(oldp+3075,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0));
        bufp->chgBit(oldp+3076,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000001bU]))) {
        bufp->chgBit(oldp+3077,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+3078,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state),4);
        bufp->chgBit(oldp+3079,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+3080,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000001cU]))) {
        bufp->chgBit(oldp+3081,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+3082,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state),4);
        bufp->chgBit(oldp+3083,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
        bufp->chgCData(oldp+3084,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000001dU]))) {
        bufp->chgIData(oldp+3085,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i),32);
        bufp->chgSData(oldp+3086,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
                                   >> 0x00000010U)),16);
        bufp->chgSData(oldp+3087,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i)),16);
    }
    bufp->chgBit(oldp+3088,(vlSelfRef.clock));
    bufp->chgBit(oldp+3089,(vlSelfRef.reset));
    bufp->chgSData(oldp+3090,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+3091,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+3092,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+3093,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+3094,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+3095,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+3096,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+3097,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+3098,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+3099,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+3100,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+3101,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+3102,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+3103,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+3104,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+3105,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+3106,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+3107,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+3108,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+3109,(vlSelfRef.externalPins_uart_tx));
    bufp->chgCData(oldp+3110,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__cnt),8);
    bufp->chgCData(oldp+3111,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_cnt),8);
    bufp->chgCData(oldp+3112,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_state),2);
    bufp->chgBit(oldp+3113,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                   | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                        ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                        : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                      >> 0x0000001fU)))));
    bufp->chgIData(oldp+3114,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+3115,(((0x00fffffeU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi))),32);
    bufp->chgBit(oldp+3116,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0));
    bufp->chgBit(oldp+3117,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0));
    bufp->chgBit(oldp+3118,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->chgBit(oldp+3119,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->chgBit(oldp+3120,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+3121,(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset));
    bufp->chgBit(oldp+3122,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid)))))));
    bufp->chgBit(oldp+3123,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)
                              : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    bufp->chgCData(oldp+3124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din),4);
    bufp->chgCData(oldp+3125,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)
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
    bufp->chgBit(oldp+3126,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgBit(oldp+3127,(((~ (IData)(vlSelfRef.clock)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q))));
    bufp->chgCData(oldp+3128,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__reg_ba),3);
    bufp->chgIData(oldp+3129,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->chgCData(oldp+3130,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))
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
    bufp->chgBit(oldp+3131,(((~ (IData)(vlSelfRef.clock)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))));
    bufp->chgIData(oldp+3132,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->chgCData(oldp+3133,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))
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
    bufp->chgIData(oldp+3134,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->chgCData(oldp+3135,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))
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
    bufp->chgBit(oldp+3136,(((~ (IData)(vlSelfRef.clock)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))));
    bufp->chgIData(oldp+3137,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->chgCData(oldp+3138,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))
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
    bufp->chgBit(oldp+3139,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                     ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                     : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                   >> 0x0000001fU)))));
    bufp->chgBit(oldp+3140,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                  : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->chgIData(oldp+3141,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
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
    bufp->chgIData(oldp+3142,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->chgCData(oldp+3143,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp))),6);
    bufp->chgQData(oldp+3144,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg)) 
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
    bufp->chgBit(oldp+3146,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1)
                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)))));
    bufp->chgBit(oldp+3147,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
    bufp->chgBit(oldp+3148,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1) 
                                    >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1)))));
    bufp->chgBit(oldp+3149,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__R0_data))
                               : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__R0_data))) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last))));
    bufp->chgBit(oldp+3150,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__R0_data))
                                    : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__R0_data))))));
    bufp->chgBit(oldp+3151,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->chgBit(oldp+3152,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->chgBit(oldp+3153,(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset));
    bufp->chgBit(oldp+3154,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid)))))));
    bufp->chgCData(oldp+3155,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
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
    bufp->chgCData(oldp+3156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__cnt),4);
    bufp->chgSData(oldp+3157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg),9);
    bufp->chgBit(oldp+3158,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                 : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    bufp->chgBit(oldp+3159,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                              ? (0x16U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd))));
    bufp->chgBit(oldp+3160,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                                    ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)))));
    bufp->chgIData(oldp+3161,(((0U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
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
    bufp->chgBit(oldp+3162,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)))));
    bufp->chgBit(oldp+3163,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset));
    bufp->chgIData(oldp+3164,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.PC),32);
    bufp->chgIData(oldp+3165,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.dnpc),32);
    bufp->chgIData(oldp+3166,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.snpc),32);
    bufp->chgIData(oldp+3167,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr),32);
    bufp->chgIData(oldp+3168,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata),32);
    bufp->chgCData(oldp+3169,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask),4);
    bufp->chgBit(oldp+3170,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen));
    bufp->chgIData(oldp+3171,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC),32);
    bufp->chgIData(oldp+3172,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC),32);
    bufp->chgBit(oldp+3173,((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.state))));
    bufp->chgIData(oldp+3174,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC),32);
    bufp->chgBit(oldp+3175,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_we_i));
    bufp->chgBit(oldp+3176,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_re_i));
    bufp->chgCData(oldp+3177,((0x000000ffU & ((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
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
    bufp->chgCData(oldp+3178,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.state),2);
    bufp->chgBit(oldp+3179,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IROM_arready))));
    bufp->chgBit(oldp+3180,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.state));
    bufp->chgBit(oldp+3181,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_reqEN));
    bufp->chgCData(oldp+3182,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state),3);
    bufp->chgIData(oldp+3183,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[0]),32);
    bufp->chgIData(oldp+3184,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[1]),32);
    bufp->chgIData(oldp+3185,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[2]),32);
    bufp->chgIData(oldp+3186,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[3]),32);
    bufp->chgIData(oldp+3187,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[4]),32);
    bufp->chgIData(oldp+3188,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[5]),32);
    bufp->chgIData(oldp+3189,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[6]),32);
    bufp->chgIData(oldp+3190,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[7]),32);
    bufp->chgIData(oldp+3191,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[8]),32);
    bufp->chgIData(oldp+3192,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[9]),32);
    bufp->chgIData(oldp+3193,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[10]),32);
    bufp->chgIData(oldp+3194,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[11]),32);
    bufp->chgIData(oldp+3195,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[12]),32);
    bufp->chgIData(oldp+3196,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[13]),32);
    bufp->chgIData(oldp+3197,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[14]),32);
    bufp->chgIData(oldp+3198,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[15]),32);
    bufp->chgIData(oldp+3199,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[16]),32);
    bufp->chgIData(oldp+3200,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[17]),32);
    bufp->chgIData(oldp+3201,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[18]),32);
    bufp->chgIData(oldp+3202,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[19]),32);
    bufp->chgIData(oldp+3203,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[20]),32);
    bufp->chgIData(oldp+3204,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[21]),32);
    bufp->chgIData(oldp+3205,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[22]),32);
    bufp->chgIData(oldp+3206,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[23]),32);
    bufp->chgIData(oldp+3207,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[24]),32);
    bufp->chgIData(oldp+3208,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[25]),32);
    bufp->chgIData(oldp+3209,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[26]),32);
    bufp->chgIData(oldp+3210,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[27]),32);
    bufp->chgIData(oldp+3211,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[28]),32);
    bufp->chgIData(oldp+3212,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[29]),32);
    bufp->chgIData(oldp+3213,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[30]),32);
    bufp->chgIData(oldp+3214,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[31]),32);
    bufp->chgIData(oldp+3215,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+3216,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+3217,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+3218,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+3219,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+3220,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MARCHID),32);
    bufp->chgCData(oldp+3221,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr),8);
    bufp->chgBit(oldp+3222,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr) 
                                   >> 7U))));
    bufp->chgCData(oldp+3223,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr),8);
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
    vlSymsp->TOP.__Vm_traceActivity[0x00000017U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000018U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x00000019U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000001aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000001bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000001cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000001dU] = 0U;
}

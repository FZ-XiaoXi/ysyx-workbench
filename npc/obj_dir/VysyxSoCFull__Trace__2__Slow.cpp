// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_0_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_0_sub_1\n"); );
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+7363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats),7);
    bufp->fullBit(oldp+7364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
    bufp->fullBit(oldp+7365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
    bufp->fullIData(oldp+7366,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data),32);
    bufp->fullBit(oldp+7367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last));
    bufp->fullCData(oldp+7368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats),7);
    bufp->fullBit(oldp+7369,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1)))));
    bufp->fullBit(oldp+7370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0));
    bufp->fullBit(oldp+7371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
    bufp->fullIData(oldp+7372,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data),32);
    bufp->fullBit(oldp+7373,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last));
    bufp->fullCData(oldp+7374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats),7);
    bufp->fullIData(oldp+7375,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                << 0x00000010U) 
                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                  >> 0x00000010U)))),20);
    bufp->fullIData(oldp+7376,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                << 4U) 
                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                  >> 0x0000001cU)))),20);
    bufp->fullIData(oldp+7377,((0x000fffffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               >> 8U))),20);
    bufp->fullIData(oldp+7378,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                << 0x0000000cU) 
                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                  >> 0x00000014U)))),20);
    bufp->fullIData(oldp+7379,((0x000fffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                              << 0x00000028U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                                  << 0x00000014U) 
                                                 | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                << 0x00000014U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b)))) 
                      << 0x0000001cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                                      << 0x00000014U) 
                                                     | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                << 0x00000014U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b)))) 
                      >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                           << 0x00000014U) 
                                          | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b))) 
                                         >> 0x00000020U)) 
                                << 0x0000001cU));
    __Vtemp_1[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a)) 
                                << 0x00000014U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b))) 
                              >> 0x00000020U)) >> 4U);
    bufp->fullWData(oldp+7380,(__Vtemp_1),100);
    bufp->fullWData(oldp+7384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
    bufp->fullBit(oldp+7388,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)))));
    bufp->fullIData(oldp+7389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data),32);
    bufp->fullBit(oldp+7390,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready));
    bufp->fullBit(oldp+7391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
    bufp->fullIData(oldp+7392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data),32);
    bufp->fullBit(oldp+7393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last));
    bufp->fullCData(oldp+7394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats),7);
    bufp->fullBit(oldp+7395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
    bufp->fullIData(oldp+7396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data),32);
    bufp->fullBit(oldp+7397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last));
    bufp->fullCData(oldp+7398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats),7);
    bufp->fullIData(oldp+7399,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                << 0x00000010U) 
                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                  >> 0x00000010U)))),20);
    bufp->fullIData(oldp+7400,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                << 4U) 
                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                  >> 0x0000001cU)))),20);
    bufp->fullIData(oldp+7401,((0x000fffffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               >> 8U))),20);
    bufp->fullIData(oldp+7402,((0x000fffffU & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                << 0x0000000cU) 
                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                  >> 0x00000014U)))),20);
    bufp->fullIData(oldp+7403,((0x000fffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                              << 0x00000028U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                                  << 0x00000014U) 
                                                 | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                << 0x00000014U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b)))) 
                      << 0x0000001cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                                      << 0x00000014U) 
                                                     | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))) 
                                                 >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                << 0x00000014U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b)))) 
                      >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                           << 0x00000014U) 
                                          | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b))) 
                                         >> 0x00000020U)) 
                                << 0x0000001cU));
    __Vtemp_2[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a)) 
                                << 0x00000014U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b))) 
                              >> 0x00000020U)) >> 4U);
    bufp->fullWData(oldp+7404,(__Vtemp_2),100);
    bufp->fullWData(oldp+7408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
    bufp->fullIData(oldp+7412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z),21);
    bufp->fullIData(oldp+7413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_1),21);
    bufp->fullIData(oldp+7414,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_2),21);
    bufp->fullIData(oldp+7415,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_3),21);
    bufp->fullIData(oldp+7416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__unnamedblk1__DOT__rx_z_4),21);
    bufp->fullBit(oldp+7417,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full)))));
    bufp->fullSData(oldp+7418,((0x00001fffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_address)),13);
    bufp->fullBit(oldp+7419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready));
    bufp->fullBit(oldp+7420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid));
    bufp->fullCData(oldp+7421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode),3);
    bufp->fullCData(oldp+7422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_param),2);
    bufp->fullCData(oldp+7423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_size),3);
    bufp->fullCData(oldp+7424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_source),7);
    bufp->fullBit(oldp+7425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied));
    bufp->fullBit(oldp+7426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_corrupt));
    bufp->fullBit(oldp+7427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__da_ready));
    bufp->fullBit(oldp+7428,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
                              & ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__beatsLeft)) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__state_0)))));
    bufp->fullCData(oldp+7429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__da_bits_opcode),3);
    bufp->fullBit(oldp+7430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__idle));
    bufp->fullCData(oldp+7431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_last_beats1),3);
    bufp->fullCData(oldp+7432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_last_counter),3);
    bufp->fullBit(oldp+7433,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_last));
    bufp->fullCData(oldp+7434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__r_beats1),3);
    bufp->fullCData(oldp+7435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__r_counter),3);
    bufp->fullBit(oldp+7436,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__r_counter))));
    bufp->fullBit(oldp+7437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+7438,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__da_valid));
    bufp->fullCData(oldp+7439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_last_beats1),3);
    bufp->fullCData(oldp+7440,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_last_counter),3);
    bufp->fullBit(oldp+7441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_last));
    bufp->fullBit(oldp+7442,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+7443,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__winner_0));
    bufp->fullCData(oldp+7444,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__beatsLeft),3);
    bufp->fullBit(oldp+7445,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__beatsLeft))));
    bufp->fullBit(oldp+7446,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__winner_1));
    bufp->fullBit(oldp+7447,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__state_0));
    bufp->fullBit(oldp+7448,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__state_1));
    bufp->fullBit(oldp+7449,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__muxState_0));
    bufp->fullBit(oldp+7450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full));
    bufp->fullCData(oldp+7451,((7U & ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[2U] 
                                       << 1U) | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                                 >> 0x0000001fU)))),3);
    bufp->fullCData(oldp+7452,((7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                      >> 0x00000019U))),3);
    bufp->fullCData(oldp+7453,((0x0000007fU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                               >> 0x00000012U))),7);
    bufp->fullWData(oldp+7454,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram),66);
    bufp->fullBit(oldp+7457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+7458,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__full));
    bufp->fullCData(oldp+7459,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                              >> 0x0000003bU)))),3);
    bufp->fullCData(oldp+7460,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                              >> 0x00000038U)))),3);
    bufp->fullCData(oldp+7461,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                              >> 0x00000035U)))),3);
    bufp->fullCData(oldp+7462,((0x0000007fU & (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                                       >> 0x0000002eU)))),7);
    bufp->fullQData(oldp+7463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram),62);
    bufp->fullBit(oldp+7465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullCData(oldp+7466,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+7467,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+7468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+7469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+7470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__source),7);
    bufp->fullSData(oldp+7471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__address),13);
    bufp->fullCData(oldp+7472,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+7473,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+7474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+7475,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+7476,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+7477,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__denied));
    bufp->fullCData(oldp+7478,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter),3);
    bufp->fullCData(oldp+7479,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_3),3);
    bufp->fullCData(oldp+7480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__param_3),3);
    bufp->fullCData(oldp+7481,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__size_3),3);
    bufp->fullCData(oldp+7482,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__source_3),7);
    bufp->fullSData(oldp+7483,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__address_2),13);
    bufp->fullWData(oldp+7484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight),128);
    bufp->fullWData(oldp+7488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes),512);
    bufp->fullWData(oldp+7504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes),512);
    bufp->fullCData(oldp+7520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+7521,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+7522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+7523,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+7524,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode))));
    bufp->fullIData(oldp+7525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+7526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1),128);
    bufp->fullWData(oldp+7530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1),512);
    bufp->fullCData(oldp+7546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1),3);
    bufp->fullBit(oldp+7547,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))));
    bufp->fullCData(oldp+7548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+7549,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+7550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+7551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_2));
    bufp->fullCData(oldp+7552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3),3);
    bufp->fullBit(oldp+7553,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3))));
    bufp->fullBit(oldp+7554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_set));
    bufp->fullBit(oldp+7555,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
    bufp->fullBit(oldp+7556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+7557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+7558,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullBit(oldp+7559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
    bufp->fullBit(oldp+7560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
    bufp->fullWData(oldp+7561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
    bufp->fullBit(oldp+7565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullWData(oldp+7566,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),128);
    bufp->fullBit(oldp+7570,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
    bufp->fullBit(oldp+7571,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full)))));
    bufp->fullBit(oldp+7572,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid));
    bufp->fullCData(oldp+7573,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode),3);
    bufp->fullCData(oldp+7574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size),3);
    bufp->fullCData(oldp+7575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source),4);
    bufp->fullBit(oldp+7576,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied));
    bufp->fullBit(oldp+7577,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt));
    bufp->fullCData(oldp+7578,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__da_bits_opcode),3);
    bufp->fullBit(oldp+7579,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__idle));
    bufp->fullCData(oldp+7580,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_last_beats1),3);
    bufp->fullCData(oldp+7581,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_last_counter),3);
    bufp->fullBit(oldp+7582,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_last));
    bufp->fullCData(oldp+7583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__r_beats1),3);
    bufp->fullCData(oldp+7584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__r_counter),3);
    bufp->fullBit(oldp+7585,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__r_counter))));
    bufp->fullBit(oldp+7586,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__winner_1));
    bufp->fullCData(oldp+7587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__beatsLeft),3);
    bufp->fullBit(oldp+7588,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__beatsLeft))));
    bufp->fullBit(oldp+7589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__state_1));
    bufp->fullBit(oldp+7590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full));
    bufp->fullCData(oldp+7591,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                              >> 0x0000003cU)))),3);
    bufp->fullCData(oldp+7592,((7U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                              >> 0x00000036U)))),3);
    bufp->fullCData(oldp+7593,((0x0000000fU & (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                                       >> 0x00000032U)))),4);
    bufp->fullQData(oldp+7594,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram),63);
    bufp->fullBit(oldp+7596,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullCData(oldp+7597,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+7598,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+7599,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+7600,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__source),4);
    bufp->fullSData(oldp+7601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__address),13);
    bufp->fullCData(oldp+7602,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+7603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+7604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+7605,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+7606,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__source_1),4);
    bufp->fullBit(oldp+7607,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+7608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+7609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+7611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+7613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+7614,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+7615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+7616,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+7617,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode))));
    bufp->fullIData(oldp+7618,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+7619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1),16);
    bufp->fullQData(oldp+7620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1),64);
    bufp->fullCData(oldp+7622,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+7623,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+7624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+7625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+7626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+7627,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullSData(oldp+7628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),16);
    bufp->fullBit(oldp+7629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullCData(oldp+7630,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__a_first_counter),3);
    bufp->fullBit(oldp+7631,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__a_first_counter))));
    bufp->fullCData(oldp+7632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__d_first_counter),3);
    bufp->fullBit(oldp+7633,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_0));
    bufp->fullBit(oldp+7634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_1));
    bufp->fullBit(oldp+7635,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_2));
    bufp->fullBit(oldp+7636,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_3));
    bufp->fullBit(oldp+7637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_4));
    bufp->fullBit(oldp+7638,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_5));
    bufp->fullBit(oldp+7639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_6));
    bufp->fullBit(oldp+7640,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_7));
    bufp->fullBit(oldp+7641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_8));
    bufp->fullBit(oldp+7642,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_9));
    bufp->fullBit(oldp+7643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_10));
    bufp->fullBit(oldp+7644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_11));
    bufp->fullBit(oldp+7645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_12));
    bufp->fullBit(oldp+7646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_13));
    bufp->fullBit(oldp+7647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_14));
    bufp->fullBit(oldp+7648,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__flight_15));
    bufp->fullCData(oldp+7649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__stalls_id),2);
    bufp->fullCData(oldp+7650,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__stalls_id_1),2);
    bufp->fullCData(oldp+7651,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+7652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+7653,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+7654,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__source),4);
    bufp->fullIData(oldp+7655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__address),32);
    bufp->fullCData(oldp+7656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+7657,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+7658,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+7659,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+7660,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__source_1),4);
    bufp->fullCData(oldp+7661,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__sink),6);
    bufp->fullBit(oldp+7662,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+7663,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+7664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+7666,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+7668,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+7669,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+7670,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+7671,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+7672,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+7673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1),16);
    bufp->fullQData(oldp+7674,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),64);
    bufp->fullCData(oldp+7676,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+7677,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+7678,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+7679,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+7680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+7681,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullBit(oldp+7682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullBit(oldp+7683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer__DOT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first));
    bufp->fullCData(oldp+7684,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_id),2);
    bufp->fullBit(oldp+7685,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_id))));
    bufp->fullCData(oldp+7686,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter),3);
    bufp->fullBit(oldp+7687,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))));
    bufp->fullCData(oldp+7688,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__d_first_counter),3);
    bufp->fullBit(oldp+7689,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_16));
    bufp->fullBit(oldp+7690,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_17));
    bufp->fullBit(oldp+7691,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_18));
    bufp->fullBit(oldp+7692,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_19));
    bufp->fullBit(oldp+7693,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_20));
    bufp->fullBit(oldp+7694,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_21));
    bufp->fullBit(oldp+7695,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_22));
    bufp->fullBit(oldp+7696,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_23));
    bufp->fullBit(oldp+7697,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_24));
    bufp->fullBit(oldp+7698,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_25));
    bufp->fullBit(oldp+7699,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_26));
    bufp->fullBit(oldp+7700,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_27));
    bufp->fullBit(oldp+7701,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_28));
    bufp->fullBit(oldp+7702,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_29));
    bufp->fullBit(oldp+7703,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_30));
    bufp->fullBit(oldp+7704,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_31));
    bufp->fullBit(oldp+7705,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_32));
    bufp->fullBit(oldp+7706,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_33));
    bufp->fullBit(oldp+7707,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_34));
    bufp->fullBit(oldp+7708,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_35));
    bufp->fullBit(oldp+7709,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_36));
    bufp->fullBit(oldp+7710,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_37));
    bufp->fullBit(oldp+7711,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_38));
    bufp->fullBit(oldp+7712,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_39));
    bufp->fullBit(oldp+7713,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_40));
    bufp->fullBit(oldp+7714,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_41));
    bufp->fullBit(oldp+7715,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_42));
    bufp->fullBit(oldp+7716,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_43));
    bufp->fullBit(oldp+7717,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_44));
    bufp->fullBit(oldp+7718,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_45));
    bufp->fullBit(oldp+7719,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_46));
    bufp->fullBit(oldp+7720,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_47));
    bufp->fullBit(oldp+7721,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_48));
    bufp->fullBit(oldp+7722,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_49));
    bufp->fullBit(oldp+7723,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_50));
    bufp->fullBit(oldp+7724,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_51));
    bufp->fullBit(oldp+7725,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_52));
    bufp->fullBit(oldp+7726,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_53));
    bufp->fullBit(oldp+7727,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_54));
    bufp->fullBit(oldp+7728,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_55));
    bufp->fullBit(oldp+7729,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_56));
    bufp->fullBit(oldp+7730,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_57));
    bufp->fullBit(oldp+7731,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_58));
    bufp->fullBit(oldp+7732,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_59));
    bufp->fullBit(oldp+7733,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_60));
    bufp->fullBit(oldp+7734,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_61));
    bufp->fullBit(oldp+7735,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_62));
    bufp->fullBit(oldp+7736,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_63));
    bufp->fullBit(oldp+7737,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_64));
    bufp->fullBit(oldp+7738,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_65));
    bufp->fullBit(oldp+7739,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_66));
    bufp->fullBit(oldp+7740,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_67));
    bufp->fullBit(oldp+7741,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_68));
    bufp->fullBit(oldp+7742,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_69));
    bufp->fullBit(oldp+7743,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_70));
    bufp->fullBit(oldp+7744,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_71));
    bufp->fullBit(oldp+7745,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_72));
    bufp->fullBit(oldp+7746,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_73));
    bufp->fullBit(oldp+7747,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_74));
    bufp->fullBit(oldp+7748,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_75));
    bufp->fullBit(oldp+7749,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_76));
    bufp->fullBit(oldp+7750,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_77));
    bufp->fullBit(oldp+7751,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_78));
    bufp->fullBit(oldp+7752,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_79));
    bufp->fullBit(oldp+7753,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_80));
    bufp->fullBit(oldp+7754,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_81));
    bufp->fullBit(oldp+7755,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_82));
    bufp->fullBit(oldp+7756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_83));
    bufp->fullBit(oldp+7757,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_84));
    bufp->fullBit(oldp+7758,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_85));
    bufp->fullBit(oldp+7759,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_86));
    bufp->fullBit(oldp+7760,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_87));
    bufp->fullBit(oldp+7761,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_88));
    bufp->fullBit(oldp+7762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_89));
    bufp->fullBit(oldp+7763,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_90));
    bufp->fullBit(oldp+7764,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_91));
    bufp->fullBit(oldp+7765,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_92));
    bufp->fullBit(oldp+7766,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_93));
    bufp->fullBit(oldp+7767,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_94));
    bufp->fullBit(oldp+7768,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_95));
    bufp->fullBit(oldp+7769,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_96));
    bufp->fullBit(oldp+7770,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_97));
    bufp->fullBit(oldp+7771,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_98));
    bufp->fullBit(oldp+7772,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_99));
    bufp->fullBit(oldp+7773,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_100));
    bufp->fullBit(oldp+7774,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_101));
    bufp->fullBit(oldp+7775,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_102));
    bufp->fullBit(oldp+7776,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_103));
    bufp->fullBit(oldp+7777,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_104));
    bufp->fullBit(oldp+7778,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_105));
    bufp->fullBit(oldp+7779,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_106));
    bufp->fullBit(oldp+7780,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_107));
    bufp->fullBit(oldp+7781,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_108));
    bufp->fullBit(oldp+7782,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_109));
    bufp->fullBit(oldp+7783,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_110));
    bufp->fullBit(oldp+7784,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_111));
    bufp->fullBit(oldp+7785,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_112));
    bufp->fullBit(oldp+7786,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_113));
    bufp->fullBit(oldp+7787,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_114));
    bufp->fullBit(oldp+7788,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_115));
    bufp->fullBit(oldp+7789,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_116));
    bufp->fullBit(oldp+7790,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_117));
    bufp->fullBit(oldp+7791,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_118));
    bufp->fullBit(oldp+7792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_119));
    bufp->fullBit(oldp+7793,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_120));
    bufp->fullBit(oldp+7794,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_121));
    bufp->fullBit(oldp+7795,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_122));
    bufp->fullBit(oldp+7796,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_123));
    bufp->fullBit(oldp+7797,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_124));
    bufp->fullBit(oldp+7798,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_125));
    bufp->fullBit(oldp+7799,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_126));
    bufp->fullBit(oldp+7800,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__flight_127));
    bufp->fullBit(oldp+7801,((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                           >> 3U)))));
    bufp->fullCData(oldp+7802,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id),2);
    bufp->fullBit(oldp+7803,((2U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                           >> 3U)))));
    bufp->fullCData(oldp+7804,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_1),2);
    bufp->fullBit(oldp+7805,((3U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                           >> 3U)))));
    bufp->fullCData(oldp+7806,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_2),2);
    bufp->fullBit(oldp+7807,((4U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                           >> 3U)))));
    bufp->fullCData(oldp+7808,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_3),2);
    bufp->fullBit(oldp+7809,((5U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                           >> 3U)))));
    bufp->fullCData(oldp+7810,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_4),2);
    bufp->fullBit(oldp+7811,((6U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                                           >> 3U)))));
    bufp->fullCData(oldp+7812,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_5),2);
    bufp->fullCData(oldp+7813,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_6),2);
    bufp->fullBit(oldp+7814,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__stall));
    bufp->fullCData(oldp+7815,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+7816,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+7817,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+7818,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+7819,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+7820,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address),32);
    bufp->fullCData(oldp+7821,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+7822,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+7823,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+7824,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+7825,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+7826,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__denied));
    bufp->fullCData(oldp+7827,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter),3);
    bufp->fullCData(oldp+7828,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_3),3);
    bufp->fullCData(oldp+7829,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_3),3);
    bufp->fullCData(oldp+7830,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_3),3);
    bufp->fullCData(oldp+7831,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_3),7);
    bufp->fullIData(oldp+7832,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address_2),32);
    bufp->fullWData(oldp+7833,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight),128);
    bufp->fullWData(oldp+7837,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes),512);
    bufp->fullWData(oldp+7853,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes),512);
    bufp->fullCData(oldp+7869,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+7870,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+7871,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+7872,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+7873,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+7874,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1),128);
    bufp->fullWData(oldp+7878,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1),512);
    bufp->fullCData(oldp+7894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1),3);
    bufp->fullBit(oldp+7895,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))));
    bufp->fullCData(oldp+7896,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+7897,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+7898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+7899,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2));
    bufp->fullCData(oldp+7900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3),3);
    bufp->fullBit(oldp+7901,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3))));
    bufp->fullBit(oldp+7902,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_set));
    bufp->fullBit(oldp+7903,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
    bufp->fullBit(oldp+7904,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+7905,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+7906,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullBit(oldp+7907,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
    bufp->fullBit(oldp+7908,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
    bufp->fullBit(oldp+7909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1));
    bufp->fullWData(oldp+7910,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
    bufp->fullBit(oldp+7914,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullWData(oldp+7915,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),128);
    bufp->fullBit(oldp+7919,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
    bufp->fullBit(oldp+7920,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first));
    bufp->fullBit(oldp+7921,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__mapPP));
    bufp->fullCData(oldp+7922,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_beats1),3);
    bufp->fullCData(oldp+7923,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter),3);
    bufp->fullBit(oldp+7924,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_repeat));
    bufp->fullBit(oldp+7925,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full));
    bufp->fullCData(oldp+7926,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source),6);
    bufp->fullCData(oldp+7927,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+7928,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_source),6);
    bufp->fullIData(oldp+7929,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_address),32);
    bufp->fullCData(oldp+7930,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+7931,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+7932,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+7933,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+7934,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__source),6);
    bufp->fullIData(oldp+7935,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__address),32);
    bufp->fullCData(oldp+7936,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+7937,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+7938,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+7939,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+7940,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__source_1),6);
    bufp->fullBit(oldp+7941,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__denied));
    bufp->fullCData(oldp+7942,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter),3);
    bufp->fullCData(oldp+7943,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_3),3);
    bufp->fullCData(oldp+7944,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__param_3),3);
    bufp->fullCData(oldp+7945,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__size_3),3);
    bufp->fullCData(oldp+7946,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__source_3),6);
    bufp->fullIData(oldp+7947,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__address_2),32);
    bufp->fullQData(oldp+7948,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight),64);
    bufp->fullWData(oldp+7950,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes),256);
    bufp->fullWData(oldp+7958,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes),256);
    bufp->fullCData(oldp+7966,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+7967,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+7968,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+7969,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+7970,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog),32);
    bufp->fullQData(oldp+7971,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1),64);
    bufp->fullWData(oldp+7973,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1),256);
    bufp->fullCData(oldp+7981,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1),3);
    bufp->fullBit(oldp+7982,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))));
    bufp->fullCData(oldp+7983,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+7984,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+7985,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+7986,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2));
    bufp->fullCData(oldp+7987,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3),3);
    bufp->fullBit(oldp+7988,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3))));
    bufp->fullBit(oldp+7989,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_set));
    bufp->fullBit(oldp+7990,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
    bufp->fullBit(oldp+7991,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+7992,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+7993,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullBit(oldp+7994,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
    bufp->fullBit(oldp+7995,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
    bufp->fullBit(oldp+7996,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1));
    bufp->fullQData(oldp+7997,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),64);
    bufp->fullBit(oldp+7999,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullQData(oldp+8000,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),64);
    bufp->fullBit(oldp+8002,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
    bufp->fullBit(oldp+8003,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_ready) 
                              & ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft))
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_readys)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__state_0)))));
    bufp->fullCData(oldp+8004,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d),3);
    bufp->fullCData(oldp+8005,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_size),3);
    bufp->fullCData(oldp+8006,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_source),7);
    bufp->fullBit(oldp+8007,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_denied));
    bufp->fullBit(oldp+8008,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_22));
    bufp->fullBit(oldp+8009,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_21));
    bufp->fullBit(oldp+8010,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_20));
    bufp->fullBit(oldp+8011,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_19));
    bufp->fullBit(oldp+8012,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_18));
    bufp->fullBit(oldp+8013,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_17));
    bufp->fullBit(oldp+8014,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_16));
    bufp->fullBit(oldp+8015,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_15));
    bufp->fullBit(oldp+8016,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_14));
    bufp->fullBit(oldp+8017,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_13));
    bufp->fullBit(oldp+8018,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_12));
    bufp->fullBit(oldp+8019,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_11));
    bufp->fullBit(oldp+8020,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_10));
    bufp->fullBit(oldp+8021,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_9));
    bufp->fullBit(oldp+8022,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_8));
    bufp->fullBit(oldp+8023,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_7));
    bufp->fullCData(oldp+8024,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_counter),3);
    bufp->fullBit(oldp+8025,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_counter))));
    bufp->fullBit(oldp+8026,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__doneAW));
    bufp->fullBit(oldp+8027,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d));
    bufp->fullCData(oldp+8028,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__b_delay),3);
    bufp->fullBit(oldp+8029,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_first));
    bufp->fullBit(oldp+8030,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_denied_r));
    bufp->fullBit(oldp+8031,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_first)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_denied_r))));
    bufp->fullBit(oldp+8032,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d)))));
    bufp->fullCData(oldp+8033,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count),5);
    bufp->fullBit(oldp+8034,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write));
    bufp->fullCData(oldp+8035,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1),5);
    bufp->fullBit(oldp+8036,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_1));
    bufp->fullCData(oldp+8037,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_2),5);
    bufp->fullBit(oldp+8038,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_2));
    bufp->fullCData(oldp+8039,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3),5);
    bufp->fullBit(oldp+8040,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_3));
    bufp->fullCData(oldp+8041,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_4),5);
    bufp->fullBit(oldp+8042,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_4));
    bufp->fullCData(oldp+8043,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5),5);
    bufp->fullBit(oldp+8044,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_5));
    bufp->fullCData(oldp+8045,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6),5);
    bufp->fullBit(oldp+8046,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_6));
    bufp->fullCData(oldp+8047,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+8048,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+8049,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+8050,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+8051,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+8052,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__address),32);
    bufp->fullCData(oldp+8053,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+8054,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+8055,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+8056,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+8057,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+8058,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight),128);
    bufp->fullWData(oldp+8062,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes),512);
    bufp->fullWData(oldp+8078,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes),512);
    bufp->fullCData(oldp+8094,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+8095,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+8096,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+8097,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+8098,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+8099,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1),128);
    bufp->fullWData(oldp+8103,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1),512);
    bufp->fullCData(oldp+8119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+8120,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+8121,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+8122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
    bufp->fullBit(oldp+8123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+8124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+8125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullBit(oldp+8126,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
    bufp->fullWData(oldp+8127,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
    bufp->fullBit(oldp+8131,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullBit(oldp+8132,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullQData(oldp+8133,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+8135,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullBit(oldp+8136,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)))));
    bufp->fullQData(oldp+8137,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram),62);
    bufp->fullBit(oldp+8139,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full));
    bufp->fullCData(oldp+8140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft),3);
    bufp->fullBit(oldp+8141,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft))));
    bufp->fullCData(oldp+8142,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid) 
                                << 1U)),2);
    bufp->fullCData(oldp+8143,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_mask),2);
    bufp->fullCData(oldp+8144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+8145,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+8146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__winner_1));
    bufp->fullBit(oldp+8147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__state_0));
    bufp->fullBit(oldp+8148,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__state_1));
    bufp->fullBit(oldp+8149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__muxState_0));
    bufp->fullBit(oldp+8150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__muxState_1));
    bufp->fullCData(oldp+8151,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+8152,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+8153,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+8154,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+8155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+8156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__address),32);
    bufp->fullCData(oldp+8157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+8158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+8159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+8160,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+8161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+8162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__denied));
    bufp->fullCData(oldp+8163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter),3);
    bufp->fullCData(oldp+8164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode_3),3);
    bufp->fullCData(oldp+8165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__param_3),3);
    bufp->fullCData(oldp+8166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__size_3),3);
    bufp->fullCData(oldp+8167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_3),7);
    bufp->fullIData(oldp+8168,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__address_2),32);
    bufp->fullWData(oldp+8169,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight),128);
    bufp->fullWData(oldp+8173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes),512);
    bufp->fullWData(oldp+8189,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes),512);
    bufp->fullCData(oldp+8205,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+8206,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+8207,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+8208,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+8209,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode))));
    bufp->fullIData(oldp+8210,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+8211,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1),128);
    bufp->fullWData(oldp+8215,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1),512);
    bufp->fullCData(oldp+8231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1),3);
    bufp->fullBit(oldp+8232,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))));
    bufp->fullCData(oldp+8233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+8234,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+8235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+8236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_2));
    bufp->fullCData(oldp+8237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3),3);
    bufp->fullBit(oldp+8238,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3))));
    bufp->fullBit(oldp+8239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_set));
    bufp->fullBit(oldp+8240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__source_ok));
    bufp->fullBit(oldp+8241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+8242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+8243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullBit(oldp+8244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1));
    bufp->fullBit(oldp+8245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2));
    bufp->fullBit(oldp+8246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1));
    bufp->fullWData(oldp+8247,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready),128);
    bufp->fullBit(oldp+8251,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullWData(oldp+8252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready),128);
    bufp->fullBit(oldp+8256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1));
    bufp->fullBit(oldp+8257,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__unnamedblk1__DOT__latch));
    bufp->fullCData(oldp+8258,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft),3);
    bufp->fullBit(oldp+8259,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft))));
    bufp->fullCData(oldp+8260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__readys_mask),2);
    bufp->fullBit(oldp+8261,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__state_0));
    bufp->fullBit(oldp+8262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__state_1));
    bufp->fullCData(oldp+8263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+8264,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+8265,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+8266,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source),4);
    bufp->fullIData(oldp+8267,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__address),32);
    bufp->fullCData(oldp+8268,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+8269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+8270,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+8271,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+8272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_1),4);
    bufp->fullCData(oldp+8273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__sink),6);
    bufp->fullBit(oldp+8274,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+8275,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+8276,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+8278,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+8280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+8281,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+8282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+8283,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+8284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+8285,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1),16);
    bufp->fullQData(oldp+8286,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1),64);
    bufp->fullCData(oldp+8288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+8289,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+8290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+8291,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1));
    bufp->fullBit(oldp+8292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1));
    bufp->fullCData(oldp+8293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask),4);
    bufp->fullBit(oldp+8294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp));
    bufp->fullBit(oldp+8295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__unnamedblk1__DOT__latch));
    bufp->fullBit(oldp+8296,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8297,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8298,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8299,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+8300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+8301,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+8302,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+8303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+8304,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+8305,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+8306,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input),32);
    bufp->fullCData(oldp+8307,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[0]),8);
    bufp->fullCData(oldp+8308,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[1]),8);
    bufp->fullCData(oldp+8309,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[2]),8);
    bufp->fullCData(oldp+8310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[3]),8);
    bufp->fullCData(oldp+8311,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[4]),8);
    bufp->fullCData(oldp+8312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[5]),8);
    bufp->fullCData(oldp+8313,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[6]),8);
    bufp->fullCData(oldp+8314,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[7]),8);
    bufp->fullCData(oldp+8315,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state),2);
    bufp->fullCData(oldp+8316,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullSData(oldp+8317,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0]),9);
    bufp->fullSData(oldp+8318,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1]),9);
    bufp->fullSData(oldp+8319,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2]),9);
    bufp->fullSData(oldp+8320,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3]),9);
    bufp->fullSData(oldp+8321,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4]),9);
    bufp->fullSData(oldp+8322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5]),9);
    bufp->fullSData(oldp+8323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6]),9);
    bufp->fullSData(oldp+8324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7]),9);
    bufp->fullCData(oldp+8325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read),4);
    bufp->fullCData(oldp+8326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write),4);
    bufp->fullBit(oldp+8327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty));
    bufp->fullBit(oldp+8328,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write))));
    bufp->fullBit(oldp+8329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable));
    bufp->fullCData(oldp+8330,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record),3);
    bufp->fullBit(oldp+8331,((2U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                                           >> 1U)))));
    bufp->fullCData(oldp+8332,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+8333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+8334,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+8335,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+8336,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullSData(oldp+8337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_addr),10);
    bufp->fullSData(oldp+8338,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+8339,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullBit(oldp+8340,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR));
    bufp->fullBit(oldp+8341,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI));
    bufp->fullBit(oldp+8342,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSTORE));
    bufp->fullBit(oldp+8343,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB));
    bufp->fullBit(oldp+8344,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU));
    bufp->fullBit(oldp+8345,((0x6fU == (0x0000007fU 
                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+8346,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRW) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRS) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRC)))));
    bufp->fullCData(oldp+8347,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                               >> 7U))),5);
    bufp->fullCData(oldp+8348,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                               >> 0x0000000fU))),5);
    bufp->fullCData(oldp+8349,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                               >> 0x00000014U))),5);
    bufp->fullSData(oldp+8350,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                >> 0x00000014U)),12);
    bufp->fullIData(oldp+8351,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm),32);
    bufp->fullCData(oldp+8352,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask),4);
    bufp->fullIData(oldp+8353,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command),32);
    bufp->fullBit(oldp+8354,((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+8355,((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+8356,((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+8357,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLOAD));
    bufp->fullBit(oldp+8358,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isWRITE));
    bufp->fullBit(oldp+8359,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__isJUMP));
    bufp->fullBit(oldp+8360,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_10)))));
    bufp->fullBit(oldp+8361,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))));
    bufp->fullCData(oldp+8362,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSR),2);
    bufp->fullBit(oldp+8363,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_20) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU)))));
    bufp->fullSData(oldp+8364,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
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
    bufp->fullCData(oldp+8365,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize),3);
    bufp->fullBit(oldp+8366,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB));
    bufp->fullBit(oldp+8367,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state));
    bufp->fullBit(oldp+8368,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel));
    bufp->fullBit(oldp+8369,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state));
    bufp->fullBit(oldp+8370,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel));
    bufp->fullCData(oldp+8371,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+8372,((0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)),7);
    bufp->fullCData(oldp+8373,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 0x0000000cU))),3);
    bufp->fullCData(oldp+8374,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                >> 0x00000019U)),7);
    bufp->fullSData(oldp+8375,(((0x00000fe0U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                >> 0x00000014U)) 
                                | (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 7U)))),12);
    bufp->fullSData(oldp+8376,(((((2U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                         >> 0x0000001eU)) 
                                  | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                           >> 7U))) 
                                 << 0x0000000aU) | 
                                ((0x000003f0U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x00000015U)) 
                                 | (0x0000000fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 8U))))),12);
    bufp->fullIData(oldp+8377,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                >> 0x0000000cU)),20);
    bufp->fullIData(oldp+8378,(((0x00080000U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                >> 0x0000000cU)) 
                                | ((0x0007f800U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 1U)) 
                                   | ((0x00000400U 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                          >> 0x0000000aU)) 
                                      | (0x000003ffU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                            >> 0x00000015U)))))),20);
    bufp->fullCData(oldp+8379,(((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR) 
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
    bufp->fullBit(oldp+8380,((0x37U == (0x0000007fU 
                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+8381,((0x17U == (0x0000007fU 
                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+8382,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR));
    bufp->fullBit(oldp+8383,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBEQ));
    bufp->fullBit(oldp+8384,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBNE));
    bufp->fullBit(oldp+8385,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLT));
    bufp->fullBit(oldp+8386,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE));
    bufp->fullBit(oldp+8387,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLTU));
    bufp->fullBit(oldp+8388,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU));
    bufp->fullBit(oldp+8389,((IData)((3U == (0x0000707fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+8390,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH));
    bufp->fullBit(oldp+8391,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW));
    bufp->fullBit(oldp+8392,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLBU));
    bufp->fullBit(oldp+8393,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU));
    bufp->fullBit(oldp+8394,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSB));
    bufp->fullBit(oldp+8395,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSH));
    bufp->fullBit(oldp+8396,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW));
    bufp->fullBit(oldp+8397,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI));
    bufp->fullBit(oldp+8398,((IData)((0x00002013U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+8399,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTIU));
    bufp->fullBit(oldp+8400,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI));
    bufp->fullBit(oldp+8401,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI));
    bufp->fullBit(oldp+8402,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI));
    bufp->fullBit(oldp+8403,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI));
    bufp->fullBit(oldp+8404,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI));
    bufp->fullBit(oldp+8405,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI));
    bufp->fullBit(oldp+8406,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD));
    bufp->fullBit(oldp+8407,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL));
    bufp->fullBit(oldp+8408,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT));
    bufp->fullBit(oldp+8409,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU));
    bufp->fullBit(oldp+8410,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR));
    bufp->fullBit(oldp+8411,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL));
    bufp->fullBit(oldp+8412,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA));
    bufp->fullBit(oldp+8413,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR));
    bufp->fullBit(oldp+8414,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND));
    bufp->fullBit(oldp+8415,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRW));
    bufp->fullBit(oldp+8416,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRS));
    bufp->fullBit(oldp+8417,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRC));
    bufp->fullBit(oldp+8418,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__WCSREN));
    bufp->fullIData(oldp+8419,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+8420,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+8421,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+8422,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+8423,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+8424,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+8425,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+8426,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+8427,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+8428,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+8429,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+8430,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+8431,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+8432,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+8433,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+8434,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+8435,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+8436,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+8437,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+8438,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+8439,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+8440,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+8441,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+8442,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+8443,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+8444,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+8445,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+8446,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+8447,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+8448,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+8449,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+8450,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+8451,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+8452,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_valid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit))));
    bufp->fullBit(oldp+8453,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid)))))));
    bufp->fullBit(oldp+8454,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_valid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit))));
    bufp->fullBit(oldp+8455,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid)))))));
    bufp->fullSData(oldp+8456,(((vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->fullCData(oldp+8457,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullSData(oldp+8458,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en) 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))) 
                             >> 0x00000020U));
    bufp->fullIData(oldp+8459,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_8[(7U & 
                                              (VL_SHIFTL_III(8,8,32, 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))));
    __Vtemp_14[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8460,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_14[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))));
    __Vtemp_20[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8461,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_20[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
    bufp->fullSData(oldp+8462,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en) 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))));
    __Vtemp_26[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8463,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_26[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))));
    __Vtemp_32[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8464,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_32[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))));
    __Vtemp_38[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8465,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_38[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
    bufp->fullBit(oldp+8466,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode)))));
    bufp->fullIData(oldp+8467,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                            >> 3U))
                                 : ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
                                     ? ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                         ? 0U : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     : 0U))),32);
    bufp->fullCData(oldp+8468,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                       ? (IData)((vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                  >> 1U))
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp)))),2);
    bufp->fullBit(oldp+8469,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last)))));
    bufp->fullIData(oldp+8470,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                     ? 0U : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                 : 0U)),32);
    bufp->fullIData(oldp+8471,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                            >> 5U))
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data)),32);
    bufp->fullCData(oldp+8472,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                ? (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                           >> 1U))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb)))),4);
    bufp->fullBit(oldp+8473,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last)))));
    bufp->fullQData(oldp+8474,((((QData)((IData)(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
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
    bufp->fullBit(oldp+8476,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_3))));
    bufp->fullBit(oldp+8477,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_0))));
    bufp->fullCData(oldp+8478,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp) 
                                | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__error_1)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__error_0)))),2);
    bufp->fullCData(oldp+8479,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
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
    bufp->fullCData(oldp+8480,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
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
    bufp->fullBit(oldp+8481,((1U & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
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
    bufp->fullBit(oldp+8482,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
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
    bufp->fullBit(oldp+8483,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_arready) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last))));
    bufp->fullBit(oldp+8484,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__in_awready) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last))));
    bufp->fullBit(oldp+8485,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_wready) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_1))));
    bufp->fullBit(oldp+8486,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_3))));
    bufp->fullBit(oldp+8487,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_0))));
    bufp->fullCData(oldp+8488,(((0x0000000eU & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
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
    bufp->fullCData(oldp+8489,(((0x0000000eU & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
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
    bufp->fullBit(oldp+8490,((1U & ((~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_valid)))));
    bufp->fullBit(oldp+8491,((1U & ((~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_valid)))));
    bufp->fullBit(oldp+8492,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid)))));
    bufp->fullBit(oldp+8493,((1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid)))));
    bufp->fullIData(oldp+8494,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                 ? 0U : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
    __Vtemp_39[1U] = (IData)((((QData)((IData)((((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
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
                               << 0x00000020U) | (QData)((IData)(
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
    __Vtemp_39[2U] = (IData)(((((QData)((IData)((((
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
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
                                << 0x00000020U) | (QData)((IData)(
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
                                           & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                           : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                          [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_40[1U] = (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                         & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                         : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                        [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                       << 0x00000010U) | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                           & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                           : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                          [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_40[2U] = __Vtemp_39[1U];
    __Vtemp_40[3U] = __Vtemp_39[2U];
    bufp->fullSData(oldp+8495,((0x0000ffffU & (((0U 
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
    bufp->fullIData(oldp+8496,((4U | ((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                                        : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                       [0U]) << 0x00000010U))),32);
    bufp->fullSData(oldp+8497,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                                 & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                [0U])),16);
    bufp->fullBit(oldp+8498,((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6))));
    bufp->fullSData(oldp+8499,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8500,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 1U))));
    bufp->fullSData(oldp+8501,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8502,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 2U))));
    bufp->fullSData(oldp+8503,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8504,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 3U))));
    bufp->fullSData(oldp+8505,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8506,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 4U))));
    bufp->fullSData(oldp+8507,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8508,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 5U))));
    bufp->fullSData(oldp+8509,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8510,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 6U))));
    bufp->fullSData(oldp+8511,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8512,(((IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 7U))));
    bufp->fullSData(oldp+8513,((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))));
    __Vtemp_46[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8514,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_46[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))));
    __Vtemp_52[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8515,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_52[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
    bufp->fullBit(oldp+8516,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_6)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_6) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_6)))));
    bufp->fullBit(oldp+8517,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_5)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_5) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_5)))));
    bufp->fullBit(oldp+8518,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_3)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_3) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_3)))));
    bufp->fullBit(oldp+8519,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_1)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__write_1) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__count_1)))));
    bufp->fullBit(oldp+8520,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_6) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6)))));
    bufp->fullBit(oldp+8521,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_5) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5)))));
    bufp->fullBit(oldp+8522,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_3) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)))));
    bufp->fullBit(oldp+8523,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__write_1) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__count_1)))));
    bufp->fullCData(oldp+8524,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                                ? (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                           >> 0x0000002dU))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid)))),4);
    bufp->fullIData(oldp+8525,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                            >> 5U))
                                 : vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data)),32);
    bufp->fullCData(oldp+8526,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                ? (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                           >> 1U))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb)))),4);
    bufp->fullBit(oldp+8527,((1U == ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter))
                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                      : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter)))));
    bufp->fullCData(oldp+8528,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                                ? (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                           >> 0x0000002dU))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid)))),4);
    bufp->fullQData(oldp+8529,((((QData)((IData)((0x0000000fU 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                                 >> 0x0000002dU))
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))) 
                                 << 0x00000021U) | 
                                (((QData)((IData)((~ 
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
    bufp->fullQData(oldp+8531,((((QData)((IData)((0x0000000fU 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                                 >> 0x0000002dU))
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))) 
                                 << 0x00000021U) | 
                                (((QData)((IData)((~ 
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
    bufp->fullQData(oldp+8533,((((QData)((IData)(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
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
    bufp->fullSData(oldp+8535,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                 : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__w_counter))),9);
    bufp->fullBit(oldp+8536,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last)))));
    bufp->fullCData(oldp+8537,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8538,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8539,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8540,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8541,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullBit(oldp+8542,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                 : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                       >> 2U))) & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid))) 
                              & ((((((((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__full)) 
                                              << 1U)) 
                                       | (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__full)))) 
                                      << 6U) | (((2U 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__full)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__full)))) 
                                                << 4U)) 
                                    | ((((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                        << 2U) | ((2U 
                                                   & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__full)))))) 
                                   << 8U) | (((((2U 
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
                                 >> (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid))))));
    bufp->fullIData(oldp+8543,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                            >> 0x00000019U))
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address)),32);
    bufp->fullCData(oldp+8544,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                ? (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                                           >> 0x00000011U))
                                                : (~ 
                                                   (0x000000ffU 
                                                    & (((IData)(0x000003ffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                       >> 2U)))))),8);
    bufp->fullCData(oldp+8545,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                       ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                                  >> 0x0000000eU))
                                       : ((0U != (3U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                                     >> 1U)))
                                           ? 2U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))))),3);
    bufp->fullBit(oldp+8546,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
                                 & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                        >> 2U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT___out_wvalid_T_3))))));
    bufp->fullIData(oldp+8547,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                                            >> 5U))
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_in_a_bits_data)),32);
    bufp->fullCData(oldp+8548,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)
                                                ? (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                                                           >> 1U))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask)))),4);
    bufp->fullBit(oldp+8549,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last)))));
    bufp->fullBit(oldp+8550,((((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                    : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                          >> 2U)))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid))) 
                              & ((((((((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__full)) 
                                              << 1U)) 
                                       | (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__full)))) 
                                      << 6U) | (((2U 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__full)))) 
                                                << 4U)) 
                                    | ((((2U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__full)))) 
                                        << 2U) | ((2U 
                                                   & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__full)))))) 
                                   << 8U) | (((((2U 
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
                                 >> (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid))))));
    bufp->fullBit(oldp+8551,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                      >> 2U))) & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid)))));
    bufp->fullBit(oldp+8552,(((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                   : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                         >> 2U)))) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid)))));
    bufp->fullIData(oldp+8553,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                 ? 0U : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
    __Vtemp_53[1U] = (IData)((((QData)((IData)((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
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
                               << 0x00000020U) | (QData)((IData)(
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
    __Vtemp_53[2U] = (IData)(((((QData)((IData)((((
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
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
                                << 0x00000020U) | (QData)((IData)(
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
                                           & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                           : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                          [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_54[1U] = (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                         & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                         : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                        [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                       << 0x00000010U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                           & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                           : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                          [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_54[2U] = __Vtemp_53[1U];
    __Vtemp_54[3U] = __Vtemp_53[2U];
    bufp->fullSData(oldp+8554,((0x0000ffffU & (((0U 
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
    bufp->fullBit(oldp+8555,((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5))));
    bufp->fullSData(oldp+8556,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8557,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 1U))));
    bufp->fullSData(oldp+8558,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8559,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 2U))));
    bufp->fullSData(oldp+8560,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8561,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 3U))));
    bufp->fullSData(oldp+8562,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8563,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 4U))));
    bufp->fullSData(oldp+8564,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8565,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 5U))));
    bufp->fullSData(oldp+8566,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8567,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 6U))));
    bufp->fullSData(oldp+8568,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                 & ((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8569,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_hafd0b066_0_5) 
                              & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 7U))));
    bufp->fullSData(oldp+8570,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
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
                               << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))));
    __Vtemp_60[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))) 
                              >> 0x00000020U));
    bufp->fullIData(oldp+8571,((((0U == (0x0000001fU 
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
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))))) 
                                | (__Vtemp_60[(7U & 
                                               (VL_SHIFTL_III(8,8,32, 
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
    bufp->fullBit(oldp+8572,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_6) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_6)))));
    bufp->fullBit(oldp+8573,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_5) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_5)))));
    bufp->fullBit(oldp+8574,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_3) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_3)))));
    bufp->fullBit(oldp+8575,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__write_1) 
                                  != (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__count_1)))));
    bufp->fullBit(oldp+8576,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
                              & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                     >> 2U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT___out_wvalid_T_3)))));
    bufp->fullBit(oldp+8577,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid))));
    bufp->fullBit(oldp+8578,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram)
                                     : (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                           >> 2U))))));
    bufp->fullCData(oldp+8579,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8580,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8581,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8582,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullCData(oldp+8583,((0x0000001fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) 
                                                    & (0x0000001fU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))),5);
    bufp->fullBit(oldp+8584,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
    bufp->fullBit(oldp+8585,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+8586,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
    bufp->fullBit(oldp+8587,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+8588,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
    bufp->fullBit(oldp+8589,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+8590,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+8591,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state),4);
    bufp->fullCData(oldp+8592,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__next_state),4);
    bufp->fullSData(oldp+8593,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__counter),10);
    bufp->fullCData(oldp+8594,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_command),8);
    bufp->fullCData(oldp+8595,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in0),6);
    bufp->fullCData(oldp+8596,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in1),6);
    bufp->fullCData(oldp+8597,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in2),6);
    bufp->fullCData(oldp+8598,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in3),6);
    bufp->fullIData(oldp+8599,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr),24);
    bufp->fullCData(oldp+8600,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_wdata),8);
    bufp->fullBit(oldp+8601,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__is_QPI));
    bufp->fullIData(oldp+8602,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata),32);
    bufp->fullBit(oldp+8603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck));
    bufp->fullBit(oldp+8604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
    bufp->fullBit(oldp+8605,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+8606,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8607,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8608,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8609,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
    bufp->fullBit(oldp+8610,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid));
    bufp->fullCData(oldp+8611,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8612,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8613,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8614,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8615,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8616,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8617,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8618,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8619,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8620,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8621,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8622,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8623,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8624,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8625,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8626,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8627,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8628,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8629,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_valid));
    bufp->fullCData(oldp+8630,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8631,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8632,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8633,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8634,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8635,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8636,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8637,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8638,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8639,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8640,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8641,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8642,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8643,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8644,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8645,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8646,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8647,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8648,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid));
    bufp->fullCData(oldp+8649,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8650,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8651,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8652,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8653,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8654,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8655,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8656,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8657,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8658,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8659,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8660,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8661,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8662,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8663,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8664,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8665,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8666,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8667,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid));
    bufp->fullCData(oldp+8668,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8669,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8670,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8671,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8672,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8673,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8674,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8675,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8676,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8677,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8678,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8679,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8680,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8681,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8682,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8683,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8684,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8685,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8686,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8687,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8688,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8689,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8690,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8691,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8692,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8693,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8694,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8695,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8696,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8697,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8698,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8699,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8700,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8701,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8702,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8703,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8704,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid));
    bufp->fullBit(oldp+8705,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8706,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8707,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8708,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8709,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8710,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8711,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8712,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8713,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid));
    bufp->fullBit(oldp+8714,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8715,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8716,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8717,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8718,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8719,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8720,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8721,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8722,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+8723,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+8724,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+8725,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lvga_auto_in_pready));
    bufp->fullBit(oldp+8726,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state))));
    bufp->fullBit(oldp+8727,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+8728,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+8729,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+8730,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8731,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8732,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8733,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_e_valid));
    bufp->fullBit(oldp+8734,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_valid));
    bufp->fullCData(oldp+8735,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8736,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8737,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8738,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8739,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8740,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8741,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8742,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8743,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8744,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8745,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8746,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8747,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8748,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8749,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8750,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8751,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8752,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8753,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_valid));
    bufp->fullCData(oldp+8754,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8755,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8757,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8758,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8759,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8760,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8761,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8763,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8764,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8765,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8766,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8767,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8768,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8769,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8770,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8771,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8772,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid));
    bufp->fullCData(oldp+8773,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8774,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8775,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8776,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8777,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8778,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8779,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8780,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8781,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8782,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8783,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8784,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8785,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8786,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8787,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8788,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8789,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8790,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8791,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid));
    bufp->fullCData(oldp+8792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8793,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8794,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8795,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8796,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8797,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8798,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8799,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8800,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8801,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8802,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8803,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8804,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8805,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8806,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8807,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8808,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8809,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8810,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8811,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8812,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8813,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8814,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8815,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+8816,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8817,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8818,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8819,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8820,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8821,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8822,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8823,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8824,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8825,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8826,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8827,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8828,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid));
    bufp->fullBit(oldp+8829,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8830,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8831,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8832,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8833,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8834,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8835,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8836,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8837,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid));
    bufp->fullBit(oldp+8838,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8839,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8840,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8841,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8842,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8843,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8844,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8845,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8846,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+8847,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+8848,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                 ? 0x0000000eU : ((1U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 0x0000000bU
                                                   : 
                                                  (0x0000000fU 
                                                   & ((2U 
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
    bufp->fullBit(oldp+8849,((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+8850,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+8851,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+8852,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+8853,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+8854,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+8855,(((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                 ? (1U & (0x35U >> 
                                          (7U & ((IData)(7U) 
                                                 - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                                 : 0x0aU)),4);
    bufp->fullBit(oldp+8856,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
    bufp->fullBit(oldp+8857,((0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+8858,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+8859,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))));
    bufp->fullCData(oldp+8860,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+8861,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+8862,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+8863,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+8864,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+8865,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+8866,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+8867,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+8868,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state));
    bufp->fullBit(oldp+8869,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
                               ? (8U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                               : (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)))));
    bufp->fullCData(oldp+8870,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter),8);
    bufp->fullBit(oldp+8871,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+8872,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+8873,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullIData(oldp+8874,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullCData(oldp+8875,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+8876,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+8877,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+8878,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+8879,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+8880,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+8881,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+8882,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+8883,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+8884,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+8885,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+8886,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+8887,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+8888,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+8889,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+8890,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+8891,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),3);
    bufp->fullCData(oldp+8892,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state),2);
    bufp->fullBit(oldp+8893,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready));
    bufp->fullIData(oldp+8894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata),32);
    bufp->fullBit(oldp+8895,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr));
    bufp->fullBit(oldp+8896,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out));
    bufp->fullCData(oldp+8897,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr),5);
    bufp->fullBit(oldp+8898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_psel));
    bufp->fullBit(oldp+8899,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_penable));
    bufp->fullBit(oldp+8900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite));
    bufp->fullCData(oldp+8901,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb),4);
    bufp->fullBit(oldp+8902,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pready));
    bufp->fullIData(oldp+8903,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata),32);
    bufp->fullBit(oldp+8904,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out));
    bufp->fullCData(oldp+8905,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate),4);
    bufp->fullCData(oldp+8906,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state),4);
    bufp->fullCData(oldp+8907,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr),5);
    bufp->fullCData(oldp+8908,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb),4);
    bufp->fullBit(oldp+8909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite));
    bufp->fullSData(oldp+8910,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+8911,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+8912,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+8913,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+8917,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+8918,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000aU))));
    bufp->fullCData(oldp+8919,((0x0000007fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+8920,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+8921,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000bU))));
    bufp->fullBit(oldp+8922,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000cU))));
    bufp->fullBit(oldp+8923,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000dU))));
    bufp->fullBit(oldp+8924,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+8925,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+8926,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+8927,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
    bufp->fullSData(oldp+8928,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+8929,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+8930,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+8931,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+8932,((0x000000ffU & ((0x00000800U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                   - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                   - (IData)(1U))))),8);
    bufp->fullCData(oldp+8933,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+8934,((((0x00000200U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                              & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck)))));
    bufp->fullBit(oldp+8935,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                              & ((0x00000400U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
    bufp->fullSData(oldp+8936,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_addr),10);
    bufp->fullSData(oldp+8937,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+8938,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+8939,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+8940,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr))));
    bufp->fullBit(oldp+8941,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__int_o));
    bufp->fullBit(oldp+8942,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+8943,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__enable));
    bufp->fullBit(oldp+8944,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__srx_pad));
    bufp->fullCData(oldp+8945,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier),4);
    bufp->fullCData(oldp+8946,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir),4);
    bufp->fullCData(oldp+8947,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fcr),2);
    bufp->fullCData(oldp+8948,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr),5);
    bufp->fullCData(oldp+8949,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr),8);
    bufp->fullSData(oldp+8950,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl),16);
    bufp->fullCData(oldp+8951,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch),8);
    bufp->fullBit(oldp+8952,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__start_dlc));
    bufp->fullBit(oldp+8953,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_d));
    bufp->fullBit(oldp+8954,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msi_reset));
    bufp->fullSData(oldp+8955,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dlc),16);
    bufp->fullCData(oldp+8956,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__trigger_level),4);
    bufp->fullBit(oldp+8957,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rx_reset));
    bufp->fullBit(oldp+8958,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tx_reset));
    bufp->fullBit(oldp+8959,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+8960,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18) 
                                    >> 3U))));
    bufp->fullBit(oldp+8961,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18) 
                                    >> 2U))));
    bufp->fullBit(oldp+8962,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18) 
                                    >> 1U))));
    bufp->fullBit(oldp+8963,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_18))));
    bufp->fullBit(oldp+8964,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0));
    bufp->fullBit(oldp+8965,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_overrun));
    bufp->fullBit(oldp+8966,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2));
    bufp->fullBit(oldp+8967,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3));
    bufp->fullBit(oldp+8968,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4));
    bufp->fullBit(oldp+8969,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5));
    bufp->fullBit(oldp+8970,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6));
    bufp->fullBit(oldp+8971,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7));
    bufp->fullBit(oldp+8972,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0r));
    bufp->fullBit(oldp+8973,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1r));
    bufp->fullBit(oldp+8974,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2r));
    bufp->fullBit(oldp+8975,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3r));
    bufp->fullBit(oldp+8976,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4r));
    bufp->fullBit(oldp+8977,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5r));
    bufp->fullBit(oldp+8978,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6r));
    bufp->fullBit(oldp+8979,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7r));
    bufp->fullBit(oldp+8980,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int));
    bufp->fullBit(oldp+8981,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int));
    bufp->fullBit(oldp+8982,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int));
    bufp->fullBit(oldp+8983,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_push));
    bufp->fullBit(oldp+8984,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_pop));
    bufp->fullBit(oldp+8985,((0U != (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+8986,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
    bufp->fullCData(oldp+8987,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_count),5);
    bufp->fullCData(oldp+8988,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_count),5);
    bufp->fullCData(oldp+8989,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tstate),3);
    bufp->fullCData(oldp+8990,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rstate),4);
    bufp->fullSData(oldp+8991,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__counter_t),10);
    bufp->fullBit(oldp+8992,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt))))));
    bufp->fullCData(oldp+8993,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt),8);
    bufp->fullCData(oldp+8994,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__delayed_modem_signals),4);
    bufp->fullBit(oldp+8995,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0_d));
    bufp->fullBit(oldp+8996,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1_d));
    bufp->fullBit(oldp+8997,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2_d));
    bufp->fullBit(oldp+8998,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3_d));
    bufp->fullBit(oldp+8999,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4_d));
    bufp->fullBit(oldp+9000,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5_d));
    bufp->fullBit(oldp+9001,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6_d));
    bufp->fullBit(oldp+9002,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7_d));
    bufp->fullBit(oldp+9003,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d));
    bufp->fullBit(oldp+9004,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d));
    bufp->fullBit(oldp+9005,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d));
    bufp->fullBit(oldp+9006,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d));
    bufp->fullBit(oldp+9007,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d));
    bufp->fullBit(oldp+9008,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int))));
    bufp->fullBit(oldp+9009,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int))));
    bufp->fullBit(oldp+9010,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int))));
    bufp->fullBit(oldp+9011,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_pnd));
    bufp->fullBit(oldp+9012,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_pnd));
    bufp->fullBit(oldp+9013,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_pnd));
    bufp->fullBit(oldp+9014,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_pnd));
    bufp->fullBit(oldp+9015,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_pnd));
    bufp->fullBit(oldp+9016,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+9017,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+9018,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+9019,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+9020,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity));
    bufp->fullBit(oldp+9021,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+9022,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+9023,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+9024,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+9025,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+9026,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+9027,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+9028,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+9029,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+9030,((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+9031,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+9032,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+9033,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16) 
                                               - (IData)(1U)))),4);
    bufp->fullCData(oldp+9034,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+9035,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+9036,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+9037,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+9038,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+9039,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+9040,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+9041,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+9042,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+9043,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+9044,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+9045,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+9046,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+9047,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+9048,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+9049,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+9050,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+9051,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+9052,((0x0000000fU & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+9053,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+9054,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+9055,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+9056,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+9057,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+9058,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+9059,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+9060,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+9061,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+9062,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+9063,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0aU]),3);
    bufp->fullCData(oldp+9064,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0bU]),3);
    bufp->fullCData(oldp+9065,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0cU]),3);
    bufp->fullCData(oldp+9066,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0dU]),3);
    bufp->fullCData(oldp+9067,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0eU]),3);
    bufp->fullCData(oldp+9068,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0fU]),3);
    bufp->fullCData(oldp+9069,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in) 
                                               >> 3U))),8);
    bufp->fullCData(oldp+9070,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+9071,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+9072,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+9073,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+9074,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+9075,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+9076,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+9077,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+9078,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+9079,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+9080,((0x0000000fU & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+9081,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+9082,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+9083,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+9084,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+9085,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+9086,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+9087,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode),13);
    bufp->fullBit(oldp+9088,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+9089,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+9090,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+9091,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+9092,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode))),3);
    bufp->fullCData(oldp+9093,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state),4);
    bufp->fullCData(oldp+9094,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count),4);
    bufp->fullIData(oldp+9095,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
    bufp->fullSData(oldp+9096,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+9097,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+9098,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+9099,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+9100,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+9101,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+9102,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode),13);
    bufp->fullBit(oldp+9103,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+9104,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+9105,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+9106,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+9107,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode))),3);
    bufp->fullCData(oldp+9108,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state),4);
    bufp->fullCData(oldp+9109,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count),4);
    bufp->fullIData(oldp+9110,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    bufp->fullSData(oldp+9111,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+9112,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+9113,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+9114,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+9115,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+9116,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+9117,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode),13);
    bufp->fullBit(oldp+9118,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+9119,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+9120,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+9121,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+9122,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode))),3);
    bufp->fullCData(oldp+9123,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state),4);
    bufp->fullCData(oldp+9124,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count),4);
    bufp->fullIData(oldp+9125,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
    bufp->fullSData(oldp+9126,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+9127,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+9128,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+9129,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+9130,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+9131,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+9132,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode),13);
    bufp->fullBit(oldp+9133,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+9134,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+9135,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+9136,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+9137,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode))),3);
    bufp->fullCData(oldp+9138,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state),4);
    bufp->fullCData(oldp+9139,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count),4);
    bufp->fullIData(oldp+9140,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    bufp->fullBit(oldp+9141,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+9142,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9143,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9144,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9145,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+9146,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray),4);
    bufp->fullCData(oldp+9147,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+9148,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+9149,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray),4);
    bufp->fullBit(oldp+9150,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9151,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9152,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9153,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9154,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9155,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9156,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullCData(oldp+9157,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9158,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg));
    bufp->fullCData(oldp+9159,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9160,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9161,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9162,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9163,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9164,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9165,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9166,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9167,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9168,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9169,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9170,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9171,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9172,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9173,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9174,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9175,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9176,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9177,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9178,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg));
    bufp->fullCData(oldp+9179,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9180,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9181,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9182,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9183,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9184,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9185,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9186,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9187,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9188,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9189,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9190,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9191,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9192,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9193,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9194,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9195,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9196,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9197,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9198,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg));
    bufp->fullCData(oldp+9199,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9200,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9201,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9202,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9203,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9204,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9205,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9206,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9207,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9208,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9209,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9210,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9211,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9212,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9213,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9214,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9215,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9216,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9217,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9218,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg));
    bufp->fullCData(oldp+9219,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9220,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9221,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9222,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9223,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9224,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9225,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9226,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9227,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9228,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9229,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9230,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9231,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9232,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9233,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9234,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9235,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9236,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9237,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9238,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg));
    bufp->fullCData(oldp+9239,(((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9240,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9241,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9242,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9243,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9244,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9245,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9246,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9247,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9248,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9249,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9250,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9251,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9252,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9253,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9254,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9255,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9256,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullBit(oldp+9257,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready));
    bufp->fullBit(oldp+9258,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9259,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9260,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9261,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9262,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9263,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9264,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9265,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9266,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9267,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready));
    bufp->fullBit(oldp+9268,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9269,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9270,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9271,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9272,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9273,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9274,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9275,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9276,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9277,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9278,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9279,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9280,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9281,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray))));
    bufp->fullBit(oldp+9282,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9283,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9284,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9285,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9286,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9287,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9288,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9289,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9290,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9291,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9292,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9293,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9294,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9295,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9296,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9297,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+9298,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9299,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9301,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+9302,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray),4);
    bufp->fullCData(oldp+9303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+9304,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+9305,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray),4);
    bufp->fullBit(oldp+9306,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9307,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9308,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9309,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9311,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready));
    bufp->fullCData(oldp+9313,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9314,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg));
    bufp->fullCData(oldp+9315,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9316,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9317,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9318,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9319,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9320,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9321,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9328,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9330,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9331,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9332,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9334,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg));
    bufp->fullCData(oldp+9335,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9336,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9338,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9339,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9340,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9341,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9342,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9343,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9344,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9347,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9348,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9349,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9350,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9352,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9353,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9354,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg));
    bufp->fullCData(oldp+9355,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9356,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9357,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9358,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9362,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9366,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9372,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9373,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg));
    bufp->fullCData(oldp+9375,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9376,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9377,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9378,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9380,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9382,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9383,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9385,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9386,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9387,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9388,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9390,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+9394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg));
    bufp->fullCData(oldp+9395,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U)) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
    bufp->fullBit(oldp+9396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9399,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9400,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9402,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9403,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9404,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9405,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9409,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx),4);
    bufp->fullBit(oldp+9413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready));
    bufp->fullBit(oldp+9414,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9415,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9418,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready));
    bufp->fullBit(oldp+9424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9433,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9434,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9435,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9436,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9437,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray))));
    bufp->fullBit(oldp+9438,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9439,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9440,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9441,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9442,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9443,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9444,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9445,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9446,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9447,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9448,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9449,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray))));
    bufp->fullBit(oldp+9450,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9451,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9452,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                    >> 3U))));
    bufp->fullCData(oldp+9453,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state),3);
    bufp->fullCData(oldp+9454,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter),8);
    bufp->fullCData(oldp+9455,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+9456,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr),24);
    bufp->fullIData(oldp+9457,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data),32);
    bufp->fullBit(oldp+9458,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))));
    bufp->fullBit(oldp+9459,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
    bufp->fullIData(oldp+9460,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i),32);
    bufp->fullCData(oldp+9461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i),4);
    bufp->fullCData(oldp+9462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+9463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+9464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+9465,((0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                               >> 0x00000010U))),8);
    bufp->fullCData(oldp+9466,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                >> 0x00000018U)),8);
    bufp->fullIData(oldp+9467,(((0xffff0000U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i) 
                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+9468,((0x000000ffU & ((IData)(7U) 
                                               + VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
    bufp->fullIData(oldp+9469,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i)),24);
    bufp->fullBit(oldp+9470,(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso));
    bufp->fullCData(oldp+9471,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__state),2);
    bufp->fullSData(oldp+9472,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rev),16);
    bufp->fullIData(oldp+9473,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+9474,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__err__DOT__c_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+9475,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_e_valid));
    bufp->fullBit(oldp+9476,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid));
    bufp->fullBit(oldp+9477,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
    bufp->fullBit(oldp+9478,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid));
    bufp->fullBit(oldp+9479,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid));
    bufp->fullCData(oldp+9480,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullBit(oldp+9481,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en));
    bufp->fullCData(oldp+9482,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullCData(oldp+9483,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullBit(oldp+9484,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_8));
    bufp->fullBit(oldp+9485,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_valid));
    bufp->fullBit(oldp+9486,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_valid));
    bufp->fullBit(oldp+9487,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid));
    bufp->fullBit(oldp+9488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
    bufp->fullBit(oldp+9489,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid));
    bufp->fullBit(oldp+9490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid));
    bufp->fullCData(oldp+9491,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullBit(oldp+9492,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en));
    bufp->fullCData(oldp+9493,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullCData(oldp+9494,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullBit(oldp+9495,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_8));
    bufp->fullCData(oldp+9496,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout),4);
    bufp->fullBit(oldp+9497,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done));
    bufp->fullIData(oldp+9498,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullIData(oldp+9499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr),19);
    bufp->fullCData(oldp+9500,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_out),8);
    bufp->fullBit(oldp+9501,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9502,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9505,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9512,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9513,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9521,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9538,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9544,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9553,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9555,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9558,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9562,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9563,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9564,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9566,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9567,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9569,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9570,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9571,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9572,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9573,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9576,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9577,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9578,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9579,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9580,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9581,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9582,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9585,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9586,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9588,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9591,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9594,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9596,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9597,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9598,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9599,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9600,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9602,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9605,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9606,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9607,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9612,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9614,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9618,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9621,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9622,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9627,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9628,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9629,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9630,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9631,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9632,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9633,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9634,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9635,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9636,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9637,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9638,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9639,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9640,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9641,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9642,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9643,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9644,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9645,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9646,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9647,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9648,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9649,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9650,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9651,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9652,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9653,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9654,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9655,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9656,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9657,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9658,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9659,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9660,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9661,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9662,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9663,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9664,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9665,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9666,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9667,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9668,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9669,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9670,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9671,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9672,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9673,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9674,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9675,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9676,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9677,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9678,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9679,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9680,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9681,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9682,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9683,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9684,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9685,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9686,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9687,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9688,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9689,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9690,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9691,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9692,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9693,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9694,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9695,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9696,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9697,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9698,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9699,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9700,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9701,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9702,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9703,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9704,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9705,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9706,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9707,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9708,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9709,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9710,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9711,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9712,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9713,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9714,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9715,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9716,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9717,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9718,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9719,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9720,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9721,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9722,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9723,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9724,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9725,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9726,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9727,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9728,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9729,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9730,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9731,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9732,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9733,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9734,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9735,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9736,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9737,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9738,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9739,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9740,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9741,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9742,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9743,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9744,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9745,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9746,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9747,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9748,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9749,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9750,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9751,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9752,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9753,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+9754,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))));
    bufp->fullCData(oldp+9755,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9756,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9757,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9758,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9759,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray),4);
    bufp->fullBit(oldp+9760,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+9761,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+9762,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9763,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9764,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9765,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9766,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9767,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9768,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9769,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9770,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9771,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9772,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9773,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9774,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9775,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9776,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9777,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9778,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9779,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9780,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9781,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9782,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9783,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+9784,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9785,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+9786,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+9787,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+9788,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+9789,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+9790,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+9791,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullCData(oldp+9792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+9793,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullBit(oldp+9794,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__comm_active));
    bufp->fullCData(oldp+9795,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+9796,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+9797,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+9798,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss),8);
    bufp->fullCData(oldp+9799,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9800,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9801,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9802,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+9803,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray),4);
    bufp->fullBit(oldp+9804,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+9805,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+9806,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9807,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9808,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9809,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9810,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9811,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9812,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9813,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9814,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9815,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9816,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9817,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9818,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9819,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9820,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9821,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9822,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+9823,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9824,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9825,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9826,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9827,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+9828,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9829,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+9830,(((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+9831,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+9832,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+9833,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+9834,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+9837,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_out_awvalid));
    bufp->fullCData(oldp+9838,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))),4);
    bufp->fullIData(oldp+9839,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awaddr),32);
    bufp->fullCData(oldp+9840,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awlen),8);
    bufp->fullCData(oldp+9841,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awsize),3);
    bufp->fullBit(oldp+9842,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid));
    bufp->fullIData(oldp+9843,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data),32);
    bufp->fullCData(oldp+9844,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb),4);
    bufp->fullBit(oldp+9845,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last));
    bufp->fullBit(oldp+9846,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_out_arvalid));
    bufp->fullBit(oldp+9847,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+9848,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_valid));
    bufp->fullBit(oldp+9849,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+9850,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid));
    bufp->fullCData(oldp+9851,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode),3);
    bufp->fullCData(oldp+9852,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_param),3);
    bufp->fullCData(oldp+9853,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size),4);
    bufp->fullCData(oldp+9854,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source),7);
    bufp->fullIData(oldp+9855,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address),32);
    bufp->fullCData(oldp+9856,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb),4);
    bufp->fullIData(oldp+9857,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data),32);
    bufp->fullBit(oldp+9858,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__source_i_ready));
    bufp->fullBit(oldp+9859,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__source_i_valid));
    bufp->fullBit(oldp+9860,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__winner_1));
    bufp->fullBit(oldp+9861,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__atomics__DOT__muxState_1));
    bufp->fullBit(oldp+9862,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awready));
    bufp->fullBit(oldp+9863,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_wready));
    bufp->fullBit(oldp+9864,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last)))));
    bufp->fullBit(oldp+9865,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_bvalid));
    bufp->fullBit(oldp+9866,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id));
    bufp->fullCData(oldp+9867,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp),2);
    bufp->fullBit(oldp+9868,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_arready));
    bufp->fullBit(oldp+9869,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id));
    bufp->fullBit(oldp+9870,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+9871,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready));
    bufp->fullBit(oldp+9872,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid));
    bufp->fullCData(oldp+9873,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode),3);
    bufp->fullCData(oldp+9874,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_size),3);
    bufp->fullCData(oldp+9875,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source),4);
    bufp->fullBit(oldp+9876,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_denied));
    bufp->fullBit(oldp+9877,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_corrupt));
    bufp->fullBit(oldp+9878,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__w_out_ready));
    bufp->fullCData(oldp+9879,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp),2);
    bufp->fullCData(oldp+9880,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__d_last_beats1),3);
    bufp->fullBit(oldp+9881,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__b_allow));
    bufp->fullBit(oldp+9882,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode))));
    bufp->fullBit(oldp+9883,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source) 
                                    >> 3U))));
    bufp->fullBit(oldp+9884,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last));
    bufp->fullBit(oldp+9885,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+9886,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+9887,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+9888,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid));
    bufp->fullBit(oldp+9889,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+9890,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_awvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_3))));
    bufp->fullBit(oldp+9891,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid));
    bufp->fullBit(oldp+9892,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_arvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_0))));
    bufp->fullBit(oldp+9893,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9894,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_awvalid));
    bufp->fullCData(oldp+9895,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))),4);
    bufp->fullCData(oldp+9896,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size),4);
    bufp->fullCData(oldp+9897,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source),7);
    bufp->fullBit(oldp+9898,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid) 
                                    >> 4U))));
    bufp->fullBit(oldp+9899,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_arvalid));
    bufp->fullBit(oldp+9900,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi42tl__DOT__auto_in_bvalid))));
    bufp->fullBit(oldp+9901,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_awready));
    bufp->fullBit(oldp+9902,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last));
    bufp->fullBit(oldp+9903,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_arready));
    bufp->fullBit(oldp+9904,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+9905,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awvalid));
    bufp->fullCData(oldp+9906,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid),5);
    bufp->fullCData(oldp+9907,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size),4);
    bufp->fullCData(oldp+9908,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source),7);
    bufp->fullBit(oldp+9909,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__auto_in_arvalid));
    bufp->fullBit(oldp+9910,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid) 
                                    >> 4U))));
    bufp->fullCData(oldp+9911,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid),5);
    bufp->fullBit(oldp+9912,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & ((IData)(1U) << (0x0000000fU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))));
    bufp->fullBit(oldp+9913,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en));
    bufp->fullSData(oldp+9914,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data),12);
    bufp->fullBit(oldp+9915,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 1U))));
    bufp->fullBit(oldp+9916,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9917,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 3U))));
    bufp->fullBit(oldp+9918,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9919,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 4U))));
    bufp->fullBit(oldp+9920,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9921,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 5U))));
    bufp->fullBit(oldp+9922,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9923,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 6U))));
    bufp->fullBit(oldp+9924,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9925,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 2U))));
    bufp->fullBit(oldp+9926,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9927,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 3U))));
    bufp->fullBit(oldp+9928,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9929,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 4U))));
    bufp->fullBit(oldp+9930,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9931,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 5U))));
    bufp->fullBit(oldp+9932,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9933,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 6U))));
    bufp->fullBit(oldp+9934,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9935,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & ((IData)(1U) << (0x0000000fU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))))));
    bufp->fullBit(oldp+9936,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9937,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 1U))));
    bufp->fullBit(oldp+9938,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9939,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 2U))));
    bufp->fullBit(oldp+9940,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9941,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 7U))));
    bufp->fullBit(oldp+9942,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 8U))));
    bufp->fullBit(oldp+9943,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 8U))));
    bufp->fullBit(oldp+9944,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 9U))));
    bufp->fullBit(oldp+9945,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000aU))));
    bufp->fullBit(oldp+9946,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000bU))));
    bufp->fullBit(oldp+9947,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000cU))));
    bufp->fullBit(oldp+9948,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000dU))));
    bufp->fullBit(oldp+9949,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000eU))));
    bufp->fullBit(oldp+9950,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000fU))));
    bufp->fullBit(oldp+9951,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 9U))));
    bufp->fullBit(oldp+9952,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000aU))));
    bufp->fullBit(oldp+9953,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000bU))));
    bufp->fullBit(oldp+9954,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000cU))));
    bufp->fullBit(oldp+9955,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000dU))));
    bufp->fullBit(oldp+9956,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000eU))));
    bufp->fullBit(oldp+9957,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 0x0000000fU))));
    bufp->fullBit(oldp+9958,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
                                 >> 7U))));
    bufp->fullBit(oldp+9959,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & ((IData)(1U) << (0x0000000fU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))))));
    bufp->fullBit(oldp+9960,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en));
    bufp->fullSData(oldp+9961,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data),12);
    bufp->fullBit(oldp+9962,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 1U))));
    bufp->fullBit(oldp+9963,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9964,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 3U))));
    bufp->fullBit(oldp+9965,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9966,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 4U))));
    bufp->fullBit(oldp+9967,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9968,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 5U))));
    bufp->fullBit(oldp+9969,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9970,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 6U))));
    bufp->fullBit(oldp+9971,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9972,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 2U))));
    bufp->fullBit(oldp+9973,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9974,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 3U))));
    bufp->fullBit(oldp+9975,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9976,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 4U))));
    bufp->fullBit(oldp+9977,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9978,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 5U))));
    bufp->fullBit(oldp+9979,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9980,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 6U))));
    bufp->fullBit(oldp+9981,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9982,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & ((IData)(1U) << (0x0000000fU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))))));
    bufp->fullBit(oldp+9983,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9984,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 1U))));
    bufp->fullBit(oldp+9985,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9986,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 2U))));
    bufp->fullBit(oldp+9987,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+9988,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 7U))));
    bufp->fullBit(oldp+9989,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 8U))));
    bufp->fullBit(oldp+9990,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 8U))));
    bufp->fullBit(oldp+9991,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 9U))));
    bufp->fullBit(oldp+9992,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 0x0000000aU))));
    bufp->fullBit(oldp+9993,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 0x0000000bU))));
    bufp->fullBit(oldp+9994,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 0x0000000cU))));
    bufp->fullBit(oldp+9995,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 0x0000000dU))));
    bufp->fullBit(oldp+9996,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 0x0000000eU))));
    bufp->fullBit(oldp+9997,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 0x0000000fU))));
    bufp->fullBit(oldp+9998,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 9U))));
    bufp->fullBit(oldp+9999,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & (((IData)(1U) << (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                 >> 0x0000000aU))));
    bufp->fullBit(oldp+10000,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                               & (((IData)(1U) << (0x0000000fU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                  >> 0x0000000bU))));
    bufp->fullBit(oldp+10001,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                               & (((IData)(1U) << (0x0000000fU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+10002,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                               & (((IData)(1U) << (0x0000000fU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+10003,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                               & (((IData)(1U) << (0x0000000fU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                  >> 0x0000000eU))));
    bufp->fullBit(oldp+10004,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                               & (((IData)(1U) << (0x0000000fU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                  >> 0x0000000fU))));
    bufp->fullBit(oldp+10005,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                               & (((IData)(1U) << (0x0000000fU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
                                  >> 7U))));
    bufp->fullBit(oldp+10006,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_valid));
    bufp->fullBit(oldp+10007,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10008,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_valid));
    bufp->fullBit(oldp+10009,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10010,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid));
    bufp->fullBit(oldp+10011,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_ready));
    bufp->fullBit(oldp+10012,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq));
    bufp->fullBit(oldp+10013,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10014,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid));
    bufp->fullBit(oldp+10015,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_ready));
    bufp->fullBit(oldp+10016,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq));
    bufp->fullBit(oldp+10017,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10018,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready));
    bufp->fullBit(oldp+10019,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    bufp->fullBit(oldp+10020,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_ready));
    bufp->fullBit(oldp+10021,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready));
    bufp->fullBit(oldp+10022,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid));
    bufp->fullCData(oldp+10023,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode),3);
    bufp->fullCData(oldp+10024,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param),2);
    bufp->fullCData(oldp+10025,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size),3);
    bufp->fullCData(oldp+10026,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source),4);
    bufp->fullCData(oldp+10027,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink),5);
    bufp->fullBit(oldp+10028,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied));
    bufp->fullBit(oldp+10029,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt));
    bufp->fullBit(oldp+10030,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass));
    bufp->fullBit(oldp+10031,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready));
    bufp->fullBit(oldp+10032,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall));
    bufp->fullBit(oldp+10033,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
    bufp->fullBit(oldp+10034,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready));
    bufp->fullBit(oldp+10035,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready));
    bufp->fullBit(oldp+10036,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid));
    bufp->fullBit(oldp+10037,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready));
    bufp->fullBit(oldp+10038,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_valid));
    bufp->fullCData(oldp+10039,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode),3);
    bufp->fullCData(oldp+10040,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size),4);
    bufp->fullCData(oldp+10041,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source),4);
    bufp->fullBit(oldp+10042,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied));
    bufp->fullBit(oldp+10043,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt));
    bufp->fullBit(oldp+10044,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    bufp->fullBit(oldp+10045,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall));
    bufp->fullBit(oldp+10046,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode))));
    bufp->fullBit(oldp+10047,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready));
    bufp->fullBit(oldp+10048,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1));
    bufp->fullBit(oldp+10049,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode))));
    bufp->fullBit(oldp+10050,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_valid));
    bufp->fullBit(oldp+10051,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq));
    bufp->fullIData(oldp+10052,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_data),32);
    bufp->fullIData(oldp+10053,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__header),32);
    bufp->fullBit(oldp+10054,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_ready));
    bufp->fullBit(oldp+10055,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10056,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10057,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10058,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10059,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10060,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10061,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10062,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10063,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready));
    bufp->fullCData(oldp+10064,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullCData(oldp+10065,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10066,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+10067,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready));
    bufp->fullBit(oldp+10068,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en));
    bufp->fullCData(oldp+10069,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullCData(oldp+10070,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10071,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+10072,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__err__DOT__a_q__DOT__io_enq_valid));
    bufp->fullCData(oldp+10073,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))),3);
    bufp->fullSData(oldp+10074,((0x00001fffU & vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address)),13);
    bufp->fullBit(oldp+10075,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready));
    bufp->fullBit(oldp+10076,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__ferr__DOT__da_ready));
    bufp->fullBit(oldp+10077,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__ferr__DOT__a_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+10078,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullCData(oldp+10079,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_param),2);
    bufp->fullCData(oldp+10080,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_sink),6);
    bufp->fullBit(oldp+10081,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode))));
    bufp->fullBit(oldp+10082,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+10083,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
    bufp->fullBit(oldp+10084,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+10085,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_valid));
    bufp->fullBit(oldp+10086,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__idStall_4));
    bufp->fullBit(oldp+10087,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__idStall_2));
    bufp->fullBit(oldp+10088,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__idStall_0));
    bufp->fullCData(oldp+10089,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__r_beats1),3);
    bufp->fullBit(oldp+10090,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last));
    bufp->fullBit(oldp+10091,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__stall));
    bufp->fullBit(oldp+10092,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+10093,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc));
    bufp->fullBit(oldp+10094,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_1));
    bufp->fullBit(oldp+10095,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_2));
    bufp->fullBit(oldp+10096,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_3));
    bufp->fullBit(oldp+10097,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_4));
    bufp->fullBit(oldp+10098,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_5));
    bufp->fullBit(oldp+10099,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__inc_6));
    bufp->fullBit(oldp+10100,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10101,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10102,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10103,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000aU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10104,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000bU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10105,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000cU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10106,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000dU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10107,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000eU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10108,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000fU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10109,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000010U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10110,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000011U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10111,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000012U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10112,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000013U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10113,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000014U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10114,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000015U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10115,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000016U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22))));
    bufp->fullBit(oldp+10116,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+10117,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+10118,(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
    bufp->fullCData(oldp+10119,((0x000000ffU & (~ (0x000000ffU 
                                                   & (((IData)(0x000003ffU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))) 
                                                      >> 2U))))),8);
    bufp->fullCData(oldp+10120,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_size),3);
    bufp->fullCData(oldp+10121,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))),4);
    bufp->fullBit(oldp+10122,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                        >> 2U)))));
    bufp->fullBit(oldp+10123,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+10124,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    bufp->fullBit(oldp+10125,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen));
    bufp->fullBit(oldp+10126,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    bufp->fullBit(oldp+10127,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_ready));
    bufp->fullBit(oldp+10128,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    bufp->fullIData(oldp+10129,((0x7fffffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address)),31);
    bufp->fullBit(oldp+10130,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_4));
    bufp->fullBit(oldp+10131,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_2));
    bufp->fullBit(oldp+10132,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_0));
    bufp->fullCData(oldp+10133,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__r_beats1),6);
    bufp->fullBit(oldp+10134,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last));
    bufp->fullBit(oldp+10135,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__stall));
    bufp->fullBit(oldp+10136,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+10137,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc));
    bufp->fullBit(oldp+10138,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_1));
    bufp->fullBit(oldp+10139,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_2));
    bufp->fullBit(oldp+10140,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_3));
    bufp->fullBit(oldp+10141,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_4));
    bufp->fullBit(oldp+10142,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_5));
    bufp->fullBit(oldp+10143,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_6));
    bufp->fullBit(oldp+10144,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10145,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10146,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10147,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000aU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10148,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000bU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10149,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000cU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10150,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000dU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10151,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000eU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10152,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000fU) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10153,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000010U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10154,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000011U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10155,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000012U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10156,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000013U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10157,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000014U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10158,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000015U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10159,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000016U) & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10160,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+10161,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+10162,((0x000000ffU & (~ (0x000000ffU 
                                                   & (((IData)(0x000003ffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                      >> 2U))))),8);
    bufp->fullCData(oldp+10163,(((0U != (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                               >> 1U)))
                                  ? 2U : (7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)))),3);
    bufp->fullBit(oldp+10164,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+10165,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    bufp->fullBit(oldp+10166,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen));
    bufp->fullBit(oldp+10167,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__do_enq));
    bufp->fullBit(oldp+10168,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar__DOT__requestAIO_0_1));
    bufp->fullBit(oldp+10169,((0U == (vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                                      >> 0x0000001eU))));
    bufp->fullCData(oldp+10170,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__readys_valid),2);
    bufp->fullCData(oldp+10171,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__readys_unready),4);
    bufp->fullCData(oldp+10172,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__readys_readys),2);
    bufp->fullBit(oldp+10173,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__winner_0));
    bufp->fullBit(oldp+10174,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__winner_1));
    bufp->fullBit(oldp+10175,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_0));
    bufp->fullBit(oldp+10176,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__xbar_1__DOT__muxState_1));
    bufp->fullBit(oldp+10177,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__auto_out_awvalid));
    bufp->fullIData(oldp+10178,((~ (((~ (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1 
                                         >> 2U)) << 2U) 
                                    | (3U & ((~ ((IData)(3U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size))) 
                                             | (~ vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1)))))),32);
    bufp->fullCData(oldp+10179,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size),3);
    bufp->fullBit(oldp+10180,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len_1))))));
    bufp->fullBit(oldp+10181,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull.mem__DOT__axi4frag__DOT____VdfgRegularize_h9f077f37_0_0))));
    bufp->fullBit(oldp+10182,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid));
    bufp->fullIData(oldp+10183,((~ (((~ (vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr 
                                         >> 2U)) << 2U) 
                                    | (3U & ((~ ((IData)(3U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size))) 
                                             | (~ vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr)))))),32);
    bufp->fullCData(oldp+10184,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size),3);
    bufp->fullBit(oldp+10185,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len))))));
    bufp->fullBit(oldp+10186,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10187,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10188,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullCData(oldp+10189,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+10190,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+10191,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+10192,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+10193,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullBit(oldp+10194,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready));
    bufp->fullIData(oldp+10195,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
    bufp->fullCData(oldp+10196,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
    bufp->fullBit(oldp+10197,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+10198,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready));
    bufp->fullBit(oldp+10199,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    bufp->fullIData(oldp+10200,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
    bufp->fullCData(oldp+10201,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
    bufp->fullBit(oldp+10202,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+10203,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+10204,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
    bufp->fullBit(oldp+10205,(vlSymsp->TOP__ysyxSoCFull.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+10206,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10207,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10208,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10209,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10210,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10211,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10212,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10213,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10214,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10215,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10216,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10217,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10218,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10219,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10220,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10221,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10222,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10223,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10224,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10225,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10226,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10227,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10228,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10229,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10230,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullCData(oldp+10231,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid))),4);
    bufp->fullBit(oldp+10232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+10233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_valid));
    bufp->fullBit(oldp+10234,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+10235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_valid));
    bufp->fullCData(oldp+10236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode),3);
    bufp->fullCData(oldp+10237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_param),3);
    bufp->fullCData(oldp+10238,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size),3);
    bufp->fullCData(oldp+10239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source),7);
    bufp->fullIData(oldp+10240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address),32);
    bufp->fullCData(oldp+10241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask),4);
    bufp->fullIData(oldp+10242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_in_a_bits_data),32);
    bufp->fullBit(oldp+10243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__source_i_ready));
    bufp->fullBit(oldp+10244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__source_i_valid));
    bufp->fullBit(oldp+10245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__winner_1));
    bufp->fullBit(oldp+10246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__atomics__DOT__muxState_1));
    bufp->fullCData(oldp+10247,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid),5);
    bufp->fullCData(oldp+10248,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size),4);
    bufp->fullCData(oldp+10249,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source),7);
    bufp->fullBit(oldp+10250,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid) 
                                     >> 4U))));
    bufp->fullSData(oldp+10251,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size) 
                                  << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source) 
                                             << 1U) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4index_1__DOT__auto_in_awid) 
                                                >> 4U))))),12);
    bufp->fullBit(oldp+10252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready));
    bufp->fullBit(oldp+10253,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    bufp->fullCData(oldp+10254,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param),2);
    bufp->fullCData(oldp+10255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink),5);
    bufp->fullBit(oldp+10256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass));
    bufp->fullBit(oldp+10257,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready));
    bufp->fullBit(oldp+10258,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall));
    bufp->fullBit(oldp+10259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    bufp->fullBit(oldp+10260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall));
    bufp->fullIData(oldp+10261,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data),32);
    bufp->fullIData(oldp+10262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header),32);
    bufp->fullBit(oldp+10263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready));
    bufp->fullBit(oldp+10264,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10265,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10266,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10267,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10268,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10270,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10271,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en));
    bufp->fullBit(oldp+10272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready));
    bufp->fullCData(oldp+10273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented),4);
    bufp->fullCData(oldp+10274,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10275,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+10276,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    bufp->fullSData(oldp+10277,((0x00001fffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address)),13);
    bufp->fullBit(oldp+10278,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready));
    bufp->fullBit(oldp+10279,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
    bufp->fullBit(oldp+10280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_ready));
    bufp->fullBit(oldp+10281,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_a_valid));
    bufp->fullBit(oldp+10282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_4));
    bufp->fullBit(oldp+10283,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_2));
    bufp->fullBit(oldp+10284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__idStall_0));
    bufp->fullCData(oldp+10285,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__r_beats1),3);
    bufp->fullBit(oldp+10286,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last));
    bufp->fullBit(oldp+10287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__stall));
    bufp->fullBit(oldp+10288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+10289,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc));
    bufp->fullBit(oldp+10290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_1));
    bufp->fullBit(oldp+10291,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_2));
    bufp->fullBit(oldp+10292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_3));
    bufp->fullBit(oldp+10293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_4));
    bufp->fullBit(oldp+10294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_5));
    bufp->fullBit(oldp+10295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__inc_6));
    bufp->fullBit(oldp+10296,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10297,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10298,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10299,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000aU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10300,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000bU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10301,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000cU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10302,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000dU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10303,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000eU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10304,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x0000000fU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10305,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000010U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10306,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000011U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10307,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000012U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10308,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000013U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10309,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000014U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10310,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000015U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10311,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x00000016U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq))));
    bufp->fullBit(oldp+10312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+10313,(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
    bufp->fullCData(oldp+10314,((0x000000ffU & (~ (0x000000ffU 
                                                   & (((IData)(0x000003ffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                      >> 2U))))),8);
    bufp->fullCData(oldp+10315,(((0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                               >> 1U)))
                                  ? 2U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))),3);
    bufp->fullCData(oldp+10316,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size),4);
    bufp->fullBit(oldp+10317,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                        >> 2U)))));
    bufp->fullBit(oldp+10318,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
    bufp->fullBit(oldp+10319,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10320,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10321,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10328,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10330,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10331,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10332,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10334,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10335,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10336,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10338,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullBit(oldp+10339,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready));
    bufp->fullBit(oldp+10340,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+10341,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10342,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+10343,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en));
    bufp->fullIData(oldp+10344,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i),32);
    bufp->fullBit(oldp+10345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel));
    bufp->fullBit(oldp+10346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable));
    bufp->fullIData(oldp+10347,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),30);
    bufp->fullIData(oldp+10348,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),29);
    bufp->fullBit(oldp+10349,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    bufp->fullBit(oldp+10350,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel));
    bufp->fullBit(oldp+10351,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable));
    bufp->fullBit(oldp+10352,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))));
    bufp->fullBit(oldp+10353,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__in_psel));
    bufp->fullBit(oldp+10354,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i));
    bufp->fullBit(oldp+10355,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+10356,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+10357,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+10358,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+10359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+10360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+10361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+10362,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
    bufp->fullCData(oldp+10363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__next_state),2);
    bufp->fullBit(oldp+10364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+10365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+10366,((0x00fffffcU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
    bufp->fullIData(oldp+10367,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
    bufp->fullBit(oldp+10368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i));
    bufp->fullBit(oldp+10369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+10370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i),4);
    bufp->fullBit(oldp+10371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+10372,((0x000001ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                >> 2U))),13);
    bufp->fullSData(oldp+10373,((0x00001fffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                >> 0x0000000eU))),13);
    bufp->fullCData(oldp+10374,((7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                       >> 0x0000000bU))),3);
    bufp->fullIData(oldp+10375,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
    bufp->fullBit(oldp+10376,((0x30000000U <= (0x3fffffffU 
                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    bufp->fullIData(oldp+10377,(VL_MODDIV_III(32, VL_MODDIV_III(32, 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                               - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
    bufp->fullIData(oldp+10378,(VL_DIV_III(32, VL_MODDIV_III(32, 
                                                             VL_SHIFTR_III(32,32,32, 
                                                                           ((0x3fffffffU 
                                                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                            - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
    bufp->fullSData(oldp+10379,((0x000003ffU & VL_DIV_III(32, 
                                                          VL_MODDIV_III(32, 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
    bufp->fullSData(oldp+10380,((0x000003ffU & VL_MODDIV_III(32, 
                                                             VL_MODDIV_III(32, 
                                                                           VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
    bufp->fullIData(oldp+10381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr),19);
    bufp->fullCData(oldp+10382,((7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),3);
    bufp->fullCData(oldp+10383,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w),8);
    bufp->fullCData(oldp+10384,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_in),8);
    bufp->fullCData(oldp+10385,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10386,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullCData(oldp+10387,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10388,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullCData(oldp+10389,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10390,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullBit(oldp+10391,(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n));
    bufp->fullBit(oldp+10392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready));
    bufp->fullBit(oldp+10393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr));
    bufp->fullBit(oldp+10394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bvalid));
    bufp->fullCData(oldp+10395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp),2);
    bufp->fullBit(oldp+10396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_rvalid));
    bufp->fullCData(oldp+10397,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr) 
                                 << 1U)),2);
    bufp->fullBit(oldp+10398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+10399,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullCData(oldp+10400,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullCData(oldp+10402,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10403,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullCData(oldp+10404,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx),4);
    bufp->fullBit(oldp+10405,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    bufp->fullCData(oldp+10406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
    bufp->fullCData(oldp+10407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
    bufp->fullBit(oldp+10408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
    bufp->fullBit(oldp+10409,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr));
    bufp->fullCData(oldp+10410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullCData(oldp+10411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+10412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+10413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+10414,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__next_state),2);
    bufp->fullBit(oldp+10415,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i));
    bufp->fullIData(oldp+10416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata),32);
    bufp->fullBit(oldp+10417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pready));
    bufp->fullIData(oldp+10418,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata),32);
    bufp->fullBit(oldp+10419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out));
    bufp->fullCData(oldp+10420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr),5);
    bufp->fullBit(oldp+10421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_psel));
    bufp->fullBit(oldp+10422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_penable));
    bufp->fullCData(oldp+10423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot),3);
    bufp->fullBit(oldp+10424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite));
    bufp->fullIData(oldp+10425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata),32);
    bufp->fullCData(oldp+10426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb),4);
    bufp->fullCData(oldp+10427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate),4);
    bufp->fullCData(oldp+10428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state),4);
    bufp->fullBit(oldp+10429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer));
    bufp->fullIData(oldp+10430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata),32);
    bufp->fullIData(oldp+10431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata),32);
    bufp->fullBit(oldp+10432,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                               & (0x14U == (0x1cU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
    bufp->fullBit(oldp+10433,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                               & (0x10U == (0x1cU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
    bufp->fullCData(oldp+10434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+10435,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                               & (0x18U == (0x1cU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
    bufp->fullCData(oldp+10436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch),4);
    bufp->fullBit(oldp+10437,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__now_sel));
    bufp->fullBit(oldp+10438,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0));
    bufp->fullBit(oldp+10439,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1));
    bufp->fullBit(oldp+10440,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+10441,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state),4);
    bufp->fullBit(oldp+10442,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+10443,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state),4);
    bufp->fullBit(oldp+10444,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+10445,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state),4);
    bufp->fullBit(oldp+10446,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+10447,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state),4);
    bufp->fullIData(oldp+10448,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i),32);
    bufp->fullSData(oldp+10449,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
                                 >> 0x00000010U)),16);
    bufp->fullSData(oldp+10450,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i)),16);
    bufp->fullBit(oldp+10451,(vlSelfRef.clock));
    bufp->fullBit(oldp+10452,(vlSelfRef.reset));
    bufp->fullSData(oldp+10453,(vlSelfRef.externalPins_gpio_out),16);
    bufp->fullSData(oldp+10454,(vlSelfRef.externalPins_gpio_in),16);
    bufp->fullCData(oldp+10455,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+10456,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+10457,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+10458,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+10459,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+10460,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+10461,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+10462,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+10463,(vlSelfRef.externalPins_ps2_clk));
    bufp->fullBit(oldp+10464,(vlSelfRef.externalPins_ps2_data));
    bufp->fullCData(oldp+10465,(vlSelfRef.externalPins_vga_r),8);
    bufp->fullCData(oldp+10466,(vlSelfRef.externalPins_vga_g),8);
    bufp->fullCData(oldp+10467,(vlSelfRef.externalPins_vga_b),8);
    bufp->fullBit(oldp+10468,(vlSelfRef.externalPins_vga_hsync));
    bufp->fullBit(oldp+10469,(vlSelfRef.externalPins_vga_vsync));
    bufp->fullBit(oldp+10470,(vlSelfRef.externalPins_vga_valid));
    bufp->fullBit(oldp+10471,(vlSelfRef.externalPins_uart_rx));
    bufp->fullBit(oldp+10472,(vlSelfRef.externalPins_uart_tx));
    bufp->fullCData(oldp+10473,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__cnt),8);
    bufp->fullCData(oldp+10474,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_cnt),8);
    bufp->fullCData(oldp+10475,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_state),2);
    bufp->fullBit(oldp+10476,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                     | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                          & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                          ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                          : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                        >> 0x0000001fU)))));
    bufp->fullIData(oldp+10477,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+10478,(((0x00fffffeU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr 
                                                 << 1U)) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi))),32);
    bufp->fullBit(oldp+10479,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0));
    bufp->fullBit(oldp+10480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0));
    bufp->fullBit(oldp+10481,(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->fullBit(oldp+10482,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->fullBit(oldp+10483,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->fullBit(oldp+10484,(vlSymsp->TOP__ysyxSoCFull.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset));
    bufp->fullBit(oldp+10485,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid)))))));
    bufp->fullBit(oldp+10486,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)
                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    bufp->fullCData(oldp+10487,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din),4);
    bufp->fullCData(oldp+10488,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)
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
    bufp->fullBit(oldp+10489,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->fullBit(oldp+10490,(((~ (IData)(vlSelfRef.clock)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q))));
    bufp->fullCData(oldp+10491,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__reg_ba),3);
    bufp->fullIData(oldp+10492,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->fullCData(oldp+10493,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))
                                  ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                           & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                           ? 1U : (
                                                   ((0U 
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
    bufp->fullBit(oldp+10494,(((~ (IData)(vlSelfRef.clock)) 
                               & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))));
    bufp->fullIData(oldp+10495,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->fullCData(oldp+10496,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))
                                  ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                           & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                           ? 1U : (
                                                   ((0U 
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
    bufp->fullIData(oldp+10497,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->fullCData(oldp+10498,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))
                                  ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                           & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                           ? 1U : (
                                                   ((0U 
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
    bufp->fullBit(oldp+10499,(((~ (IData)(vlSelfRef.clock)) 
                               & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))));
    bufp->fullIData(oldp+10500,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->fullCData(oldp+10501,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))
                                  ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                           & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                           ? 1U : (
                                                   ((0U 
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
    bufp->fullBit(oldp+10502,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                  | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                       ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                       : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                     >> 0x0000001fU)))));
    bufp->fullBit(oldp+10503,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                    : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->fullIData(oldp+10504,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                                  ? ((((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                        ? ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                            ? ((1U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                            : ((1U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                : 0U))
                                        : ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                            ? ((1U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                : (0x000000c0U 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                            : ((1U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (0x00000080U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                : (
                                                   (0x00000080U 
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
                                  : 0U)),32);
    bufp->fullIData(oldp+10505,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                  : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+10506,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg) 
                                  << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp))),6);
    bufp->fullQData(oldp+10507,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg)) 
                                  << 0x00000023U) | 
                                 (((QData)((IData)(
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                                     : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                   << 3U) | (QData)((IData)(
                                                            (1U 
                                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp) 
                                                                << 1U))))))),39);
    bufp->fullBit(oldp+10509,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+10510,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
    bufp->fullBit(oldp+10511,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1) 
                                      >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+10512,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__R0_data))
                                 : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__R0_data))) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last))));
    bufp->fullBit(oldp+10513,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)
                                      ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__R0_data))
                                      : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__R0_data))))));
    bufp->fullBit(oldp+10514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->fullBit(oldp+10515,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->fullBit(oldp+10516,(vlSymsp->TOP__ysyxSoCFull__asic.chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset));
    bufp->fullBit(oldp+10517,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid)))))));
    bufp->fullCData(oldp+10518,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
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
    bufp->fullCData(oldp+10519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__cnt),4);
    bufp->fullSData(oldp+10520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg),9);
    bufp->fullBit(oldp+10521,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                   : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    bufp->fullBit(oldp+10522,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                                ? (0x16U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd))));
    bufp->fullBit(oldp+10523,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                                      ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)))));
    bufp->fullIData(oldp+10524,(((0U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                               >> 2U)))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                  : ((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                   >> 2U)))
                                      ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                      : ((2U == (7U 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                    >> 2U)))
                                          ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                          : ((3U == 
                                              (7U & 
                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                >> 2U)))
                                              ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                      >> 2U)))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                  : 
                                                 ((5U 
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
    bufp->fullBit(oldp+10525,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                               & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)))));
    bufp->fullBit(oldp+10526,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset));
    bufp->fullIData(oldp+10527,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.PC),32);
    bufp->fullIData(oldp+10528,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.dnpc),32);
    bufp->fullIData(oldp+10529,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.snpc),32);
    bufp->fullIData(oldp+10530,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr),32);
    bufp->fullIData(oldp+10531,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata),32);
    bufp->fullCData(oldp+10532,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask),4);
    bufp->fullBit(oldp+10533,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen));
    bufp->fullIData(oldp+10534,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC),32);
    bufp->fullIData(oldp+10535,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC),32);
    bufp->fullBit(oldp+10536,((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.state))));
    bufp->fullIData(oldp+10537,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC),32);
    bufp->fullBit(oldp+10538,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_we_i));
    bufp->fullBit(oldp+10539,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_re_i));
    bufp->fullCData(oldp+10540,((0x000000ffU & ((4U 
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
                                                   [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))))),8);
    bufp->fullCData(oldp+10541,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.state),2);
    bufp->fullBit(oldp+10542,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IROM_arready))));
    bufp->fullBit(oldp+10543,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.state));
    bufp->fullBit(oldp+10544,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_reqEN));
    bufp->fullCData(oldp+10545,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state),3);
    bufp->fullIData(oldp+10546,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[0]),32);
    bufp->fullIData(oldp+10547,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[1]),32);
    bufp->fullIData(oldp+10548,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[2]),32);
    bufp->fullIData(oldp+10549,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[3]),32);
    bufp->fullIData(oldp+10550,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[4]),32);
    bufp->fullIData(oldp+10551,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[5]),32);
    bufp->fullIData(oldp+10552,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[6]),32);
    bufp->fullIData(oldp+10553,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[7]),32);
    bufp->fullIData(oldp+10554,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[8]),32);
    bufp->fullIData(oldp+10555,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[9]),32);
    bufp->fullIData(oldp+10556,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[10]),32);
    bufp->fullIData(oldp+10557,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[11]),32);
    bufp->fullIData(oldp+10558,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[12]),32);
    bufp->fullIData(oldp+10559,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[13]),32);
    bufp->fullIData(oldp+10560,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[14]),32);
    bufp->fullIData(oldp+10561,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[15]),32);
    bufp->fullIData(oldp+10562,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[16]),32);
    bufp->fullIData(oldp+10563,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[17]),32);
    bufp->fullIData(oldp+10564,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[18]),32);
    bufp->fullIData(oldp+10565,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[19]),32);
    bufp->fullIData(oldp+10566,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[20]),32);
    bufp->fullIData(oldp+10567,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[21]),32);
    bufp->fullIData(oldp+10568,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[22]),32);
    bufp->fullIData(oldp+10569,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[23]),32);
    bufp->fullIData(oldp+10570,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[24]),32);
    bufp->fullIData(oldp+10571,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[25]),32);
    bufp->fullIData(oldp+10572,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[26]),32);
    bufp->fullIData(oldp+10573,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[27]),32);
    bufp->fullIData(oldp+10574,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[28]),32);
    bufp->fullIData(oldp+10575,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[29]),32);
    bufp->fullIData(oldp+10576,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[30]),32);
    bufp->fullIData(oldp+10577,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[31]),32);
    bufp->fullIData(oldp+10578,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLE),32);
    bufp->fullIData(oldp+10579,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLEH),32);
    bufp->fullIData(oldp+10580,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCAUSE),32);
    bufp->fullIData(oldp+10581,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MSTATUS),32);
    bufp->fullIData(oldp+10582,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MVENDORID),32);
    bufp->fullIData(oldp+10583,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MARCHID),32);
    bufp->fullCData(oldp+10584,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr),8);
    bufp->fullBit(oldp+10585,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr) 
                                     >> 7U))));
    bufp->fullCData(oldp+10586,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr),8);
}

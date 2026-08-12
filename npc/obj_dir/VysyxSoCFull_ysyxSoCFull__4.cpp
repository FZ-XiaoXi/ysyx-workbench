// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_2 
        = (((((((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                 ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_0
                 : 0U) | ((2U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                           ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_1
                           : 0U)) | ((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                                      ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_2
                                      : 0U)) | ((8U 
                                                 & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                                                 ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_3
                                                 : 0U)) 
            | ((0x00000010U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_4
                : 0U)) | ((0x00000020U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                           ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_5
                           : 0U));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__send));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__grant;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_5 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_1 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_2 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_0 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_4 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_3 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 
        = (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)));
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last 
            = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1))) 
               || (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready)
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats = 1U;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_1)));
    if (((2U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
        }
    }
    if (((2U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_2)));
    if (((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
        }
    }
    if (((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow)));
    if (((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
        }
    }
    if (((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_4)));
    if (((0x00000010U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
        }
    }
    if (((0x00000010U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_3)));
    if (((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
        }
    }
    if (((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 = 0U;
    } else if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready) {
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) 
               | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4));
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
            = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
    } else {
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
            = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
               | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
            = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)) 
               | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data 
        = (5U | (((((((((0U != (0x0000001fU & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                               >> 0x0000000fU))) 
                        << 3U) | ((0U != (0x000000ffU 
                                          & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_54) 
                                             >> 7U))) 
                                  << 2U)) | (((0U != 
                                               (0x0000000fU 
                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_56) 
                                                   >> 3U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_58) 
                                                    >> 1U))))) 
                     << 0x0000000cU) | (((((IData)(
                                                   (0U 
                                                    != 
                                                    (5U 
                                                     & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_58)))) 
                                           << 3U) | 
                                          ((0U != (0x0000001fU 
                                                   & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                                      >> 0x0000000fU))) 
                                           << 2U)) 
                                         | (((0U != 
                                              (0x000000ffU 
                                               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_41) 
                                                  >> 7U))) 
                                             << 1U) 
                                            | (0U != 
                                               (0x0000000fU 
                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_43) 
                                                   >> 3U))))) 
                                        << 8U)) | (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_45) 
                                                            >> 1U))) 
                                                       << 3U) 
                                                      | ((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (5U 
                                                                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_45)))) 
                                                         << 2U)) 
                                                     | (((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                                              >> 0x0000000fU))) 
                                                         << 1U) 
                                                        | (0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_28) 
                                                               >> 7U))))) 
                                                    << 4U) 
                                                   | ((((0U 
                                                         != 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_30) 
                                                             >> 3U))) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_32) 
                                                               >> 1U))) 
                                                          << 2U)) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (5U 
                                                                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_32)))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                                                >> 0x0000000fU))))))) 
                  << 0x00000010U) | (((((((0U != (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_15) 
                                                     >> 7U))) 
                                          << 3U) | 
                                         ((0U != (0x0000000fU 
                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                                                     >> 3U))) 
                                          << 2U)) | 
                                        (((0U != (3U 
                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_19) 
                                                     >> 1U))) 
                                          << 1U) | (IData)(
                                                           (0U 
                                                            != 
                                                            (5U 
                                                             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_19)))))) 
                                       << 0x0000000cU) 
                                      | (((((0U != 
                                             (0x0000001fU 
                                              & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH 
                                                 >> 0x0000000fU))) 
                                            << 3U) 
                                           | ((0U != 
                                               (0x000000ffU 
                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                                                   >> 7U))) 
                                              << 2U)) 
                                          | (((0U != 
                                               (0x0000000fU 
                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_4) 
                                                   >> 3U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                                                    >> 1U))))) 
                                         << 8U)) | 
                                     ((IData)((0U != 
                                               (5U 
                                                & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6)))) 
                                      << 7U))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0;
        if ((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0;
        if ((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0;
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
            = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0;
        if ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
        }
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0;
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data = 1U;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) 
               && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_data = 1U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_beats = 3U;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data = 2U;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) 
               && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_data = 2U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats = 3U;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_valid));
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
    }
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = (4U | ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                           ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                           : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                          [0U]) << 0x00000010U));
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last 
            = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1))) 
               || (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data 
            = (4U | ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                       & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                       ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                       : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                      [0U]) << 0x00000010U));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats = 1U;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowReturn 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0) 
                     | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0) 
                        | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                           | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                              | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0))))) 
                    & (0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__xmit)))));
    __PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_valid));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 = 0U;
    } else {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) 
                   | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 
                = ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
            vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
                = (((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
        }
    }
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) 
             | (IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_data;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_last;
            vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1))
          : ((IData)(__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_data;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_last;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_beats;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats 
        = (0x0000001fU & ((IData)(3U) + (((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                           ? 0U : (
                                                   (0x0000001eU 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size)) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size)))) 
                                         + ((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                             ? (((6U 
                                                  == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size)) 
                                                 << 1U) 
                                                | (3U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size) 
                                                       >> 1U))))
                                             : 0U))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0;
    __Vtemp_2[0U] = ((((0x2fU >= (0x0000003fU & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source))))
                        ? (7U & (IData)((0x0000fac688fac688ULL 
                                         >> (0x0000003fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source))))))
                        : 0U) << 0x00000010U) | ((0x00006000U 
                                                  & ((0xaaaa5555U 
                                                      >> 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source), 1U))) 
                                                     << 0x0000000dU)) 
                                                 | ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size) 
                                                      << 9U) 
                                                     | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                                                          ? 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                                             >> 0x0000000cU))
                                                          : 0U) 
                                                        << 6U)) 
                                                    | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode) 
                                                       << 3U))));
    __Vtemp_2[1U] = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                      ? ((vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                          << 0x0000001bU) | (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                             >> 5U))
                      : vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address);
    __Vtemp_2[2U] = (IData)(((QData)((IData)(((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                               ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                               : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data))) 
                             << 0x00000020U));
    __Vtemp_2[3U] = (IData)((((QData)((IData)(((1U 
                                                == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                                ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data))) 
                              << 0x00000020U) >> 0x00000020U));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U)))
             ? 0U : (__Vtemp_2[(((IData)(0x0000001fU) 
                                 + (0x0000007fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U))) 
                                >> 5U)] << ((IData)(0x00000020U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))) 
           | (__Vtemp_2[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U) 
                               >> 5U))] >> (0x0000001fU 
                                            & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0;
    if (vlSelfRef.__VdlySet__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory[vlSelfRef.__VdlyDim0__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data 
        = (0x0000ffffU & ((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))
                           ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                           : (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_sink_r)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr 
        = ((((0U != (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___GEN 
                     >> 0x00000010U)) << 4U) | (((0U 
                                                  != 
                                                  (0x000000ffU 
                                                   & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                                                      >> 7U))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3) 
                                                        >> 3U))) 
                                                   << 2U))) 
           | (((0U != (3U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__f_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowReturn) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_last 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_beats 
        = (0x0000001fU & ((IData)(1U) + (((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                                           ? ((0x0000001eU 
                                               & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size))) 
                                                  >> 2U)) 
                                              | (3U 
                                                 > (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)))
                                           : 0U) + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
        = vlSelfRef.__Vdly__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_1 
        = (0x001fffffU & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__tx_b 
                          - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_2 
        = (0x001fffffU & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__tx_c 
                          - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta 
        = (0x001fffffU & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__tx_a 
                          - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_4 
        = (0x001fffffU & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__tx_e 
                          - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_sink 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)
                : (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__requests 
        = ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__f_valid) 
             << 5U) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                        << 4U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                  << 3U))) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_3 
        = (0x001fffffU & (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__tx_d 
                          - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_1)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_1)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_2)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_2)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready 
        = ((~ ((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode)) 
               & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)) 
                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_last) 
                     | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                        >> 3U))))) & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_4)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_4)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_3)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_3)));
    vlSelfRef.fpga__DOT__chiplink__DOT__sinkD__DOT____VdfgRegularize_hb06c3790_0_0 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_ready))) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_4));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_19 
        = (((0x000003e0U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                            << 5U)) | ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__f_valid) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                                      << 2U))) 
                                       | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)))) 
           | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
               << 4U) | ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__f_valid) 
                           << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                                     << 2U)) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_3));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sinkD__DOT____VdfgRegularize_hb06c3790_0_0) 
           & (6U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_20 
        = (0x000001ffU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                          | ((0x00000100U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                             << 3U)) 
                             | (0x000000ffU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                               >> 2U)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready 
        = (((0x00000400U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                            << 5U)) | ((0x00000200U 
                                        & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_19)) 
                                       | ((0x00000180U 
                                           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_20)) 
                                          | (0x0000007fU 
                                             & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                                | ((0x00000040U 
                                                    & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                                       << 1U)) 
                                                   | ((0x00000020U 
                                                       & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                                          >> 4U)) 
                                                      | (0x0000001fU 
                                                         & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                                            >> 4U))))))))) 
           | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask) 
              << 6U));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (0x0000003fU & (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready) 
                           >> 6U) & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__winner 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
    if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__first) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__send 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x0000003fU & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__winner;
    } else {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__send 
            = (0U != ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__state) 
                      & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__requests)));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x0000003fU & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__state));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__state;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowReturn) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
              >> 5U));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__flash__DOT__counter = vlSelfRef.__PVT__flash__DOT__counter;
    vlSelfRef.__Vdly__flash__DOT__cmd = vlSelfRef.__PVT__flash__DOT__cmd;
    vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
    vlSelfRef.__Vdly__flash__DOT__data = vlSelfRef.__PVT__flash__DOT__data;
    vlSelfRef.__Vdly__flash__DOT__addr = vlSelfRef.__PVT__flash__DOT__addr;
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__counter = 0U;
        vlSelfRef.__Vdly__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__counter = (0x000000ffU 
                                                 & ((7U 
                                                     > (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                     : 0U));
        vlSelfRef.__Vdly__flash__DOT__cmd = ((0x000000feU 
                                              & ((IData)(vlSelfRef.__PVT__flash__DOT__cmd) 
                                                 << 1U)) 
                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
    } else {
        vlSelfRef.__Vdly__flash__DOT__counter = (0x000000ffU 
                                                 & ((1U 
                                                     == (IData)(vlSelfRef.__PVT__flash__DOT__state))
                                                     ? 
                                                    ((0x17U 
                                                      > (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                      : 0U)
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__flash__DOT__counter))));
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__state = ((7U 
                                                == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                ? 1U
                                                : (IData)(vlSelfRef.__PVT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__state = ((3U 
                                                != (IData)(vlSelfRef.__PVT__flash__DOT__cmd))
                                                ? 3U
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                    ? 2U
                                                    : (IData)(vlSelfRef.__PVT__flash__DOT__state)));
    } else if (VL_LIKELY(((2U == (IData)(vlSelfRef.__PVT__flash__DOT__state))))) {
        vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
    } else {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",0,
                      8,vlSelfRef.__PVT__flash__DOT__cmd);
        VL_FFLUSH_I(0x80000002U);
        vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/flash/flash.v", 44, "", false);
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__data = 0U;
        vlSelfRef.__Vdly__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
            vlSelfRef.__Vdly__flash__DOT__data = ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                    ? vlSelfRef.__PVT__flash__DOT__data_bswap
                                                    : vlSelfRef.__PVT__flash__DOT__data) 
                                                  << 1U);
        }
        if (((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelfRef.__PVT__flash__DOT__counter)))) {
            vlSelfRef.__Vdly__flash__DOT__addr = ((0x00fffffeU 
                                                   & (vlSelfRef.__PVT__flash__DOT__addr 
                                                      << 1U)) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        }
    }
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    // Body
    vlSelfRef.__Vdly__bitrev__DOT__rev = vlSelfRef.__PVT__bitrev__DOT__rev;
    if (((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelfRef.__PVT__flash__DOT__counter)))) {
        if (VL_LIKELY(((3U == (IData)(vlSelfRef.__PVT__flash__DOT__cmd))))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0x00fffffeU 
                                                                             & (vlSelfRef.__PVT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi)), __Vtask_flash_read__0__data);
            vlSelfRef.__PVT__flash__DOT__rdata = __Vtask_flash_read__0__data;
        } else {
            VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",0,
                          8,vlSelfRef.__PVT__flash__DOT__cmd);
            VL_FFLUSH_I(0x80000002U);
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/flash/flash.v", 98, "", false);
        }
    }
    if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__bitrev__DOT__rev = 0U;
        vlSelfRef.__PVT__bitrev__DOT__cnt = 0U;
    } else {
        if (((1U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state)) 
             | ((1U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state)) 
                & (2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state))))) {
            vlSelfRef.__Vdly__bitrev__DOT__rev = ((0x0000fffeU 
                                                   & ((IData)(vlSelfRef.__PVT__bitrev__DOT__rev) 
                                                      << 1U)) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        } else if (((2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state)) 
                    | ((2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state)) 
                       & (0U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state))))) {
            vlSelfRef.__Vdly__bitrev__DOT__rev = (0x00007fffU 
                                                  & ((IData)(vlSelfRef.__PVT__bitrev__DOT__rev) 
                                                     >> 1U));
        }
        vlSelfRef.__PVT__bitrev__DOT__cnt = vlSelfRef.__PVT__bitrev__DOT__next_cnt;
    }
}

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull(IData/*31:0*/ waddr, IData/*31:0*/ count, IData/*31:0*/ wdata);
void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(IData/*31:0*/ raddr, IData/*31:0*/ count, IData/*31:0*/ &rdata);

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__psram__DOT__buf_wdata;
    __Vdly__psram__DOT__buf_wdata = 0;
    CData/*0:0*/ __Vdly__psram__DOT__is_QPI;
    __Vdly__psram__DOT__is_QPI = 0;
    // Body
    __Vdly__psram__DOT__buf_wdata = vlSelfRef.__PVT__psram__DOT__buf_wdata;
    __Vdly__psram__DOT__is_QPI = vlSelfRef.__PVT__psram__DOT__is_QPI;
    if (vlSelfRef.__PVT___asic_psram_ce_n) {
        __Vdly__psram__DOT__buf_wdata = 0U;
    } else if (((5U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)) 
                & (~ (IData)(vlSelfRef.__PVT___asic_psram_ce_n)))) {
        __Vdly__psram__DOT__buf_wdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                         << 4U);
    } else if (((4U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)) 
                & (~ (IData)(vlSelfRef.__PVT___asic_psram_ce_n)))) {
        __Vdly__psram__DOT__buf_wdata = vlSelfRef.__PVT__psram__DOT__buf_wdata;
        VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull(vlSelfRef.__PVT__psram__DOT__buf_addr, (IData)(vlSelfRef.__PVT__psram__DOT__counter), 
                                                                                ((0x000000f0U 
                                                                                & (IData)(vlSelfRef.__PVT__psram__DOT__buf_wdata)) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)));
    } else {
        __Vdly__psram__DOT__buf_wdata = 0U;
    }
    __Vdly__psram__DOT__is_QPI = ((((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                    & (0U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state))) 
                                   & (IData)(vlSelfRef.__PVT___asic_psram_ce_n)) 
                                  || (IData)(vlSelfRef.__PVT__psram__DOT__is_QPI));
    if (vlSelfRef.__PVT___asic_psram_ce_n) {
        vlSelfRef.__PVT__psram__DOT__buf_addr_in0 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_addr_in1 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_addr_in2 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_addr_in3 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_command = 0U;
        vlSelfRef.__PVT__psram__DOT__counter = 0U;
        vlSelfRef.__PVT__psram__DOT__state = 0U;
    } else {
        if (((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
             & (2U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))) {
            vlSelfRef.__PVT__psram__DOT__buf_addr_in0 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                   << 1U)) | (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in1 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 1U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in2 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 2U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in3 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 3U)));
        } else if (((2U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                    & (2U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))) {
            vlSelfRef.__PVT__psram__DOT__buf_addr_in0 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                   << 1U)) | (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in1 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 1U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in2 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 2U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in3 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 3U)));
        } else {
            vlSelfRef.__PVT__psram__DOT__buf_addr_in0 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in0;
            vlSelfRef.__PVT__psram__DOT__buf_addr_in1 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in1;
            vlSelfRef.__PVT__psram__DOT__buf_addr_in2 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in2;
            vlSelfRef.__PVT__psram__DOT__buf_addr_in3 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in3;
        }
        vlSelfRef.__PVT__psram__DOT__buf_command = 
            ((IData)(vlSelfRef.__PVT__psram__DOT__is_QPI)
              ? (((0U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                  & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                  ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                     << 4U) : (((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                                ? ((0x000000f0U & (IData)(vlSelfRef.__PVT__psram__DOT__buf_command)) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din))
                                : (IData)(vlSelfRef.__PVT__psram__DOT__buf_command)))
              : (((0U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                  & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                  ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_command) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)))
                  : (((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                      & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                      ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_command) 
                                         << 1U)) | 
                         (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)))
                      : (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))));
        vlSelfRef.__PVT__psram__DOT__counter = (0x000003ffU 
                                                & (((6U 
                                                     == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                    | (7U 
                                                       == (IData)(vlSelfRef.__PVT__psram__DOT__state)))
                                                    ? 
                                                   (((6U 
                                                      == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                     : (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__psram__DOT__state)))
                                                     ? 
                                                    (((4U 
                                                       == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                                                      ? (IData)(vlSelfRef.__PVT__psram__DOT__counter)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__psram__DOT__counter)))
                                                     : 
                                                    (((IData)(vlSelfRef.__PVT__psram__DOT__state) 
                                                      != (IData)(vlSelfRef.__PVT__psram__DOT__next_state))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__psram__DOT__counter)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                          : 0U))))))));
        vlSelfRef.__PVT__psram__DOT__state = vlSelfRef.__PVT__psram__DOT__next_state;
    }
    vlSelfRef.__PVT__psram__DOT__buf_wdata = __Vdly__psram__DOT__buf_wdata;
    vlSelfRef.__PVT__psram__DOT__is_QPI = __Vdly__psram__DOT__is_QPI;
    vlSelfRef.__PVT__psram__DOT__buf_addr = (((((((4U 
                                                   & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                                      >> 3U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                           >> 5U)))) 
                                                 << 9U) 
                                                | (((4U 
                                                     & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                                        >> 3U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                             >> 4U)))) 
                                                   << 6U)) 
                                               | ((((4U 
                                                     & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                        >> 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                                             >> 3U)))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                         >> 1U)) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                            >> 2U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                                              >> 3U)))))) 
                                              << 0x0000000cU) 
                                             | (((((4U 
                                                    & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                            >> 2U)))) 
                                                  << 9U) 
                                                 | (((4U 
                                                      & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0)) 
                                                     | ((2U 
                                                         & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                              >> 1U)))) 
                                                    << 6U)) 
                                                | ((((4U 
                                                      & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                         << 1U)) 
                                                     | ((2U 
                                                         & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0)) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3)))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0)))))));
    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(vlSelfRef.__PVT__psram__DOT__buf_addr, (IData)(vlSelfRef.__PVT__psram__DOT__counter), vlSelfRef.__Vtask_psram__DOT__psram_read__2__rdata);
    vlSelfRef.__PVT__psram__DOT__psram_rdata = vlSelfRef.__Vtask_psram__DOT__psram_read__2__rdata;
    if ((8U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        vlSelfRef.__PVT__psram__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        vlSelfRef.__PVT__psram__DOT__next_state = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                     ? 6U
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                     ? 4U
                                                     : 5U));
    } else if ((2U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
            vlSelfRef.__PVT__psram__DOT__next_state 
                = ((5U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                    ? 7U : 3U);
        } else if ((5U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
            if ((0x38U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 5U;
            } else if (VL_LIKELY(((0xebU == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 3U;
            } else {
                VL_FWRITEF_NX(0x80000002U,"[ADDR]Assertion failed: Unsupported command `%xh`, only support `EBh` and `38h` read command\n",0,
                              8,vlSelfRef.__PVT__psram__DOT__buf_command);
                VL_FFLUSH_I(0x80000002U);
                vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                VL_WRITEF_NX("[%0t] %%Fatal: psram.v:185: Assertion failed in %NysyxSoCFull.psram\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/psram/psram.v", 185, "", false);
            }
        } else {
            vlSelfRef.__PVT__psram__DOT__next_state = 2U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        if (vlSelfRef.__PVT__psram__DOT__is_QPI) {
            if ((1U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
                if ((0x35U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                    vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                } else if ((0x38U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                    vlSelfRef.__PVT__psram__DOT__next_state = 2U;
                } else if (VL_LIKELY(((0xebU == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))))) {
                    vlSelfRef.__PVT__psram__DOT__next_state = 2U;
                } else {
                    VL_FWRITEF_NX(0x80000002U,"[COMM_QPI]Assertion failed: Unsupported command `%xh`, only support `35h` `EBh` and `38h` read command\n",0,
                                  8,vlSelfRef.__PVT__psram__DOT__buf_command);
                    VL_FFLUSH_I(0x80000002U);
                    vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.__PVT__psram__DOT__next_state = 1U;
            }
        } else if ((7U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
            if ((0x35U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 0U;
            } else if ((0x38U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 2U;
            } else if (VL_LIKELY(((0xebU == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 2U;
            } else {
                vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                VL_FWRITEF_NX(0x80000002U,"[COMM]Assertion failed: Unsupported command `%xh`, only support `35h` `EBh` and `38h` read command\n",0,
                              8,vlSelfRef.__PVT__psram__DOT__buf_command);
                VL_FFLUSH_I(0x80000002U);
                VL_WRITEF_NX("[%0t] %%Fatal: psram.v:168: Assertion failed in %NysyxSoCFull.psram\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/psram/psram.v", 168, "", false);
            }
        } else {
            vlSelfRef.__PVT__psram__DOT__next_state = 1U;
        }
    } else {
        vlSelfRef.__PVT__psram__DOT__next_state = 1U;
    }
    vlSelfRef.psram__DOT____VdfgRegularize_h886b63e5_0_0 
        = ((6U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)) 
           | (7U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__clock = ((~ (IData)(vlSymsp->TOP.clock)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                  >> 3U)));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__reg_ba = ((IData)(vlSelfRef.__PVT__sdram__DOT__comm_active)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q)
                                            : (IData)(vlSelfRef.__PVT__sdram__DOT__reg_ba));
}

void VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ count, IData/*31:0*/ wdata, IData/*31:0*/ sel);
void VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ count, IData/*31:0*/ &rdata, IData/*31:0*/ sel);

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr = 0;
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v2;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v2 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v3;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v3 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v4;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v4 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v2;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v2 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v3;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v3 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v4;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v4 = 0;
    // Body
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0U;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 0U;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0U;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 0U;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
            & ((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
               | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i)), 0U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i)), 0U);
    }
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
            & ((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
               | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 1U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 1U);
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode));
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 1U;
    } else {
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row
            [0U];
        __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 1U;
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v2 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row
            [1U];
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v3 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row
            [2U];
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v4 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row
            [3U];
    }
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 1U;
    } else {
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row
            [0U];
        __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 1U;
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v2 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row
            [1U];
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v3 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row
            [2U];
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v4 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row
            [3U];
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr;
    if (__VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    }
    if (__VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[0U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v1;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[1U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v2;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[2U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v3;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[3U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v4;
    }
    if (__VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    }
    if (__VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[0U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v1;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[1U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v2;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[2U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v3;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[3U] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v4;
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_count;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_count;
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:308: Assertion failed in %NysyxSoCFull.sdram.sdram_32_0.u_sdram_16_L\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/sdram/sdram.v", 308, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:308: Assertion failed in %NysyxSoCFull.sdram.sdram_32_0.u_sdram_16_H\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/sdram/sdram.v", 308, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count), vlSelfRef.__Vtask_sdram_read__5__rdata, 0U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__5__rdata;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count), vlSelfRef.__Vtask_sdram_read__8__rdata, 1U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__8__rdata;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr = 0;
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v2;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v2 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v3;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v3 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v4;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v4 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v2;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v2 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v3;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v3 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v4;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v4 = 0;
    // Body
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0U;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 0U;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0U;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 0U;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
            & ((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
               | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i)), 2U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i)), 2U);
    }
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
            & ((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
               | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 3U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 3U);
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode));
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 1U;
    } else {
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row
            [0U];
        __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1 = 1U;
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v2 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row
            [1U];
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v3 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row
            [2U];
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v4 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row
            [3U];
    }
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 1U;
    } else {
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row
            [0U];
        __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1 = 1U;
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v2 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row
            [1U];
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v3 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row
            [2U];
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v4 
            = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row
            [3U];
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr;
    if (__VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    }
    if (__VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[0U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v1;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[1U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v2;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[2U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v3;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[3U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v4;
    }
    if (__VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    }
    if (__VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[0U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v1;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[1U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v2;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[2U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v3;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[3U] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v4;
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_count;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_count;
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:308: Assertion failed in %NysyxSoCFull.sdram.sdram_32_1.u_sdram_16_L\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/sdram/sdram.v", 308, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:308: Assertion failed in %NysyxSoCFull.sdram.sdram_32_1.u_sdram_16_H\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/sdram/sdram.v", 308, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count), vlSelfRef.__Vtask_sdram_read__11__rdata, 2U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__11__rdata;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count), vlSelfRef.__Vtask_sdram_read__14__rdata, 3U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__14__rdata;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__12(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__12\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray = 0U;
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray = 0U;
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray = 0U;
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray = 0U;
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray = 0U;
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray = 0U;
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready)));
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready)));
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
        = __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
        = __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
        = __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
        = __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
        = __Vdly__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__13(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__13\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__addr = vlSelfRef.__Vdly__flash__DOT__addr;
    vlSelfRef.__PVT__flash__DOT__cmd = vlSelfRef.__Vdly__flash__DOT__cmd;
    vlSelfRef.__PVT__flash__DOT__data = vlSelfRef.__Vdly__flash__DOT__data;
    vlSelfRef.__PVT__flash__DOT__counter = vlSelfRef.__Vdly__flash__DOT__counter;
    vlSelfRef.__PVT__flash__DOT__state = vlSelfRef.__Vdly__flash__DOT__state;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__14(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__14\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__data_bswap = ((((0x0000ff00U 
                                                  & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                       >> 8U))) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelfRef.__PVT__flash__DOT__rdata 
                                                     >> 0x00000018U)));
    vlSelfRef.__PVT___bitrev_miso = ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                            >> 7U)) 
                                     || ((2U != (IData)(vlSelfRef.__PVT__bitrev__DOT__state)) 
                                         || (1U & (IData)(vlSelfRef.__PVT__bitrev__DOT__rev))));
    vlSelfRef.__PVT__bitrev__DOT__rev = vlSelfRef.__Vdly__bitrev__DOT__rev;
    vlSelfRef.__PVT__bitrev__DOT__state = ((0x00000080U 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))
                                            ? 0U : (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_ready) 
                                 & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_valid))))
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_e_valid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
            & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_e_bits_sink))) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en 
        = ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
                       & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_ready) 
                                 & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid))))
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_8 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_e_bits_sink)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_e_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                              + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8)))
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
    vlSelfRef.__PVT__fpga__DOT__err__DOT__c_q__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5)));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__c_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__c_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__fpga__DOT__err__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.__PVT__fpga__DOT__hints__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__15(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__15\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset)));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__16(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__16\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__reset = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss));
    vlSelfRef.__PVT__sdram__DOT__comm_active = ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                  >> 3U)) 
                                                & ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                   | ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                      | (5U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))));
    vlSelfRef.__VdfgRegularize_hbc52461a_1_8 = ((0x00001800U 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q) 
                                                    << 0x0000000bU)) 
                                                | (0x000007fcU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                                                      << 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray = 0U;
    } else {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx) 
              != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx) 
              != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
}

extern const VlUnpacked<CData/*4:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_h1e47b2d2_0;

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass)) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__in_reset)
            ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass)
            : (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass_reg));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) 
            != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass)) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_counter)));
    vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__hints__DOT__a_repeater__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    vlSelfRef.fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgRegularize_h0a461ea4_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgRegularize_h0a461ea4_0_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgRegularize_h0a461ea4_0_1) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_valid) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__a_allow));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__monitor__DOT___a_first_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__winner_1 
        = ((2U != (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_i_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__beatsLeft))) {
        vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid 
            = ((2U == (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
               | (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_i_valid));
        vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1 
            = vlSelfRef.__PVT__fpga__DOT__atomics__DOT__winner_1;
    } else {
        vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid 
            = (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__state_0) 
                & (2U == (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_s_0_state))) 
               | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__state_1) 
                  & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_i_valid)));
        vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1 
            = vlSelfRef.__PVT__fpga__DOT__atomics__DOT__state_1;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready))) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__monitor__DOT___a_first_T_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied 
        = ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft))
            ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1)
            : (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__state_1));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_valid 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT____VdfgRegularize_h6644948c_0_2) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1));
    if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied) {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size 
            = vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source 
            = vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt 
            = (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode));
    } else {
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode = 0U;
        vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt = 0U;
    }
    if (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) {
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param = 0U;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink = 0U;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied 
            = (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_valid;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode;
    } else {
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param 
            = (3U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_sink;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied 
            = (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                     >> 2U));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_size));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_corrupt;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_source;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode 
            = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_opcode;
    }
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_param 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__a_isSupported))
            ? (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param)
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_0)
             ? ((((2U & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                          | ((vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                              >> 1U) & vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                         << 1U)) | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                                    | (2U == (3U & vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)))) 
                 << 2U) | ((((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                             | (1U == (3U & vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                            << 1U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                                      | (0U == (3U 
                                                & vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)))))
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_mask)
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_0)
             ? ((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? ((((((((2U & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                  >> ((2U & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                         >> 0x0000001fU))) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x0000001dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 0x0000001eU)))))) 
                         << 6U) | (((2U & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                    >> 0x0000001cU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                      >> 0x0000001dU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                             >> ((2U 
                                                  & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 0x0000001bU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 0x0000001cU)))))) 
                                   << 4U)) | ((((2U 
                                                 & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x0000001aU)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x0000001bU)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0x00000019U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x0000001aU)))))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0x00000018U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x00000019U)))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x00000017U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x00000018U)))))))) 
                      << 0x00000018U) | ((((((2U & 
                                              (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 0x00000016U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 0x00000017U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                        >> 0x00000015U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x00000016U)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                         >> 0x00000014U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0x00000015U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x00000013U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x00000014U)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                         >> 0x00000012U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0x00000013U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x00000011U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x00000012U)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x00000010U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x00000011U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0x0000000fU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x00000010U)))))))) 
                                         << 0x00000010U)) 
                    | (((((((2U & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                    >> ((2U & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                               >> 0x0000000eU)) 
                                        | (1U & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                 >> 0x0000000fU)))) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x0000000dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 0x0000000eU)))))) 
                           << 6U) | (((2U & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                        >> 0x0000000dU)))) 
                                             << 1U)) 
                                      | (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 0x0000000cU)))))) 
                                     << 4U)) | ((((2U 
                                                   & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x0000000aU)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x0000000bU)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 9U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x0000000aU)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 8U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 9U)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                         >> 
                                                         ((2U 
                                                           & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 7U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 8U)))))))) 
                        << 8U) | (((((2U & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                             >> ((2U 
                                                  & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 7U)))) 
                                            << 1U)) 
                                     | (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                        >> 6U)))))) 
                                    << 6U) | (((2U 
                                                & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 5U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 4U)))))) 
                                              << 4U)) 
                                  | ((((2U & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                         >> 3U)))) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 2U)))))) 
                                      << 2U) | ((2U 
                                                 & (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 1U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                      >> 
                                                      ((2U 
                                                        & (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           << 1U)) 
                                                       | (1U 
                                                          & vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data)))))))))
                 : ((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelfRef.__PVT__fpga__DOT__atomics__DOT___adder_out_T
                     : (((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((vlSelfRef.__PVT__fpga__DOT__atomics__DOT__a_a_ext 
                                     >> 0x0000001fU) 
                                    == (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__a_d_ext 
                                        >> 0x0000001fU))
                                    ? (~ (vlSelfRef.__PVT__fpga__DOT__atomics__DOT___adder_out_T 
                                          >> 0x0000001fU))
                                    : ((1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (vlSelfRef.__PVT__fpga__DOT__atomics__DOT__a_a_ext 
                                           >> 0x0000001fU)))))
                         ? vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_d_0_data)))
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1)
                       ? vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size)
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_0)
             ? vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1)
                       ? vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_source)
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__muxState_1)
            ? ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode)
                : 4U) : 0U);
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_size 
        = ((0U != (3U & ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                         >> 1U))) ? 2U : (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)));
    vlSelfRef.__PVT__fpga__DOT__err__DOT__a_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid) 
           & (0U == (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid) 
           & (3U == (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__requestAIO_0_1 
        = (0U == ((2U & (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                         >> 0x0000001eU)) | (1U & (~ 
                                                   (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                                                    >> 0x0000001eU)))));
    vlSelfRef.__Vtableidx2 = (0x000003ffU & ((IData)(5U) 
                                             * (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source)));
    vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id 
        = VysyxSoCFull__ConstPool__TABLE_h1e47b2d2_0
        [vlSelfRef.__Vtableidx2];
    if (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) {
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 8U)));
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awlen 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 0x00000011U)));
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awaddr 
            = (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                       >> 0x00000019U));
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
            = (0x0000007fU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 1U)));
        vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram));
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awsize 
            = (7U & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                             >> 0x0000000eU)));
        vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid 
            = (0x0000001fU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 0x00000039U)));
    } else {
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
            = (0x0000000fU & (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)));
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awlen 
            = (0x000000ffU & (~ (0x000000ffU & (((IData)(0x000003ffU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))) 
                                                >> 2U))));
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awaddr 
            = vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address;
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
            = (0x0000007fU & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source));
        vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                        >> 2U)));
        vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awsize 
            = (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_size));
        vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid 
            = (0x0000001fU & (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id));
    }
    if (vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__full) {
        vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 8U)));
        vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
            = (0x0000007fU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 1U)));
        vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram));
        vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid 
            = (0x0000001fU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram 
                                      >> 0x00000038U)));
    } else {
        vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size));
        vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
            = (0x0000007fU & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source));
        vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                        >> 2U)));
        vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid 
            = (0x0000001fU & (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode))) {
        vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__r_beats1 = 0U;
        vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__r_beats1 = 0U;
    } else {
        vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__r_beats1 
            = (0x0000003fU & (~ (0x0000003fU & (((IData)(0x000000ffU) 
                                                 << (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                >> 2U))));
        vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__r_beats1 
            = (7U & (~ (7U & (((IData)(0x001fU) << 
                               (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size))) 
                              >> 2U))));
    }
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_4 
        = (((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_4)) 
            & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_4) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_4)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_2 
        = (((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_2)) 
            & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_2) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_2)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_0 
        = (((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count)) 
            & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__idStall_4 
        = (((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_4)) 
            & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_4) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_4)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__idStall_2 
        = (((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_2)) 
            & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_2) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_2)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__idStall_0 
        = (((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count)) 
            & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write) 
               != (1U & (~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count)));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_valid));
    if (vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x0000000dU));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awlen));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awaddr;
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awsize));
    }
    if (vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x0000000dU));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awlen));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awaddr;
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awsize));
    }
    vlSelfRef.__PVT__fpga__DOT__err__DOT__monitor__DOT___a_first_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__a_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__a_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__requestAIO_0_1));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = ((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__r_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__r_beats1)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = ((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__r_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__r_beats1)));
    if (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full) {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                                      >> 1U)));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
            = (IData)((vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last 
            = (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram));
    } else {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb));
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
            = vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data;
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last 
            = (1U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last));
    }
    __Vtemp_1[1U] = (IData)((((QData)((IData)((((- (IData)(
                                                           (((0U 
                                                              != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
                                                             & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_6) 
                                                                != 
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                     >> 2U))))) 
                                                            | (0x10U 
                                                               == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6))))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (- (IData)(
                                                               (((0U 
                                                                  != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
                                                                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_5) 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                         >> 2U))))) 
                                                                | (0x10U 
                                                                   == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5))))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_4))) 
                                                                  << 0x00000010U) 
                                                                 | (0x0000ffffU 
                                                                    & (- (IData)(
                                                                                (((0U 
                                                                                != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
                                                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                                | (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)))))))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)((((- (IData)(
                                                            (((0U 
                                                               != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
                                                              & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_6) 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                      >> 2U))))) 
                                                             | (0x10U 
                                                                == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_6))))) 
                                                 << 0x00000010U) 
                                                | (0x0000ffffU 
                                                   & (- (IData)(
                                                                (((0U 
                                                                   != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
                                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_5) 
                                                                     != 
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                          >> 2U))))) 
                                                                 | (0x10U 
                                                                    == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_5))))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_4))) 
                                                                   << 0x00000010U) 
                                                                  | (0x0000ffffU 
                                                                     & (- (IData)(
                                                                                (((0U 
                                                                                != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
                                                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                                | (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_3)))))))))) 
                             >> 0x00000020U));
    __Vtemp_2[0U] = (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_0))) 
                      << 0x00000010U) | (((((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_22) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_21) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_20) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_19))) 
                                           << 0x0000000cU) 
                                          | (((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_18) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_17) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_16) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_15))) 
                                             << 8U)) 
                                         | ((((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_14) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_13) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_12) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_11))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_10) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_9) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_8) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_7))))));
    __Vtemp_2[1U] = (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__idStall_2))) 
                      << 0x00000010U) | (0x0000ffffU 
                                         & (- (IData)(
                                                      (((0U 
                                                         != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
                                                        & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__write_1) 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                >> 2U))))) 
                                                       | (0x10U 
                                                          == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__count_1)))))));
    __Vtemp_2[2U] = __Vtemp_1[1U];
    __Vtemp_2[3U] = __Vtemp_1[2U];
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__stall 
        = ((__Vtemp_2[((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source) 
                       >> 5U)] >> (0x0000001fU & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source))) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__r_counter)));
    __Vtemp_3[1U] = (IData)((((QData)((IData)((((- (IData)(
                                                           (((0U 
                                                              != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_6)) 
                                                             & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_6) 
                                                                != 
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                     >> 2U))))) 
                                                            | (0x10U 
                                                               == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_6))))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (- (IData)(
                                                               (((0U 
                                                                  != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_5)) 
                                                                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_5) 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                         >> 2U))))) 
                                                                | (0x10U 
                                                                   == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_5))))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__idStall_4))) 
                                                                  << 0x00000010U) 
                                                                 | (0x0000ffffU 
                                                                    & (- (IData)(
                                                                                (((0U 
                                                                                != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_3)) 
                                                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                                | (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_3)))))))))));
    __Vtemp_3[2U] = (IData)(((((QData)((IData)((((- (IData)(
                                                            (((0U 
                                                               != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_6)) 
                                                              & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_6) 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                      >> 2U))))) 
                                                             | (0x10U 
                                                                == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_6))))) 
                                                 << 0x00000010U) 
                                                | (0x0000ffffU 
                                                   & (- (IData)(
                                                                (((0U 
                                                                   != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_5)) 
                                                                  & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_5) 
                                                                     != 
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                          >> 2U))))) 
                                                                 | (0x10U 
                                                                    == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_5))))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__idStall_4))) 
                                                                   << 0x00000010U) 
                                                                  | (0x0000ffffU 
                                                                     & (- (IData)(
                                                                                (((0U 
                                                                                != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_3)) 
                                                                                & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                                | (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_3)))))))))) 
                             >> 0x00000020U));
    __Vtemp_4[0U] = (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__idStall_0))) 
                      << 0x00000010U) | (((((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_22) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_21) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_20) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_19))) 
                                           << 0x0000000cU) 
                                          | (((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_18) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_17) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_16) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_15))) 
                                             << 8U)) 
                                         | ((((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_14) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_13) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_12) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_11))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_10) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_9) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_8) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_7))))));
    __Vtemp_4[1U] = (((- (IData)((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__idStall_2))) 
                      << 0x00000010U) | (0x0000ffffU 
                                         & (- (IData)(
                                                      (((0U 
                                                         != (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_1)) 
                                                        & ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__write_1) 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                                                >> 2U))))) 
                                                       | (0x10U 
                                                          == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__count_1)))))));
    __Vtemp_4[2U] = __Vtemp_3[1U];
    __Vtemp_4[3U] = __Vtemp_3[2U];
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__stall 
        = ((__Vtemp_4[((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source) 
                       >> 5U)] >> (0x0000001fU & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source))) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__r_counter)));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_unready 
        = (((4U & ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_valid)) 
                              | (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_mask) 
              << 2U));
    if (vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__busy) {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__len 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__r_len;
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__addr 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__r_addr;
    } else {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__len 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__addr 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
    }
    if (vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__busy_1) {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__len_1 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__r_len_1;
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__addr_1 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__len_1 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len;
        vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__addr_1 
            = vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
    }
    vlSelfRef.__PVT__fpga__DOT__err__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size) 
            << 8U) | (((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source) 
                       << 1U) | (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid) 
                                       >> 4U))));
    vlSelfRef.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_0 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__full))))))) 
                 >> (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))));
    vlSelfRef.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_3 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__full))))))) 
                 >> (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size) 
            << 8U) | (((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source) 
                       << 1U) | (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid) 
                                       >> 4U))));
    vlSelfRef.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_0 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__full))))))) 
                 >> (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))));
    vlSelfRef.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_3 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__full))))))) 
                 >> (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))));
    vlSelfRef.fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_he9656492_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__stall)) 
                 & ((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode))
                     ? (~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__full))
                     : ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)) 
                        & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___out_wvalid_T_3)))));
    vlSelfRef.fpga__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__stall)) 
                 & ((4U & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode))
                     ? (~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full))
                     : ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)) 
                        & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___out_wvalid_T_3)))));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_unready))));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = (1U & ((~ (0U != (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__len))) 
                 & (~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full))));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)
            ? ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_3))
            : ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
               & (IData)(vlSelfRef.fpga__DOT__axi4yank_1__DOT____VdfgRegularize_h07918726_0_0)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)
            ? ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_3))
            : ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_0)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_he9656492_0_1) 
           & ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                  >> 2U)) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___out_wvalid_T_3)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_he9656492_0_1) 
           & (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
               >> 2U) | ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__doneAW)) 
                         & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)))));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
           & ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
                  >> 2U)) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___out_wvalid_T_3)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____VdfgRegularize_h70f43f5e_0_1) 
           & (((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode) 
               >> 2U) | ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__doneAW)) 
                         & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)))));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_ready 
        = (((3U == (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                    >> 0x0000001eU)) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_ready)) 
           | (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__requestAIO_0_1) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_ready)) 
              | ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__err__DOT__a_q__DOT__full)) 
                 & (0U == (vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
                           >> 0x0000001eU)))));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__winner_1 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__winner_0 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__beatsLeft))) {
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid 
            = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid) 
               | (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_valid));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1 
            = vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__winner_1;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0 
            = vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__winner_0;
    } else {
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid 
            = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid) 
                & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__state_0)) 
               | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_valid) 
                  & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__state_1)));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1 
            = vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__state_1;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0 
            = vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__state_0;
    }
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)) 
               & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)) 
               & (~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_valid)));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_i_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__beatsLeft))
               ? (2U != (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__cam_s_0_state))
               : (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__state_1)));
    vlSelfRef.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__inc 
        = (((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_1 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 1U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_2 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 2U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_3 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 3U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_4 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 4U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_5 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 5U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__inc_6 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 6U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_ready))) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_arvalid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__inc = 
        (((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
         & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__inc_1 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 1U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__inc_2 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 2U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__inc_3 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 3U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__inc_4 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 4U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__inc_5 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 5U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__inc_6 
        = ((((IData)(1U) << (IData)(vlSelfRef.fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
            >> 6U) & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_ready))) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_arvalid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__source_i_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__a_allow));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_param 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
            ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param)
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_sink 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink)
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1) 
                      << 5U));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_size 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size)
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size)
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_denied 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied)) 
           | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied)));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt)) 
           | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt)));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source)
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source)
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode)
             : 0U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode)
                       : 0U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_awvalid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__auto_in_arvalid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_out_arvalid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_0));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4 
        = ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_arvalid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12 
        = ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awvalid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_out_awvalid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.fpga__DOT__axi4yank__DOT____VdfgRegularize_h7b29ed0e_0_3));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_ready));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_corrupt) 
            | (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_denied)) 
           << 1U);
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id 
        = (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                  ? (IData)((vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                             >> 0x00000023U)) : ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source) 
                                                 >> 3U)));
    if (vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) {
        vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id 
            = (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram) 
                     >> 2U));
        vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp 
            = (3U & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram));
    } else {
        vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id 
            = (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source) 
                     >> 3U));
        vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp 
            = (3U & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp));
    }
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode)));
    if ((1U & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode))) {
        vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__d_last_beats1 
            = (7U & (~ (7U & (((IData)(0x001fU) << (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_size)) 
                              >> 2U))));
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready 
            = (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)));
    } else {
        vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__d_last_beats1 = 0U;
        vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready 
            = (1U & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)));
    }
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
              & ((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid)))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 1U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 2U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 3U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 4U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 5U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 6U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
              & ((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid)))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 1U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 2U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 3U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 4U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 5U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_1__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index_1__DOT__auto_in_awid))) 
              >> 6U));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_out_arvalid)));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_out_arvalid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4) 
              & ((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid)))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 1U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 2U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 3U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 4U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 5U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_4)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 6U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12) 
              & ((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid)))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 1U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 2U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 3U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 4U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 5U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en 
        = (((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT___GEN_12)) 
           & (((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4index__DOT__auto_in_awid))) 
              >> 6U));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_out_awvalid)));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank__DOT__auto_out_awvalid));
    vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__hints__DOT__a_repeater__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last 
        = (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                  ? ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                      ? (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last)
                      : vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                     [vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value])
                  : ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                      ? (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last)
                      : vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                     [vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value])));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
             ? (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                ? (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__w_count_0)));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last 
        = ((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__d_last_beats1)));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__beatsLeft))
               ? ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__state_1)));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__beatsLeft))
               ? (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__state_0)));
    vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__auto_out_awvalid 
        = ((IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready)));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_bvalid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelfRef.__PVT__fpga__DOT__ferr__DOT__da_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready) 
           & (IData)(vlSelfRef.fpga__DOT__ferr__DOT____VdfgRegularize_hccb144a8_0_2));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__auto_out_awvalid));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.mem__DOT__axi4frag__DOT____VdfgRegularize_h9f077f37_0_0 
        = ((0U != (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__fpga__DOT__hints__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_3 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_bvalid));
    vlSelfRef.__PVT__fpga__DOT__ferr__DOT__a_q__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__ferr__DOT__a_last)) 
                 | ((IData)(vlSelfRef.__PVT__fpga__DOT__ferr__DOT__da_ready) 
                    & (((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__ferr__DOT__r_counter)) 
                        | (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__ferr__DOT__r_beats1))) 
                       & (IData)(vlSelfRef.__PVT__fpga__DOT__ferr__DOT__idle)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en 
        = ((0U != vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
              & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                    & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready) 
                       & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready) 
           & (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT____VdfgRegularize_h6644948c_0_2));
    vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
              & (IData)(vlSelfRef.mem__DOT__axi4frag__DOT____VdfgRegularize_h9f077f37_0_0)));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.mem__DOT__axi4frag__DOT____VdfgRegularize_h9f077f37_0_0));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_2 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready))));
    vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit) 
              & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready) 
                 & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_3) 
           & ((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_3) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)) 
              >> 1U));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready) 
                                 & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_valid))))
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last)) 
                 | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready) 
                    & (((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_counter)) 
                        | (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_beats1))) 
                       & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)))));
    vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin) 
                              + ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_ready) 
                                 & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid))))
            : 0U);
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en 
        = ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
              & (IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
           & ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
           & ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 2U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
           & ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 3U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
           & ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 4U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
           & ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 5U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
           & ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 6U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h4b825049_0_6) 
           & ((0U != (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 7U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                     ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready)
                     : (~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T 
        = (7U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                 ^ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                    >> 1U)));
    __Vtemp_5[1U] = (IData)((((QData)((IData)((((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                  & ((7U 
                                                      & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                     == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                  ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                  : 
                                                 vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                 [(7U 
                                                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                << 0x00000010U) 
                                               | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                   & ((7U 
                                                       & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                      == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                   ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                   : 
                                                  vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                                    & ((7U 
                                                                        & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                       == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                                    ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                    : 
                                                                   vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                                   [
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                                  << 0x00000010U) 
                                                                 | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                                     & ((7U 
                                                                         & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                        == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                                     ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                     : 
                                                                    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                                    [
                                                                    (7U 
                                                                     & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))));
    __Vtemp_5[2U] = (IData)(((((QData)((IData)((((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en) 
                                                   & ((7U 
                                                       & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                      == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr)))
                                                   ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                   : 
                                                  vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                 << 0x00000010U) 
                                                | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en) 
                                                    & ((7U 
                                                        & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                       == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr)))
                                                    ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                    : 
                                                   vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en) 
                                                                     & ((7U 
                                                                         & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                        == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr)))
                                                                     ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                     : 
                                                                    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                                                    [
                                                                    (7U 
                                                                     & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                                                                   << 0x00000010U) 
                                                                  | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en) 
                                                                      & ((7U 
                                                                          & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                                                         == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr)))
                                                                      ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                                                      : 
                                                                     vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                                                     [
                                                                     (7U 
                                                                      & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]))))) 
                             >> 0x00000020U));
    __Vtemp_6[0U] = (((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en) 
                        & ((7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                           == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr)))
                        ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                        : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                      << 0x00000010U) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en) 
                                          & ((7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                             == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr)))
                                          ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                          : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                         [(7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_6[1U] = (((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en) 
                        & ((7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                           == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr)))
                        ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                        : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]) 
                      << 0x00000010U) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en) 
                                          & ((7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                                             == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr)))
                                          ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data)
                                          : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                         [(7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))]));
    __Vtemp_6[2U] = __Vtemp_5[1U];
    __Vtemp_6[3U] = __Vtemp_5[2U];
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__header 
        = (3U | ((((6U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                    ? (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en) 
                        & ((7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
                           == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                        ? (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_data)
                        : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))])
                    : (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                >> 3U)), 4U)))
                         ? 0U : (__Vtemp_6[(((IData)(0x0000000fU) 
                                             + (0x0000007fU 
                                                & VL_SHIFTL_III(7,7,32, 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                                    >> 3U)), 4U))) 
                                            >> 5U)] 
                                 << ((IData)(0x00000020U) 
                                     - (0x0000001fU 
                                        & VL_SHIFTL_III(7,7,32, 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                            >> 3U)), 4U))))) 
                       | (__Vtemp_6[(3U & (VL_SHIFTL_III(7,7,32, 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                             >> 3U)), 4U) 
                                           >> 5U))] 
                          >> (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                              >> 3U)), 4U))))) 
                  << 0x00000010U) | ((((0x000000e0U 
                                        & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                           << 2U)) 
                                       | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                             >> 0x00000021U))
                                                  : (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_denied))))) 
                                      << 8U) | ((0x000000c0U 
                                                 & (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                      ? (IData)(
                                                                (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                 >> 0x0000002dU))
                                                      : (IData)(vlSelfRef.__PVT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_param)) 
                                                    << 6U)) 
                                                | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode) 
                                                   << 3U)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready 
        = (1U & (((vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
                   >> 0x0000001eU) & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_ready)) 
                 | ((~ (vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
                        >> 0x0000001eU)) & (~ (IData)(vlSelfRef.__PVT__fpga__DOT__ferr__DOT__a_q__DOT__full)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T));
    __Vtemp_8[0U] = vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__header;
    __Vtemp_8[1U] = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                     & (IData)((vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                >> 0x00000022U)));
    __Vtemp_8[2U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                             >> 1U))
                                                                  : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data)))));
    __Vtemp_8[3U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                   ? (IData)(
                                                                             (vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                              >> 1U))
                                                                   : vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data)))) 
                             >> 0x00000020U));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_data 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
             ? 0U : (__Vtemp_8[(((IData)(0x0000001fU) 
                                 + (0x0000007fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                >> 5U)] << ((IData)(0x00000020U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
           | (__Vtemp_8[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                               >> 5U))] >> (0x0000001fU 
                                            & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_ready 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__beatsLeft))
               ? (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__state_0)));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__w_out_ready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__beatsLeft))
               ? ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__state_1)));
    vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_arready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4frag__DOT__deq_q__DOT__full) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_arready));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_wready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__w_out_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awvalid));
    vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__w_out_ready) 
           & ((1U == (IData)(vlSelfRef.__PVT__fpga__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_wvalid)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_1) 
           & ((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_arid)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_1) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_arid)) 
              >> 1U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_2));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_4 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awready));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_valid));
    vlSelfRef.__PVT__fpga__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__auto_in_awready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_4) 
           & ((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awid)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT___GEN_4) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__fpga__DOT__axi42tl__DOT__auto_in_awid)) 
              >> 1U));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid))));
    vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid)));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty) 
           & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty))) 
                 | (0U != (0x0000000fU & (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr) 
                                           - (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)) 
                                          >> 1U))))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full)) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_valid)));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__17(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__17\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0;
    vlSelfRef.fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 1U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else if ((7U == (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 2U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 1U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt)));
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else if ((7U == (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 2U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt)));
        }
    }
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx 
        = ((8U & (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented)) 
           | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T));
    if ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
    } else {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
    }
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
              != ((((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                    << 3U) | ((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U)) | (((IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__now_sel = (1U & ((IData)(vlSelfRef.__PVT__sdram__DOT__comm_active)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__sdram__DOT__reg_ba) 
                                                   >> 2U)));
    vlSelfRef.__PVT__sdram__DOT__cs0 = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__now_sel)) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 3U)));
    vlSelfRef.__PVT__sdram__DOT__cs1 = (1U & ((~ ((IData)(vlSelfRef.__PVT__sdram__DOT__now_sel) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 3U)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock 
        = ((~ (IData)(vlSymsp->TOP.clock)) & ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__cs0)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock 
        = ((~ (IData)(vlSymsp->TOP.clock)) & ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__cs1)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_8));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_8));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_8));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_8));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__18(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__18\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0 
        = vlSymsp->TOP.reset;
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__8(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__sdram__DOT__cs0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state = 0U;
    } else {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24)))
                                                    ? 0U
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))
                                                    ? 0U
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)));
    vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata
                : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                          ? 0xffffU : 0U)));
    vlSelfRef.sdram__DOT__dq__en0 = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                       ? 0xffffU : 0U) 
                                     | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                          ? 0xffffU
                                          : 0U) << 0x10U));
    vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out3 
        = ((0x0000ffffU & vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                 ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata
                 : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                           ? 0xffffU : 0U)) << 0x00000010U));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__9(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__sdram__DOT__cs1) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state = 0U;
    } else {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)))
                                                    ? 0U
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)))
                                                    ? 0U
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)));
    vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata
                : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                          ? 0xffffU : 0U)));
    vlSelfRef.sdram__DOT__dq__en1 = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                       ? 0xffffU : 0U) 
                                     | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                          ? 0xffffU
                                          : 0U) << 0x10U));
    vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out3 
        = ((0x0000ffffU & vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                 ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata
                 : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                           ? 0xffffU : 0U)) << 0x00000010U));
}

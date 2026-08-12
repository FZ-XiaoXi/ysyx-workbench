// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern const VlUnpacked<IData/*31:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h26272d93_0;
extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_hef6775a3_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*1:0*/ __PVT__chipMaster__DOT__xbar__DOT___readys_filter_T_1;
    __PVT__chipMaster__DOT__xbar__DOT___readys_filter_T_1 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__unnamedblk1__DOT___a_first_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__unnamedblk1__DOT___a_first_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T_1 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__unnamedblk1__DOT___c_first_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__unnamedblk1__DOT___c_first_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T_1 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT___d_first_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT___d_first_T_1 = 0;
    IData/*30:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 = 0;
    IData/*30:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 = 0;
    IData/*30:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 = 0;
    IData/*30:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5 = 0;
    IData/*17:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN = 0;
    IData/*16:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1 = 0;
    SData/*10:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_2;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_2 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6 = 0;
    IData/*17:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 = 0;
    IData/*16:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_5;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_5 = 0;
    SData/*10:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_6;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_6 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_15;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_15 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19 = 0;
    IData/*17:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 = 0;
    IData/*16:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_9;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_9 = 0;
    SData/*10:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_10;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_10 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_28;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_28 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32 = 0;
    IData/*17:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 = 0;
    IData/*16:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_13;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_13 = 0;
    SData/*10:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_14;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_14 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_41;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_41 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45 = 0;
    IData/*17:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 = 0;
    IData/*16:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_17;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_17 = 0;
    SData/*10:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_18;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_18 = 0;
    SData/*14:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_54;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_54 = 0;
    CData/*6:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58 = 0;
    CData/*5:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1 = 0;
    SData/*9:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19 = 0;
    SData/*8:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__atomics__DOT___signbit_a_T;
    __PVT__chipMaster__DOT__atomics__DOT___signbit_a_T = 0;
    CData/*2:0*/ __PVT__chipMaster__DOT__atomics__DOT___signbit_d_T;
    __PVT__chipMaster__DOT__atomics__DOT___signbit_d_T = 0;
    CData/*3:0*/ __PVT__chipMaster__DOT__atomics__DOT___signext_a_T_2;
    __PVT__chipMaster__DOT__atomics__DOT___signext_a_T_2 = 0;
    CData/*3:0*/ __PVT__chipMaster__DOT__atomics__DOT___signext_a_T_6;
    __PVT__chipMaster__DOT__atomics__DOT___signext_a_T_6 = 0;
    CData/*3:0*/ __PVT__chipMaster__DOT__atomics__DOT___signext_d_T_2;
    __PVT__chipMaster__DOT__atomics__DOT___signext_d_T_2 = 0;
    CData/*3:0*/ __PVT__chipMaster__DOT__atomics__DOT___signext_d_T_6;
    __PVT__chipMaster__DOT__atomics__DOT___signext_d_T_6 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_0;
    __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_0 = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___d_first_T;
    __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___d_first_T = 0;
    CData/*0:0*/ __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_1;
    __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_1 = 0;
    CData/*2:0*/ chipMaster__DOT__atomics__DOT____VdfgRegularize_hc48377f8_0_0;
    chipMaster__DOT__atomics__DOT____VdfgRegularize_hc48377f8_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h1440c274_1_4;
    __VdfgRegularize_h1440c274_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h1440c274_1_8;
    __VdfgRegularize_h1440c274_1_8 = 0;
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
    SData/*9:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    VlWide<8>/*255:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_14;
    VlWide<8>/*255:0*/ __Vtemp_20;
    VlWide<8>/*255:0*/ __Vtemp_26;
    VlWide<8>/*255:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    // Body
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_full 
        = (8U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read) 
           == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__a_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_counter));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                        << 0x00000028U) | (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                            << 0x00000014U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
            = ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
                << 0x0000001cU) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                                             << 0x00000028U) 
                                            | (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                                << 0x00000014U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))) 
                                           >> 0x00000020U)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffff0000U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
                  >> 4U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
                  << 0x00000010U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
            = (0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
                              >> 0x00000010U));
    }
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
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 
        = (0x0003ffffU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                           >> 1U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                                     >> 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 
        = (0x0003ffffU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                           >> 1U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                                     >> 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 
        = (0x0003ffffU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                           >> 1U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                                     >> 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
        = (0x0003ffffU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                           >> 1U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                                     >> 2U)));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                        << 0x00000028U) | (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                            << 0x00000014U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
            = ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
                << 0x0000001cU) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                                             << 0x00000028U) 
                                            | (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                                << 0x00000014U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))) 
                                           >> 0x00000020U)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffff0000U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
                  >> 4U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
                  << 0x00000010U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
            = (0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
                              >> 0x00000010U));
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN 
        = (0x0003ffffU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                           >> 1U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                                     >> 2U)));
    if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) {
        vlSelfRef.__PVT__axi42apb__DOT__bid_reg = (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x0000002bU)));
    }
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__r_counter));
    if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) {
        vlSelfRef.__PVT__axi42apb__DOT__rid_reg = (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x0000002bU)));
    }
    if ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
        = (0x7fffffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
                          | (0x7ffffffeU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
                                            << 1U))));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[0U] 
            = (IData)((((QData)((IData)(((0x0001fff0U 
                                          & (vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
                                             << 4U)) 
                                         | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask)))) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_in_a_bits_data)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_corrupt)))));
        vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
            = ((0xfffc0000U & vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U]) 
               | (IData)(((((QData)((IData)(((0x0001fff0U 
                                              & (vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
                                                 << 4U)) 
                                             | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask)))) 
                            << 0x00000021U) | (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_in_a_bits_data)) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_corrupt)))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
            = ((0x0003ffffU & vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U]) 
               | (0xfffc0000U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                  << 0x0000001fU) | 
                                 (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_param) 
                                   << 0x0000001cU) 
                                  | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                      << 0x00000019U) 
                                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source) 
                                        << 0x00000012U))))));
        vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[2U] 
            = (3U & ((0x0003ffffU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode) 
                                     >> 1U)) | ((0x0003ffffU 
                                                 & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_param) 
                                                    >> 4U)) 
                                                | ((0x0003ffffU 
                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size) 
                                                       >> 7U)) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source) 
                                                      >> 0x0000000eU)))));
    }
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
                          | (0x0000007eU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
                                            << 1U))));
    __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_0 
        = ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_ready) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_i_valid)) 
            & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_isSupported))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_free_0));
    __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___d_first_T 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_valid));
    __PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___d_first_T) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first));
    if (__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_source;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_mask;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_fifoId 
            = (1U & (~ (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
                        >> 0x1fU)));
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_lut 
            = (0x0000000fU & (0xc8e6U >> (0x0000000fU 
                                          & VL_SHIFTL_III(4,32,32, 
                                                          (3U 
                                                           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param)), 2U))));
    }
    if ((((IData)(__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_1) 
          & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_cam_sel_0)) 
         & (1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode)))) {
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_denied 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_denied;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_corrupt;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_counter));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__da_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__r_counter));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode)) 
                << 0x0000003cU) | (((QData)((IData)(
                                                    ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size) 
                                                       << 0x00000015U) 
                                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source) 
                                                         << 0x00000011U)) 
                                                     | ((0x0001fff0U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
                                                            << 4U)) 
                                                        | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_mask))))) 
                                    << 0x00000021U) 
                                   | ((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_data)) 
                                      << 1U)));
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en) {
        __Vtemp_8[0U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0;
        __Vtemp_8[1U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1;
        __Vtemp_8[2U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2;
        __Vtemp_8[3U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3;
        __Vtemp_8[4U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4;
        __Vtemp_8[5U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5;
        __Vtemp_8[6U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))));
        __Vtemp_8[7U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))) 
                                 >> 0x00000020U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                    ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                     ^ 
                                                     (4U 
                                                      & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                         >> 1U))), 5U)))
                 ? 0U : (__Vtemp_8[(((IData)(0x0000001fU) 
                                     + (0x000000ffU 
                                        & VL_SHIFTL_III(8,8,32, 
                                                        ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                         ^ 
                                                         (4U 
                                                          & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                             >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_8[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x0000001fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value];
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value];
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value];
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value];
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__enq_ptr_value));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.__PVT__axi4ram__DOT__rdata_REG = vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en;
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__enq_ptr_value));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable 
        = ((2U != (3U & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                         >> 1U))) & (1U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__enq_ptr_value));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT___out_wvalid_T_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__doneAW)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__unnamedblk1__DOT___c_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid));
    if (__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__unnamedblk1__DOT___c_first_T_1) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first 
            = (3U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state));
    }
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__idle 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_0 
        = ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__state_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__idle_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__beatsLeft));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send_REG));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft));
    vlSelfRef.chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT____VdfgRegularize_h6644948c_0_2 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__state_1));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__idle 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__beatsLeft));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__idle_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__beatsLeft));
    vlSelfRef.chipMaster__DOT__ferr__DOT____VdfgRegularize_hccb144a8_0_2 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__state_1));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__divertprobes));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT___d_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid));
    if (__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT___d_first_T_1) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first 
            = (2U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    }
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__unnamedblk1__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_valid));
    if (__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__unnamedblk1__DOT___a_first_T_1) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first 
            = (3U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state));
    }
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_counter));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__in_reset 
        = vlSymsp->TOP.reset;
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en) {
        __Vtemp_14[0U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0;
        __Vtemp_14[1U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1;
        __Vtemp_14[2U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2;
        __Vtemp_14[3U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3;
        __Vtemp_14[4U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4;
        __Vtemp_14[5U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5;
        __Vtemp_14[6U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))));
        __Vtemp_14[7U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))) 
                                  >> 0x00000020U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                    ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                     ^ 
                                                     (4U 
                                                      & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                         >> 1U))), 5U)))
                 ? 0U : (__Vtemp_14[(((IData)(0x0000001fU) 
                                      + (0x000000ffU 
                                         & VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                          ^ 
                                                          (4U 
                                                           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                              >> 1U))), 5U))) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
               | (__Vtemp_14[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                       >> 1U))), 5U) 
                                    >> 5U))] >> (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))));
    }
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_last_beats1 
        = ((1U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                          >> 0x0000003bU))) ? (7U & 
                                               (~ (7U 
                                                   & (((IData)(0x001fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                                                   >> 0x00000035U)))) 
                                                      >> 2U))))
            : 0U);
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en) {
        __Vtemp_20[0U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0;
        __Vtemp_20[1U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1;
        __Vtemp_20[2U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2;
        __Vtemp_20[3U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3;
        __Vtemp_20[4U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4;
        __Vtemp_20[5U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5;
        __Vtemp_20[6U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))));
        __Vtemp_20[7U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                    ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                     ^ 
                                                     (4U 
                                                      & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                         >> 1U))), 5U)))
                 ? 0U : (__Vtemp_20[(((IData)(0x0000001fU) 
                                      + (0x000000ffU 
                                         & VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                          ^ 
                                                          (4U 
                                                           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                              >> 1U))), 5U))) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
               | (__Vtemp_20[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                       >> 1U))), 5U) 
                                    >> 5U))] >> (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))));
    }
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_first_counter));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en) {
        __Vtemp_26[0U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0;
        __Vtemp_26[1U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1;
        __Vtemp_26[2U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2;
        __Vtemp_26[3U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3;
        __Vtemp_26[4U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4;
        __Vtemp_26[5U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5;
        __Vtemp_26[6U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))));
        __Vtemp_26[7U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                    ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                     ^ 
                                                     (4U 
                                                      & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                         >> 1U))), 5U)))
                 ? 0U : (__Vtemp_26[(((IData)(0x0000001fU) 
                                      + (0x000000ffU 
                                         & VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                          ^ 
                                                          (4U 
                                                           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                              >> 1U))), 5U))) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
               | (__Vtemp_26[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                       >> 1U))), 5U) 
                                    >> 5U))] >> (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))));
    }
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__empty 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1;
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en) {
        __Vtemp_32[0U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0;
        __Vtemp_32[1U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1;
        __Vtemp_32[2U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2;
        __Vtemp_32[3U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3;
        __Vtemp_32[4U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4;
        __Vtemp_32[5U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5;
        __Vtemp_32[6U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))));
        __Vtemp_32[7U] = (IData)(((((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))) 
                                  >> 0x00000020U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                    ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                     ^ 
                                                     (4U 
                                                      & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                         >> 1U))), 5U)))
                 ? 0U : (__Vtemp_32[(((IData)(0x0000001fU) 
                                      + (0x000000ffU 
                                         & VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                          ^ 
                                                          (4U 
                                                           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                              >> 1U))), 5U))) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                   ^ 
                                                                   (4U 
                                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                       >> 1U))), 5U))))) 
               | (__Vtemp_32[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                       >> 1U))), 5U) 
                                    >> 5U))] >> (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T) 
                                                                  ^ 
                                                                  (4U 
                                                                   & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented) 
                                                                      >> 1U))), 5U))));
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__idle 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__beatsLeft));
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
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 0x0000002dU)));
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid));
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_extra_id 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arid 
            = (1U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x00000030U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 8U)));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_extra_id 
            = (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid) 
                     >> 1U));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arid 
            = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen));
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_extra_id 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awid 
            = (1U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x00000030U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 8U)));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_extra_id 
            = (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid) 
                     >> 1U));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awid 
            = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen));
    }
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__send));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_5 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_1 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_2 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_0 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_4 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_3 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data;
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr = 
        ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_valid)
          ? (0x000003ffU & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt) 
                            - (IData)(0x0024U))) : 0U);
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16 
        = (0x0001ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 
                          | ((0x00010000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                                             >> 3U)) 
                             | (0x0000ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 
                                               >> 2U)))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12 
        = (0x0001ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 
                          | ((0x00010000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                                             >> 3U)) 
                             | (0x0000ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 
                                               >> 2U)))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 
        = (0x0001ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 
                          | ((0x00010000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                                             >> 3U)) 
                             | (0x0000ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 
                                               >> 2U)))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
        = (0x0001ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
                          | ((0x00010000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                                             >> 3U)) 
                             | (0x0000ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
                                               >> 2U)))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
        = (0x0001ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN 
                          | ((0x00010000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                                             >> 3U)) 
                             | (0x0000ffffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN 
                                               >> 2U)))));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi42apb__DOT__state = vlSelfRef.__Vdly__axi42apb__DOT__state;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
        = (0x7fffffffU & (__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
                          | VL_SHIFTL_III(31,31,32, __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2, 2U)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__a_q__DOT__full = 0U;
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 
            (0x000001ffU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo) 
                            - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))));
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state 
            = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state;
        if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full)))) {
            vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__a_q__DOT__full 
                = vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full 
        = vlSelfRef.__Vdly__chipMaster__DOT__err__DOT__a_q__DOT__full;
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2), 2U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5 
        = (0x0000007fU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2) 
                          | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2), 2U)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__d_first_counter = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first_counter 
            = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__d_first_counter;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__state_0;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__beatsLeft 
            = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__beatsLeft;
        vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__a_q__DOT__full = 0U;
    } else {
        if (__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___d_first_T) {
            vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_first_beats1_decode_T 
                = (0x00000fffU & ((IData)(0x001fU) 
                                  << (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_size)));
            vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__d_first_counter 
                = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first)
                          ? ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_first_beats1_decode_T) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first_counter) 
                          - (IData)(1U))));
        }
        if (((IData)(__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_1) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_cam_sel_0))) {
            vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state 
                = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode)) 
                   << 1U);
        } else if ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_ready) 
                     & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__beatsLeft)) 
                        | (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_0))) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__winner_0))) {
            vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state = 1U;
        } else if (__PVT__chipMaster__DOT__atomics__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state = 3U;
        }
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first_counter 
            = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__d_first_counter;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__state_0;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__beatsLeft 
            = vlSelfRef.__Vdly__chipMaster__DOT__atomics__DOT__beatsLeft;
        if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full)))) {
            vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__a_q__DOT__full 
                = vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full 
        = vlSelfRef.__Vdly__chipMaster__DOT__ferr__DOT__a_q__DOT__full;
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_counter = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_first = 1U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count = 0U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_counter 
            = (0x000001ffU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_todo) 
                              - ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_wready) 
                                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_wvalid))));
        if (__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__unnamedblk1__DOT___c_first_T_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
                = (9U | ((0x000000c0U & ((- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last))))) 
                                         << 6U)) | 
                         (0x00000030U & ((- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_opcode)))) 
                                         << 4U))));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_first)
                                   ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_2)
                                   : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count) 
                                      - (IData)(1U))));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state 
                = (3U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                         >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state), 1U))));
        }
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3));
    vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d = 0U;
        vlSelfRef.__Vdly__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 = 0U;
    } else {
        vlSelfRef.__Vdly__axi4xbar_1__DOT__idle_3 = 
            (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
             | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
        }
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3 = vlSelfRef.__Vdly__axi4xbar_1__DOT__idle_3;
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__first = 1U;
        vlSelfRef.__Vdly__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 = 0U;
    } else {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__send) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__first 
                = (0U != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant) 
                          & ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last) 
                               << 5U) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last) 
                                          << 4U) | 
                                         ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last) 
                                          << 3U))) 
                             | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last) 
                                 << 2U) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last))))));
        }
        vlSelfRef.__Vdly__axi4xbar_1__DOT__idle_4 = 
            (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
             | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                | (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2;
        }
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4 = vlSelfRef.__Vdly__axi4xbar_1__DOT__idle_4;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4ram__DOT__w_full = vlSelfRef.__Vdly__axi4ram__DOT__w_full;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                 & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__full))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count = 0U;
    } else {
        if (__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT___d_first_T_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s_maybe_data 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last)) 
                         << 1U));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_first)
                                   ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_beats_d_T_2)
                                   : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count) 
                                      - (IData)(1U))));
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                = ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state) 
                     << 6U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s_maybe_data) 
                               << 4U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s_maybe_data) 
                                           << 2U) | 
                                          ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                                            ? 1U : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s_maybe_data))));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state 
                = (3U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
                         >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state), 1U))));
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state;
        if (__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__unnamedblk1__DOT___a_first_T_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                = (9U | ((0x000000c0U & ((- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_last))))) 
                                         << 6U)) | 
                         (0x00000030U & ((- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode) 
                                                         >> 2U))))) 
                                         << 4U))));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_first)
                                   ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_beats_a_T_5)
                                   : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count) 
                                      - (IData)(1U))));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state 
                = (3U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
                         >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state), 1U))));
        }
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_last_beats1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__axi4frag__DOT__len = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                            ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len)
                                            : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len));
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h6f8a9b67_0_0 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)));
    vlSelfRef.__PVT__axi4frag__DOT__len_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                              ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len_1)
                                              : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h6f8a9b67_0_1 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e;
    }
    vlSelfRef.__PVT__axi4frag__DOT___in_awready_T = 
        ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_17 
        = (0x00007fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16 
                          | ((0x00004000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                                             >> 5U)) 
                             | ((0x00002000U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 
                                                >> 4U)) 
                                | (0x00001fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16 
                                                  >> 4U))))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_13 
        = (0x00007fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12 
                          | ((0x00004000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                                             >> 5U)) 
                             | ((0x00002000U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 
                                                >> 4U)) 
                                | (0x00001fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12 
                                                  >> 4U))))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_9 
        = (0x00007fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 
                          | ((0x00004000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                                             >> 5U)) 
                             | ((0x00002000U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 
                                                >> 4U)) 
                                | (0x00001fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 
                                                  >> 4U))))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_5 
        = (0x00007fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
                          | ((0x00004000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                                             >> 5U)) 
                             | ((0x00002000U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
                                                >> 4U)) 
                                | (0x00001fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
                                                  >> 4U))))));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1 
        = (0x00007fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
                          | ((0x00004000U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                                             >> 5U)) 
                             | ((0x00002000U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN 
                                                >> 4U)) 
                                | (0x00001fffU & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
                                                  >> 4U))))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
        = (0x7fffffffU & (__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
                          | VL_SHIFTL_III(31,31,32, __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5, 4U)));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_bits_opcode 
        = ((0x17U >= (0x0000001fU & ((IData)(3U) * 
                                     (7U & ((vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[2U] 
                                             << 1U) 
                                            | (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                               >> 0x0000001fU))))))
            ? (7U & (0x00911240U >> (0x0000001fU & 
                                     ((IData)(3U) * 
                                      (7U & ((vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[2U] 
                                              << 1U) 
                                             | (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                                >> 0x0000001fU)))))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_last_beats1 
        = ((2U & vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[2U])
            ? 0U : (7U & (~ (7U & (((IData)(0x001fU) 
                                    << (7U & (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                              >> 0x00000019U))) 
                                   >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___GEN 
        = ((1U | (0x000000feU & ((~ ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                                     | VL_SHIFTL_III(7,7,32, (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5), 4U))) 
                                 << 1U))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free));
    __Vtableidx9 = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask;
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__wide_mask 
        = VysyxSoCFull__ConstPool__TABLE_h26272d93_0
        [__Vtableidx9];
    chipMaster__DOT__atomics__DOT____VdfgRegularize_hc48377f8_0_0 
        = (7U & (~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask) 
                       >> 1U))));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first_counter));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size) 
                    & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                 | ((~ (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
                        >> 1U)) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__idle 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__beatsLeft));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_free_0 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__winner_0 
        = (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_0 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__state_0));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__da_bits_opcode 
        = ((0x17U >= (0x0000001fU & ((IData)(3U) * 
                                     (7U & (IData)(
                                                   (vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                                    >> 0x0000003cU))))))
            ? (7U & (0x00911240U >> (0x0000001fU & 
                                     ((IData)(3U) * 
                                      (7U & (IData)(
                                                    (vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                                     >> 0x0000003cU)))))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_last_beats1 
        = ((1U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                          >> 0x0000003eU))) ? 0U : 
           (7U & (~ (7U & (((IData)(0x001fU) << (7U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                                            >> 0x00000036U)))) 
                           >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_bits_sink 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                 & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                    >> 0x00000010U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    }
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN 
        = (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arid)
                  ? (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__full))
                  : (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__full))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_2 
        = (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awid)
                  ? (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__full))
                  : (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__full))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count));
    if (vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_size 
            = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__R0_data) 
                     >> 8U));
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_source 
            = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__R0_data) 
                              >> 1U));
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_denied 
            = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_first)) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_denied_r));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_size 
            = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__R0_data) 
                     >> 8U));
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_source 
            = (0x0000007fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__R0_data) 
                              >> 1U));
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_denied = 0U;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                                                        | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               | (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__formatValid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send_REG 
        = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_first 
        = (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_i_bits_opcode 
        = (7U & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state))
                  ? (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__r_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_beats_bT_5 
        = (0x0000001fU & ((IData)(2U) + (((0x00000020U 
                                           & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                           ? 0U : (
                                                   (0x0000001eU 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 9U))) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > 
                                                      (0x0000000fU 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 9U))))) 
                                         + ((1U == 
                                             (7U & 
                                              (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                             ? (((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 << 1U) 
                                                | (6U 
                                                   > 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 9U))))
                                             : 0U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (4U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (7U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    }
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__full) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_last));
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_param 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_size 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 9U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_data 
            = (0x0000ffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                              >> 0x00000010U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_opcode 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_param 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_2));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_3));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_data 
            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_5));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_opcode 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_1));
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
            ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
            : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0_r);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address1 
        = ((2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
            ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
            : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address1_r);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_2 
        = (0x0000001fU & ((IData)(2U) + ((8U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                          ? ((0x0000001eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (3U 
                                                > (0x0000000fU 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))))
                                          : 0U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_size 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 9U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 0x00000010U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_opcode 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_3));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_2));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_5));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_opcode 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_1));
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_beats_d_T_2 
        = (0x0000001fU & (((8U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                            ? ((0x0000001eU & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))) 
                                               >> 2U)) 
                               | (3U > (0x0000000fU 
                                        & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 9U))))
                            : 0U) + ((4U == (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 3U))) 
                                     | (5U == (7U & 
                                               (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 3U))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_param 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data 
            = (0x0000ffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                              >> 0x00000010U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_size 
            = (0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                              >> 9U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 0x0000000dU));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode 
            = (7U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_param 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_2));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_data 
            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_size 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_3));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_4));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_1));
    }
    __Vtemp_36[0U] = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_36[1U] = 0U;
    __Vtemp_36[2U] = 0U;
    VL_SHIFTL_WWI(68,68,6, __Vtemp_37, __Vtemp_36, 
                  ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                   << 2U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
        = (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift 
           | __Vtemp_37[0U]);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
        = __Vtemp_37[1U];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U] 
        = (0x0000000fU & __Vtemp_37[2U]);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_beats_a_T_5 
        = (0x0000001fU & ((IData)(2U) + (((0x00000020U 
                                           & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                           ? 0U : (
                                                   (0x0000001eU 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 9U))) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > 
                                                      (0x0000000fU 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 9U))))) 
                                         + ((1U == 
                                             (7U & 
                                              (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                             ? (((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 << 1U) 
                                                | (6U 
                                                   > 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 9U))))
                                             : 0U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address1 
        = ((2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
            ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
            : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address1_r);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
            ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
            : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0_r);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    }
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3 
        = (7U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len)) 
                 | VL_SHIFTL_III(3,3,32, (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len)), 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN 
        = (0x0000003fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len) 
                           >> 1U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len) 
                                     >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14 
        = (7U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1)) 
                 | VL_SHIFTL_III(3,3,32, (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1)), 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_1 
        = (0x0000003fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1) 
                           >> 1U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1) 
                                     >> 2U)));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 
        = (1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)));
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last 
            = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1))) 
               || (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready)
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats = 1U;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_1)));
    if (((2U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
        }
    }
    if (((2U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_2)));
    if (((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
        }
    }
    if (((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow)));
    if (((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
        }
    }
    if (((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_4)));
    if (((0x00000010U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
        }
    }
    if (((0x00000010U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_3)));
    if (((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
        }
    }
    if (((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___GEN) 
                            >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_18 
        = (0x000007ffU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_17) 
                          | ((0x00000400U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                                             >> 9U)) 
                             | ((0x00000200U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 
                                                >> 8U)) 
                                | ((0x00000180U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16 
                                                   >> 8U)) 
                                   | (0x0000007fU & 
                                      ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_17) 
                                       >> 8U)))))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_14 
        = (0x000007ffU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_13) 
                          | ((0x00000400U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                                             >> 9U)) 
                             | ((0x00000200U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 
                                                >> 8U)) 
                                | ((0x00000180U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12 
                                                   >> 8U)) 
                                   | (0x0000007fU & 
                                      ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_13) 
                                       >> 8U)))))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_10 
        = (0x000007ffU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_9) 
                          | ((0x00000400U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                                             >> 9U)) 
                             | ((0x00000200U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 
                                                >> 8U)) 
                                | ((0x00000180U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 
                                                   >> 8U)) 
                                   | (0x0000007fU & 
                                      ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_9) 
                                       >> 8U)))))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_6 
        = (0x000007ffU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_5) 
                          | ((0x00000400U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                                             >> 9U)) 
                             | ((0x00000200U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
                                                >> 8U)) 
                                | ((0x00000180U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
                                                   >> 8U)) 
                                   | (0x0000007fU & 
                                      ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_5) 
                                       >> 8U)))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_2 
        = (0x000007ffU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1) 
                          | ((0x00000400U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                                             >> 9U)) 
                             | ((0x00000200U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN 
                                                >> 8U)) 
                                | ((0x00000180U & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
                                                   >> 8U)) 
                                   | (0x0000007fU & 
                                      ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1) 
                                       >> 8U)))))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
        = (0x7fffffffU & (__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
                          | VL_SHIFTL_III(31,31,32, __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8, 8U)));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__r_beats1 
        = ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_bits_opcode))
            ? (7U & (~ (7U & (((IData)(0x001fU) << 
                               (7U & (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                      >> 0x00000019U))) 
                              >> 2U)))) : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_last_beats1)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T_1 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___GEN) 
                  >> 5U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___GEN) 
                            >> 1U)));
    __PVT__chipMaster__DOT__atomics__DOT___signbit_a_T 
        = ((IData)(chipMaster__DOT__atomics__DOT____VdfgRegularize_hc48377f8_0_0) 
           & ((4U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                     >> 0x00000015U)) | ((2U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x0000000eU)) 
                                         | (1U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                  >> 7U)))));
    __PVT__chipMaster__DOT__atomics__DOT___signbit_d_T 
        = ((IData)(chipMaster__DOT__atomics__DOT____VdfgRegularize_hc48377f8_0_0) 
           & ((4U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                     >> 0x00000015U)) | ((2U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                >> 0x0000000eU)) 
                                         | (1U & (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                  >> 7U)))));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_corrupt 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__muxState_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__r_beats1 
        = ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__da_bits_opcode))
            ? (7U & (~ (7U & (((IData)(0x001fU) << 
                               (7U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                              >> 0x00000036U)))) 
                              >> 2U)))) : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_last_beats1)));
    __VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_0) 
                                      & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_denied));
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)) 
           & ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
              & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_i_ready 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_i_bits_opcode)) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
              & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_beats_bT_5))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_address 
        = (((((~ (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0 
                  >> 0x0000001fU)) & ((0ULL == (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address1)) 
                                                 << 0x00000014U) 
                                                | (QData)((IData)(
                                                                  ((0x000ffffeU 
                                                                    & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0 
                                                                       >> 0x0000000cU)) 
                                                                   | (1U 
                                                                      & (~ 
                                                                         (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0 
                                                                          >> 0x0000000cU)))))))) 
                                      | (0ULL == (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address1)) 
                                                   << 2U) 
                                                  | (QData)((IData)(
                                                                    (3U 
                                                                     & (~ 
                                                                        (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0 
                                                                         >> 0x0000001eU)))))))))
              ? (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0 
                 >> 0x0000000cU) : 1U) << 0x0000000cU) 
           | (0x00000fffU & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
              & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_2))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5 
        = (IData)((6U == (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_opcode))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release 
        = ((6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_opcode)) 
           | (7U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_opcode)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_source 
        = (0x0000000fU & (((0x00000f00U & ((0xfedcba98U 
                                            >> (0x0000001fU 
                                                & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source), 2U))) 
                                           << 8U)) 
                           | (((0x17U >= (0x0000001fU 
                                          & ((IData)(3U) 
                                             * (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source))))
                                ? (7U & (0x00fac688U 
                                         >> (0x0000001fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source)))))
                                : 0U) << 4U)) >> (0x0000001fU 
                                                  & VL_SHIFTL_III(5,5,32, 
                                                                  (7U 
                                                                   & ((0U 
                                                                       == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
                                                                       ? 
                                                                      (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                       >> 0x0000000dU)
                                                                       : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_4))), 2U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
              & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_beats_d_T_2))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_corrupt 
        = (IData)((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                    >> 2U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_opcode)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant 
        = ((4U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_opcode)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count)) 
              & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_beats_a_T_5))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall 
        = ((~ (((((((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
                    << 3U) | ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
                              << 2U)) | (((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)))) 
                 << 4U) | ((((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
                             << 3U) | ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
                                       << 2U)) | ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free))))) 
               >> (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_sub_0_1 
        = (1U & ((0U != (0x0eU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_size))) 
                 | ((~ (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                        >> 1U)) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_size))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_sub_1_1 
        = (1U & ((0U != (0x0eU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_size))) 
                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_size) 
                    & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                       >> 1U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode)) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_address 
        = (((((~ (((6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode)) 
                   | (7U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode))) 
                  & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                     >> 0x0000001fU))) & ((0ULL == 
                                           (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address1)) 
                                             << 0x00000014U) 
                                            | (QData)((IData)(
                                                              ((0x000ffffeU 
                                                                & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                                                                   >> 0x0000000cU)) 
                                                               | (1U 
                                                                  & (~ 
                                                                     (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                                                                      >> 0x0000000cU)))))))) 
                                          | (0ULL == 
                                             (((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address1)) 
                                               << 2U) 
                                              | (QData)((IData)(
                                                                (3U 
                                                                 & (~ 
                                                                    (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                                                                     >> 0x0000001eU)))))))))
              ? (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                 >> 0x0000000cU) : 1U) << 0x0000000cU) 
           | (0x00000fffU & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_0 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN) 
                          | ((0x00000010U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len) 
                                             >> 3U)) 
                             | (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN) 
                                               >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_2 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_1) 
                          | ((0x00000010U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1) 
                                             >> 3U)) 
                             | (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_1) 
                                               >> 2U)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 = 0U;
    } else {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0;
        if ((2U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0;
        if ((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0;
        if ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0;
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0 
            = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0;
        if ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
        }
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_4 
        = ((((0x00000080U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                             >> 0x0000000cU)) | ((0x00000040U 
                                                  & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 
                                                     >> 0x0000000bU)) 
                                                 | ((0x00000030U 
                                                     & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16 
                                                        >> 0x0000000bU)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_17) 
                                                          >> 0x0000000bU))))) 
            << 0x0000000bU) | ((0x000007f8U & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_18)) 
                               | (7U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_18) 
                                        | ((4U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                                                  >> 0x00000011U)) 
                                           | ((2U & 
                                               (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_15 
                                                >> 0x00000010U)) 
                                              | (1U 
                                                 & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_16 
                                                    >> 0x00000010U))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_3 
        = ((((0x00000080U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                             >> 0x0000000cU)) | ((0x00000040U 
                                                  & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 
                                                     >> 0x0000000bU)) 
                                                 | ((0x00000030U 
                                                     & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12 
                                                        >> 0x0000000bU)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_13) 
                                                          >> 0x0000000bU))))) 
            << 0x0000000bU) | ((0x000007f8U & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_14)) 
                               | (7U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_14) 
                                        | ((4U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                                                  >> 0x00000011U)) 
                                           | ((2U & 
                                               (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_11 
                                                >> 0x00000010U)) 
                                              | (1U 
                                                 & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_12 
                                                    >> 0x00000010U))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_2 
        = ((((0x00000080U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                             >> 0x0000000cU)) | ((0x00000040U 
                                                  & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 
                                                     >> 0x0000000bU)) 
                                                 | ((0x00000030U 
                                                     & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 
                                                        >> 0x0000000bU)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_9) 
                                                          >> 0x0000000bU))))) 
            << 0x0000000bU) | ((0x000007f8U & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_10)) 
                               | (7U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_10) 
                                        | ((4U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                                                  >> 0x00000011U)) 
                                           | ((2U & 
                                               (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_7 
                                                >> 0x00000010U)) 
                                              | (1U 
                                                 & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 
                                                    >> 0x00000010U))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_1 
        = ((((0x00000080U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                             >> 0x0000000cU)) | ((0x00000040U 
                                                  & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
                                                     >> 0x0000000bU)) 
                                                 | ((0x00000030U 
                                                     & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
                                                        >> 0x0000000bU)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_5) 
                                                          >> 0x0000000bU))))) 
            << 0x0000000bU) | ((0x000007f8U & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_6)) 
                               | (7U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_6) 
                                        | ((4U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                                                  >> 0x00000011U)) 
                                           | ((2U & 
                                               (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
                                                >> 0x00000010U)) 
                                              | (1U 
                                                 & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
                                                    >> 0x00000010U))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask 
        = ((((0x00000080U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                             >> 0x0000000cU)) | ((0x00000040U 
                                                  & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN 
                                                     >> 0x0000000bU)) 
                                                 | ((0x00000030U 
                                                     & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
                                                        >> 0x0000000bU)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1) 
                                                          >> 0x0000000bU))))) 
            << 0x0000000bU) | ((0x000007f8U & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_2)) 
                               | (7U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_2) 
                                        | ((4U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                                                  >> 0x00000011U)) 
                                           | ((2U & 
                                               (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN 
                                                >> 0x00000010U)) 
                                              | (1U 
                                                 & (__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
                                                    >> 0x00000010U))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___GEN 
        = ((1U | ((~ (__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                      | VL_SHIFTL_III(31,31,32, __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11, 0x00000010U))) 
                  << 1U)) & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free);
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__full) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_last) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__idle)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T_1))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___GEN) 
                                   >> 4U))) << 2U) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T_1) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T_1))))));
    __PVT__chipMaster__DOT__atomics__DOT___signext_a_T_2 
        = (((IData)(__PVT__chipMaster__DOT__atomics__DOT___signbit_a_T) 
            << 1U) | (0x0000000cU & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signbit_a_T) 
                                     << 2U)));
    __PVT__chipMaster__DOT__atomics__DOT___signext_d_T_2 
        = (((IData)(__PVT__chipMaster__DOT__atomics__DOT___signbit_d_T) 
            << 1U) | (0x0000000cU & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signbit_d_T) 
                                     << 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__winner_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_last) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__idle)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                    ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                    : 0U));
    }
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                  << 2U)) 
                                  | (((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))) 
                                 | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx6];
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
              | (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                  << 2U)) 
                                  | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                                     << 1U)) | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx7];
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_last) 
           | (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                    ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                    : 0U));
    }
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__muxState_0 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__beatsLeft))
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_0)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__state_0));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_param 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__muxState_0)
            ? (3U & (0x69U >> (7U & VL_SHIFTL_III(3,3,32, 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                                              >> 0x00000038U))), 1U))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last) 
           | (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state)));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_param = 5U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_size = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_opcode = 4U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_param 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_param;
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_size 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_size;
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_opcode;
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5 
        = (IData)((6U == (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_opcode))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release)) 
               | (0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                    ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                    : 0U));
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last) 
           | (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)) 
               | (0U != vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                    ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                    : 0U));
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_last) 
           | (3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_mask 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode))
            ? ((((2U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                        >> 0x0000001aU)) | (1U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                  >> 0x00000012U))) 
                << 2U) | ((2U & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                 >> 8U)) | (1U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U])))
            : ((((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_sub_1_1) 
                         | ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0 
                             >> 1U) & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0)) 
                        << 1U)) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_sub_1_1) 
                                   | (2U == (3U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0)))) 
                << 2U) | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_sub_0_1) 
                            | (1U == (3U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_sub_0_1) 
                                     | (0U == (3U & vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0))))));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address = 0U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_param;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_size));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data 
            = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode))
                ? ((((0x0000ff00U & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
                                      << 0x0000000cU) 
                                     | (0x00000f00U 
                                        & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x00000014U)))) 
                     | (0x000000ffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                       >> 0x00000013U))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 2U)) 
                                       | (0x000000ffU 
                                          & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                             >> 1U))))
                : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_opcode;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_address;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                : ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                    ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                    : 0U));
    }
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data = 1U;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) 
               && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_data = 1U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_beats = 3U;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data = 2U;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) 
               && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_data = 2U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats = 3U;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_valid));
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
    }
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = (4U | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                           ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                           : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                          [0U]) << 0x00000010U));
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last 
            = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1))) 
               || (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data 
            = (4U | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en) 
                       & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)))
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data)
                       : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                      [0U]) << 0x00000010U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats = 1U;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowReturn 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0) 
                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0) 
                        | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                              | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0))))) 
                    & (0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__xmit)))));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 = 0U;
    } else {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready) {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) 
                   | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 
                = ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
            vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
                = (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
        }
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) 
             | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last;
            vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready)
          ? ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1))
          : ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats;
    }
    vlSelfRef.__VdfgRegularize_h1440c274_1_5 = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first)
                                                  ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_addr)
                                                  : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__source_r))
                                                 : 0U);
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_address = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source = 0U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_address 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_address;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source 
            = vlSelfRef.__VdfgRegularize_h1440c274_1_5;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4 
        = (0x000fffffU & (~ ((0x00080000U & ((~ (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                                                 >> 0x00000013U)) 
                                             << 0x00000013U)) 
                             | (0x0007ffffU & ((~ vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e) 
                                               | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_4)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3 
        = (0x000fffffU & (~ ((0x00080000U & ((~ (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                                                 >> 0x00000013U)) 
                                             << 0x00000013U)) 
                             | (0x0007ffffU & ((~ vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d) 
                                               | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_3)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2 
        = (0x000fffffU & (~ ((0x00080000U & ((~ (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                                                 >> 0x00000013U)) 
                                             << 0x00000013U)) 
                             | (0x0007ffffU & ((~ vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c) 
                                               | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_2)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1 
        = (0x000fffffU & (~ ((0x00080000U & ((~ (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                                                 >> 0x00000013U)) 
                                             << 0x00000013U)) 
                             | (0x0007ffffU & ((~ vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b) 
                                               | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask_1)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH 
        = (0x000fffffU & (~ ((0x00080000U & ((~ (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                                                 >> 0x00000013U)) 
                                             << 0x00000013U)) 
                             | (0x0007ffffU & ((~ vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a) 
                                               | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__mask)))));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1 
        = (0x00007fffU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___GEN 
                           >> 0x00000011U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___GEN 
                                              >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_0)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__beatsLeft))) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_0) 
               | (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_valid));
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied 
            = vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_1;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid 
            = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__state_0) 
                & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_0)) 
               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__state_1) 
                  & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_valid)));
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied 
            = vlSelfRef.__PVT__chipMaster__DOT__err__DOT__state_1;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN 
        = ((((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_addr) 
               << 9U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_addr) 
                         << 6U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_addr) 
                                     << 3U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_addr))) 
            << 0x0000000cU) | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_addr) 
                                 << 9U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_addr) 
                                           << 6U)) 
                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_addr) 
                                   << 3U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_addr))));
    __PVT__chipMaster__DOT__atomics__DOT___signext_a_T_6 
        = (0x0000000fU & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_a_T_2) 
                          | VL_SHIFTL_III(4,4,32, (IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_a_T_2), 2U)));
    __PVT__chipMaster__DOT__atomics__DOT___signext_d_T_6 
        = (0x0000000fU & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_d_T_2) 
                          | VL_SHIFTL_III(4,4,32, (IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_d_T_2), 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__beatsLeft))
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__winner_1)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__state_1));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid 
        = ((IData)(vlSelfRef.chipMaster__DOT__ferr__DOT____VdfgRegularize_hccb144a8_0_2) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__winner_1));
    if (vlSelfRef.__VdlySet__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit)) 
                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_i_ready)));
    if (vlSelfRef.__VdlySet__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
                    & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_ready))));
    if (vlSelfRef.__VdlySet__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__mapPP 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) 
           | ((5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode)) 
              & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                 >> 0x0000001fU)));
    if (vlSelfRef.__VdlySet__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0;
    if (vlSelfRef.__VdlySet__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory[vlSelfRef.__VdlyDim0__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_data 
        = (0x0000ffffU & ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
                           ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                           : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_sink_r)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowReturn) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1;
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_54 
        = (0x00007fffU & ((0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                          >> 0x00000010U)) 
                          | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_41 
        = (0x00007fffU & ((0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                          >> 0x00000010U)) 
                          | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_28 
        = (0x00007fffU & ((0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                          >> 0x00000010U)) 
                          | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_15 
        = (0x00007fffU & ((0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                          >> 0x00000010U)) 
                          | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2 
        = (0x00007fffU & ((0x0000000fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH 
                                          >> 0x00000010U)) 
                          | vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3 
        = (0x0000007fU & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                           >> 8U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    __PVT__chipMaster__DOT__xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_mask)) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid) 
              << 1U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_source 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain) 
            << 3U) | (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)
                             ? ((0x17U >= (0x0000001fU 
                                           & ((IData)(3U) 
                                              * (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain))))
                                 ? (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN 
                                    >> (0x0000001fU 
                                        & ((IData)(3U) 
                                           * (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain))))
                                 : 0U) : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__source_r))));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source = 0U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_mask;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_source;
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size 
            = vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_size;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
            = vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_address;
        vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source 
            = vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_source;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
        vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    }
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_a_ext 
        = ((vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__wide_mask) 
           | ((((0x0000ff00U & ((- (IData)((1U & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_a_T_6) 
                                                  >> 3U)))) 
                                << 8U)) | (0x000000ffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_a_T_6) 
                                                            >> 2U)))))) 
               << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_a_T_6) 
                                                                 >> 1U)))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (- (IData)((1U 
                                                 & (IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_a_T_6))))))));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_d_ext 
        = ((vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
            & vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__wide_mask) 
           | ((((0x0000ff00U & ((- (IData)((1U & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_d_T_6) 
                                                  >> 3U)))) 
                                << 8U)) | (0x000000ffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_d_T_6) 
                                                            >> 2U)))))) 
               << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_d_T_6) 
                                                                 >> 1U)))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (- (IData)((1U 
                                                 & (IData)(__PVT__chipMaster__DOT__atomics__DOT___signext_d_T_6))))))));
    if (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size 
            = (7U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                             >> 0x00000036U)));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__ram 
                                      >> 0x00000032U)));
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__da_bits_opcode;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt 
            = (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__da_bits_opcode));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt = 0U;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)
                           ? (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) 
                               & (0x0000001fU == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                           : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 1U) & (IData)(vlSelfRef.__PVT__lmrom__DOT__state));
    vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 2U) & (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid 
            = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2))));
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
          >> 2U) & (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full));
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
               | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)
                           ? (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) 
                               & (0x0000001fU == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                           : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)
                           ? (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) 
                               & (0x0000001fU == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                           : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)
                           ? (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) 
                               & (0x0000001fU == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                           : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id 
        = ((2U & ((~ (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
                      >> 0x0000001fU)) << 1U)) | (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
                                                  >> 0x0000001fU));
    if (vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__mapPP) {
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_mask = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode = 1U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_mask 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)
                           ? (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) 
                               & (0x0000001fU == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                           : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data_REG;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_1 
        = (0x001fffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_b 
                          - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_2 
        = (0x001fffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_c 
                          - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta 
        = (0x001fffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_a 
                          - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_4 
        = (0x001fffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_e 
                          - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests 
        = ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_valid) 
             << 5U) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                        << 4U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                  << 3U))) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_3 
        = (0x001fffffU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_d 
                          - (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56 
        = (0x0000007fU & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_54) 
                           >> 8U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_54)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43 
        = (0x0000007fU & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_41) 
                           >> 8U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_41)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30 
        = (0x0000007fU & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_28) 
                           >> 8U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_28)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17 
        = (0x0000007fU & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_15) 
                           >> 8U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_15)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4 
        = (0x0000007fU & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                           >> 8U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2)));
    __PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5 
        = (7U & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3) 
                  >> 4U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_corrupt 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_bits_opcode));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_size 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__muxState_0)
                   ? (IData)((vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                              >> 0x00000035U)) : 0U) 
                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied)
                     ? ((vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                         << 7U) | (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                   >> 0x00000019U))
                     : 0U)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__muxState_0)
             ? 6U : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied)
                            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_bits_opcode)
                            : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_source 
        = (0x0000007fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__muxState_0)
                            ? (IData)((vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                       >> 0x0000002eU))
                            : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied)
                                      ? ((vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                          << 0x0000000eU) 
                                         | (vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__ram[1U] 
                                            >> 0x00000012U))
                                      : 0U)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_unready 
        = (((4U & ((IData)(__PVT__chipMaster__DOT__xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(__PVT__chipMaster__DOT__xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid)) 
                              | (IData)(__PVT__chipMaster__DOT__xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_mask) 
              << 2U));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT___adder_out_T 
        = (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_a_ext 
           + ((- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param) 
                                   >> 2U))))) ^ vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_d_ext));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_beats1 
        = ((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode))
            ? 0U : (7U & (~ (7U & (((IData)(0x001fU) 
                                    << (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size)) 
                                   >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_isSupported 
        = ((3U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode)) 
           & (2U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
        = vlSelfRef.__Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_1)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_2)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_2)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_4)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_4)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_3)) 
                 | VL_LTS_III(21, 0x001fffffU, vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_3)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58 
        = (7U & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56) 
                  >> 4U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45 
        = (7U & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43) 
                  >> 4U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32 
        = (7U & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30) 
                  >> 4U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19 
        = (7U & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                  >> 4U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17)));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6 
        = (7U & (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4) 
                  >> 4U) | (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr 
        = ((((0U != (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___GEN 
                     >> 0x00000010U)) << 4U) | (((0U 
                                                  != 
                                                  (0x000000ffU 
                                                   & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                                                      >> 7U))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (0x0000000fU 
                                                     & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3) 
                                                        >> 3U))) 
                                                   << 2U))) 
           | (((0U != (3U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5) 
                             >> 1U))) << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5))))));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_unready))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr));
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
                                                 ? (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_id)
                                                 : 0U))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (3U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data)
                   : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                            ? ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                               >> 2U) : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                ? (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_id)
                                                : 0U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_repeat 
        = ((~ ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter)) 
               | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_beats1)))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__mapPP));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_allow 
        = ((~ (((3U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
                | (2U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state))) 
               & ((1U & (~ (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
                            >> 0x0000001fU))) == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_fifoId)))) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__a_isSupported) 
              | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr));
    vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgRegularize_hba5658a2_0_0 
        = (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__formatValid)
                  ? vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                  : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__format_r)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data_REG 
        = vlSymsp->TOP__ysyxSoCFull.__PVT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_2;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_4));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19 
        = (((0x000003e0U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                            << 5U)) | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_valid) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                                      << 2U))) 
                                       | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)))) 
           | (((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
               << 4U) | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_valid) 
                           << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                                     << 2U)) | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_3));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data 
        = (5U | (((((((((0U != (0x0000001fU & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                               >> 0x0000000fU))) 
                        << 3U) | ((0U != (0x000000ffU 
                                          & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_54) 
                                             >> 7U))) 
                                  << 2U)) | (((0U != 
                                               (0x0000000fU 
                                                & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56) 
                                                   >> 3U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58) 
                                                    >> 1U))))) 
                     << 0x0000000cU) | (((((IData)(
                                                   (0U 
                                                    != 
                                                    (5U 
                                                     & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58)))) 
                                           << 3U) | 
                                          ((0U != (0x0000001fU 
                                                   & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                                      >> 0x0000000fU))) 
                                           << 2U)) 
                                         | (((0U != 
                                              (0x000000ffU 
                                               & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_41) 
                                                  >> 7U))) 
                                             << 1U) 
                                            | (0U != 
                                               (0x0000000fU 
                                                & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43) 
                                                   >> 3U))))) 
                                        << 8U)) | (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45) 
                                                            >> 1U))) 
                                                       << 3U) 
                                                      | ((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (5U 
                                                                   & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45)))) 
                                                         << 2U)) 
                                                     | (((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                                              >> 0x0000000fU))) 
                                                         << 1U) 
                                                        | (0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_28) 
                                                               >> 7U))))) 
                                                    << 4U) 
                                                   | ((((0U 
                                                         != 
                                                         (0x0000000fU 
                                                          & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30) 
                                                             >> 3U))) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32) 
                                                               >> 1U))) 
                                                          << 2U)) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (5U 
                                                                    & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32)))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                                                >> 0x0000000fU))))))) 
                  << 0x00000010U) | (((((((0U != (0x000000ffU 
                                                  & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_15) 
                                                     >> 7U))) 
                                          << 3U) | 
                                         ((0U != (0x0000000fU 
                                                  & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                                                     >> 3U))) 
                                          << 2U)) | 
                                        (((0U != (3U 
                                                  & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19) 
                                                     >> 1U))) 
                                          << 1U) | (IData)(
                                                           (0U 
                                                            != 
                                                            (5U 
                                                             & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19)))))) 
                                       << 0x0000000cU) 
                                      | (((((0U != 
                                             (0x0000001fU 
                                              & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH 
                                                 >> 0x0000000fU))) 
                                            << 3U) 
                                           | ((0U != 
                                               (0x000000ffU 
                                                & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                                                   >> 7U))) 
                                              << 2U)) 
                                          | (((0U != 
                                               (0x0000000fU 
                                                & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4) 
                                                   >> 3U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                                                    >> 1U))))) 
                                         << 8U)) | 
                                     ((IData)((0U != 
                                               (5U 
                                                & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6)))) 
                                      << 7U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_sink 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr)
                : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__winner_1 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft))) {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_valid 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid;
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__winner_1;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_valid 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__state_1));
        vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__state_1;
    }
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_source 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
            << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__mapPP));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stall 
        = ((IData)((((8U == (0x38U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                     & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                    & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_16) 
                        | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_17) 
                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_18) 
                              | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_19) 
                                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_20) 
                                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_21) 
                                       | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_22) 
                                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_23) 
                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_24) 
                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_25) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_26) 
                                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_27) 
                                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_28) 
                                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_29) 
                                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_30) 
                                                                  | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_31)))))))))))))))) 
                       & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id) 
                             != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
           | ((IData)((((0x10U == (0x38U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                        & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                       & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_32) 
                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_33) 
                              | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_34) 
                                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_35) 
                                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_36) 
                                       | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_37) 
                                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_38) 
                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_39) 
                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_40) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_41) 
                                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_42) 
                                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_43) 
                                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_44) 
                                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_45) 
                                                                  | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_46) 
                                                                     | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_47)))))))))))))))) 
                          & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_1) 
                                != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
              | ((IData)((((0x18U == (0x38U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                          & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_48) 
                              | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_49) 
                                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_50) 
                                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_51) 
                                       | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_52) 
                                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_53) 
                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_54) 
                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_55) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_56) 
                                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_57) 
                                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_58) 
                                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_59) 
                                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_60) 
                                                                  | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_61) 
                                                                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_62) 
                                                                        | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_63)))))))))))))))) 
                             & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_2) 
                                   != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                 | ((IData)((((0x20U == (0x38U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                              & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                             & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_64) 
                                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_65) 
                                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_66) 
                                       | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_67) 
                                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_68) 
                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_69) 
                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_70) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_71) 
                                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_72) 
                                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_73) 
                                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_74) 
                                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_75) 
                                                                  | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_76) 
                                                                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_77) 
                                                                        | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_78) 
                                                                           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_79)))))))))))))))) 
                                & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_3) 
                                      != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                    | ((IData)((((0x28U == (0x38U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                                 & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                                & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_80) 
                                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_81) 
                                       | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_82) 
                                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_83) 
                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_84) 
                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_85) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_86) 
                                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_87) 
                                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_88) 
                                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_89) 
                                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_90) 
                                                                  | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_91) 
                                                                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_92) 
                                                                        | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_93) 
                                                                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_94) 
                                                                              | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_95)))))))))))))))) 
                                   & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_4) 
                                         != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                       | ((IData)((((0x30U == (0x38U 
                                               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                                    & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                                   & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_96) 
                                       | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_97) 
                                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_98) 
                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_99) 
                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_100) 
                                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_101) 
                                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_102) 
                                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_103) 
                                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_104) 
                                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_105) 
                                                                  | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_106) 
                                                                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_107) 
                                                                        | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_108) 
                                                                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_109) 
                                                                              | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_110) 
                                                                                | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_111)))))))))))))))) 
                                      & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_5) 
                                            != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                          | (IData)((((0x38U == (0x38U 
                                                 & (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                                      & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                                     & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_112) 
                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_113) 
                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_114) 
                                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_115) 
                                                  | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_116) 
                                                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_117) 
                                                        | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_118) 
                                                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_119) 
                                                              | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_120) 
                                                                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_121) 
                                                                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_122) 
                                                                       | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_123) 
                                                                          | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_124) 
                                                                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_125) 
                                                                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_126) 
                                                                                | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__flight_127)))))))))))))))) 
                                        & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__stalls_id_6) 
                                              != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__a_id))))))))))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last 
        = (1U & ((((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                       << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                 << 2U)) | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last))) 
                    << 0x0000000cU) | (((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last))) 
                                       << 8U)) | ((
                                                   ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & ((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgRegularize_hba5658a2_0_0)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgRegularize_hba5658a2_0_0)) 
              >> 1U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgRegularize_hba5658a2_0_0)) 
              >> 2U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgRegularize_hba5658a2_0_0)) 
              >> 3U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (((IData)(1U) << (IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgRegularize_hba5658a2_0_0)) 
              >> 4U));
    __PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20 
        = (0x000001ffU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                          | ((0x00000100U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                             << 3U)) 
                             | (0x000000ffU & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                               >> 2U)))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_valid)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_valid)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_valid)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_valid)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_valid)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready 
        = (((0x00000400U & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                            << 5U)) | ((0x00000200U 
                                        & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19)) 
                                       | ((0x00000180U 
                                           & (IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20)) 
                                          | (0x0000007fU 
                                             & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                                | ((0x00000040U 
                                                    & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                                       << 1U)) 
                                                   | ((0x00000020U 
                                                       & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                                          >> 4U)) 
                                                      | (0x0000001fU 
                                                         & ((IData)(__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                                            >> 4U))))))))) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask) 
              << 6U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_corrupt)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_param 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1)
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_param)
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_denied 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_size 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_size)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_size)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__tl2axi4__DOT__r_holds_d)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_source 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_bits_source)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__muxState_1)
                       ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_source)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (0x0000003fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready) 
                           >> 6U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready)));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_cam_sel_0 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_source) 
            == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source)) 
           & (0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_s_0_state)));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__winner 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__first) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__send 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x0000003fU & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__winner;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__send 
            = (0U != ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__state) 
                      & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x0000003fU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__state));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__state;
    }
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_drop 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first_counter)) 
           & ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_cam_sel_0)));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_replace 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_first_counter)) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode)) 
              & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_cam_sel_0)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowReturn) 
           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
              >> 5U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_drop));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_drop)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_valid));
    if (vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_replace) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_corrupt 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_denied) 
               | (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data 
            = vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_data;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_opcode = 1U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_corrupt 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_corrupt;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_opcode 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_denied 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__d_replace) 
            & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__cam_d_0_denied)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_denied));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__beatsLeft))
               ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__state_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_valid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_valid));
    __VdfgRegularize_h1440c274_1_8 = (IData)((4U == 
                                              (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_opcode))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_opcode 
        = ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_source))
            ? 2U : (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_opcode));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                             >> 0x00000029U)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source 
            = (0x0000003fU & (IData)((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                      >> 0x00000023U)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode 
            = (7U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                             >> 0x0000002eU)));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_size));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_source) 
                              >> 1U));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_opcode));
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T_3) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)((4U == (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode))))));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_q__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__c_last)) 
                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
                    & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__beatsLeft)) 
                       | (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__state_0)))));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__beatsLeft))
               ? (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__winner_0))
               : (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__state_1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_valid));
    vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(__VdfgRegularize_h1440c274_1_8)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(__VdfgRegularize_h1440c274_1_8)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_valid) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1)) 
              & (6U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_opcode))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_valid) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_opcode))));
    __VdfgRegularize_h1440c274_1_4 = (IData)((4U == 
                                              (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_opcode))));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T_3) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)((4U == (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode))))));
    vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_q__DOT__io_deq_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__a_last)) 
                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__da_ready) 
                    & (((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__r_counter)) 
                        | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__r_beats1))) 
                       & (IData)(vlSelfRef.__PVT__chipMaster__DOT__err__DOT__idle)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_valid) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(__VdfgRegularize_h1440c274_1_4)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_set 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3)) 
              & (IData)(__VdfgRegularize_h1440c274_1_4)));
    vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(__VdfgRegularize_h1440c274_1_4)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_beats1 
        = ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
            ? (7U & (~ (7U & (((IData)(0x001fU) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)) 
                              >> 2U)))) : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant 
        = ((4U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)));
    vlSelfRef.chipMaster__DOT__chiplink__DOT__sinkD__DOT____VdfgRegularize_hd99deeaa_0_0 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_beats1)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats 
        = (0x0000001fU & ((IData)(1U) + (((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                                           ? ((0x0000001eU 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)) 
                                                  >> 2U)) 
                                              | (3U 
                                                 > (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)))
                                           : 0U) + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state) 
           == ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                ? 2U : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid 
        = ((IData)(vlSelfRef.chipMaster__DOT__chiplink__DOT__sinkD__DOT____VdfgRegularize_hd99deeaa_0_0) 
           & (6U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_ready))) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata;
    __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata = 0;
    CData/*0:0*/ __Vdly__lspi__DOT__mspi__DOT__spictrl_pready;
    __Vdly__lspi__DOT__mspi__DOT__spictrl_pready = 0;
    SData/*13:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__spi_sck;
    __Vdly__spi_sck = 0;
    CData/*7:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*2:0*/ __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0;
    IData/*23:0*/ __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0;
    IData/*18:0*/ __VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    __VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    SData/*12:0*/ __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*2:0*/ __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    // Body
    vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__spi_sck = vlSelfRef.__PVT__spi_sck;
    __Vdly__lspi__DOT__mspi__DOT__spictrl_pready = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0U;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0U;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__spi_sck = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                  & (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                 & ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                    | (IData)(vlSelfRef.__PVT__spi_sck)))
                                 ? (~ (IData)(vlSelfRef.__PVT__spi_sck))
                                 : (IData)(vlSelfRef.__PVT__spi_sck))));
    __Vdly__lspi__DOT__mspi__DOT__spictrl_pready = 
        ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable) 
                                             & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel)) 
                                            & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready))));
    vlSelfRef.__PVT___lspi_auto_in_pslverr = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((2U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                                                  && ((1U 
                                                       == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                                                       ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr)
                                                       : (IData)(vlSelfRef.__PVT___lspi_auto_in_pslverr))));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((((0x01e0U > (0x000003ffU & VL_DIV_III(32, 
                                                   VL_MODDIV_III(32, 
                                                                 VL_SHIFTR_III(32,32,32, 
                                                                               ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))) 
              & (0x0280U > (0x000003ffU & VL_MODDIV_III(32, 
                                                        VL_MODDIV_III(32, 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))))) 
             & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                & ((~ (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable)) 
                   & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))))) {
            vlSelfRef.lvga__DOT__mvga__DOT__vmem_inst__DOT____Vlvbound_heacdd1d6__0 
                = (0x00ffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i);
            if ((0x0004afffU >= vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr)) {
                __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 
                    = vlSelfRef.lvga__DOT__mvga__DOT__vmem_inst__DOT____Vlvbound_heacdd1d6__0;
                __VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 
                    = vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr;
                __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__spi_mosi = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                       & ((1U & (((0U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                  & ((0x00000400U 
                                                      & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                      ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                                      : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) 
                                                 | (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                           ? (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                              (3U & 
                                               (((0x00000800U 
                                                  & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? 
                                                 ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                  - (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U))) 
                                                >> 5U))] 
                                              >> (0x0000001fU 
                                                  & ((0x00000800U 
                                                      & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                      ? 
                                                     ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                      - (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                      - (IData)(1U)))))
                                           : (IData)(vlSelfRef.__PVT__spi_mosi))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out = 0U;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT___lvga_auto_in_pready = ((1U & 
                                              (~ (IData)(vlSymsp->TOP.reset))) 
                                             && ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                                                 & (~ (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready 
        = ((IData)(vlSymsp->TOP.reset) || (8U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(
                                                             (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                                                               >> 2U) 
                                                              | (6U 
                                                                 == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 8U;
        vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x00002774U;
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt = 1U;
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0x0000ffffU;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
        __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata = 0xdeadbeefU;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
    } else {
        vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = ((0U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                ? 0x0000030cU : (0x0001ffffU & (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                                                - (IData)(1U))));
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt 
            = ((0x0320U == (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt))
                ? 1U : (0x000003ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt))));
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((6U & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                      << 1U)) | (4U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0x0000ffffU & ((1U & ((~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                     | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                               ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                               : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                                  - (IData)(1U))));
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
        __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata 
            = (((7U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state)) 
                & (8U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state)))
                ? ((((0x0000ff00U & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                     << 8U)) | (0x000000ffU 
                                                & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                                   >> 8U))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                           >> 8U)) 
                                       | (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                          >> 0x18U)))
                : vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata);
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = (0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000000eU));
                        __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                     >> 0x0000000bU));
                        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 1U;
                    }
                }
            }
        }
    }
    if (__VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7U] = 0U;
    }
    if (__VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8] 
            = __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    }
    if (__VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0) {
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram[__VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0] 
            = __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        vlSelfRef.__PVT___lspi_auto_in_prdata = 0xdeadbeefU;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata 
            = __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready 
            = __Vdly__lspi__DOT__mspi__DOT__spictrl_pready;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0U;
    } else {
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                               ? ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                                   ? ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                               : ((0U != (0x0000007fU 
                                          & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                                   ? (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                   : 0x80U)));
        if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x10U == (0x1cU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr)))) 
              & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x000000ffU & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
                                         | (1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x00ffU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x00003f00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)));
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        if ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                   & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 1U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 2U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((IData)((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                             >> 3U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                             & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((((0x00000200U 
                                                  & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                                  : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                                & ((0U 
                                                    != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                   | (IData)(vlSelfRef.__PVT__spi_sck)))
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                                                   & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                                      | ((((2U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                                           ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                                           : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                                         >> 0x0000001fU)))
                                                : (
                                                   vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x0000001fU 
                                            & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        vlSelfRef.__PVT___lspi_auto_in_prdata = ((2U 
                                                  == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                                                  ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                                                   ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata
                                                   : vlSelfRef.__PVT___lspi_auto_in_prdata));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata 
            = __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate;
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
                        } else {
                            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                 >> 0x0000000bU)))) 
                                   & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q 
                        = (1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q));
                } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                            = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                               | (0x00ffU & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                    >> 0x0000000bU)))));
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((0x00000032U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r)))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q 
                = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r;
        }
        if ((0U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 1U;
        } else if ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd))) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0x00fffffcU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
        }
        if (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr))) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0x00ffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
        }
        if ((((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
             & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = 1U;
        } else if (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = 0U;
        }
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready 
            = __Vdly__lspi__DOT__mspi__DOT__spictrl_pready;
        if ((6U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q;
        }
    }
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_valid 
        = ((0x0090U < (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt)) 
           & (0x0310U >= (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done 
        = (8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = (0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr = 0U;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
              & (IData)(vlSelfRef.__PVT__spi_sck)) 
             & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
            | (((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                & (~ (IData)(vlSelfRef.__PVT__spi_sck))) 
               & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_psel 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
               || (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_penable 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
               && (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)(vlSelfRef.__PVT__spi_sck))) 
                    & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                   | ((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                      & (IData)(vlSelfRef.__PVT__spi_sck))) 
                  | (((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                      & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                         >> 8U)) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata 
            = ((0U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                             >> 2U))) ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                : ((1U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                 >> 2U))) ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                    : ((2U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                     >> 2U))) ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                        : ((3U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                         >> 2U))) ? 
                           vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                            : ((4U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                : ((5U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                    : ((6U == (7U & 
                                               ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                >> 2U)))
                                        ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                        : 0U)))))));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x18U == (0x1cU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr)))) 
              & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata);
            }
        }
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x14U == (0x1cU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr)))) 
              & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0x00ffU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        }
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_e_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr = 
        ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_valid)
          ? (0x000003ffU & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt) 
                            - (IData)(0x0091U))) : 0U);
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.__PVT__spi_sck = __Vdly__spi_sck;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
        } else {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0x0fU;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0x10U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0x0fU;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr 
            = ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                    ? 0U : 0x10U) : 0x10U);
    } else if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 1U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0x18U;
        } else {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 3U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0x14U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0x0fU;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 4U;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                     >> 3U))) && (1U & ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                         ? (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                               >> 1U))
                                         : ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                                   >> 1U)) 
                                            || (1U 
                                                & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x00000080U & ((~ (0U != (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                           << 7U)) | (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                  >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    if ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr = 0U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr;
    } else if ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite)
                : ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                   && (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite))));
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
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
            ? (8U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
            : (0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5\n"); );
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

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0;
    CData/*3:0*/ __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
        = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray = 0U;
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray = 0U;
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray = 0U;
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray = 0U;
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray = 0U;
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray = 0U;
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready)));
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready)));
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin) 
                                  + (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg 
            = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx) 
                  != (0x0cU ^ ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray 
            = vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
        = __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
        = __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
        = __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
        = __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
        = __Vdly__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_3;
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
    if (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
            = (3U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 3U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arsize 
            = (7U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 5U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x00000010U));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr;
    }
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_0 
        = (1U & ((((((((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count)) 
                         | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_last) 
                            == (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                      >> 0x0000001eU)))) 
                        & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count))) 
                       << 3U) | ((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count)) 
                                   | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_last) 
                                      == (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                >> 0x0000001eU)))) 
                                  & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count))) 
                                 << 2U)) | (((((0U 
                                                == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                               | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_last) 
                                                  == 
                                                  (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001eU)))) 
                                              & (7U 
                                                 != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count))) 
                                             << 1U) 
                                            | (((0U 
                                                 == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                   == 
                                                   (1U 
                                                    & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                       >> 0x0000001eU)))) 
                                               & (7U 
                                                  != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count))))) 
                    << 0x0000000cU) | (((((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                            | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_last) 
                                               == (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001eU)))) 
                                           & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count))) 
                                          << 3U) | 
                                         ((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                            | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_last) 
                                               == (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001eU)))) 
                                           & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count))) 
                                          << 2U)) | 
                                        (((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                            | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_last) 
                                               == (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001eU)))) 
                                           & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count))) 
                                          << 1U) | 
                                         (((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_last) 
                                              == (1U 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                     >> 0x0000001eU)))) 
                                          & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count))))) 
                                       << 8U)) | ((
                                                   ((((((0U 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                        | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                           == 
                                                           (1U 
                                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                               >> 0x0000001eU)))) 
                                                       & (7U 
                                                          != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count))) 
                                                      << 3U) 
                                                     | ((((0U 
                                                           == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                          | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                             == 
                                                             (1U 
                                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                                 >> 0x0000001eU)))) 
                                                         & (7U 
                                                            != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count))) 
                                                        << 2U)) 
                                                    | (((((0U 
                                                           == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                                          | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                             == 
                                                             (1U 
                                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                                 >> 0x0000001eU)))) 
                                                         & (7U 
                                                            != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count))) 
                                                        << 1U) 
                                                       | (((0U 
                                                            == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                              == 
                                                              (1U 
                                                               & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                                  >> 0x0000001eU)))) 
                                                          & (7U 
                                                             != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count))))) 
                                                   << 4U) 
                                                  | ((((((0U 
                                                          == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                         | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                            == 
                                                            (1U 
                                                             & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                                >> 0x0000001eU)))) 
                                                        & (7U 
                                                           != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count))) 
                                                       << 3U) 
                                                      | ((((0U 
                                                            == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                              == 
                                                              (1U 
                                                               & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                                  >> 0x0000001eU)))) 
                                                          & (7U 
                                                             != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count))) 
                                                         << 2U)) 
                                                     | (((((0U 
                                                            == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                              == 
                                                              (1U 
                                                               & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                                  >> 0x0000001eU)))) 
                                                          & (7U 
                                                             != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count))) 
                                                         << 1U) 
                                                        | (((0U 
                                                             == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                            | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                               == 
                                                               (1U 
                                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                                   >> 0x0000001eU)))) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count))))))) 
                 >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)));
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awburst));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awsize));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr;
    }
    if (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst 
            = (3U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 3U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awsize 
            = (7U & (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 5U)));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x00000010U));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awburst));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awsize));
        vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awready = 
        (1U & (((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                    >> 0x0000001eU)) & (~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full))) 
               | ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                     >> 0x0000001eU))));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = ((2U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                  >> 0x0000001dU)) | (1U & (~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                               >> 0x0000001eU))));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
                  | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
                 & ((((((((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count)) 
                            | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_last) 
                               == (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                         >> 0x0000001eU)))) 
                           & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count))) 
                          << 3U) | ((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count)) 
                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_last) 
                                         == (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                   >> 0x0000001eU)))) 
                                     & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count))) 
                                    << 2U)) | (((((0U 
                                                   == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                                  | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_last) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                         >> 0x0000001eU)))) 
                                                 & (7U 
                                                    != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count))) 
                                                << 1U) 
                                               | (((0U 
                                                    == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                                   | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_last) 
                                                      == 
                                                      (1U 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                          >> 0x0000001eU)))) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count))))) 
                       << 0x0000000cU) | (((((((0U 
                                                == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count)) 
                                               | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_last) 
                                                  == 
                                                  (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                      >> 0x0000001eU)))) 
                                              & (7U 
                                                 != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count))) 
                                             << 3U) 
                                            | ((((0U 
                                                  == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                                 | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_last) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                        >> 0x0000001eU)))) 
                                                & (7U 
                                                   != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count))) 
                                               << 2U)) 
                                           | (((((0U 
                                                  == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                                 | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                        >> 0x0000001eU)))) 
                                                & (7U 
                                                   != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count))) 
                                               << 1U) 
                                              | (((0U 
                                                   == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                  | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                         >> 0x0000001eU)))) 
                                                 & (7U 
                                                    != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count))))) 
                                          << 8U)) | 
                     ((((((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count)) 
                            | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_last) 
                               == (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                         >> 0x0000001eU)))) 
                           & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count))) 
                          << 3U) | ((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_last) 
                                         == (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                   >> 0x0000001eU)))) 
                                     & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count))) 
                                    << 2U)) | (((((0U 
                                                   == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                                  | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_last) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                         >> 0x0000001eU)))) 
                                                 & (7U 
                                                    != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                                << 1U) 
                                               | (((0U 
                                                    == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                   | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                      == 
                                                      (1U 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                          >> 0x0000001eU)))) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count))))) 
                       << 4U) | ((((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                     | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_last) 
                                        == (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                  >> 0x0000001eU)))) 
                                    & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count))) 
                                   << 3U) | ((((0U 
                                                == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                               | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                  == 
                                                  (1U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                      >> 0x0000001eU)))) 
                                              & (7U 
                                                 != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count))) 
                                             << 2U)) 
                                 | (((((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                       | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_last) 
                                          == (1U & 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                               >> 0x0000001eU)))) 
                                      & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                     << 1U) | (((0U 
                                                 == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                   == 
                                                   (1U 
                                                    & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                       >> 0x0000001eU)))) 
                                               & (7U 
                                                  != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count))))))) 
                    >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid))));
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                      >> 1U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata;
    }
    vlSelfRef.__PVT__axi4frag__DOT__addr = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                             ? vlSelfRef.__PVT__axi4frag__DOT__r_addr
                                             : vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid) 
         & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_0));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__busy)
            ? vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__r_addr
            : vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
    vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst)) 
           | (2U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awsize)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4frag__DOT__addr_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                               ? vlSelfRef.__PVT__axi4frag__DOT__r_addr_1
                                               : vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__busy_1)
            ? vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__r_addr_1
            : vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid) 
         & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr)))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
               >> 0x0000001eU)) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
              >> 0x0000001eU));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_araddr 
        = (~ (((~ (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arsize))) 
                                           | (~ vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr)))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___align1_T_2 
        = (7U & ((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr 
                  >> 2U) | (6U & (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr 
                                  >> 1U))));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___align1_T_12 
        = (7U & ((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr_1 
                  >> 2U) | (6U & (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__addr_1 
                                  >> 1U))));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready = (1U 
                                                   & (((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                                                      | ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                                         & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                                            >> 1U))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
               >> 0x0000001eU)) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
              >> 0x0000001eU));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                            >> 0x0000001eU)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                   >> 0x0000001dU))) 
                    << 2U) | ((2U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                         >> 0x0000001cU)) 
                                     << 1U)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                   >> 0x00000018U))))) 
           | ((0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                             >> 0x0000001cU)) | ((6U 
                                                  & (4U 
                                                     ^ 
                                                     (0x0000001eU 
                                                      & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                         >> 0x0000001bU)))) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                        >> 0x00000018U)))))) 
              | ((0U == ((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                >> 0x0000001dU)) | 
                         (3U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                   >> 0x0000001cU))))) 
                 | ((0U == ((8U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                       >> 0x0000001fU)) 
                                   << 3U)) | ((6U & 
                                               (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                >> 0x0000001bU)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U))))) 
                    | (0U == ((4U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                         >> 0x0000001fU)) 
                                     << 2U)) | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x0000001cU)))))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                         >> 0x0000001cU)) | ((6U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                               >> 0x0000001bU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                           >> 0x0000001dU)) | (3U & 
                                               (2U 
                                                ^ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                   >> 0x0000001cU)))) 
                   << 2U) | ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                    >> 0x00000017U)) 
                             | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                      >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_arvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arlen 
        = (((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst)) 
            | (2U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arsize)))
            ? 0U : (7U & ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___align1_T_2) 
                              | VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___align1_T_2), 2U))) 
                          & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_0) 
                             | ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3) 
                                    | VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3), 2U))) 
                                | ((4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len) 
                                          >> 5U)) | 
                                   ((2U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN) 
                                           >> 4U)) 
                                    | (1U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_0) 
                                             >> 4U)))))))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                            >> 0x0000001eU)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x0000001dU))) 
                    << 2U) | ((2U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                         >> 0x0000001cU)) 
                                     << 1U)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x00000018U))))) 
           | ((0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                             >> 0x0000001cU)) | ((6U 
                                                  & (4U 
                                                     ^ 
                                                     (0x0000001eU 
                                                      & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                         >> 0x0000001bU)))) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                        >> 0x00000018U)))))) 
              | ((0U == ((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                >> 0x0000001dU)) | 
                         (3U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                   >> 0x0000001cU))))) 
                 | ((0U == ((8U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                       >> 0x0000001fU)) 
                                   << 3U)) | ((6U & 
                                               (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x0000001bU)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x00000018U))))) 
                    | (0U == ((4U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                         >> 0x0000001fU)) 
                                     << 2U)) | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x0000001cU)))))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                         >> 0x0000001cU)) | ((6U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000001bU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x00000018U))))));
    vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_2 
        = (7U & ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___align1_T_12) 
                     | VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___align1_T_12), 2U))) 
                 & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_2) 
                    | ((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14) 
                           | VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14), 2U))) 
                       | ((4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1) 
                                 >> 5U)) | ((2U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_1) 
                                                   >> 4U)) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___GEN_2) 
                                                >> 4U))))))));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready)));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6f8a9b67_0_0));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arlen) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
        = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arlen) 
                                    << 8U)) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arsize)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_1_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                        >> 0x0000001dU)) 
                                 | (3U & (2U ^ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x0000001cU)))) 
                                << 2U) | ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 0x00000017U)) 
                                          | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x0000000cU))))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awlen 
        = ((IData)(vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0)
            ? 0U : (IData)(vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_2));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T = ((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                                                  & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_extra_id) 
            << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_size_hi 
        = ((vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
            >> 0x0000000fU) & (0x00000080U | (0x0000007fU 
                                              & (~ 
                                                 (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                                  >> 0x00000010U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_beats 
        = ((1U | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awlen) 
                  << 1U)) & (0x00000100U | ((IData)(vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0)
                                             ? 0x000000ffU
                                             : (0x000000ffU 
                                                & (~ (IData)(vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_2))))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awlen) 
           == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__len_1));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awlen) 
                                    << 8U)) << (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awsize)));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    vlSelfRef.axi4frag__DOT____VdfgRegularize_h9f077f37_0_0 
        = ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6f8a9b67_0_1));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT___GEN_2));
    vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_1 
        = ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__wbeats_valid));
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr), vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata);
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata;
    } else {
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_6 
        = (0x0000007fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_size_hi) 
                           >> 1U) | ((vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                      >> 8U) & (~ (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                                   >> 9U)))));
    vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_extra_id) 
            << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_size_hi 
        = ((vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
            >> 0x0000000fU) & (0x00000080U | (0x0000007fU 
                                              & (~ 
                                                 (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                                  >> 0x00000010U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h9f077f37_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_1));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_8 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                  >> 4U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_6)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_6 
        = (0x0000007fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_size_hi) 
                           >> 1U) | ((vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                      >> 8U) & (~ (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                                   >> 9U)))));
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
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_wvalid));
    vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_4 
        = ((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_size_hi)) 
           | (IData)(((0U != (0x78U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_6))) 
                      | (0U != (6U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_8))))));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_10 
        = (IData)((0U != (5U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_8))));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_8 
        = (7U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                  >> 4U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_6)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___nodeOut_a_valid_T 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arvalid) 
           | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_valid 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arvalid));
    vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_3 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                   >> 3U))) << 2U) 
           | (((0U != (3U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_8) 
                             >> 1U))) << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_10)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_10 
        = (IData)((0U != (5U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_8))));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_mask)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_valid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr 
        = (((6U > (((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_size_hi)) 
                    << 3U) | (IData)(vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_3))) 
            & ((0U == ((0x000ffffeU & (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_araddr 
                                       >> 0x0000000cU)) 
                       | (1U & (~ (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_araddr 
                                   >> 0x0000000cU))))) 
               | (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_araddr 
                  >> 0x0000001eU))) ? vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_araddr
            : (0x00001000U | (3U & vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_araddr)));
    vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_6 
        = (((0U != (0x0000000fU & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                   >> 3U))) << 2U) 
           | (((0U != (3U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_8) 
                             >> 1U))) << 1U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___wsize_T_10)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_unready 
        = (((4U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_valid)) 
                              | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_mask) 
              << 2U));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1 
        = ((IData)(vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_4) 
           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_10) 
              & (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr 
                 >> 1U)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1 
        = ((IData)(vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_4) 
           | ((~ (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr 
                  >> 1U)) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___rsize_T_10)));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_unready))));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__winner_0 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_readys) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arvalid));
    vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__winner_1 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__beatsLeft))) {
        vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_valid 
            = vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT___nodeOut_a_valid_T;
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_0 
            = vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__winner_0;
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__winner_1;
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_valid 
            = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arvalid) 
                & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__state_0)) 
               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__state_1) 
                  & (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_out_valid)));
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_0 
            = vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__state_0;
        vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1 
            = vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__state_1;
    }
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_mask 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                            ? ((((2U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                         | ((vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                             >> 1U) 
                                            & vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                        << 1U)) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                   | (2U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr)))) 
                                << 2U) | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                            | (1U == 
                                               (3U 
                                                & vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                           | (0U == 
                                              (3U & vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr)))))
                            : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                      ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                          ? (IData)(
                                                    (vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                     >> 1U))
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb))
                                      : 0U)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_data 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1)
            ? ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                ? (IData)((vlSelfRef.__PVT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                           >> 5U)) : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata)
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_0)
             ? (IData)(vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_3)
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                       ? (IData)(vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_6)
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_0)
             ? (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arid) 
                 << 3U) | (6U & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_arid)
                                   ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_count_1)
                                   : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_count_0)) 
                                 << 1U))) : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                    ? 
                                                   (1U 
                                                    | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awid) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awid)
                                                               ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                                                               : (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_count_0)) 
                                                             << 1U))))
                                                    : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_0) 
            << 2U) | (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
        = (((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_0)
             ? vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__r_addr
             : 0U) | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                       ? (((6U > (((0U != (IData)(vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__w_size_hi)) 
                                   << 3U) | (IData)(vlSelfRef.chipMaster__DOT__axi42tl__DOT____VdfgRegularize_hacf77c06_0_6))) 
                           & ((0U == ((0x000ffffeU 
                                       & (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awaddr 
                                          >> 0x0000000cU)) 
                                      | (1U & (~ (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awaddr 
                                                  >> 0x0000000cU))))) 
                              | (vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awaddr 
                                 >> 0x0000001eU))) ? vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awaddr
                           : (0x00001000U | (3U & vlSelfRef.__PVT__chipMaster__DOT__axi42tl__DOT__auto_in_awaddr)))
                       : 0U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode 
        = ((0x17U >= (0x0000001fU & ((IData)(3U) * (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode))))
            ? (7U & (0x00911240U >> (0x0000001fU & 
                                     ((IData)(3U) * (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode)))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_beats1 
        = ((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode))
            ? 0U : (0x000003ffU & (~ (0x000003ffU & 
                                      (((IData)(0x00000fffU) 
                                        << (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size)) 
                                       >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_id 
        = ((2U & ((~ (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
                      >> 0x0000001eU)) << 1U)) | (1U 
                                                  & (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
                                                     >> 0x0000001eU)));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask 
            = (0x0000000fU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                               << 0x0000001fU) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                                  >> 1U)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
            = ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                << 0x0000001fU) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                                   >> 1U));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_mask));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
            = vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_data;
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide 
        = ((QData)((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift)) 
           | ((((QData)((IData)(((((QData)((IData)(
                                                   ((((0x000001feU 
                                                       & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask) 
                                                            >> 3U))) 
                                                     << 9U) 
                                                    | ((0x000001feU 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                           >> 0x0000000fU)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask) 
                                                             >> 2U)))))) 
                                   << 0x00000012U) 
                                  | (QData)((IData)(
                                                    ((((0x000001feU 
                                                        & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                           >> 7U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask) 
                                                             >> 1U))) 
                                                      << 9U) 
                                                     | ((0x000001feU 
                                                         & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask))))))) 
                                 >> 0x00000020U))) 
                << 0x00000020U) | (QData)((IData)((
                                                   ((QData)((IData)(
                                                                    ((((0x000001feU 
                                                                        & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                                           >> 0x00000017U)) 
                                                                       | (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask) 
                                                                             >> 3U))) 
                                                                      << 9U) 
                                                                     | ((0x000001feU 
                                                                         & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                                            >> 0x0000000fU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask) 
                                                                              >> 2U)))))) 
                                                    << 0x00000012U) 
                                                   | (QData)((IData)(
                                                                     ((((0x000001feU 
                                                                         & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                                            >> 7U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask) 
                                                                              >> 1U))) 
                                                                       << 9U) 
                                                                      | ((0x000001feU 
                                                                          & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask)))))))))) 
              << ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                  << 2U)));
    if (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size 
            = (7U & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                      << 0x00000017U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                         >> 9U)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source 
            = (0x0000000fU & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                               << 0x0000001bU) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                                  >> 5U)));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode 
            = (7U & ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                      << 0x00000011U) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                         >> 0x0000000fU)));
    } else {
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source));
        vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode 
            = (7U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode));
    }
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats 
        = (0x0000001fU & ((IData)(3U) + (((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                           ? 0U : (
                                                   (0x0000001eU 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size)) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size)))) 
                                         + ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                             ? (((6U 
                                                  == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size)) 
                                                 << 1U) 
                                                | (3U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size) 
                                                       >> 1U))))
                                             : 0U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
           == (2U | (1U & (~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode) 
                              >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1 
        = ((4U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
            ? 0U : (7U & (~ (7U & (((IData)(0x001fU) 
                                    << (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size)) 
                                   >> 2U)))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_beats1 
        = ((1U & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode))
            ? (0x000003ffU & (~ (0x000003ffU & (((IData)(0x00000fffU) 
                                                 << (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size)) 
                                                >> 2U))))
            : 0U);
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_beats1)));
    vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__stall 
        = (((~ ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source) 
                >> 3U)) & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_first_counter)) 
                           & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_0) 
                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_1) 
                                  | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_2) 
                                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_3) 
                                        | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_4) 
                                           | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_5) 
                                              | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_6) 
                                                 | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_7)))))))) 
                              & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_id)) 
                                 | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__stalls_id) 
                                    != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_id)))))) 
           | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source) 
               >> 3U) & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_first_counter)) 
                         & (((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_8) 
                             | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_9) 
                                | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_10) 
                                   | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_11) 
                                      | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_12) 
                                         | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_13) 
                                            | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_14) 
                                               | (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__flight_15)))))))) 
                            & ((0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_id)) 
                               | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__stalls_id_1) 
                                  != (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__a_id)))))));
    __Vtemp_3[0U] = ((((0x2fU >= (0x0000003fU & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source))))
                        ? (7U & (IData)((0x0000fac688fac688ULL 
                                         >> (0x0000003fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source))))))
                        : 0U) << 0x00000010U) | ((0x00006000U 
                                                  & ((0xaaaa5555U 
                                                      >> 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source), 1U))) 
                                                     << 0x0000000dU)) 
                                                 | ((((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size) 
                                                      << 9U) 
                                                     | (((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                                                          ? 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                                             >> 0x0000000cU))
                                                          : 0U) 
                                                        << 6U)) 
                                                    | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode) 
                                                       << 3U))));
    __Vtemp_3[1U] = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                      ? ((vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                          << 0x0000001bU) | (vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                             >> 5U))
                      : vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address);
    __Vtemp_3[2U] = (IData)(((QData)((IData)(((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                               ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                               : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data))) 
                             << 0x00000020U));
    __Vtemp_3[3U] = (IData)((((QData)((IData)(((1U 
                                                == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
                                                ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                : vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data))) 
                              << 0x00000020U) >> 0x00000020U));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U)))
             ? 0U : (__Vtemp_3[(((IData)(0x0000001fU) 
                                 + (0x0000007fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))) 
                                >> 5U)] << ((IData)(0x00000020U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))) 
           | (__Vtemp_3[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U) 
                               >> 5U))] >> (0x0000001fU 
                                            & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_ready 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter)) 
           | (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1)));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_valid 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last 
        = ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode))
            ? (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)
            : (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_last));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready 
        = ((~ ((1U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode)) 
               & ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)) 
                  & ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_last) 
                     | ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                        >> 3U))))) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_ready));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_valid 
        = ((~ (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
               >> 0x0000001eU)) & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_valid 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_valid) 
           & (vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
              >> 0x0000001eU));
    vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__a_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_valid));
    vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)));
}

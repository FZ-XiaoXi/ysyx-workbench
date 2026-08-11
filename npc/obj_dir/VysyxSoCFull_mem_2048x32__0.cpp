// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0(VysyxSoCFull_mem_2048x32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__R0_data = ((IData)(vlSelfRef.__PVT___R0_en_d0)
                                 ? vlSelfRef.Memory
                                [vlSelfRef.__PVT___R0_addr_d0]
                                 : 0U);
}

void VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__1(VysyxSoCFull_mem_2048x32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__R0_en = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2)));
}

void VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__2(VysyxSoCFull_mem_2048x32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__W0_en = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT___GEN) 
                              & (0x0f000000U == (0x0fffe000U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)));
}

void VysyxSoCFull_mem_2048x32___nba_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0(VysyxSoCFull_mem_2048x32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_mem_2048x32___nba_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__Memory__v0;
    __VdlyVal__Memory__v0 = 0;
    SData/*10:0*/ __VdlyDim0__Memory__v0;
    __VdlyDim0__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Memory__v0;
    __VdlySet__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__Memory__v1;
    __VdlyVal__Memory__v1 = 0;
    SData/*10:0*/ __VdlyDim0__Memory__v1;
    __VdlyDim0__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__Memory__v1;
    __VdlySet__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__Memory__v2;
    __VdlyVal__Memory__v2 = 0;
    SData/*10:0*/ __VdlyDim0__Memory__v2;
    __VdlyDim0__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__Memory__v2;
    __VdlySet__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__Memory__v3;
    __VdlyVal__Memory__v3 = 0;
    SData/*10:0*/ __VdlyDim0__Memory__v3;
    __VdlyDim0__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__Memory__v3;
    __VdlySet__Memory__v3 = 0;
    // Body
    __VdlySet__Memory__v0 = 0U;
    __VdlySet__Memory__v1 = 0U;
    __VdlySet__Memory__v2 = 0U;
    __VdlySet__Memory__v3 = 0U;
    if (((IData)(vlSelfRef.__PVT__W0_en) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb))) {
        __VdlyVal__Memory__v0 = (0x000000ffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata);
        __VdlyDim0__Memory__v0 = (0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U));
        __VdlySet__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__W0_en) & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
                                            >> 1U))) {
        __VdlyVal__Memory__v1 = (0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
                                                >> 8U));
        __VdlyDim0__Memory__v1 = (0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U));
        __VdlySet__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__W0_en) & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
                                            >> 2U))) {
        __VdlyVal__Memory__v2 = (0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
                                                >> 0x10U));
        __VdlyDim0__Memory__v2 = (0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U));
        __VdlySet__Memory__v2 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__W0_en) & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
                                            >> 3U))) {
        __VdlyVal__Memory__v3 = (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
                                 >> 0x18U);
        __VdlyDim0__Memory__v3 = (0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U));
        __VdlySet__Memory__v3 = 1U;
    }
    vlSelfRef.__PVT___R0_en_d0 = vlSelfRef.__PVT__R0_en;
    vlSelfRef.__PVT___R0_addr_d0 = (0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                   >> 2U));
    if (__VdlySet__Memory__v0) {
        vlSelfRef.Memory[__VdlyDim0__Memory__v0] = 
            ((0xffffff00U & vlSelfRef.Memory[__VdlyDim0__Memory__v0]) 
             | (IData)(__VdlyVal__Memory__v0));
    }
    if (__VdlySet__Memory__v1) {
        vlSelfRef.Memory[__VdlyDim0__Memory__v1] = 
            ((0xffff00ffU & vlSelfRef.Memory[__VdlyDim0__Memory__v1]) 
             | ((IData)(__VdlyVal__Memory__v1) << 8U));
    }
    if (__VdlySet__Memory__v2) {
        vlSelfRef.Memory[__VdlyDim0__Memory__v2] = 
            ((0xff00ffffU & vlSelfRef.Memory[__VdlyDim0__Memory__v2]) 
             | ((IData)(__VdlyVal__Memory__v2) << 0x00000010U));
    }
    if (__VdlySet__Memory__v3) {
        vlSelfRef.Memory[__VdlyDim0__Memory__v3] = 
            ((0x00ffffffU & vlSelfRef.Memory[__VdlyDim0__Memory__v3]) 
             | ((IData)(__VdlyVal__Memory__v3) << 0x00000018U));
    }
}

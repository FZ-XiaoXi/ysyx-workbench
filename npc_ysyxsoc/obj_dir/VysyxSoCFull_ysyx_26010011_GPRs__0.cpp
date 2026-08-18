// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_GPRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0__0(VysyxSoCFull_ysyx_26010011_GPRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_GPRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gpr_out_b = ((0U == (0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x00000014U)))
                                   ? 0U : vlSelfRef.GPR
                                  [(0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))]);
    vlSelfRef.__PVT__gpr_out_a = ((0U == (0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x0000000fU)))
                                   ? 0U : vlSelfRef.GPR
                                  [(0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x0000000fU))]);
}

void VysyxSoCFull_ysyx_26010011_GPRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0__0(VysyxSoCFull_ysyx_26010011_GPRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_GPRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__GPR__v0;
    __VdlySet__GPR__v0 = 0;
    IData/*31:0*/ __VdlyVal__GPR__v32;
    __VdlyVal__GPR__v32 = 0;
    CData/*4:0*/ __VdlyDim0__GPR__v32;
    __VdlyDim0__GPR__v32 = 0;
    CData/*0:0*/ __VdlySet__GPR__v32;
    __VdlySet__GPR__v32 = 0;
    // Body
    __VdlySet__GPR__v0 = 0U;
    __VdlySet__GPR__v32 = 0U;
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__i = 0x00000020U;
        __VdlySet__GPR__v0 = 1U;
    } else if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0))) {
        __VdlyVal__GPR__v32 = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd))
                                ? 0U : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)
                                         ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                         : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                             ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                             : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                 : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))));
        __VdlyDim0__GPR__v32 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd;
        __VdlySet__GPR__v32 = 1U;
    }
    if (__VdlySet__GPR__v0) {
        vlSelfRef.GPR[0U] = 0U;
        vlSelfRef.GPR[1U] = 0U;
        vlSelfRef.GPR[2U] = 0U;
        vlSelfRef.GPR[3U] = 0U;
        vlSelfRef.GPR[4U] = 0U;
        vlSelfRef.GPR[5U] = 0U;
        vlSelfRef.GPR[6U] = 0U;
        vlSelfRef.GPR[7U] = 0U;
        vlSelfRef.GPR[8U] = 0U;
        vlSelfRef.GPR[9U] = 0U;
        vlSelfRef.GPR[0x0aU] = 0U;
        vlSelfRef.GPR[0x0bU] = 0U;
        vlSelfRef.GPR[0x0cU] = 0U;
        vlSelfRef.GPR[0x0dU] = 0U;
        vlSelfRef.GPR[0x0eU] = 0U;
        vlSelfRef.GPR[0x0fU] = 0U;
        vlSelfRef.GPR[0x10U] = 0U;
        vlSelfRef.GPR[0x11U] = 0U;
        vlSelfRef.GPR[0x12U] = 0U;
        vlSelfRef.GPR[0x13U] = 0U;
        vlSelfRef.GPR[0x14U] = 0U;
        vlSelfRef.GPR[0x15U] = 0U;
        vlSelfRef.GPR[0x16U] = 0U;
        vlSelfRef.GPR[0x17U] = 0U;
        vlSelfRef.GPR[0x18U] = 0U;
        vlSelfRef.GPR[0x19U] = 0U;
        vlSelfRef.GPR[0x1aU] = 0U;
        vlSelfRef.GPR[0x1bU] = 0U;
        vlSelfRef.GPR[0x1cU] = 0U;
        vlSelfRef.GPR[0x1dU] = 0U;
        vlSelfRef.GPR[0x1eU] = 0U;
        vlSelfRef.GPR[0x1fU] = 0U;
    }
    if (__VdlySet__GPR__v32) {
        vlSelfRef.GPR[__VdlyDim0__GPR__v32] = __VdlyVal__GPR__v32;
    }
}

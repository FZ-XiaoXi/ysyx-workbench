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
    IData/*31:0*/ __VdlyVal__GPR__v0;
    __VdlyVal__GPR__v0 = 0;
    CData/*4:0*/ __VdlyDim0__GPR__v0;
    __VdlyDim0__GPR__v0 = 0;
    CData/*0:0*/ __VdlySet__GPR__v0;
    __VdlySet__GPR__v0 = 0;
    // Body
    __VdlySet__GPR__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))) {
        if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0))) {
            __VdlyVal__GPR__v0 = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd))
                                   ? 0U : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                            : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                    : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))));
            __VdlyDim0__GPR__v0 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd;
            __VdlySet__GPR__v0 = 1U;
        }
    }
    if (__VdlySet__GPR__v0) {
        vlSelfRef.GPR[__VdlyDim0__GPR__v0] = __VdlyVal__GPR__v0;
    }
}

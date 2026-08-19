// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__0(VysyxSoCFull_ysyx_26010011_IF_ID_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__idu_in_valid = vlSelfRef.idu_in_valid;
}

void VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__1(VysyxSoCFull_ysyx_26010011_IF_ID_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__Vdly__idu_in_valid = 0U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_flush_valid) {
        vlSelfRef.__Vdly__idu_in_valid = 0U;
    } else if ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_in_ready) 
                      | (~ (IData)(vlSelfRef.idu_in_valid))))) {
        vlSelfRef.__Vdly__idu_in_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_valid;
        vlSelfRef.__PVT__idu_in_bus_instruction = (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC))
                                                     ? 0x00000010U
                                                     : 0U)
                                                    ? 0x00000013U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__VdfgRegularize_hb9205a68_0_0)
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_rdata
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__ifu_out_bus_instruction_r));
        vlSelfRef.idu_in_bus_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_pc;
        vlSelfRef.__PVT__idu_in_bus_snpc = ((IData)(4U) 
                                            + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_pc);
        vlSelfRef.__PVT__idu_in_bus_exception = ((0U 
                                                  != 
                                                  (3U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC))
                                                  ? 0x10U
                                                  : 0U);
    }
    vlSelfRef.idu_in_valid = vlSelfRef.__Vdly__idu_in_valid;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__0(VysyxSoCFull_ysyx_26010011_IF_ID_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__idu_in_bus_exception;
    __Vdly__idu_in_bus_exception = 0;
    // Body
    vlSelfRef.__Vdly__idu_in_bus_pc = vlSelfRef.idu_in_bus_pc;
    vlSelfRef.__Vdly__idu_in_bus_snpc = vlSelfRef.__PVT__idu_in_bus_snpc;
    vlSelfRef.__Vdly__idu_in_valid = vlSelfRef.idu_in_valid;
    __Vdly__idu_in_bus_exception = vlSelfRef.__PVT__idu_in_bus_exception;
    vlSelfRef.__Vdly__idu_in_bus_instruction = vlSelfRef.__PVT__idu_in_bus_instruction;
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__Vdly__idu_in_valid = 0U;
        vlSelfRef.__Vdly__idu_in_bus_instruction = 0U;
        vlSelfRef.__Vdly__idu_in_bus_pc = 0U;
        vlSelfRef.__Vdly__idu_in_bus_snpc = 0U;
        __Vdly__idu_in_bus_exception = 0U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) {
        vlSelfRef.__Vdly__idu_in_valid = 0U;
        vlSelfRef.__Vdly__idu_in_bus_instruction = 0U;
        vlSelfRef.__Vdly__idu_in_bus_pc = 0U;
        vlSelfRef.__Vdly__idu_in_bus_snpc = 0U;
        __Vdly__idu_in_bus_exception = 0U;
    } else if ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_in_ready) 
                      | (~ (IData)(vlSelfRef.idu_in_valid))))) {
        vlSelfRef.__Vdly__idu_in_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_valid;
        vlSelfRef.__Vdly__idu_in_bus_instruction = 
            (((0U != (3U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC))
               ? 0x00000010U : 0U) ? 0x00000013U : 
             ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__VdfgRegularize_hb9205a68_0_1)
               ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_rdata
               : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__ifu_out_bus_instruction_r));
        vlSelfRef.__Vdly__idu_in_bus_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_pc;
        vlSelfRef.__Vdly__idu_in_bus_snpc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__ifu_out_bus_snpc;
        __Vdly__idu_in_bus_exception = ((0U != (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC))
                                         ? 0x10U : 0U);
    } else {
        vlSelfRef.__Vdly__idu_in_valid = vlSelfRef.idu_in_valid;
        vlSelfRef.__Vdly__idu_in_bus_instruction = vlSelfRef.__PVT__idu_in_bus_instruction;
        vlSelfRef.__Vdly__idu_in_bus_pc = vlSelfRef.idu_in_bus_pc;
        vlSelfRef.__Vdly__idu_in_bus_snpc = vlSelfRef.__PVT__idu_in_bus_snpc;
        __Vdly__idu_in_bus_exception = vlSelfRef.__PVT__idu_in_bus_exception;
    }
    vlSelfRef.__PVT__idu_in_bus_exception = __Vdly__idu_in_bus_exception;
}

void VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__1(VysyxSoCFull_ysyx_26010011_IF_ID_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.idu_in_bus_pc = vlSelfRef.__Vdly__idu_in_bus_pc;
    vlSelfRef.__PVT__idu_in_bus_snpc = vlSelfRef.__Vdly__idu_in_bus_snpc;
    vlSelfRef.idu_in_valid = vlSelfRef.__Vdly__idu_in_valid;
    vlSelfRef.__PVT__idu_in_bus_instruction = vlSelfRef.__Vdly__idu_in_bus_instruction;
}

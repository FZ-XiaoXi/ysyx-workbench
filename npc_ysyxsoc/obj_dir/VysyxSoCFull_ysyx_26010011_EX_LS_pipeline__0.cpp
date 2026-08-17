// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__0(VysyxSoCFull_ysyx_26010011_EX_LS_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = ((IData)(vlSelfRef.__PVT__lsu_in_bus_isWGPR) 
                                                 & (IData)(vlSelfRef.lsu_in_valid));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = ((IData)(vlSelfRef.lsu_in_valid) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_4));
}

void VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__0(VysyxSoCFull_ysyx_26010011_EX_LS_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__lsu_in_valid;
    __Vdly__lsu_in_valid = 0;
    IData/*31:0*/ __Vdly__lsu_in_bus_lsu_val;
    __Vdly__lsu_in_bus_lsu_val = 0;
    CData/*4:0*/ __Vdly__lsu_in_bus_exception;
    __Vdly__lsu_in_bus_exception = 0;
    // Body
    vlSelfRef.__Vdly__lsu_in_bus_csr_result = vlSelfRef.__PVT__lsu_in_bus_csr_result;
    vlSelfRef.__Vdly__lsu_in_bus_comp_result = vlSelfRef.__PVT__lsu_in_bus_comp_result;
    __Vdly__lsu_in_bus_lsu_val = vlSelfRef.__PVT__lsu_in_bus_lsu_val;
    vlSelfRef.__Vdly__lsu_in_bus_instruction = vlSelfRef.__PVT__lsu_in_bus_instruction;
    vlSelfRef.__Vdly__lsu_in_bus_isJUMP = vlSelfRef.__PVT__lsu_in_bus_isJUMP;
    vlSelfRef.__Vdly__lsu_in_bus_isWCOMP = vlSelfRef.__PVT__lsu_in_bus_isWCOMP;
    vlSelfRef.__Vdly__lsu_in_bus_isBRANCH = vlSelfRef.__PVT__lsu_in_bus_isBRANCH;
    vlSelfRef.__Vdly__lsu_in_bus_isUnSigned = vlSelfRef.__PVT__lsu_in_bus_isUnSigned;
    vlSelfRef.__Vdly__lsu_in_bus_pc = vlSelfRef.lsu_in_bus_pc;
    vlSelfRef.__Vdly__lsu_in_bus_snpc = vlSelfRef.__PVT__lsu_in_bus_snpc;
    vlSelfRef.__Vdly__lsu_in_bus_rd = vlSelfRef.__PVT__lsu_in_bus_rd;
    vlSelfRef.__Vdly__lsu_in_bus_csrrd = vlSelfRef.__PVT__lsu_in_bus_csrrd;
    vlSelfRef.__Vdly__lsu_in_bus_opCSR = vlSelfRef.__PVT__lsu_in_bus_opCSR;
    vlSelfRef.__Vdly__lsu_in_bus_isWGPR = vlSelfRef.__PVT__lsu_in_bus_isWGPR;
    __Vdly__lsu_in_bus_exception = vlSelfRef.__PVT__lsu_in_bus_exception;
    vlSelfRef.__Vdly__lsu_in_bus_perip_mask = vlSelfRef.__PVT__lsu_in_bus_perip_mask;
    vlSelfRef.__Vdly__lsu_in_bus_alu_result = vlSelfRef.__PVT__lsu_in_bus_alu_result;
    vlSelfRef.__Vdly__lsu_in_bus_isSTORE = vlSelfRef.__PVT__lsu_in_bus_isSTORE;
    __Vdly__lsu_in_valid = vlSelfRef.lsu_in_valid;
    vlSelfRef.__Vdly__lsu_in_bus_isLOAD = vlSelfRef.__PVT__lsu_in_bus_isLOAD;
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        __Vdly__lsu_in_valid = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_alu_result = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_csr_result = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_comp_result = 0U;
        __Vdly__lsu_in_bus_lsu_val = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_rd = 0U;
        __Vdly__lsu_in_bus_exception = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_csrrd = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_instruction = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isLOAD = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isSTORE = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isWGPR = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isJUMP = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isWCOMP = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isBRANCH = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_opCSR = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isUnSigned = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_perip_mask = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_pc = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_snpc = 0U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_exception_valid) {
        __Vdly__lsu_in_valid = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_alu_result = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_csr_result = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_comp_result = 0U;
        __Vdly__lsu_in_bus_lsu_val = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_rd = 0U;
        __Vdly__lsu_in_bus_exception = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_csrrd = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_instruction = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isLOAD = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isSTORE = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isWGPR = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isJUMP = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isWCOMP = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isBRANCH = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_opCSR = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_isUnSigned = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_perip_mask = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_pc = 0U;
        vlSelfRef.__Vdly__lsu_in_bus_snpc = 0U;
    } else if ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_in_ready) 
                      | (~ (IData)(vlSelfRef.lsu_in_valid))))) {
        __Vdly__lsu_in_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid;
        vlSelfRef.__Vdly__lsu_in_bus_alu_result = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_alu_result;
        vlSelfRef.__Vdly__lsu_in_bus_csr_result = ((IData)(
                                                           (2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__op_and
                                                    : 
                                                   ((IData)(
                                                            (1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__op_or
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val));
        vlSelfRef.__Vdly__lsu_in_bus_comp_result = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_comp_result;
        __Vdly__lsu_in_bus_lsu_val = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val;
        vlSelfRef.__Vdly__lsu_in_bus_rd = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd;
        __Vdly__lsu_in_bus_exception = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__exu_out_bus_exception;
        vlSelfRef.__Vdly__lsu_in_bus_csrrd = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_csrrd;
        vlSelfRef.__Vdly__lsu_in_bus_instruction = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_instruction;
        vlSelfRef.__Vdly__lsu_in_bus_isLOAD = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD;
        vlSelfRef.__Vdly__lsu_in_bus_isSTORE = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isSTORE;
        vlSelfRef.__Vdly__lsu_in_bus_isWGPR = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR;
        vlSelfRef.__Vdly__lsu_in_bus_isJUMP = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP;
        vlSelfRef.__Vdly__lsu_in_bus_isWCOMP = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP;
        vlSelfRef.__Vdly__lsu_in_bus_isBRANCH = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH;
        vlSelfRef.__Vdly__lsu_in_bus_opCSR = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR;
        vlSelfRef.__Vdly__lsu_in_bus_isUnSigned = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUnSigned;
        vlSelfRef.__Vdly__lsu_in_bus_perip_mask = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_perip_mask;
        vlSelfRef.__Vdly__lsu_in_bus_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc;
        vlSelfRef.__Vdly__lsu_in_bus_snpc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc;
    } else {
        __Vdly__lsu_in_valid = vlSelfRef.lsu_in_valid;
        vlSelfRef.__Vdly__lsu_in_bus_alu_result = vlSelfRef.__PVT__lsu_in_bus_alu_result;
        vlSelfRef.__Vdly__lsu_in_bus_csr_result = vlSelfRef.__PVT__lsu_in_bus_csr_result;
        vlSelfRef.__Vdly__lsu_in_bus_comp_result = vlSelfRef.__PVT__lsu_in_bus_comp_result;
        __Vdly__lsu_in_bus_lsu_val = vlSelfRef.__PVT__lsu_in_bus_lsu_val;
        vlSelfRef.__Vdly__lsu_in_bus_rd = vlSelfRef.__PVT__lsu_in_bus_rd;
        __Vdly__lsu_in_bus_exception = vlSelfRef.__PVT__lsu_in_bus_exception;
        vlSelfRef.__Vdly__lsu_in_bus_csrrd = vlSelfRef.__PVT__lsu_in_bus_csrrd;
        vlSelfRef.__Vdly__lsu_in_bus_instruction = vlSelfRef.__PVT__lsu_in_bus_instruction;
        vlSelfRef.__Vdly__lsu_in_bus_isLOAD = vlSelfRef.__PVT__lsu_in_bus_isLOAD;
        vlSelfRef.__Vdly__lsu_in_bus_isSTORE = vlSelfRef.__PVT__lsu_in_bus_isSTORE;
        vlSelfRef.__Vdly__lsu_in_bus_isWGPR = vlSelfRef.__PVT__lsu_in_bus_isWGPR;
        vlSelfRef.__Vdly__lsu_in_bus_isJUMP = vlSelfRef.__PVT__lsu_in_bus_isJUMP;
        vlSelfRef.__Vdly__lsu_in_bus_isWCOMP = vlSelfRef.__PVT__lsu_in_bus_isWCOMP;
        vlSelfRef.__Vdly__lsu_in_bus_isBRANCH = vlSelfRef.__PVT__lsu_in_bus_isBRANCH;
        vlSelfRef.__Vdly__lsu_in_bus_opCSR = vlSelfRef.__PVT__lsu_in_bus_opCSR;
        vlSelfRef.__Vdly__lsu_in_bus_isUnSigned = vlSelfRef.__PVT__lsu_in_bus_isUnSigned;
        vlSelfRef.__Vdly__lsu_in_bus_perip_mask = vlSelfRef.__PVT__lsu_in_bus_perip_mask;
        vlSelfRef.__Vdly__lsu_in_bus_pc = vlSelfRef.lsu_in_bus_pc;
        vlSelfRef.__Vdly__lsu_in_bus_snpc = vlSelfRef.__PVT__lsu_in_bus_snpc;
    }
    vlSelfRef.__PVT__lsu_in_bus_exception = __Vdly__lsu_in_bus_exception;
    vlSelfRef.__PVT__lsu_in_bus_lsu_val = __Vdly__lsu_in_bus_lsu_val;
    vlSelfRef.lsu_in_valid = __Vdly__lsu_in_valid;
}

void VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__1(VysyxSoCFull_ysyx_26010011_EX_LS_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lsu_in_bus_pc = vlSelfRef.__Vdly__lsu_in_bus_pc;
    vlSelfRef.__PVT__lsu_in_bus_instruction = vlSelfRef.__Vdly__lsu_in_bus_instruction;
    vlSelfRef.__PVT__lsu_in_bus_isUnSigned = vlSelfRef.__Vdly__lsu_in_bus_isUnSigned;
    vlSelfRef.__PVT__lsu_in_bus_csr_result = vlSelfRef.__Vdly__lsu_in_bus_csr_result;
    vlSelfRef.__PVT__lsu_in_bus_comp_result = vlSelfRef.__Vdly__lsu_in_bus_comp_result;
    vlSelfRef.__PVT__lsu_in_bus_snpc = vlSelfRef.__Vdly__lsu_in_bus_snpc;
    vlSelfRef.__PVT__lsu_in_bus_isJUMP = vlSelfRef.__Vdly__lsu_in_bus_isJUMP;
    vlSelfRef.__PVT__lsu_in_bus_isWCOMP = vlSelfRef.__Vdly__lsu_in_bus_isWCOMP;
    vlSelfRef.__PVT__lsu_in_bus_isBRANCH = vlSelfRef.__Vdly__lsu_in_bus_isBRANCH;
    vlSelfRef.__PVT__lsu_in_bus_rd = vlSelfRef.__Vdly__lsu_in_bus_rd;
    vlSelfRef.__PVT__lsu_in_bus_csrrd = vlSelfRef.__Vdly__lsu_in_bus_csrrd;
    vlSelfRef.__PVT__lsu_in_bus_opCSR = vlSelfRef.__Vdly__lsu_in_bus_opCSR;
    vlSelfRef.__PVT__lsu_in_bus_isWGPR = vlSelfRef.__Vdly__lsu_in_bus_isWGPR;
    vlSelfRef.__PVT__lsu_in_bus_perip_mask = vlSelfRef.__Vdly__lsu_in_bus_perip_mask;
    vlSelfRef.__PVT__lsu_in_bus_alu_result = vlSelfRef.__Vdly__lsu_in_bus_alu_result;
    vlSelfRef.__PVT__lsu_in_bus_isSTORE = vlSelfRef.__Vdly__lsu_in_bus_isSTORE;
    vlSelfRef.__PVT__lsu_in_bus_isLOAD = vlSelfRef.__Vdly__lsu_in_bus_isLOAD;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = ((IData)(vlSelfRef.__PVT__lsu_in_bus_isWGPR) 
                                                 & (IData)(vlSelfRef.lsu_in_valid));
}

void VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__2(VysyxSoCFull_ysyx_26010011_EX_LS_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = ((IData)(vlSelfRef.lsu_in_valid) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_4));
}

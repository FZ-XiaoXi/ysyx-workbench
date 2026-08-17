// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_LS_WB_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst__0(VysyxSoCFull_ysyx_26010011_LS_WB_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LS_WB_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.wbu_in_valid = 0U;
        vlSelfRef.wbu_in_bus_pc = 0U;
        vlSelfRef.__PVT__wbu_in_bus_instruction = 0U;
        vlSelfRef.__PVT__wbu_in_bus_lsu_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_alu_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_csr_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_comp_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_snpc = 0U;
        vlSelfRef.__PVT__wbu_in_bus_rd = 0U;
        vlSelfRef.__PVT__wbu_in_bus_exception = 0U;
        vlSelfRef.__PVT__wbu_in_bus_csrrd = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isEBREAK = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isECALL = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isMRET = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isLOAD = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isSTORE = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isWGPR = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isJUMP = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isWCOMP = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isBRANCH = 0U;
        vlSelfRef.__PVT__wbu_in_bus_opCSR = 0U;
    } else if (vlSelfRef.__PVT__flush_valid) {
        vlSelfRef.wbu_in_valid = 0U;
        vlSelfRef.wbu_in_bus_pc = 0U;
        vlSelfRef.__PVT__wbu_in_bus_instruction = 0U;
        vlSelfRef.__PVT__wbu_in_bus_lsu_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_alu_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_csr_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_comp_result = 0U;
        vlSelfRef.__PVT__wbu_in_bus_snpc = 0U;
        vlSelfRef.__PVT__wbu_in_bus_rd = 0U;
        vlSelfRef.__PVT__wbu_in_bus_exception = 0U;
        vlSelfRef.__PVT__wbu_in_bus_csrrd = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isEBREAK = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isECALL = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isMRET = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isLOAD = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isSTORE = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isWGPR = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isJUMP = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isWCOMP = 0U;
        vlSelfRef.__PVT__wbu_in_bus_isBRANCH = 0U;
        vlSelfRef.__PVT__wbu_in_bus_opCSR = 0U;
    } else {
        vlSelfRef.wbu_in_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_out_valid;
        vlSelfRef.wbu_in_bus_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_bus_pc;
        vlSelfRef.__PVT__wbu_in_bus_instruction = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_instruction;
        vlSelfRef.__PVT__wbu_in_bus_lsu_result = ((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isUnSigned)
                                                    ? 
                                                   (0x000000ffU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0x000000ffU 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isUnSigned)
                                                     ? 
                                                    (0x0000ffffU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                     >> 0x0000000fU)))) 
                                                      << 0x00000010U) 
                                                     | (0x0000ffffU 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val
                                                     : 0xffffffffU)));
        vlSelfRef.__PVT__wbu_in_bus_alu_result = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
        vlSelfRef.__PVT__wbu_in_bus_csr_result = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csr_result;
        vlSelfRef.__PVT__wbu_in_bus_comp_result = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result;
        vlSelfRef.__PVT__wbu_in_bus_snpc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc;
        vlSelfRef.__PVT__wbu_in_bus_rd = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd;
        vlSelfRef.__PVT__wbu_in_bus_exception = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception;
        vlSelfRef.__PVT__wbu_in_bus_csrrd = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csrrd;
        vlSelfRef.__PVT__wbu_in_bus_isEBREAK = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isEBREAK;
        vlSelfRef.__PVT__wbu_in_bus_isECALL = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isECALL;
        vlSelfRef.__PVT__wbu_in_bus_isMRET = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isMRET;
        vlSelfRef.__PVT__wbu_in_bus_isLOAD = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD;
        vlSelfRef.__PVT__wbu_in_bus_isSTORE = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE;
        vlSelfRef.__PVT__wbu_in_bus_isWGPR = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR;
        vlSelfRef.__PVT__wbu_in_bus_isJUMP = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP;
        vlSelfRef.__PVT__wbu_in_bus_isWCOMP = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP;
        vlSelfRef.__PVT__wbu_in_bus_isBRANCH = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isBRANCH;
        vlSelfRef.__PVT__wbu_in_bus_opCSR = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_opCSR;
    }
}

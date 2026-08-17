// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0(VysyxSoCFull_ysyx_26010011_ID_EX_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__idu_out_bus_imm = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_37)
                                         ? ((((0x0b00U 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                              | (0x0b80U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))) 
                                             | (((0x0301U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                 | (0x0305U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))) 
                                                | ((0x0340U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                   | ((0x0341U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                      | ((0x0342U 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                         | (0x0300U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)))))))
                                             ? ((0x0b00U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                 ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLE
                                                 : 
                                                ((0x0b80U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLEH
                                                  : 
                                                 ((0x0301U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MISA
                                                   : 
                                                  ((0x0305U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC
                                                    : 
                                                   ((0x0340U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSCRATCH
                                                     : 
                                                    ((0x0341U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                                      : 
                                                     ((0x0342U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCAUSE
                                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSTATUS)))))))
                                             : ((0x0f11U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                 ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MVENDORID
                                                 : 
                                                ((0x0f12U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MARCHID
                                                  : 0x2b2b2b2bU)))
                                         : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI)
                                             ? (((- (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                             : ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))
                                                 ? 
                                                ((((0x00000ffeU 
                                                    & ((- (IData)(
                                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                   >> 0x0000001fU))) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x0000001fU)) 
                                                  << 0x00000014U) 
                                                 | ((((0x000001feU 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                            >> 0x00000014U))) 
                                                     << 0x0000000bU) 
                                                    | (0x000007feU 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                          >> 0x00000014U))))
                                                 : 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                               >> 0x0000001fU))) 
                                                   << 0x0000000cU) 
                                                  | ((0x00000fe0U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                           >> 7U))))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isU)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000dU) 
                                                    | ((((2U 
                                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001eU)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                               >> 7U))) 
                                                        << 0x0000000bU) 
                                                       | ((0x000007e0U 
                                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                >> 7U)))))
                                                    : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = ((IData)(vlSelfRef.__PVT__exu_in_bus_isWGPR) 
                                                 & (IData)(vlSelfRef.exu_in_valid));
}

void VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0(VysyxSoCFull_ysyx_26010011_ID_EX_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__exu_in_valid;
    __Vdly__exu_in_valid = 0;
    CData/*4:0*/ __Vdly__exu_in_bus_rd;
    __Vdly__exu_in_bus_rd = 0;
    CData/*4:0*/ __Vdly__exu_in_bus_exception;
    __Vdly__exu_in_bus_exception = 0;
    SData/*11:0*/ __Vdly__exu_in_bus_csrrd;
    __Vdly__exu_in_bus_csrrd = 0;
    CData/*4:0*/ __Vdly__exu_in_bus_rs1;
    __Vdly__exu_in_bus_rs1 = 0;
    CData/*4:0*/ __Vdly__exu_in_bus_rs2;
    __Vdly__exu_in_bus_rs2 = 0;
    IData/*31:0*/ __Vdly__exu_in_bus_rs1_val;
    __Vdly__exu_in_bus_rs1_val = 0;
    IData/*31:0*/ __Vdly__exu_in_bus_rs2_val;
    __Vdly__exu_in_bus_rs2_val = 0;
    IData/*31:0*/ __Vdly__exu_in_bus_imm;
    __Vdly__exu_in_bus_imm = 0;
    IData/*31:0*/ __Vdly__exu_in_bus_instruction;
    __Vdly__exu_in_bus_instruction = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isEBREAK;
    __Vdly__exu_in_bus_isEBREAK = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isECALL;
    __Vdly__exu_in_bus_isECALL = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isMRET;
    __Vdly__exu_in_bus_isMRET = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isLOAD;
    __Vdly__exu_in_bus_isLOAD = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isSTORE;
    __Vdly__exu_in_bus_isSTORE = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isWGPR;
    __Vdly__exu_in_bus_isWGPR = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isJUMP;
    __Vdly__exu_in_bus_isJUMP = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isWCOMP;
    __Vdly__exu_in_bus_isWCOMP = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isBRANCH;
    __Vdly__exu_in_bus_isBRANCH = 0;
    CData/*2:0*/ __Vdly__exu_in_bus_opCSR;
    __Vdly__exu_in_bus_opCSR = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isUnSigned;
    __Vdly__exu_in_bus_isUnSigned = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_isUsePC;
    __Vdly__exu_in_bus_isUsePC = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_alu_isUseImm;
    __Vdly__exu_in_bus_alu_isUseImm = 0;
    CData/*0:0*/ __Vdly__exu_in_bus_comp_isUseImm;
    __Vdly__exu_in_bus_comp_isUseImm = 0;
    SData/*9:0*/ __Vdly__exu_in_bus_alu_op;
    __Vdly__exu_in_bus_alu_op = 0;
    CData/*1:0*/ __Vdly__exu_in_bus_comp_op;
    __Vdly__exu_in_bus_comp_op = 0;
    CData/*1:0*/ __Vdly__exu_in_bus_perip_mask;
    __Vdly__exu_in_bus_perip_mask = 0;
    IData/*31:0*/ __Vdly__exu_in_bus_pc;
    __Vdly__exu_in_bus_pc = 0;
    IData/*31:0*/ __Vdly__exu_in_bus_snpc;
    __Vdly__exu_in_bus_snpc = 0;
    // Body
    __Vdly__exu_in_bus_exception = vlSelfRef.__PVT__exu_in_bus_exception;
    __Vdly__exu_in_bus_rs1 = vlSelfRef.__PVT__exu_in_bus_rs1;
    __Vdly__exu_in_bus_rs2 = vlSelfRef.__PVT__exu_in_bus_rs2;
    __Vdly__exu_in_bus_instruction = vlSelfRef.__PVT__exu_in_bus_instruction;
    __Vdly__exu_in_bus_isEBREAK = vlSelfRef.__PVT__exu_in_bus_isEBREAK;
    __Vdly__exu_in_bus_isLOAD = vlSelfRef.__PVT__exu_in_bus_isLOAD;
    __Vdly__exu_in_bus_isSTORE = vlSelfRef.__PVT__exu_in_bus_isSTORE;
    __Vdly__exu_in_bus_isWCOMP = vlSelfRef.__PVT__exu_in_bus_isWCOMP;
    __Vdly__exu_in_bus_perip_mask = vlSelfRef.__PVT__exu_in_bus_perip_mask;
    __Vdly__exu_in_bus_snpc = vlSelfRef.__PVT__exu_in_bus_snpc;
    __Vdly__exu_in_bus_alu_op = vlSelfRef.__PVT__exu_in_bus_alu_op;
    __Vdly__exu_in_bus_rd = vlSelfRef.__PVT__exu_in_bus_rd;
    __Vdly__exu_in_bus_csrrd = vlSelfRef.__PVT__exu_in_bus_csrrd;
    __Vdly__exu_in_bus_isWGPR = vlSelfRef.__PVT__exu_in_bus_isWGPR;
    __Vdly__exu_in_bus_opCSR = vlSelfRef.__PVT__exu_in_bus_opCSR;
    __Vdly__exu_in_bus_isUsePC = vlSelfRef.__PVT__exu_in_bus_isUsePC;
    __Vdly__exu_in_bus_pc = vlSelfRef.exu_in_bus_pc;
    __Vdly__exu_in_bus_alu_isUseImm = vlSelfRef.__PVT__exu_in_bus_alu_isUseImm;
    __Vdly__exu_in_bus_isJUMP = vlSelfRef.__PVT__exu_in_bus_isJUMP;
    __Vdly__exu_in_bus_isBRANCH = vlSelfRef.__PVT__exu_in_bus_isBRANCH;
    __Vdly__exu_in_bus_comp_op = vlSelfRef.__PVT__exu_in_bus_comp_op;
    __Vdly__exu_in_bus_isECALL = vlSelfRef.__PVT__exu_in_bus_isECALL;
    __Vdly__exu_in_bus_isMRET = vlSelfRef.__PVT__exu_in_bus_isMRET;
    __Vdly__exu_in_bus_isUnSigned = vlSelfRef.__PVT__exu_in_bus_isUnSigned;
    __Vdly__exu_in_valid = vlSelfRef.exu_in_valid;
    __Vdly__exu_in_bus_comp_isUseImm = vlSelfRef.__PVT__exu_in_bus_comp_isUseImm;
    __Vdly__exu_in_bus_rs1_val = vlSelfRef.__PVT__exu_in_bus_rs1_val;
    __Vdly__exu_in_bus_rs2_val = vlSelfRef.__PVT__exu_in_bus_rs2_val;
    __Vdly__exu_in_bus_imm = vlSelfRef.__PVT__exu_in_bus_imm;
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        __Vdly__exu_in_valid = 0U;
        __Vdly__exu_in_bus_rd = 0U;
        __Vdly__exu_in_bus_exception = 0U;
        __Vdly__exu_in_bus_csrrd = 0U;
        __Vdly__exu_in_bus_rs1 = 0U;
        __Vdly__exu_in_bus_rs2 = 0U;
        __Vdly__exu_in_bus_rs1_val = 0U;
        __Vdly__exu_in_bus_rs2_val = 0U;
        __Vdly__exu_in_bus_imm = 0U;
        __Vdly__exu_in_bus_instruction = 0U;
        __Vdly__exu_in_bus_isEBREAK = 0U;
        __Vdly__exu_in_bus_isECALL = 0U;
        __Vdly__exu_in_bus_isMRET = 0U;
        __Vdly__exu_in_bus_isLOAD = 0U;
        __Vdly__exu_in_bus_isSTORE = 0U;
        __Vdly__exu_in_bus_isWGPR = 0U;
        __Vdly__exu_in_bus_isJUMP = 0U;
        __Vdly__exu_in_bus_isWCOMP = 0U;
        __Vdly__exu_in_bus_isBRANCH = 0U;
        __Vdly__exu_in_bus_opCSR = 0U;
        __Vdly__exu_in_bus_isUnSigned = 0U;
        __Vdly__exu_in_bus_isUsePC = 0U;
        __Vdly__exu_in_bus_alu_isUseImm = 0U;
        __Vdly__exu_in_bus_comp_isUseImm = 0U;
        __Vdly__exu_in_bus_alu_op = 0U;
        __Vdly__exu_in_bus_comp_op = 0U;
        __Vdly__exu_in_bus_perip_mask = 0U;
        __Vdly__exu_in_bus_pc = 0U;
        __Vdly__exu_in_bus_snpc = 0U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) {
        __Vdly__exu_in_valid = 0U;
        __Vdly__exu_in_bus_rd = 0U;
        __Vdly__exu_in_bus_exception = 0U;
        __Vdly__exu_in_bus_csrrd = 0U;
        __Vdly__exu_in_bus_rs1 = 0U;
        __Vdly__exu_in_bus_rs2 = 0U;
        __Vdly__exu_in_bus_rs1_val = 0U;
        __Vdly__exu_in_bus_rs2_val = 0U;
        __Vdly__exu_in_bus_imm = 0U;
        __Vdly__exu_in_bus_instruction = 0U;
        __Vdly__exu_in_bus_isEBREAK = 0U;
        __Vdly__exu_in_bus_isECALL = 0U;
        __Vdly__exu_in_bus_isMRET = 0U;
        __Vdly__exu_in_bus_isLOAD = 0U;
        __Vdly__exu_in_bus_isSTORE = 0U;
        __Vdly__exu_in_bus_isWGPR = 0U;
        __Vdly__exu_in_bus_isJUMP = 0U;
        __Vdly__exu_in_bus_isWCOMP = 0U;
        __Vdly__exu_in_bus_isBRANCH = 0U;
        __Vdly__exu_in_bus_opCSR = 0U;
        __Vdly__exu_in_bus_isUnSigned = 0U;
        __Vdly__exu_in_bus_isUsePC = 0U;
        __Vdly__exu_in_bus_alu_isUseImm = 0U;
        __Vdly__exu_in_bus_comp_isUseImm = 0U;
        __Vdly__exu_in_bus_alu_op = 0U;
        __Vdly__exu_in_bus_comp_op = 0U;
        __Vdly__exu_in_bus_perip_mask = 0U;
        __Vdly__exu_in_bus_pc = 0U;
        __Vdly__exu_in_bus_snpc = 0U;
    } else if ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_in_ready) 
                      | (~ (IData)(vlSelfRef.exu_in_valid))))) {
        __Vdly__exu_in_valid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.idu_isRAW)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid));
        __Vdly__exu_in_bus_rd = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_1)
                                  ? 0U : (0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 7U)));
        __Vdly__exu_in_bus_exception = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception;
        __Vdly__exu_in_bus_csrrd = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd;
        __Vdly__exu_in_bus_rs1 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_rs1;
        __Vdly__exu_in_bus_rs2 = (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U));
        __Vdly__exu_in_bus_rs1_val = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_37)
                                       ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_out_bus_opCSR))
                                           ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_he0d61652_0_3)
                                               ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_rs1))
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_rs1))
                                           : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_he0d61652_0_3)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_rs1))
                                                   ? 0xffffffffU
                                                   : 
                                                  (~ 
                                                   vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR
                                                   [vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_rs1]))
                                               : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_a))
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_a);
        __Vdly__exu_in_bus_rs2_val = ((0U == (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)))
                                       ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR
                                      [(0x0000001fU 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))]);
        __Vdly__exu_in_bus_imm = vlSelfRef.__PVT__idu_out_bus_imm;
        __Vdly__exu_in_bus_instruction = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction;
        __Vdly__exu_in_bus_isEBREAK = (0x00100073U 
                                       == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction);
        __Vdly__exu_in_bus_isECALL = (0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction);
        __Vdly__exu_in_bus_isMRET = (0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction);
        __Vdly__exu_in_bus_isLOAD = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isLOAD;
        __Vdly__exu_in_bus_isSTORE = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE;
        __Vdly__exu_in_bus_isWGPR = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_29) 
                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isJALR) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADDI) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXORI) 
                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isORI) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isANDI) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLLI) 
                                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRLI) 
                                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRAI) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADD) 
                                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB)) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLL) 
                                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT)) 
                                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTU) 
                                                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXOR) 
                                                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRL) 
                                                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRA) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isMUL) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isMULH) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isMULHSU) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isMULHU) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isDIV) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isDIVU) 
                                                                                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                                >> 0x00000019U))) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isREMU)) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isLOAD) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_37)))))))))))))))))))))))))));
        __Vdly__exu_in_bus_isJUMP = ((0x6fU == (0x0000007fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isJALR));
        __Vdly__exu_in_bus_isWCOMP = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT) 
                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTU)));
        __Vdly__exu_in_bus_isBRANCH = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH;
        __Vdly__exu_in_bus_opCSR = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_out_bus_opCSR;
        __Vdly__exu_in_bus_isUnSigned = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_34) 
                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_33) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isDIVU) 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isREMU))))));
        __Vdly__exu_in_bus_isUsePC = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_30) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH));
        __Vdly__exu_in_bus_comp_isUseImm = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm;
        __Vdly__exu_in_bus_alu_isUseImm = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH) 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_29))));
        __Vdly__exu_in_bus_alu_op = ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_30) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isJALR) 
                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADD) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLW) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLB) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLH) 
                                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSW) 
                                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSH) 
                                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSB) 
                                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isADDI) 
                                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH))))))))))))) 
                                      << 9U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB) 
                                                 << 8U) 
                                                | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLLI) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLL)) 
                                                     << 5U) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRLI) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRL)) 
                                                        << 4U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRAI) 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSRA)) 
                                                          << 3U))) 
                                                   | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isANDI) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND)) 
                                                       << 2U) 
                                                      | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isORI) 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXORI) 
                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isXOR)))))));
        __Vdly__exu_in_bus_comp_op = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGE) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGEU))
                                       ? 0U : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLTU) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLT) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTI) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_33)))))
                                                ? 1U
                                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBNE)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBEQ)
                                                     ? 3U
                                                     : 0U))));
        __Vdly__exu_in_bus_perip_mask = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLW) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSW))
                                          ? 2U : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLB) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSB)))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLH) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSH)))
                                                    ? 1U
                                                    : 3U)));
        __Vdly__exu_in_bus_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc;
        __Vdly__exu_in_bus_snpc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_snpc;
    } else {
        __Vdly__exu_in_valid = vlSelfRef.exu_in_valid;
        __Vdly__exu_in_bus_rd = vlSelfRef.__PVT__exu_in_bus_rd;
        __Vdly__exu_in_bus_exception = vlSelfRef.__PVT__exu_in_bus_exception;
        __Vdly__exu_in_bus_csrrd = vlSelfRef.__PVT__exu_in_bus_csrrd;
        __Vdly__exu_in_bus_rs1 = vlSelfRef.__PVT__exu_in_bus_rs1;
        __Vdly__exu_in_bus_rs2 = vlSelfRef.__PVT__exu_in_bus_rs2;
        __Vdly__exu_in_bus_rs1_val = vlSelfRef.__PVT__exu_in_bus_rs1_val;
        __Vdly__exu_in_bus_rs2_val = vlSelfRef.__PVT__exu_in_bus_rs2_val;
        __Vdly__exu_in_bus_imm = vlSelfRef.__PVT__exu_in_bus_imm;
        __Vdly__exu_in_bus_instruction = vlSelfRef.__PVT__exu_in_bus_instruction;
        __Vdly__exu_in_bus_isEBREAK = vlSelfRef.__PVT__exu_in_bus_isEBREAK;
        __Vdly__exu_in_bus_isECALL = vlSelfRef.__PVT__exu_in_bus_isECALL;
        __Vdly__exu_in_bus_isMRET = vlSelfRef.__PVT__exu_in_bus_isMRET;
        __Vdly__exu_in_bus_isLOAD = vlSelfRef.__PVT__exu_in_bus_isLOAD;
        __Vdly__exu_in_bus_isSTORE = vlSelfRef.__PVT__exu_in_bus_isSTORE;
        __Vdly__exu_in_bus_isWGPR = vlSelfRef.__PVT__exu_in_bus_isWGPR;
        __Vdly__exu_in_bus_isJUMP = vlSelfRef.__PVT__exu_in_bus_isJUMP;
        __Vdly__exu_in_bus_isWCOMP = vlSelfRef.__PVT__exu_in_bus_isWCOMP;
        __Vdly__exu_in_bus_isBRANCH = vlSelfRef.__PVT__exu_in_bus_isBRANCH;
        __Vdly__exu_in_bus_opCSR = vlSelfRef.__PVT__exu_in_bus_opCSR;
        __Vdly__exu_in_bus_isUnSigned = vlSelfRef.__PVT__exu_in_bus_isUnSigned;
        __Vdly__exu_in_bus_isUsePC = vlSelfRef.__PVT__exu_in_bus_isUsePC;
        __Vdly__exu_in_bus_alu_isUseImm = vlSelfRef.__PVT__exu_in_bus_alu_isUseImm;
        __Vdly__exu_in_bus_comp_isUseImm = vlSelfRef.__PVT__exu_in_bus_comp_isUseImm;
        __Vdly__exu_in_bus_alu_op = vlSelfRef.__PVT__exu_in_bus_alu_op;
        __Vdly__exu_in_bus_comp_op = vlSelfRef.__PVT__exu_in_bus_comp_op;
        __Vdly__exu_in_bus_perip_mask = vlSelfRef.__PVT__exu_in_bus_perip_mask;
        __Vdly__exu_in_bus_pc = vlSelfRef.exu_in_bus_pc;
        __Vdly__exu_in_bus_snpc = vlSelfRef.__PVT__exu_in_bus_snpc;
    }
    vlSelfRef.__PVT__exu_in_bus_rs1 = __Vdly__exu_in_bus_rs1;
    vlSelfRef.__PVT__exu_in_bus_rs2 = __Vdly__exu_in_bus_rs2;
    vlSelfRef.__PVT__exu_in_bus_exception = __Vdly__exu_in_bus_exception;
    vlSelfRef.__PVT__exu_in_bus_instruction = __Vdly__exu_in_bus_instruction;
    vlSelfRef.__PVT__exu_in_bus_isEBREAK = __Vdly__exu_in_bus_isEBREAK;
    vlSelfRef.__PVT__exu_in_bus_isLOAD = __Vdly__exu_in_bus_isLOAD;
    vlSelfRef.__PVT__exu_in_bus_isSTORE = __Vdly__exu_in_bus_isSTORE;
    vlSelfRef.__PVT__exu_in_bus_isWCOMP = __Vdly__exu_in_bus_isWCOMP;
    vlSelfRef.__PVT__exu_in_bus_perip_mask = __Vdly__exu_in_bus_perip_mask;
    vlSelfRef.__PVT__exu_in_bus_snpc = __Vdly__exu_in_bus_snpc;
    vlSelfRef.__PVT__exu_in_bus_alu_op = __Vdly__exu_in_bus_alu_op;
    vlSelfRef.__PVT__exu_in_bus_rd = __Vdly__exu_in_bus_rd;
    vlSelfRef.__PVT__exu_in_bus_csrrd = __Vdly__exu_in_bus_csrrd;
    vlSelfRef.__PVT__exu_in_bus_isWGPR = __Vdly__exu_in_bus_isWGPR;
    vlSelfRef.__PVT__exu_in_bus_opCSR = __Vdly__exu_in_bus_opCSR;
    vlSelfRef.__PVT__exu_in_bus_isUsePC = __Vdly__exu_in_bus_isUsePC;
    vlSelfRef.exu_in_bus_pc = __Vdly__exu_in_bus_pc;
    vlSelfRef.__PVT__exu_in_bus_alu_isUseImm = __Vdly__exu_in_bus_alu_isUseImm;
    vlSelfRef.__PVT__exu_in_bus_isJUMP = __Vdly__exu_in_bus_isJUMP;
    vlSelfRef.__PVT__exu_in_bus_isBRANCH = __Vdly__exu_in_bus_isBRANCH;
    vlSelfRef.__PVT__exu_in_bus_comp_op = __Vdly__exu_in_bus_comp_op;
    vlSelfRef.__PVT__exu_in_bus_isECALL = __Vdly__exu_in_bus_isECALL;
    vlSelfRef.__PVT__exu_in_bus_isMRET = __Vdly__exu_in_bus_isMRET;
    vlSelfRef.__PVT__exu_in_bus_isUnSigned = __Vdly__exu_in_bus_isUnSigned;
    vlSelfRef.exu_in_valid = __Vdly__exu_in_valid;
    vlSelfRef.__PVT__exu_in_bus_comp_isUseImm = __Vdly__exu_in_bus_comp_isUseImm;
    vlSelfRef.__PVT__exu_in_bus_rs1_val = __Vdly__exu_in_bus_rs1_val;
    vlSelfRef.__PVT__exu_in_bus_imm = __Vdly__exu_in_bus_imm;
    vlSelfRef.__PVT__exu_in_bus_rs2_val = __Vdly__exu_in_bus_rs2_val;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = ((IData)(vlSelfRef.__PVT__exu_in_bus_isWGPR) 
                                                 & (IData)(vlSelfRef.exu_in_valid));
}

void VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0(VysyxSoCFull_ysyx_26010011_ID_EX_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__idu_out_bus_imm = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_37)
                                         ? ((((0x0b00U 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                              | (0x0b80U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))) 
                                             | (((0x0301U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                 | (0x0305U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))) 
                                                | ((0x0340U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                   | ((0x0341U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                      | ((0x0342U 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                                         | (0x0300U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd)))))))
                                             ? ((0x0b00U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                 ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLE
                                                 : 
                                                ((0x0b80U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLEH
                                                  : 
                                                 ((0x0301U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MISA
                                                   : 
                                                  ((0x0305U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC
                                                    : 
                                                   ((0x0340U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSCRATCH
                                                     : 
                                                    ((0x0341U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                                      : 
                                                     ((0x0342U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCAUSE
                                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSTATUS)))))))
                                             : ((0x0f11U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                 ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MVENDORID
                                                 : 
                                                ((0x0f12U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_csrrd))
                                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MARCHID
                                                  : 0x2b2b2b2bU)))
                                         : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI)
                                             ? (((- (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                             : ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))
                                                 ? 
                                                ((((0x00000ffeU 
                                                    & ((- (IData)(
                                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                   >> 0x0000001fU))) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x0000001fU)) 
                                                  << 0x00000014U) 
                                                 | ((((0x000001feU 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                            >> 0x00000014U))) 
                                                     << 0x0000000bU) 
                                                    | (0x000007feU 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                          >> 0x00000014U))))
                                                 : 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                               >> 0x0000001fU))) 
                                                   << 0x0000000cU) 
                                                  | ((0x00000fe0U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                           >> 7U))))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isU)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000dU) 
                                                    | ((((2U 
                                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                             >> 0x0000001eU)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                               >> 7U))) 
                                                        << 0x0000000bU) 
                                                       | ((0x000007e0U 
                                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                >> 7U)))))
                                                    : 0U))))));
}

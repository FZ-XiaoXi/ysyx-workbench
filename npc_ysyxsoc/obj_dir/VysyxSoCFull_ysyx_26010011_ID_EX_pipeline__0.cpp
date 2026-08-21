// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0(VysyxSoCFull_ysyx_26010011_ID_EX_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__exu_in_valid = vlSelfRef.exu_in_valid;
}

void VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__1(VysyxSoCFull_ysyx_26010011_ID_EX_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) 
         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid))) {
        vlSelfRef.__Vdly__exu_in_valid = 0U;
    } else if ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_in_ready) 
                      | (~ (IData)(vlSelfRef.exu_in_valid))))) {
        vlSelfRef.__Vdly__exu_in_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_valid;
        vlSelfRef.__PVT__exu_in_bus_rd = (0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 7U));
        vlSelfRef.__PVT__exu_in_bus_exception = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_exception;
        vlSelfRef.__PVT__exu_in_bus_csrrd = (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x00000014U);
        vlSelfRef.__PVT__exu_in_bus_rs1 = (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x0000000fU));
        vlSelfRef.__PVT__exu_in_bus_rs2 = (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000014U));
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_34) {
            vlSelfRef.__PVT__exu_in_bus_rs1_val = (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_out_bus_opCSR))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_he0d61652_0_2)
                                                     ? 
                                                    (~ 
                                                     (0x0000001fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x0000000fU)))
                                                     : 
                                                    (0x0000001fU 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                        >> 0x0000000fU)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_he0d61652_0_2)
                                                     ? 
                                                    (~ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_ra_bypass)
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_ra_bypass));
            vlSelfRef.__PVT__exu_in_bus_imm = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.__PVT__csr_out_data;
        } else {
            vlSelfRef.__PVT__exu_in_bus_rs1_val = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_ra_bypass;
            vlSelfRef.__PVT__exu_in_bus_imm = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI)
                                                ? (
                                                   ((- (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U))
                                                : (
                                                   (0x6fU 
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
                                                       : 0U)))));
        }
        vlSelfRef.__PVT__exu_in_bus_rs2_val = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_rb_bypass;
        vlSelfRef.__PVT__exu_in_bus_instruction = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction;
        vlSelfRef.__PVT__exu_in_bus_isLOAD = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isLOAD;
        vlSelfRef.__PVT__exu_in_bus_isSTORE = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE;
        vlSelfRef.__PVT__exu_in_bus_isWGPR = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_3) 
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
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isOR) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isAND)) 
                                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isLOAD) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_34))))))))))))))))));
        vlSelfRef.__PVT__exu_in_bus_isJUMP = ((0x6fU 
                                               == (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isJALR));
        vlSelfRef.__PVT__exu_in_bus_isWCOMP = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_32));
        vlSelfRef.__PVT__exu_in_bus_isBRANCH = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH;
        vlSelfRef.__PVT__exu_in_bus_opCSR = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__idu_out_bus_opCSR;
        vlSelfRef.__PVT__exu_in_bus_isUnSigned = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_29) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_28))));
        vlSelfRef.__PVT__exu_in_bus_isUsePC = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH));
        vlSelfRef.__PVT__exu_in_bus_comp_isUseImm = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm;
        vlSelfRef.__PVT__exu_in_bus_alu_isUseImm = 
            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isI) 
             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isSTORE) 
                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH) 
                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_2))));
        vlSelfRef.__PVT__exu_in_bus_alu_op = ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
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
                                               << 9U) 
                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSUB) 
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
        vlSelfRef.__PVT__exu_in_bus_comp_op = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGE) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBGEU))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLTU) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBLT) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLT) 
                                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSLTI) 
                                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0__DOT____VdfgRegularize_hd1728725_0_28)))))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBNE)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isBEQ)
                                                      ? 3U
                                                      : 0U))));
        vlSelfRef.__PVT__exu_in_bus_perip_mask = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLW) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSW))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLBU) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLB) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSB)))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLH) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isLHU) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__isSH)))
                                                     ? 1U
                                                     : 3U)));
        vlSelfRef.exu_in_bus_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc;
        vlSelfRef.__PVT__exu_in_bus_snpc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_snpc;
    }
    vlSelfRef.exu_in_valid = vlSelfRef.__Vdly__exu_in_valid;
}

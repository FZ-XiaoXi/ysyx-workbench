// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_tar = vlSelfRef.__PVT__bcache_u0__DOT__cache_mem
        [(7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                >> 2U))];
    vlSelfRef.__PVT__csr_rdata = ((((0x0b00U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                    | (0x0b80U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))) 
                                   | (((0x0301U == 
                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                         >> 0x00000014U)) 
                                       | (0x0305U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))) 
                                      | ((0x0340U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U)) 
                                         | ((0x0341U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                            | ((0x0342U 
                                                == 
                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                               | (0x0300U 
                                                  == 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U)))))))
                                   ? ((0x0b00U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLE
                                       : ((0x0b80U 
                                           == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U))
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLEH
                                           : ((0x0301U 
                                               == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                               ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MISA
                                               : ((0x0305U 
                                                   == 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U))
                                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC
                                                   : 
                                                  ((0x0340U 
                                                    == 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x00000014U))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSCRATCH
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                       >> 0x00000014U))
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCAUSE
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSTATUS)))))))
                                   : ((0x0f11U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MVENDORID
                                       : ((0x0f12U 
                                           == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U))
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MARCHID
                                           : ((0x0343U 
                                               == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                               ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVAL
                                               : 0x2b2b2b2bU))));
    vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 
        = ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception) 
               >> 4U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid));
    vlSelfRef.__PVT__gpr_rdataa = ((0U == (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x0000000fU)))
                                    ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR
                                   [(0x0000001fU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                      >> 0x0000000fU))]);
    vlSelfRef.__PVT__gpr_rdatab = ((0U == (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000014U)))
                                    ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR
                                   [(0x0000001fU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                      >> 0x00000014U))]);
    vlSelfRef.__PVT__wbu_out_bus_exception = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception)
                                               : 0U);
    vlSelfRef.__PVT__EXU_0__DOT__a = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_isUseImm)
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUsePC)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc
                                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val);
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__fencei_pass = ((IData)(vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0) 
                                    & (0x0eU == (0x0000000fU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception))));
    vlSelfRef.flush_exception_valid = (1U & ((IData)(vlSelfRef.__PVT__wbu_out_bus_exception) 
                                             >> 4U));
    vlSelfRef.__PVT__EXU_0__DOT__op_and = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                           & vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__op_or = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                          | vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__io_master_bready = (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                          | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
                                         & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.__PVT__DRAM_rready = (((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                     | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
                                    & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.__PVT__IDU_0__DOT__next_state = (1U & 
                                               ((IData)(vlSelfRef.__PVT__IDU_0__DOT__state)
                                                 ? 
                                                (~ (IData)(vlSelfRef.__PVT__fencei_pass))
                                                 : 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                                 & (0x0000100fU 
                                                    == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
    vlSelfRef.__PVT__exu_out_bus_alu_result = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x0300U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))))
                                                ? (
                                                   (0x00000100U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                    ? 
                                                   (vlSelfRef.__PVT__EXU_0__DOT__a 
                                                    - vlSelfRef.__PVT__EXU_0__DOT__b)
                                                    : 
                                                   (vlSelfRef.__PVT__EXU_0__DOT__a 
                                                    + vlSelfRef.__PVT__EXU_0__DOT__b))
                                                : (
                                                   (0x00000020U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.__PVT__EXU_0__DOT__b))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                                                  (0x0000001fU 
                                                                   & vlSelfRef.__PVT__EXU_0__DOT__b))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                                                    (0x0000001fU 
                                                                     & vlSelfRef.__PVT__EXU_0__DOT__b))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                       ? vlSelfRef.__PVT__EXU_0__DOT__op_and
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                        ? vlSelfRef.__PVT__EXU_0__DOT__op_or
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                         ? 
                                                        (vlSelfRef.__PVT__EXU_0__DOT__a 
                                                         ^ vlSelfRef.__PVT__EXU_0__DOT__b)
                                                         : vlSelfRef.__PVT__EXU_0__DOT__b)))))));
    vlSelfRef.__PVT__io_master_rready = ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                         & ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                                             ? (IData)(vlSelfRef.__PVT__DRAM_rready)
                                             : (~ (IData)(vlSelfRef.reset))));
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                               : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_21)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)
                                                      ? 
                                                     (0x00000010U 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)
                                                          ? 4U
                                                          : 6U))
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                                       : 
                                                      (0x00000010U 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)
                                                           ? 4U
                                                           : 6U)))
                                                      : 
                                                     (0x00000010U 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)
                                                          ? 4U
                                                          : 6U)))))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)));
    vlSelfRef.__PVT__lsu_in_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_21)) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.b_fire) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.r_fire)) 
                                              | ((IData)(vlSelfRef.__PVT__lsu_out_bus_exception) 
                                                 >> 4U))));
    vlSelfRef.__PVT__exu_in_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                           | (IData)(vlSelfRef.__PVT__lsu_in_ready)));
    vlSelfRef.__PVT__exu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception)
                                               : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                   & (IData)(vlSelfRef.__PVT__exu_in_ready))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                                       & (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result)))
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & vlSelfRef.__PVT__exu_out_bus_alu_result))
                                                     ? 0x10U
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception)));
    vlSelfRef.__PVT__exu_out_bus_dnpc_valid = ((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception) 
                                                    >> 4U))) 
                                               && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                    & (IData)(vlSelfRef.__PVT__exu_in_ready)) 
                                                   && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                                           & (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result))) 
                                                       && (1U 
                                                           & (~ 
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & vlSelfRef.__PVT__exu_out_bus_alu_result)))))));
    vlSelfRef.__PVT__dnpc = ((IData)(vlSelfRef.flush_exception_valid)
                              ? ((0x0eU == (0x0000000fU 
                                            & (IData)(vlSelfRef.__PVT__wbu_out_bus_exception)))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC)
                              : (((~ (IData)(vlSelfRef.__PVT__exu_out_bus_dnpc_valid)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                  : vlSelfRef.__PVT__exu_out_bus_alu_result));
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_1;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    // Body
    vlSelfRef.__PVT__io_master_awvalid = ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_10));
    vlSelfRef.__PVT__DRAM_arvalid = ((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_7)) 
                                      | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_10));
    vlSelfRef.idu_isRAW = (((0U != (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x0000000fU))) 
                            && (1U & (((((0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x0000000fU)) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                       ? (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                             & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD))))
                                       : (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                           ? ((1U & 
                                               (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                              && (1U 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x0000000fU)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR)) 
                                              && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))) 
                                                  && (1U 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))))))))) 
                           | (((0U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                       >> 0x00000014U)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR)) 
                                  & ((0x0b00U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U)) 
                                     & ((((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U) 
                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_csrrd)) 
                                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                            & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR)))) 
                                        | ((((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000014U) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csrrd)) 
                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_opCSR)))) 
                                           | (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                >> 0x00000014U) 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR))))))))) 
                              | ((0U != (0x0000001fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                            >> 0x00000014U))) 
                                 && (1U & (((((0x0000001fU 
                                               & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U)) 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                            ? (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD))))
                                            : (((((0x0000001fU 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U)) 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                        & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                                   && (1U 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                                : (
                                                   ((((0x0000001fU 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                          >> 0x00000014U)) 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR)) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                            & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))) 
                                                       && (1U 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))))))))));
    vlSelfRef.__PVT__lsu_out_bus_lsu_result = ((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_rdata1
                                                : (
                                                   (1U 
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
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_rdata1)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_1 = (1U 
                                                  & ((~ (IData)(vlSelfRef.idu_isRAW)) 
                                                     | ((IData)(vlSelfRef.__PVT__idu_out_bus_exception) 
                                                        >> 4U)));
    vlSelfRef.__PVT__idu_ra_bypass = ((0U != (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)))
                                       ? (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                           ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP)
                                                   ? (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__exu_out_bus_alu_result))
                                               : 0U)
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x0000000fU)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                               ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP)
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))
                                                    ? vlSelfRef.__PVT__lsu_out_bus_lsu_result
                                                    : 0U))
                                               : ((
                                                   (((0x0000001fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x0000000fU)) 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                                     : 0U))
                                                   : vlSelfRef.__PVT__gpr_rdataa)))
                                       : vlSelfRef.__PVT__gpr_rdataa);
    vlSelfRef.__PVT__idu_rb_bypass = ((0U != (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)))
                                       ? (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                           ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP)
                                                   ? (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__exu_out_bus_alu_result))
                                               : 0U)
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x00000014U)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                               ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP)
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))
                                                    ? vlSelfRef.__PVT__lsu_out_bus_lsu_result
                                                    : 0U))
                                               : ((
                                                   (((0x0000001fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x00000014U)) 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                                     : 0U))
                                                   : vlSelfRef.__PVT__gpr_rdatab)))
                                       : vlSelfRef.__PVT__gpr_rdatab);
    vlSelfRef.__PVT__idu_in_ready = (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                      | (IData)(vlSelfRef.__PVT__exu_in_ready)) 
                                     & ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_1) 
                                        & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                           & (~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__next_state)))));
    vlSelfRef.__PVT__idu_out_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                      & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                         & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_1)));
    vlSelfRef.__PVT__w_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                & ((IData)(vlSelfRef.__PVT__idu_out_valid) 
                                   & ((~ ((IData)(vlSelfRef.__PVT__idu_out_bus_exception) 
                                          >> 4U)) & 
                                      ((IData)(vlSelfRef.__PVT__idu_out_bus_isBRANCH) 
                                       | (0x6fU == 
                                          (0x0000007fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))))));
    __VdfgRegularize_h6e95ff9d_0_31 = (1U & ((~ (IData)(vlSelfRef.__PVT__idu_out_valid)) 
                                             | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                != vlSelfRef.__PVT__exu_out_bus_alu_result)));
    vlSelfRef.flush_valid = ((IData)(vlSelfRef.flush_exception_valid) 
                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                    & (IData)(vlSelfRef.__PVT__exu_in_ready)))
                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                 : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                    & ((IData)(vlSelfRef.__PVT__exu_in_ready) 
                                       & ((IData)(vlSelfRef.__PVT__exu_out_bus_dnpc_valid)
                                           ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                           : ((~ (IData)(vlSelfRef.__PVT__idu_out_valid)) 
                                              | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                 != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc)))))));
    vlSelfRef.__PVT__idu_flush_valid = ((IData)(vlSelfRef.__PVT__fencei_pass) 
                                        | (IData)(vlSelfRef.flush_valid));
}

extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h21e9e644_0;
extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hc2a9f976_0;

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__IROM_arvalid = ((~ (IData)(vlSelfRef.reset)) 
                                     & (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit)) 
                                         & ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__state)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_reqValid))) 
                                        | ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__state)) 
                                           | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__state)))));
    if (vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) {
        vlSelfRef.__PVT__io_master_arburst = 1U;
        if (vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__io_master_arlen = 0U;
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__DRAM_arsize;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__DRAM_arvalid;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
        } else {
            vlSelfRef.__PVT__io_master_arlen = 3U;
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__IROM_arvalid;
            vlSelfRef.__PVT__io_master_araddr = (0xfffffff0U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        }
    } else {
        if (vlSelfRef.__PVT__IROM_arvalid) {
            vlSelfRef.__PVT__io_master_arburst = 1U;
            vlSelfRef.__PVT__io_master_arlen = 3U;
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_araddr = (0xfffffff0U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        } else {
            if (vlSelfRef.__PVT__DRAM_arvalid) {
                vlSelfRef.__PVT__io_master_arburst = 1U;
                vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__DRAM_arsize;
                vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
            } else {
                vlSelfRef.__PVT__io_master_arburst = 0U;
                vlSelfRef.__PVT__io_master_arsize = 0U;
                vlSelfRef.__PVT__io_master_araddr = 0U;
            }
            vlSelfRef.__PVT__io_master_arlen = 0U;
        }
        vlSelfRef.__PVT__io_master_arvalid = ((IData)(vlSelfRef.__PVT__IROM_arvalid) 
                                              || (IData)(vlSelfRef.__PVT__DRAM_arvalid));
    }
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__DRAM_arvalid) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__IROM_arvalid) 
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.reset)) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.__PVT__io_master_rlast))) 
                     << 4U) | ((((IData)(vlSelfRef.__PVT__DRAM_rready) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__io_master_rvalid) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state))));
    vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_next_state 
        = VysyxSoCFull__ConstPool__TABLE_h21e9e644_0
        [__Vtableidx1];
    vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel_next 
        = VysyxSoCFull__ConstPool__TABLE_hc2a9f976_0
        [__Vtableidx1];
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_master_arready = ((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0)) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready))) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__casez_tmp));
    vlSelfRef.__PVT__io_master_awready = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_2));
    if (vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__DRAM_arready = (1U & (IData)(vlSelfRef.__PVT__io_master_arready));
            vlSelfRef.__PVT__IROM_arready = (1U & 0U);
        } else {
            vlSelfRef.__PVT__DRAM_arready = (1U & 0U);
            vlSelfRef.__PVT__IROM_arready = (1U & (IData)(vlSelfRef.__PVT__io_master_arready));
        }
    } else {
        vlSelfRef.__PVT__DRAM_arready = (1U & ((1U 
                                                & (~ (IData)(vlSelfRef.__PVT__IROM_arvalid))) 
                                               && ((IData)(vlSelfRef.__PVT__DRAM_arvalid) 
                                                   && (IData)(vlSelfRef.__PVT__io_master_arready))));
        vlSelfRef.__PVT__IROM_arready = (1U & ((IData)(vlSelfRef.__PVT__IROM_arvalid) 
                                               && (IData)(vlSelfRef.__PVT__io_master_arready)));
    }
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_FINAL_npc;
    __Vdly__tb_FINAL_npc = 0;
    IData/*31:0*/ __VdlyVal__bcache_u0__DOT__cache_mem__v0;
    __VdlyVal__bcache_u0__DOT__cache_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bcache_u0__DOT__cache_mem__v0;
    __VdlyDim0__bcache_u0__DOT__cache_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__bcache_u0__DOT__cache_mem__v0;
    __VdlySet__bcache_u0__DOT__cache_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__bcache_u0__DOT__cache_valid__v0;
    __VdlySet__bcache_u0__DOT__cache_valid__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bcache_u0__DOT__cache_valid__v8;
    __VdlyDim0__bcache_u0__DOT__cache_valid__v8 = 0;
    CData/*0:0*/ __VdlySet__bcache_u0__DOT__cache_valid__v8;
    __VdlySet__bcache_u0__DOT__cache_valid__v8 = 0;
    CData/*0:0*/ __VdlyVal__bcache_u0__DOT__cache_type__v0;
    __VdlyVal__bcache_u0__DOT__cache_type__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bcache_u0__DOT__cache_type__v0;
    __VdlyDim0__bcache_u0__DOT__cache_type__v0 = 0;
    CData/*0:0*/ __VdlySet__bcache_u0__DOT__cache_type__v0;
    __VdlySet__bcache_u0__DOT__cache_type__v0 = 0;
    IData/*26:0*/ __VdlyVal__bcache_u0__DOT__cache_tag__v0;
    __VdlyVal__bcache_u0__DOT__cache_tag__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bcache_u0__DOT__cache_tag__v0;
    __VdlyDim0__bcache_u0__DOT__cache_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__bcache_u0__DOT__cache_tag__v0;
    __VdlySet__bcache_u0__DOT__cache_tag__v0 = 0;
    // Body
    __VdlySet__bcache_u0__DOT__cache_tag__v0 = 0U;
    __VdlySet__bcache_u0__DOT__cache_valid__v0 = 0U;
    __VdlySet__bcache_u0__DOT__cache_valid__v8 = 0U;
    __VdlySet__bcache_u0__DOT__cache_mem__v0 = 0U;
    __VdlySet__bcache_u0__DOT__cache_type__v0 = 0U;
    __Vdly__tb_FINAL_npc = vlSelfRef.tb_FINAL_npc;
    if (vlSelfRef.reset) {
        vlSelfRef.__PVT__bcache_u0__DOT__unnamedblk1__DOT__i = 8U;
        __VdlySet__bcache_u0__DOT__cache_valid__v0 = 1U;
        vlSelfRef.tb_FINAL_inst = 0U;
        vlSelfRef.tb_FINAL_pc = 0U;
        __Vdly__tb_FINAL_npc = 0U;
    } else {
        if (vlSelfRef.__PVT__w_valid) {
            __VdlyDim0__bcache_u0__DOT__cache_valid__v8 
                = (7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                         >> 2U));
            __VdlySet__bcache_u0__DOT__cache_valid__v8 = 1U;
        }
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) {
            vlSelfRef.tb_FINAL_inst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_instruction;
            vlSelfRef.tb_FINAL_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_bus_pc;
            __Vdly__tb_FINAL_npc = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP) 
                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isBRANCH) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)))
                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result
                                     : ((0x00000010U 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception))
                                         ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC
                                         : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc));
            __Vdly__tb_FINAL_npc = ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception))
                                     ? ((0x0eU == (0x0000000fU 
                                                   & (IData)(vlSelfRef.__PVT__wbu_out_bus_exception)))
                                         ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                         : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC)
                                     : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isBRANCH) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)))
                                         ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result
                                         : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc));
        } else {
            vlSelfRef.tb_FINAL_inst = vlSelfRef.tb_FINAL_inst;
            vlSelfRef.tb_FINAL_pc = vlSelfRef.tb_FINAL_pc;
            __Vdly__tb_FINAL_npc = vlSelfRef.tb_FINAL_npc;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.__PVT__w_valid) {
            __VdlyVal__bcache_u0__DOT__cache_tag__v0 
                = (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                   >> 5U);
            __VdlyDim0__bcache_u0__DOT__cache_tag__v0 
                = (7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                         >> 2U));
            __VdlySet__bcache_u0__DOT__cache_tag__v0 = 1U;
            __VdlyVal__bcache_u0__DOT__cache_mem__v0 
                = (vlSelfRef.__PVT__idu_out_bus_imm 
                   + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc);
            __VdlyDim0__bcache_u0__DOT__cache_mem__v0 
                = (7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                         >> 2U));
            __VdlySet__bcache_u0__DOT__cache_mem__v0 = 1U;
            __VdlyVal__bcache_u0__DOT__cache_type__v0 
                = (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction));
            __VdlyDim0__bcache_u0__DOT__cache_type__v0 
                = (7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                         >> 2U));
            __VdlySet__bcache_u0__DOT__cache_type__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__IDU_0__DOT__state = ((~ ((IData)(vlSelfRef.reset) 
                                              | (IData)(vlSelfRef.__PVT__idu_flush_valid))) 
                                          & (IData)(vlSelfRef.__PVT__IDU_0__DOT__next_state));
    vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel_next));
    vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_next_state));
    vlSelfRef.tb_isFINAL = ((1U & (~ (IData)(vlSelfRef.reset))) 
                            && (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid));
    vlSelfRef.tb_isMEM = ((1U & (~ (IData)(vlSelfRef.reset))) 
                          && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                              && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isSTORE)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid))));
    vlSelfRef.tb_dnpc_valid = ((1U & (~ (IData)(vlSelfRef.reset))) 
                               && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                   && (1U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isBRANCH) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result))) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception) 
                                                >> 4U)))));
    if (__VdlySet__bcache_u0__DOT__cache_tag__v0) {
        vlSelfRef.__PVT__bcache_u0__DOT__cache_tag[__VdlyDim0__bcache_u0__DOT__cache_tag__v0] 
            = __VdlyVal__bcache_u0__DOT__cache_tag__v0;
    }
    if (__VdlySet__bcache_u0__DOT__cache_valid__v0) {
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[0U] = 0U;
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[1U] = 0U;
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[2U] = 0U;
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[3U] = 0U;
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[4U] = 0U;
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[5U] = 0U;
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[6U] = 0U;
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[7U] = 0U;
    }
    if (__VdlySet__bcache_u0__DOT__cache_valid__v8) {
        vlSelfRef.__PVT__bcache_u0__DOT__cache_valid[__VdlyDim0__bcache_u0__DOT__cache_valid__v8] = 1U;
    }
    if (__VdlySet__bcache_u0__DOT__cache_mem__v0) {
        vlSelfRef.__PVT__bcache_u0__DOT__cache_mem[__VdlyDim0__bcache_u0__DOT__cache_mem__v0] 
            = __VdlyVal__bcache_u0__DOT__cache_mem__v0;
    }
    if (__VdlySet__bcache_u0__DOT__cache_type__v0) {
        vlSelfRef.__PVT__bcache_u0__DOT__cache_type[__VdlyDim0__bcache_u0__DOT__cache_type__v0] 
            = __VdlyVal__bcache_u0__DOT__cache_type__v0;
    }
    vlSelfRef.tb_FINAL_npc = __Vdly__tb_FINAL_npc;
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) {
        vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 
            = (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception) 
                        >> 4U)));
        vlSelfRef.__PVT__wbu_out_bus_exception = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception;
    } else {
        vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 = 0U;
        vlSelfRef.__PVT__wbu_out_bus_exception = 0U;
    }
    vlSelfRef.__PVT__fencei_pass = ((IData)(vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0) 
                                    & (0x0eU == (0x0000000fU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception))));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flush_exception_valid = (1U & ((IData)(vlSelfRef.__PVT__wbu_out_bus_exception) 
                                             >> 4U));
    vlSelfRef.__PVT__DRAM_arsize = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                     ? 0U : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                              ? 1U : 2U));
}

extern const VlUnpacked<CData/*2:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h986ffb83_0;

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_18;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_18 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_21;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_22;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_22 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_34;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_34 = 0;
    CData/*0:0*/ EXU_0__DOT____VdfgExtracted_hbeeeed61__0;
    EXU_0__DOT____VdfgExtracted_hbeeeed61__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__EXU_0__DOT__comp_b = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_isUseImm)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_imm
                                            : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val);
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_isUseImm) {
        vlSelfRef.__PVT__EXU_0__DOT__b = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_imm;
        vlSelfRef.__PVT__EXU_0__DOT__a = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUsePC)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc
                                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val);
    } else {
        vlSelfRef.__PVT__EXU_0__DOT__b = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val;
        vlSelfRef.__PVT__EXU_0__DOT__a = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val;
    }
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_25 
        = ((0x17U == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__csr_rdata = ((((0x0b00U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                    | (0x0b80U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))) 
                                   | (((0x0301U == 
                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                         >> 0x00000014U)) 
                                       | (0x0305U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))) 
                                      | ((0x0340U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U)) 
                                         | ((0x0341U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                            | ((0x0342U 
                                                == 
                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                               | (0x0300U 
                                                  == 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U)))))))
                                   ? ((0x0b00U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLE
                                       : ((0x0b80U 
                                           == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U))
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLEH
                                           : ((0x0301U 
                                               == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                               ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MISA
                                               : ((0x0305U 
                                                   == 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U))
                                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC
                                                   : 
                                                  ((0x0340U 
                                                    == 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x00000014U))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSCRATCH
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                       >> 0x00000014U))
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCAUSE
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSTATUS)))))))
                                   : ((0x0f11U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MVENDORID
                                       : ((0x0f12U 
                                           == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U))
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MARCHID
                                           : ((0x0343U 
                                               == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                               ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVAL
                                               : 0x2b2b2b2bU))));
    vlSelfRef.__PVT__IDU_0__DOT__next_state = (1U & 
                                               ((IData)(vlSelfRef.__PVT__IDU_0__DOT__state)
                                                 ? 
                                                (~ (IData)(vlSelfRef.__PVT__fencei_pass))
                                                 : 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                                 & (0x0000100fU 
                                                    == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
    vlSelfRef.__PVT__gpr_rdataa = ((0U == (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x0000000fU)))
                                    ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR
                                   [(0x0000001fU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                      >> 0x0000000fU))]);
    vlSelfRef.__PVT__gpr_rdatab = ((0U == (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000014U)))
                                    ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR
                                   [(0x0000001fU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                      >> 0x00000014U))]);
    vlSelfRef.__PVT__IDU_0__DOT__isXOR = (IData)((0x00004033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isOR = (IData)((0x00006033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isAND = (IData)((0x00007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLT = (IData)((0x00002033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTU = (IData)((0x00003033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSB = (IData)((0x00000023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSH = (IData)((0x00001023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSW = (IData)((0x00002023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isU = ((0x37U == (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                        | (0x17U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLT = (IData)((0x00004063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGE = (IData)((0x00005063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isADDI = (IData)((0x00000013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isXORI = (IData)((0x00004013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isORI = (IData)((0x00006013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isANDI = (IData)((0x00007013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBEQ = (IData)((0x00000063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBNE = (IData)((0x00001063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLTU = (IData)((0x00006063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGEU = (IData)((0x00007063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTI = (IData)((0x00002013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isJALR = (IData)((0x00000067U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLB = (IData)((3U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLH = (IData)((0x00001003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLHU = (IData)((0x00005003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTIU = (IData)(
                                                   (0x00003013U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLW = (IData)((0x00002003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLBU = (IData)((0x00004003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = (IData)(
                                                          (0x00000033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_22 = (IData)(
                                                          (0x00005033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRS = (IData)(
                                                   (0x00002073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI = (IData)(
                                                    (0x00006073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRC = (IData)(
                                                   (0x00003073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI = (IData)(
                                                    (0x00007073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRW = (IData)(
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI = (IData)(
                                                    (0x00005073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_34 = (IData)(
                                                          (0x00001000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_18 = (IData)(
                                                          (0x00005013U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out = ((IData)(1U) 
                                                   + 
                                                   ((~ vlSelfRef.__PVT__EXU_0__DOT__comp_b) 
                                                    + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val));
    vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL = (0xffffffffU 
                                                 == 
                                                 (~ 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                   ^ vlSelfRef.__PVT__EXU_0__DOT__comp_b)));
    vlSelfRef.__PVT__EXU_0__DOT__op_and = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                           & vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__op_or = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                          | vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_33 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLT) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU));
    vlSelfRef.__PVT__idu_out_bus_isSTORE = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
                                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB) 
                                               | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_3 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isU) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_27 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBEQ) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBNE));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_30 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLTU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGEU));
    vlSelfRef.__PVT__idu_out_bus_comp_isUseImm = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
                                                  | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_24 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLW) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLBU));
    vlSelfRef.__PVT__IDU_0__DOT__isADD = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSUB = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRL = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_22) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRA = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_22) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    __Vtableidx2 = ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS))));
    vlSelfRef.__PVT__idu_out_bus_opCSR = VysyxSoCFull__ConstPool__TABLE_h986ffb83_0
        [__Vtableidx2];
    vlSelfRef.__VdfgRegularize_he0d61652_0_0 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS) 
                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
                                                   | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI) 
                                                         | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                                                            | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI))))));
    vlSelfRef.__PVT__IDU_0__DOT__isSLL = ((0x33U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                          & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_34));
    vlSelfRef.__PVT__IDU_0__DOT__isSLLI = ((0x13U == 
                                            (0x0000007fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                           & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_34));
    vlSelfRef.__PVT__IDU_0__DOT__isSRLI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_18) 
                                           & (0U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRAI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_18) 
                                           & (0x20U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000019U)));
    EXU_0__DOT____VdfgExtracted_hbeeeed61__0 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUnSigned)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (1ULL 
                                                                   & ((1ULL 
                                                                       + 
                                                                       ((~ (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_b))) 
                                                                        + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)))) 
                                                                      >> 0x00000020U)))) 
                                                       & (0U 
                                                          != vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out))
                                                       : 
                                                      ((~ 
                                                        (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                           ^ vlSelfRef.__PVT__EXU_0__DOT__comp_b) 
                                                          | vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out) 
                                                         >> 0x0000001fU)) 
                                                       | ((~ 
                                                           (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                            >> 0x0000001fU)) 
                                                          & (vlSelfRef.__PVT__EXU_0__DOT__comp_b 
                                                             >> 0x0000001fU))))));
    vlSelfRef.__PVT__exu_out_bus_alu_result = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x0300U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))))
                                                ? (
                                                   (0x00000100U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                    ? 
                                                   (vlSelfRef.__PVT__EXU_0__DOT__a 
                                                    - vlSelfRef.__PVT__EXU_0__DOT__b)
                                                    : 
                                                   (vlSelfRef.__PVT__EXU_0__DOT__a 
                                                    + vlSelfRef.__PVT__EXU_0__DOT__b))
                                                : (
                                                   (0x00000020U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.__PVT__EXU_0__DOT__b))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                                                  (0x0000001fU 
                                                                   & vlSelfRef.__PVT__EXU_0__DOT__b))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                                                    (0x0000001fU 
                                                                     & vlSelfRef.__PVT__EXU_0__DOT__b))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                       ? vlSelfRef.__PVT__EXU_0__DOT__op_and
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                        ? vlSelfRef.__PVT__EXU_0__DOT__op_or
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                                         ? 
                                                        (vlSelfRef.__PVT__EXU_0__DOT__a 
                                                         ^ vlSelfRef.__PVT__EXU_0__DOT__b)
                                                         : vlSelfRef.__PVT__EXU_0__DOT__b)))))));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_4 
        = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_3) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR));
    vlSelfRef.__PVT__idu_out_bus_isBRANCH = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_27) 
                                             | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                                                   | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_30))));
    vlSelfRef.__PVT__idu_out_bus_isLOAD = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                                 | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU))));
    vlSelfRef.__VdfgRegularize_he0d61652_0_2 = (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR))));
    vlSelfRef.__PVT__IDU_0__DOT__isI = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                          | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                             | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR) 
                                                                   | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                                                                         | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                                                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                                                               | (IData)(vlSelfRef.__VdfgRegularize_he0d61652_0_0)))))))))))))));
    vlSelfRef.__PVT__exu_out_bus_comp_result = (1U 
                                                & ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                                                     ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)
                                                     : 
                                                    (~ (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                                                     ? 
                                                    (~ (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))
                                                     : (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))));
    vlSelfRef.__PVT__idu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception)
                                               : (((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_4) 
                                                   | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_27) 
                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
                                                         | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                                                            | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_30) 
                                                               | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                                                                  | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                                                     | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB) 
                                                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADD) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSUB) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLL) 
                                                                                | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_33) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXOR) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRL) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRA) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isOR) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isAND) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he0d61652_0_0) 
                                                                                | ((0x00000073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x00100073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x30200073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | (0x0000100fU 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)))))))))))))))))))))))))))))))))))
                                                   ? 
                                                  ((0x00100073U 
                                                    == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                    ? 0x13U
                                                    : 
                                                   ((0x00000073U 
                                                     == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x30200073U 
                                                      == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                      ? 0x1eU
                                                      : 
                                                     ((0x0000100fU 
                                                       == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                       ? 0x0eU
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception)))))
                                                   : 0x12U));
    vlSelfRef.__PVT__idu_out_bus_imm = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isI)
                                         ? (((- (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x0000001fU))) 
                                             << 0x0000000cU) 
                                            | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U))
                                         : ((0x6fU 
                                             == (0x0000007fU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))
                                             ? ((((0x00000ffeU 
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
                                             : ((IData)(vlSelfRef.__PVT__idu_out_bus_isSTORE)
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
                                                ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isU)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__idu_out_bus_isBRANCH)
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

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                               : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_21)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)
                                                      ? 
                                                     (0x00000010U 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)
                                                          ? 4U
                                                          : 6U))
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                                       : 
                                                      (0x00000010U 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)
                                                           ? 4U
                                                           : 6U)))
                                                      : 
                                                     (0x00000010U 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)
                                                          ? 4U
                                                          : 6U)))))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)));
    vlSelfRef.__PVT__r_tar = vlSelfRef.__PVT__bcache_u0__DOT__cache_mem
        [(7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                >> 2U))];
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__io_master_bready = (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                          | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
                                         & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.__PVT__DRAM_rready = (((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                     | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
                                    & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.__PVT__io_master_rready = ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                         & ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                                             ? (IData)(vlSelfRef.__PVT__DRAM_rready)
                                             : (~ (IData)(vlSelfRef.reset))));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_master_awvalid = ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_10));
    vlSelfRef.__PVT__DRAM_arvalid = ((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_7)) 
                                      | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_10));
}

void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_master_bvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1)
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bvalid_reg) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1))));
    vlSelfRef.__PVT__io_master_rvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid)
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0)) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1))));
    vlSelfRef.__PVT__io_master_bid = ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_0)
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0))
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)
                                        : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_1)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bid_reg)
                                                  : 0U));
    vlSelfRef.__PVT__io_master_rid = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)
                                        : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                                  ? 
                                                 vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w
                                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                                  : 0U));
    vlSelfRef.__PVT__io_master_rlast = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0) 
                                         & (((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                                              : ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast)));
    vlSelfRef.__PVT__IROM_rlast = ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                   & (IData)(vlSelfRef.__PVT__io_master_rlast));
}

void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_1;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    // Body
    vlSelfRef.__PVT__lsu_in_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_21)) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.b_fire) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.r_fire)) 
                                              | ((IData)(vlSelfRef.__PVT__lsu_out_bus_exception) 
                                                 >> 4U))));
    vlSelfRef.idu_isRAW = (((0U != (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x0000000fU))) 
                            && (1U & (((((0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x0000000fU)) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                       ? (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                             & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD))))
                                       : (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                           ? ((1U & 
                                               (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                              && (1U 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x0000000fU)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR)) 
                                              && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))) 
                                                  && (1U 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))))))))) 
                           | (((0U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                       >> 0x00000014U)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR)) 
                                  & ((0x0b00U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U)) 
                                     & ((((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U) 
                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_csrrd)) 
                                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                            & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR)))) 
                                        | ((((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000014U) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csrrd)) 
                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_opCSR)))) 
                                           | (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                >> 0x00000014U) 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR))))))))) 
                              | ((0U != (0x0000001fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                            >> 0x00000014U))) 
                                 && (1U & (((((0x0000001fU 
                                               & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U)) 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                            ? (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD))))
                                            : (((((0x0000001fU 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U)) 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                        & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                                   && (1U 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                                : (
                                                   ((((0x0000001fU 
                                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                          >> 0x00000014U)) 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR)) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                            & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))) 
                                                       && (1U 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))))))))))));
    vlSelfRef.__PVT__lsu_out_bus_lsu_result = ((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_rdata1
                                                : (
                                                   (1U 
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
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_rdata1)));
    vlSelfRef.__PVT__exu_in_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                           | (IData)(vlSelfRef.__PVT__lsu_in_ready)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_1 = (1U 
                                                  & ((~ (IData)(vlSelfRef.idu_isRAW)) 
                                                     | ((IData)(vlSelfRef.__PVT__idu_out_bus_exception) 
                                                        >> 4U)));
    vlSelfRef.__PVT__idu_ra_bypass = ((0U != (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)))
                                       ? (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x0000000fU)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                           ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP)
                                                   ? (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__exu_out_bus_alu_result))
                                               : 0U)
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x0000000fU)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                               ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP)
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))
                                                    ? vlSelfRef.__PVT__lsu_out_bus_lsu_result
                                                    : 0U))
                                               : ((
                                                   (((0x0000001fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x0000000fU)) 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                                     : 0U))
                                                   : vlSelfRef.__PVT__gpr_rdataa)))
                                       : vlSelfRef.__PVT__gpr_rdataa);
    vlSelfRef.__PVT__idu_rb_bypass = ((0U != (0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)))
                                       ? (((((0x0000001fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWGPR))
                                           ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isWCOMP)
                                                   ? (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__exu_out_bus_alu_result))
                                               : 0U)
                                           : (((((0x0000001fU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x00000014U)) 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWGPR))
                                               ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isWCOMP)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_comp_result)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isJUMP)
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_snpc
                                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))
                                                    ? vlSelfRef.__PVT__lsu_out_bus_lsu_result
                                                    : 0U))
                                               : ((
                                                   (((0x0000001fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                         >> 0x00000014U)) 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWGPR))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                    & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD)))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isWCOMP)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc
                                                      : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_lsu_result
                                                     : 0U))
                                                   : vlSelfRef.__PVT__gpr_rdatab)))
                                       : vlSelfRef.__PVT__gpr_rdatab);
    vlSelfRef.__PVT__exu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception)
                                               : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                   & (IData)(vlSelfRef.__PVT__exu_in_ready))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                                       & (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result)))
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & vlSelfRef.__PVT__exu_out_bus_alu_result))
                                                     ? 0x10U
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception))
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception)));
    vlSelfRef.__PVT__exu_out_bus_dnpc_valid = ((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception) 
                                                    >> 4U))) 
                                               && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                    & (IData)(vlSelfRef.__PVT__exu_in_ready)) 
                                                   && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                                           & (IData)(vlSelfRef.__PVT__exu_out_bus_comp_result))) 
                                                       && (1U 
                                                           & (~ 
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & vlSelfRef.__PVT__exu_out_bus_alu_result)))))));
    vlSelfRef.__PVT__idu_in_ready = (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                      | (IData)(vlSelfRef.__PVT__exu_in_ready)) 
                                     & ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_1) 
                                        & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                           & (~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__next_state)))));
    vlSelfRef.__PVT__idu_out_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                      & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                         & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_1)));
    vlSelfRef.__PVT__dnpc = ((IData)(vlSelfRef.flush_exception_valid)
                              ? ((0x0eU == (0x0000000fU 
                                            & (IData)(vlSelfRef.__PVT__wbu_out_bus_exception)))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC)
                              : (((~ (IData)(vlSelfRef.__PVT__exu_out_bus_dnpc_valid)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                  : vlSelfRef.__PVT__exu_out_bus_alu_result));
    vlSelfRef.__PVT__w_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                & ((IData)(vlSelfRef.__PVT__idu_out_valid) 
                                   & ((~ ((IData)(vlSelfRef.__PVT__idu_out_bus_exception) 
                                          >> 4U)) & 
                                      ((IData)(vlSelfRef.__PVT__idu_out_bus_isBRANCH) 
                                       | (0x6fU == 
                                          (0x0000007fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))))));
    __VdfgRegularize_h6e95ff9d_0_31 = (1U & ((~ (IData)(vlSelfRef.__PVT__idu_out_valid)) 
                                             | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                != vlSelfRef.__PVT__exu_out_bus_alu_result)));
    vlSelfRef.flush_valid = ((IData)(vlSelfRef.flush_exception_valid) 
                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                    & (IData)(vlSelfRef.__PVT__exu_in_ready)))
                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                 : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                    & ((IData)(vlSelfRef.__PVT__exu_in_ready) 
                                       & ((IData)(vlSelfRef.__PVT__exu_out_bus_dnpc_valid)
                                           ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                           : ((~ (IData)(vlSelfRef.__PVT__idu_out_valid)) 
                                              | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                 != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc)))))));
    vlSelfRef.__PVT__idu_flush_valid = ((IData)(vlSelfRef.__PVT__fencei_pass) 
                                        | (IData)(vlSelfRef.flush_valid));
}

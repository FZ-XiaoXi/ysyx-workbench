// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) {
        vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 
            = (1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception) 
                        >> 4U)));
        vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception;
    } else {
        vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 = 0U;
        vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception = 0U;
    }
    vlSelfRef.__VdfgSynthJoin___PVT__idu_ra_isRAW_h6e95ff9d_0_28 
        = (1U & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid))));
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__EXU_0__DOT__a = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_isUseImm)
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUsePC)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc
                                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val);
    vlSelfRef.flush_exception_valid = (1U & ((IData)(vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception) 
                                             >> 4U));
    vlSelfRef.__PVT__EXU_0__DOT__op_and = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                           & vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__op_or = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                          | vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result 
        = ((IData)((0U != (0x0300U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))))
            ? ((0x00000100U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? (vlSelfRef.__PVT__EXU_0__DOT__a - vlSelfRef.__PVT__EXU_0__DOT__b)
                : (vlSelfRef.__PVT__EXU_0__DOT__a + vlSelfRef.__PVT__EXU_0__DOT__b))
            : ((0x00000020U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                : ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                    (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                    : ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                         (0x0000001fU 
                                          & vlSelfRef.__PVT__EXU_0__DOT__b))
                        : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                            ? vlSelfRef.__PVT__EXU_0__DOT__op_and
                            : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                ? vlSelfRef.__PVT__EXU_0__DOT__op_or
                                : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                    ? (vlSelfRef.__PVT__EXU_0__DOT__a 
                                       ^ vlSelfRef.__PVT__EXU_0__DOT__b)
                                    : vlSelfRef.__PVT__EXU_0__DOT__b)))))));
}

extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_hc136131a_0;

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__IDU_0__DOT__next_state = (1U & 
                                               ((IData)(vlSelfRef.__PVT__IDU_0__DOT__state)
                                                 ? 
                                                (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__fencei_flush))
                                                 : 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                                 & (0x0000100fU 
                                                    == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
    vlSelfRef.__PVT__io_master_rready = ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                         & ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__rready)
                                             : (~ (IData)(vlSelfRef.reset))));
    if (vlSelfRef.__PVT__u_bridge__DOT__W_state) {
        vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 1U;
        if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bvalid))) {
            vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 0U;
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid) {
            vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 1U;
        }
    }
    __Vtableidx2 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
                     << 5U) | ((((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid)) 
                                << 4U) | (IData)(vlSelfRef.__PVT__u_clint__DOT__wstate)));
    vlSelfRef.__PVT__u_clint__DOT__wnext_state = VysyxSoCFull__ConstPool__TABLE_hc136131a_0
        [__Vtableidx2];
    vlSelfRef.__PVT__io_master_awvalid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
}

void VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.idu_isRAW = (((0U != (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x0000000fU))) 
                            && ((((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x0000000fU)) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__VdfgRegularize_h6e95ff9d_0_34))
                                 ? (IData)(vlSelfRef.__VdfgSynthJoin___PVT__idu_ra_isRAW_h6e95ff9d_0_28)
                                 : ((((0x0000001fU 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x0000000fU)) 
                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_33))
                                     ? ((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                        && (1U & (~ 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                     : (((0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x0000000fU)) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__VdfgRegularize_h6e95ff9d_0_35)))))) 
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
                                 && ((((0x0000001fU 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U)) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__VdfgRegularize_h6e95ff9d_0_34))
                                      ? (IData)(vlSelfRef.__VdfgSynthJoin___PVT__idu_ra_isRAW_h6e95ff9d_0_28)
                                      : ((((0x0000001fU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U)) 
                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_33))
                                          ? ((1U & 
                                              (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD))))) 
                                             && (1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)))))
                                          : ((((0x0000001fU 
                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U)) 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__VdfgRegularize_h6e95ff9d_0_35)))))));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_0 
        = (1U & ((~ (IData)(vlSelfRef.idu_isRAW)) | 
                 ((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_exception) 
                  >> 4U)));
    vlSelfRef.__PVT__idu_out_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                      & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                         & (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_0)));
}

void VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__exu_out_bus_dnpc_valid = ((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_exception) 
                                                    >> 4U))) 
                                               && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__exu_out_ready)) 
                                                   && ((~ 
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))) 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                                             & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result))))));
    vlSelfRef.__PVT__IDU_0__DOT__idu_in_ready = (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__exu_out_ready)) 
                                                 & ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_0) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__state)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__IDU_0__DOT__next_state)))));
    vlSelfRef.__PVT__dnpc_valid = ((IData)(vlSelfRef.flush_exception_valid) 
                                   || ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__exu_out_ready))
                                        ? ((1U & (~ (IData)(vlSelfRef.__PVT__idu_out_valid))) 
                                           || (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                               != vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
                                        : ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__exu_out_ready)) 
                                           && ((IData)(vlSelfRef.__PVT__exu_out_bus_dnpc_valid)
                                                ? (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__idu_out_valid))) 
                                                   || (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                       != vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
                                                : (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__idu_out_valid))) 
                                                   || (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc 
                                                       != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc))))));
    vlSelfRef.flush_valid = vlSelfRef.__PVT__dnpc_valid;
    vlSelfRef.__PVT__IDU_0__DOT__flush_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__fencei_flush) 
                                                | (IData)(vlSelfRef.flush_valid));
}

extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h21e9e644_0;
extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hc2a9f976_0;

void VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if (vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) {
        vlSelfRef.__PVT__S_arburst = 1U;
        if (vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__S_arlen = 0U;
            vlSelfRef.__PVT__S_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__arsize;
            vlSelfRef.__PVT__S_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__arvalid;
            vlSelfRef.__PVT__S_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
        } else {
            vlSelfRef.__PVT__S_arlen = 3U;
            vlSelfRef.__PVT__S_arsize = 2U;
            vlSelfRef.__PVT__S_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__out_arvalid;
            vlSelfRef.__PVT__S_araddr = (0xfffffff0U 
                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        }
    } else {
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__out_arvalid) {
            vlSelfRef.__PVT__S_arburst = 1U;
            vlSelfRef.__PVT__S_arlen = 3U;
            vlSelfRef.__PVT__S_arsize = 2U;
            vlSelfRef.__PVT__S_araddr = (0xfffffff0U 
                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        } else {
            if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__arvalid) {
                vlSelfRef.__PVT__S_arburst = 1U;
                vlSelfRef.__PVT__S_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__arsize;
                vlSelfRef.__PVT__S_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
            } else {
                vlSelfRef.__PVT__S_arburst = 0U;
                vlSelfRef.__PVT__S_arsize = 0U;
                vlSelfRef.__PVT__S_araddr = 0U;
            }
            vlSelfRef.__PVT__S_arlen = 0U;
        }
        vlSelfRef.__PVT__S_arvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__out_arvalid) 
                                      || (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__arvalid));
    }
    vlSelfRef.__PVT__u_bridge__DOT__ar_sel_now = ((0x02000000U 
                                                   <= vlSelfRef.__PVT__S_araddr) 
                                                  & (0x02000008U 
                                                     > vlSelfRef.__PVT__S_araddr));
    vlSelfRef.__PVT__S_rvalid = ((1U & ((IData)(vlSelfRef.__PVT__u_bridge__DOT__R_state)
                                         ? (~ (IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg))
                                         : (IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_now)))
                                  ? (IData)(vlSelfRef.__PVT__io_master_rvalid)
                                  : (IData)(vlSelfRef.__PVT__CLINT_rvalid));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_bridge__DOT__R_state)
                                                     ? 
                                                    (~ (IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg))
                                                     : (IData)(vlSelfRef.__PVT__u_bridge__DOT__ar_sel_now)));
    vlSelfRef.__PVT__CLINT_arvalid = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)) 
                                      & (IData)(vlSelfRef.__PVT__S_arvalid));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17) {
        vlSelfRef.__PVT__S_rlast = vlSelfRef.__PVT__io_master_rlast;
        vlSelfRef.__PVT__S_rdata = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                      ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                           ? (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 3U))
                                           : 0U) | 
                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((0x0000ff00U 
                                                  & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                       >> 0x00000018U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r3)) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                        >> 0x00000010U)
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r2)))) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                        >> 8U)
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r1)) 
                                                      << 8U)) 
                                                  | (0x000000ffU 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                         ? vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r0)))))
                                            : 0U)))
                                      : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                                               [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                                : 0U));
        vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__S_arvalid;
    } else {
        vlSelfRef.__PVT__S_rlast = vlSelfRef.__PVT__CLINT_rlast;
        vlSelfRef.__PVT__S_rdata = ((0x02000000U == vlSelfRef.__PVT__u_clint__DOT__raddr_reg)
                                     ? vlSelfRef.__PVT__u_clint__DOT__mtime_L
                                     : ((0x02000004U 
                                         == vlSelfRef.__PVT__u_clint__DOT__raddr_reg)
                                         ? vlSelfRef.__PVT__u_clint__DOT__mtime_H
                                         : 0U));
        vlSelfRef.__PVT__io_master_arvalid = 0U;
    }
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__io_master_rready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__CLINT_arvalid) 
                                << 4U) | (IData)(vlSelfRef.__PVT__u_clint__DOT__rstate)));
    vlSelfRef.__PVT__u_clint__DOT__rnext_state = VysyxSoCFull__ConstPool__TABLE_hc136131a_0
        [__Vtableidx4];
    if (vlSelfRef.__PVT__u_bridge__DOT__R_state) {
        vlSelfRef.__PVT__u_bridge__DOT__R_next_state = 1U;
        if ((((IData)(vlSelfRef.__PVT__io_master_rready) 
              & (IData)(vlSelfRef.__PVT__S_rvalid)) 
             & (IData)(vlSelfRef.__PVT__S_rlast))) {
            vlSelfRef.__PVT__u_bridge__DOT__R_next_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_bridge__DOT__R_next_state = 0U;
        if (vlSelfRef.__PVT__S_arvalid) {
            vlSelfRef.__PVT__u_bridge__DOT__R_next_state = 1U;
        }
    }
    __Vtableidx1 = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__arvalid) 
                        << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__out_arvalid) 
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.reset)) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.__PVT__S_rlast))) 
                     << 4U) | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__rready) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__S_rvalid) 
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

void VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
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
                                                   ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
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
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_out_bus_rdata
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
                                                   : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_a)))
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_a);
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
                                                   ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                                    : vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result))
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
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_out_bus_rdata
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
                                                   : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_b)))
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_out_b);
    vlSelfRef.__PVT__S_arready = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)
                                   ? (IData)(vlSelfRef.__PVT__io_master_arready)
                                   : (IData)(vlSelfRef.__PVT__CLINT_arready));
}

extern const VlUnpacked<CData/*0:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0;
extern const VlUnpacked<CData/*0:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0;

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    IData/*31:0*/ __Vdly__tb_FINAL_npc;
    __Vdly__tb_FINAL_npc = 0;
    IData/*31:0*/ __Vdly__u_clint__DOT__mtime_L;
    __Vdly__u_clint__DOT__mtime_L = 0;
    IData/*31:0*/ __Vdly__u_clint__DOT__mtime_H;
    __Vdly__u_clint__DOT__mtime_H = 0;
    // Body
    __Vdly__u_clint__DOT__mtime_L = vlSelfRef.__PVT__u_clint__DOT__mtime_L;
    __Vdly__u_clint__DOT__mtime_H = vlSelfRef.__PVT__u_clint__DOT__mtime_H;
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.__PVT__u_clint__DOT__wstate)) 
                      & (1U == (IData)(vlSelfRef.__PVT__u_clint__DOT__wnext_state)))))) {
        VL_WRITEF_NX("CLINT ONLY READ!\n",0);
        Verilated::runFlushCallbacks();
    }
    __Vdly__tb_FINAL_npc = vlSelfRef.tb_FINAL_npc;
    if (vlSelfRef.reset) {
        __Vdly__u_clint__DOT__mtime_L = 0U;
        __Vdly__u_clint__DOT__mtime_H = 0U;
        vlSelfRef.tb_FINAL_inst = 0U;
        vlSelfRef.tb_FINAL_pc = 0U;
        __Vdly__tb_FINAL_npc = 0U;
        vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg = 0U;
        vlSelfRef.__PVT__u_clint__DOT__raddr_reg = 0U;
        vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg = 0U;
        vlSelfRef.__PVT__u_clint__DOT__wstate = 0U;
        vlSelfRef.__PVT__u_clint__DOT__rstate = 0U;
    } else {
        __Vdly__u_clint__DOT__mtime_H = (IData)(((1ULL 
                                                  + 
                                                  (((QData)((IData)(vlSelfRef.__PVT__u_clint__DOT__mtime_H)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__u_clint__DOT__mtime_L)))) 
                                                 >> 0x00000020U));
        __Vdly__u_clint__DOT__mtime_L = ((IData)(1U) 
                                         + vlSelfRef.__PVT__u_clint__DOT__mtime_L);
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
                                                   & (IData)(vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception)))
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
        if (((IData)(vlSelfRef.__PVT__S_arvalid) & (IData)(vlSelfRef.__PVT__S_arready))) {
            vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg 
                = ((0x02000000U <= vlSelfRef.__PVT__S_araddr) 
                   & (0x02000008U > vlSelfRef.__PVT__S_araddr));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_bridge__DOT__R_next_state)))) {
            vlSelfRef.__PVT__u_bridge__DOT__ar_sel_reg = 0U;
        }
        if ((((0U == (IData)(vlSelfRef.__PVT__u_clint__DOT__rstate)) 
              & (IData)(vlSelfRef.__PVT__CLINT_arvalid)) 
             & (IData)(vlSelfRef.__PVT__CLINT_arready))) {
            vlSelfRef.__PVT__u_clint__DOT__raddr_reg 
                = vlSelfRef.__PVT__S_araddr;
        }
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__aw_fire) {
            vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg 
                = ((0x02000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q) 
                   & (0x02000008U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_bridge__DOT__W_next_state)))) {
            vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg = 0U;
        }
        vlSelfRef.__PVT__u_clint__DOT__wstate = vlSelfRef.__PVT__u_clint__DOT__wnext_state;
        vlSelfRef.__PVT__u_clint__DOT__rstate = vlSelfRef.__PVT__u_clint__DOT__rnext_state;
    }
    vlSelfRef.__PVT__u_bridge__DOT__R_state = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && (IData)(vlSelfRef.__PVT__u_bridge__DOT__R_next_state));
    vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel_next));
    vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_next_state));
    vlSelfRef.__PVT__IDU_0__DOT__state = ((~ ((IData)(vlSelfRef.reset) 
                                              | (IData)(vlSelfRef.__PVT__IDU_0__DOT__flush_valid))) 
                                          & (IData)(vlSelfRef.__PVT__IDU_0__DOT__next_state));
    vlSelfRef.__PVT__u_bridge__DOT__W_state = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && (IData)(vlSelfRef.__PVT__u_bridge__DOT__W_next_state));
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
    vlSelfRef.__PVT__u_clint__DOT__mtime_L = __Vdly__u_clint__DOT__mtime_L;
    vlSelfRef.__PVT__u_clint__DOT__mtime_H = __Vdly__u_clint__DOT__mtime_H;
    vlSelfRef.tb_FINAL_npc = __Vdly__tb_FINAL_npc;
    __Vtableidx3 = vlSelfRef.__PVT__u_clint__DOT__wstate;
    vlSelfRef.__PVT__CLINT_awready = VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__CLINT_wready = VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__CLINT_bvalid = VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0
        [__Vtableidx3];
    __Vtableidx5 = vlSelfRef.__PVT__u_clint__DOT__rstate;
    vlSelfRef.__PVT__CLINT_arready = VysyxSoCFull__ConstPool__TABLE_h532d5d4f_0
        [__Vtableidx5];
    vlSelfRef.__PVT__CLINT_rvalid = VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0
        [__Vtableidx5];
    vlSelfRef.__PVT__CLINT_rlast = VysyxSoCFull__ConstPool__TABLE_hfc7a839a_0
        [__Vtableidx5];
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
        vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception;
    } else {
        vlSelfRef.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0 = 0U;
        vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception = 0U;
    }
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_bridge__DOT__W_state)
                                                     ? 
                                                    (~ (IData)(vlSelfRef.__PVT__u_bridge__DOT__aw_sel_reg))
                                                     : 
                                                    ((0x02000000U 
                                                      <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q) 
                                                     & (0x02000008U 
                                                        > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q))));
    vlSelfRef.flush_exception_valid = (1U & ((IData)(vlSelfRef.__PVT__WBU_0__DOT__wbu_out_bus_exception) 
                                             >> 4U));
}

extern const VlUnpacked<CData/*2:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h986ffb83_0;

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_17;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_17 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_20;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_20 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_21;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_33;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_33 = 0;
    CData/*0:0*/ EXU_0__DOT____VdfgExtracted_hbeeeed61__0;
    EXU_0__DOT____VdfgExtracted_hbeeeed61__0 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__VdfgSynthJoin___PVT__idu_ra_isRAW_h6e95ff9d_0_28 
        = (1U & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isLOAD)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid))));
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
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_24 
        = ((0x17U == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__next_state = (1U & 
                                               ((IData)(vlSelfRef.__PVT__IDU_0__DOT__state)
                                                 ? 
                                                (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__fencei_flush))
                                                 : 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid) 
                                                 & (0x0000100fU 
                                                    == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
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
    vlSelfRef.__PVT__IDU_0__DOT__isBLT = (IData)((0x00004063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGE = (IData)((0x00005063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isU = ((0x37U == (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                        | (0x17U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTU = (IData)((0x00003033U 
                                                   == 
                                                   (0xfe00707fU 
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
    IDU_0__DOT____VdfgRegularize_hd1728725_0_20 = (IData)(
                                                          (0x00000033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = (IData)(
                                                          (0x00005033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_33 = (IData)(
                                                          (0x00001000U 
                                                           == 
                                                           (0xfe007000U 
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
    IDU_0__DOT____VdfgRegularize_hd1728725_0_17 = (IData)(
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
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isSTORE 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB) 
              | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_2 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isU) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_32 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLT) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_26 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBEQ) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBNE));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLTU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGEU));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_28 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLW) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLBU));
    vlSelfRef.__PVT__IDU_0__DOT__isADD = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_20) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSUB = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_20) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRL = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRA = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLL = ((0x33U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                          & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_33));
    vlSelfRef.__PVT__IDU_0__DOT__isSLLI = ((0x13U == 
                                            (0x0000007fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                           & (IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_33));
    __Vtableidx6 = ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS))));
    vlSelfRef.__PVT__idu_out_bus_opCSR = VysyxSoCFull__ConstPool__TABLE_h986ffb83_0
        [__Vtableidx6];
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI) 
                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                       | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI))))));
    vlSelfRef.__PVT__IDU_0__DOT__isSRLI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_17) 
                                           & (0U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRAI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_17) 
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
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result 
        = ((IData)((0U != (0x0300U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))))
            ? ((0x00000100U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? (vlSelfRef.__PVT__EXU_0__DOT__a - vlSelfRef.__PVT__EXU_0__DOT__b)
                : (vlSelfRef.__PVT__EXU_0__DOT__a + vlSelfRef.__PVT__EXU_0__DOT__b))
            : ((0x00000020U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                : ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                    (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                    : ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                         (0x0000001fU 
                                          & vlSelfRef.__PVT__EXU_0__DOT__b))
                        : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                            ? vlSelfRef.__PVT__EXU_0__DOT__op_and
                            : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                ? vlSelfRef.__PVT__EXU_0__DOT__op_or
                                : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                    ? (vlSelfRef.__PVT__EXU_0__DOT__a 
                                       ^ vlSelfRef.__PVT__EXU_0__DOT__b)
                                    : vlSelfRef.__PVT__EXU_0__DOT__b)))))));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_3 
        = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_2) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH 
        = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_26) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                 | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29))));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isLOAD 
        = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
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
                                                                   | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
                                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                                                                         | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                                                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                                                               | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34)))))))))))))));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result 
        = (1U & ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                  ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                      ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)
                      : (~ (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)))
                  : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                      ? (~ (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))
                      : (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_exception 
        = ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception))
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception)
            : (((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_3) 
                | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_26) 
                   | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                         | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29) 
                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                               | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                  | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
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
                                                                                | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_32) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXOR) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRL) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRA) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isOR) 
                                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isAND) 
                                                                                | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34) 
                                                                                | ((0x00000073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x00100073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | ((0x30200073U 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                                                                | (0x0000100fU 
                                                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)))))))))))))))))))))))))))))))))))
                ? ((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                    ? 0x13U : ((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                ? 0x1bU : ((0x30200073U 
                                            == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                            ? 0x1eU
                                            : ((0x0000100fU 
                                                == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                                                ? 0x0eU
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_exception)))))
                : 0x12U));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__io_master_rready = ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                                         & ((IData)(vlSelfRef.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__rready)
                                             : (~ (IData)(vlSelfRef.reset))));
    __Vtableidx2 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
                     << 5U) | ((((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid)) 
                                << 4U) | (IData)(vlSelfRef.__PVT__u_clint__DOT__wstate)));
    vlSelfRef.__PVT__u_clint__DOT__wnext_state = VysyxSoCFull__ConstPool__TABLE_hc136131a_0
        [__Vtableidx2];
    vlSelfRef.__PVT__io_master_awvalid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
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
    vlSelfRef.__PVT__io_master_bid = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)
                                        : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1)
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
}

void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_bridge__DOT__W_state) {
        vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 1U;
        if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bvalid))) {
            vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 0U;
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid) {
            vlSelfRef.__PVT__u_bridge__DOT__W_next_state = 1U;
        }
    }
}

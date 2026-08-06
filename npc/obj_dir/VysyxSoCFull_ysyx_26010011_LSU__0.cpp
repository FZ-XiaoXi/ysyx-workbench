// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reset = ((IData)(vlSymsp->TOP.reset) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__lsu_wdata = ((0U == (0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x00000014U)))
                                   ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR
                                  [(0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 0x00000014U))]);
    vlSelfRef.__PVT__rready = ((4U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__bready = ((2U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__r_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))) 
                               & (IData)(vlSelfRef.__PVT__rready));
    vlSelfRef.__PVT__b_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid))) 
                               & (IData)(vlSelfRef.__PVT__bready));
    vlSelfRef.__PVT__lsu_final = (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__PVT__r_fire)) 
                                  | ((2U == (IData)(vlSelfRef.state)) 
                                     & (IData)(vlSelfRef.__PVT__b_fire)));
}

void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hc456a51f_0_1;
    __VdfgRegularize_hc456a51f_0_1 = 0;
    // Body
    vlSelfRef.__PVT__lsu_addr = ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21) 
                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI) 
                                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU) 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))))))))))) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB))
                                  ? (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                     + ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                        + (IData)((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)))))
                                  : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL))
                                      ? VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                      (0x0000001fU 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                      : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL))
                                          ? VL_SHIFTR_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                          (0x0000001fU 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA))
                                              ? VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                               (0x0000001fU 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                              : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND))
                                                  ? 
                                                 (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                  : 
                                                 (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR))
                                                   ? 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                   | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR))
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                    ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                    : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)))))));
    __VdfgRegularize_hc456a51f_0_1 = ((0U == (IData)(vlSelfRef.state)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__lsu_reqEN));
    vlSelfRef.__PVT__val = ((2U & vlSelfRef.__PVT__lsu_addr)
                             ? ((1U & vlSelfRef.__PVT__lsu_addr)
                                 ? (((- (IData)((vlSelfRef.__PVT__rdata 
                                                 >> 0x0000001fU))) 
                                     << 0x00000018U) 
                                    | (vlSelfRef.__PVT__val2 
                                       >> 8U)) : vlSelfRef.__PVT__val2)
                             : ((1U & vlSelfRef.__PVT__lsu_addr)
                                 ? vlSelfRef.__PVT__val1
                                 : vlSelfRef.__PVT__rdata));
    vlSelfRef.__PVT__arvalid = (((~ (IData)(vlSelfRef.__PVT__lsu_wen)) 
                                 & (IData)(__VdfgRegularize_hc456a51f_0_1)) 
                                | (3U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__awvalid = (((IData)(__VdfgRegularize_hc456a51f_0_1) 
                                 & (IData)(vlSelfRef.__PVT__lsu_wen)) 
                                | (1U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__ar_fire = ((IData)(vlSelfRef.__PVT__arvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                        ? (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))
                                        : 0U) : ((1U 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid))) 
                                                 && ((IData)(vlSelfRef.__PVT__arvalid) 
                                                     && (1U 
                                                         & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))))));
}

void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_hd51ce84d__0;
    __VdfgExtracted_hd51ce84d__0 = 0;
    // Body
    __VdfgExtracted_hd51ce84d__0 = (((IData)(vlSelfRef.__PVT__awvalid) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_wready)) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                            ? (1U & 
                                               (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))
                                            : 0U) : 
                                       ((IData)(vlSelfRef.__PVT__awvalid) 
                                        && (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full))))));
    vlSelfRef.__PVT__next_state = vlSelfRef.state;
    if ((4U & (IData)(vlSelfRef.state))) {
        if ((2U & (IData)(vlSelfRef.state))) {
            vlSelfRef.__PVT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.state))) {
            vlSelfRef.__PVT__next_state = 0U;
        } else if (vlSelfRef.__PVT__r_fire) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.state))) {
        if ((1U & (IData)(vlSelfRef.state))) {
            if (vlSelfRef.__PVT__ar_fire) {
                vlSelfRef.__PVT__next_state = 4U;
            }
        } else if (vlSelfRef.__PVT__b_fire) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.state))) {
        if (__VdfgExtracted_hd51ce84d__0) {
            vlSelfRef.__PVT__next_state = 2U;
        }
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__lsu_reqEN) {
        vlSelfRef.__PVT__next_state = ((IData)(vlSelfRef.__PVT__lsu_wen)
                                        ? ((IData)(__VdfgExtracted_hd51ce84d__0)
                                            ? 2U : 1U)
                                        : ((IData)(vlSelfRef.__PVT__ar_fire)
                                            ? 4U : 3U));
    }
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state = ((IData)(vlSelfRef.__PVT__reset)
                        ? 0U : (IData)(vlSelfRef.__PVT__next_state));
    vlSelfRef.__PVT__rready = ((4U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__bready = ((2U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsu_wdata = ((0U == (0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x00000014U)))
                                   ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR
                                  [(0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 0x00000014U))]);
    vlSelfRef.__PVT__b_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid))) 
                               & (IData)(vlSelfRef.__PVT__bready));
    vlSelfRef.__PVT__reset = ((IData)(vlSymsp->TOP.reset) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__r_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))) 
                               & (IData)(vlSelfRef.__PVT__rready));
    vlSelfRef.__PVT__rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata
                                   : 0U) : 0U);
    vlSelfRef.__PVT__lsu_wmask = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW)
                                   ? 0x0fU : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSB)
                                               ? 1U
                                               : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSH)
                                                   ? 3U
                                                   : 0U)));
    vlSelfRef.__PVT__lsu_wen = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25));
    vlSelfRef.__PVT__rmask = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW)
                               ? 0x0fU : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21)
                                           ? 1U : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_22)
                                                    ? 3U
                                                    : 0U)));
    vlSelfRef.__PVT__lsu_final = (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__PVT__r_fire)) 
                                  | ((2U == (IData)(vlSelfRef.state)) 
                                     & (IData)(vlSelfRef.__PVT__b_fire)));
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsu_addr = ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21) 
                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI) 
                                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU) 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))))))))))) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB))
                                  ? (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                     + ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                        + (IData)((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)))))
                                  : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL))
                                      ? VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                      (0x0000001fU 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                      : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL))
                                          ? VL_SHIFTR_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                          (0x0000001fU 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA))
                                              ? VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                               (0x0000001fU 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                              : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND))
                                                  ? 
                                                 (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                  : 
                                                 (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR))
                                                   ? 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                   | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR))
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                    ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                    : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)))))));
    vlSelfRef.__PVT__val = ((2U & vlSelfRef.__PVT__lsu_addr)
                             ? ((1U & vlSelfRef.__PVT__lsu_addr)
                                 ? (((- (IData)((vlSelfRef.__PVT__rdata 
                                                 >> 0x0000001fU))) 
                                     << 0x00000018U) 
                                    | (vlSelfRef.__PVT__val2 
                                       >> 8U)) : vlSelfRef.__PVT__val2)
                             : ((1U & vlSelfRef.__PVT__lsu_addr)
                                 ? vlSelfRef.__PVT__val1
                                 : vlSelfRef.__PVT__rdata));
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hc456a51f_0_1;
    __VdfgRegularize_hc456a51f_0_1 = 0;
    // Body
    __VdfgRegularize_hc456a51f_0_1 = ((0U == (IData)(vlSelfRef.state)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__lsu_reqEN));
    vlSelfRef.__PVT__arvalid = (((~ (IData)(vlSelfRef.__PVT__lsu_wen)) 
                                 & (IData)(__VdfgRegularize_hc456a51f_0_1)) 
                                | (3U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__awvalid = (((IData)(__VdfgRegularize_hc456a51f_0_1) 
                                 & (IData)(vlSelfRef.__PVT__lsu_wen)) 
                                | (1U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__ar_fire = ((IData)(vlSelfRef.__PVT__arvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                        ? (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))
                                        : 0U) : ((1U 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid))) 
                                                 && ((IData)(vlSelfRef.__PVT__arvalid) 
                                                     && (1U 
                                                         & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))))));
}

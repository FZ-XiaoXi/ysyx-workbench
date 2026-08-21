// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hc456a51f_0_8 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid));
    vlSelfRef.__VdfgRegularize_hc456a51f_0_7 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid));
    vlSelfRef.__PVT__lsu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                               : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_4))
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
    vlSelfRef.debug_LSU_WRITING = ((0U != (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_8));
    vlSelfRef.debug_LSU_LOADING = ((0U != (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_7));
}

void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hc456a51f_0_10;
    __VdfgRegularize_hc456a51f_0_10 = 0;
    // Body
    vlSelfRef.__PVT__rready = (((4U == (IData)(vlSelfRef.state)) 
                                | (0U == (IData)(vlSelfRef.state))) 
                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)));
    __VdfgRegularize_hc456a51f_0_10 = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                             & (~ ((IData)(vlSelfRef.__PVT__lsu_out_bus_exception) 
                                                   >> 4U))));
    vlSelfRef.__PVT__bready = (((2U == (IData)(vlSelfRef.state)) 
                                | (0U == (IData)(vlSelfRef.state))) 
                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)));
    vlSelfRef.__PVT__awvalid = ((1U == (IData)(vlSelfRef.state)) 
                                & (IData)(__VdfgRegularize_hc456a51f_0_10));
    vlSelfRef.__PVT__arvalid = ((((0U == (IData)(vlSelfRef.state)) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_7)) 
                                 | (3U == (IData)(vlSelfRef.state))) 
                                & (IData)(__VdfgRegularize_hc456a51f_0_10));
    vlSelfRef.b_fire = ((IData)(vlSelfRef.__PVT__bvalid) 
                        & (IData)(vlSelfRef.__PVT__bready));
}

void VysyxSoCFull_ysyx_26010011_LSU___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lsu_out_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                               & (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.r_fire)) 
                                  | (((2U == (IData)(vlSelfRef.state)) 
                                      & (IData)(vlSelfRef.b_fire)) 
                                     | ((~ (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_4)) 
                                        | ((IData)(vlSelfRef.__PVT__lsu_out_bus_exception) 
                                           >> 4U)))));
    vlSelfRef.__PVT__lsu_in_ready = (1U & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_4))) 
                                           | (((IData)(vlSelfRef.r_fire) 
                                               | (IData)(vlSelfRef.b_fire)) 
                                              | ((IData)(vlSelfRef.__PVT__lsu_out_bus_exception) 
                                                 >> 4U))));
    vlSelfRef.debug_LSU_WRITE_FINAL = ((IData)(vlSelfRef.lsu_out_valid) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_8));
    vlSelfRef.debug_LSU_LOAD_FINAL = ((IData)(vlSelfRef.lsu_out_valid) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_7));
}

void VysyxSoCFull_ysyx_26010011_LSU___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                         && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                              ? (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_rvalid))
                              : 0U)) & (IData)(vlSelfRef.__PVT__rready));
    vlSelfRef.__PVT__rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_rdata
                                   : 0U) : 0U);
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
    vlSelfRef.__PVT__val = ((2U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)
                             ? ((1U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)
                                 ? (((- (IData)((vlSelfRef.__PVT__rdata 
                                                 >> 0x0000001fU))) 
                                     << 0x00000018U) 
                                    | (vlSelfRef.__PVT__val2 
                                       >> 8U)) : vlSelfRef.__PVT__val2)
                             : ((1U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)
                                 ? vlSelfRef.__PVT__val1
                                 : vlSelfRef.__PVT__rdata));
    vlSelfRef.__PVT__lsu_rdata1 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isUnSigned)
                                    ? (0x000000ffU 
                                       & vlSelfRef.__PVT__val)
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.__PVT__val 
                                                       >> 7U)))) 
                                        << 8U) | (0x000000ffU 
                                                  & vlSelfRef.__PVT__val)));
    vlSelfRef.__PVT__lsu_out_bus_rdata = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                           ? vlSelfRef.__PVT__lsu_rdata1
                                           : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isUnSigned)
                                                   ? 
                                                  (0x0000ffffU 
                                                   & vlSelfRef.__PVT__val)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.__PVT__val 
                                                                   >> 0x0000000fU)))) 
                                                    << 0x00000010U) 
                                                   | (0x0000ffffU 
                                                      & vlSelfRef.__PVT__val)))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                   ? vlSelfRef.__PVT__val
                                                   : vlSelfRef.__PVT__lsu_rdata1)));
}

void VysyxSoCFull___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(IData/*31:0*/ addr);
void VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(IData/*31:0*/ reason);

void VysyxSoCFull_ysyx_26010011_LSU___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ico_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE) 
          & (IData)(vlSelfRef.__PVT__awvalid)) & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_h6e95ff9d_0_17)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awready)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_awready)))) {
        if (((((((0x30000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                 & (0x31000000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)) 
                | ((0x0f000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                   & (0x0f002000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))) 
               | ((0x80000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                  & (0x80400000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))) 
              | ((0xa0000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                 & (0xa8000000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))) 
             | ((0x20000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                & (0x20001000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result);
        }
    }
    if (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE) 
           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)) 
          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
         & (~ ((((((0x30000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                   & (0x31000000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)) 
                  | ((0x0f000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                     & (0x0f002000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))) 
                 | ((0x80000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                    & (0x80400000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))) 
                | ((0xa0000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                   & (0xa8000000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))) 
               | ((0x20000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
                  & (0x20001000U > vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)))))) {
        if (((0x10000000U <= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result) 
             & (0x10000005U >= vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result))) {
            VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result);
        }
    }
    vlSelfRef.__PVT__aw_fire = ((IData)(vlSelfRef.__PVT__awvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_h6e95ff9d_0_17)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awready)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_awready)));
    vlSelfRef.__PVT__ar_fire = ((IData)(vlSelfRef.__PVT__arvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arready)
                                        : 0U) : ((1U 
                                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__out_arvalid))) 
                                                 && ((IData)(vlSelfRef.__PVT__arvalid) 
                                                     && (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__S_arready)))));
    vlSelfRef.__VdfgExtracted_hd51ce84d__0 = ((IData)(vlSelfRef.__PVT__aw_fire) 
                                              & ((IData)(vlSelfRef.__PVT__awvalid) 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_h6e95ff9d_0_17)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid))
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_wready))));
    vlSelfRef.__PVT__next_state = vlSelfRef.state;
    if ((4U & (IData)(vlSelfRef.state))) {
        if ((2U & (IData)(vlSelfRef.state))) {
            vlSelfRef.__PVT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.state))) {
            vlSelfRef.__PVT__next_state = 0U;
        } else if (vlSelfRef.r_fire) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.state))) {
        if ((1U & (IData)(vlSelfRef.state))) {
            if (vlSelfRef.__PVT__ar_fire) {
                vlSelfRef.__PVT__next_state = 4U;
            }
        } else if (vlSelfRef.b_fire) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.state))) {
        if (vlSelfRef.__VdfgExtracted_hd51ce84d__0) {
            vlSelfRef.__PVT__next_state = 2U;
        }
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) {
        vlSelfRef.__PVT__next_state = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE)
                                        ? ((IData)(vlSelfRef.__VdfgExtracted_hd51ce84d__0)
                                            ? 2U : 1U)
                                        : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD)
                                            ? ((IData)(vlSelfRef.__PVT__ar_fire)
                                                ? 4U
                                                : 3U)
                                            : 0U));
    }
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)
                        ? 0U : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                 & ((IData)(vlSelfRef.__PVT__lsu_out_bus_exception) 
                                    >> 4U)) ? 0U : (IData)(vlSelfRef.__PVT__next_state)));
    if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))) {
        if (((2U == (IData)(vlSelfRef.__PVT__next_state)) 
             | (1U == (IData)(vlSelfRef.__PVT__next_state)))) {
            vlSelfRef.__PVT__awsize_q = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                                   ? 1U
                                                   : 2U));
            vlSelfRef.__PVT__wstrb_q = (0x0000000fU 
                                        & (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                             ? 1U : 
                                            ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                              ? 3U : 0x0fU)) 
                                           << (3U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result)));
        }
    }
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))) {
        if (((2U == (IData)(vlSelfRef.__PVT__next_state)) 
             | (1U == (IData)(vlSelfRef.__PVT__next_state)))) {
            vlSelfRef.__PVT__awaddr_q = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
            vlSelfRef.__PVT__wdata_q = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_lsu_val, 
                                                     VL_SHIFTL_III(32,32,32, 
                                                                   (3U 
                                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result), 3U));
        }
    }
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arsize = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                ? 0U : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                                         ? 1U : 2U));
    vlSelfRef.__VdfgRegularize_hc456a51f_0_8 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid));
    vlSelfRef.__VdfgRegularize_hc456a51f_0_7 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid));
    vlSelfRef.__VdfgRegularize_hc456a51f_0_4 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE));
    vlSelfRef.debug_LSU_WRITING = ((0U != (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_8));
    vlSelfRef.debug_LSU_LOADING = ((0U != (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_7));
    vlSelfRef.__PVT__lsu_out_bus_exception = ((0x00000010U 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_exception)
                                               : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_4))
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
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hc456a51f_0_10;
    __VdfgRegularize_hc456a51f_0_10 = 0;
    // Body
    vlSelfRef.__PVT__rready = (((4U == (IData)(vlSelfRef.state)) 
                                | (0U == (IData)(vlSelfRef.state))) 
                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)));
    __VdfgRegularize_hc456a51f_0_10 = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                             & (~ ((IData)(vlSelfRef.__PVT__lsu_out_bus_exception) 
                                                   >> 4U))));
    vlSelfRef.__PVT__bready = (((2U == (IData)(vlSelfRef.state)) 
                                | (0U == (IData)(vlSelfRef.state))) 
                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)));
    vlSelfRef.__PVT__awvalid = ((1U == (IData)(vlSelfRef.state)) 
                                & (IData)(__VdfgRegularize_hc456a51f_0_10));
    vlSelfRef.__PVT__arvalid = ((((0U == (IData)(vlSelfRef.state)) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_7)) 
                                 | (3U == (IData)(vlSelfRef.state))) 
                                & (IData)(__VdfgRegularize_hc456a51f_0_10));
}

void VysyxSoCFull_ysyx_26010011_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__VdfgRegularize_h6e95ff9d_0_17)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bvalid)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_bvalid));
    vlSelfRef.b_fire = ((IData)(vlSelfRef.__PVT__bvalid) 
                        & (IData)(vlSelfRef.__PVT__bready));
}

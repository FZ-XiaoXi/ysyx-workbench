// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifu_out_bus_fetching = vlSelfRef.PC;
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fencei_flush = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0) 
                                     & (0x0eU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception))));
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                            ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rdata)
                        : 0U);
    vlSelfRef.__PVT__dnpc = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_exception_valid)
                              ? ((0x0eU == (0x0000000fU 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__WBU_0__DOT__wbu_out_bus_exception)))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC)
                              : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__exu_out_bus_dnpc_valid)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_alu_result));
    vlSelfRef.ifu_out_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid)) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_in_ready)));
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__3(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.debug_IFU_is_hit = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_reqValid) 
                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_valid
                                     [(3U & (vlSelfRef.PC 
                                             >> 2U))] 
                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__cache_tag
                                        [(3U & (vlSelfRef.PC 
                                                >> 2U))] 
                                        == (vlSelfRef.PC 
                                            >> 4U))));
    vlSelfRef.__PVT__arvalid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                & (((~ (IData)(vlSelfRef.debug_IFU_is_hit)) 
                                    & ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__state)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_reqValid))) 
                                   | ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__state)) 
                                      | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__state)))));
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__4(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifu_out_bus_pc = (((IData)(vlSelfRef.__PVT__in_reqValid) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid) 
                                    | (((0U != (3U 
                                                & vlSelfRef.PC))
                                         ? 0x10U : 0U) 
                                       >> 4U))) ? vlSelfRef.PC
                                 : vlSelfRef.__PVT__ifu_out_bus_pc_r);
    vlSelfRef.__VdfgRegularize_hb9205a68_0_0 = ((IData)(vlSelfRef.__PVT__in_reqValid) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid));
    vlSelfRef.ifu_out_valid = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hb9205a68_0_0) 
                                     | ((IData)(vlSelfRef.__PVT__ifu_out_valid_r) 
                                        | (((0U != 
                                             (3U & vlSelfRef.PC))
                                             ? 0x10U
                                             : 0U) 
                                           >> 4U))));
    vlSelfRef.debug_IFU_get_inst = ((IData)(vlSelfRef.ifu_out_ready) 
                                    & (IData)(vlSelfRef.ifu_out_valid));
    vlSelfRef.debug_IFU_is_hit_inst = ((IData)(vlSelfRef.debug_IFU_get_inst) 
                                       & (IData)(vlSelfRef.debug_IFU_is_hit));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__ifu_out_valid_r = 0U;
        vlSelfRef.__PVT__ifu_out_bus_pc_r = 0x80000000U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) {
        vlSelfRef.__PVT__ifu_out_valid_r = 0U;
        vlSelfRef.__PVT__ifu_out_bus_pc_r = 0U;
    } else if ((((IData)(vlSelfRef.__PVT__in_reqValid) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid)) 
                & (~ (IData)(vlSelfRef.ifu_out_ready)))) {
        vlSelfRef.__PVT__ifu_out_valid_r = 1U;
        vlSelfRef.__PVT__ifu_out_bus_pc_r = vlSelfRef.PC;
    } else if (((IData)(vlSelfRef.ifu_out_valid) & (IData)(vlSelfRef.ifu_out_ready))) {
        vlSelfRef.__PVT__ifu_out_valid_r = 0U;
    }
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__ifu_out_bus_instruction_r = 0U;
        vlSelfRef.PC = 0x80000000U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)))) {
            if ((((IData)(vlSelfRef.__PVT__in_reqValid) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_respValid)) 
                 & (~ (IData)(vlSelfRef.ifu_out_ready)))) {
                vlSelfRef.__PVT__ifu_out_bus_instruction_r 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__PVT__in_rdata;
            }
        }
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) {
            vlSelfRef.PC = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)
                             ? (0xfffffffeU & vlSelfRef.__PVT__dnpc)
                             : (0xfffffffeU & ((IData)(4U) 
                                               + vlSelfRef.ifu_out_bus_pc)));
        } else if (((IData)(vlSelfRef.ifu_out_ready) 
                    & (IData)(vlSelfRef.ifu_out_valid))) {
            vlSelfRef.PC = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)
                             ? (0xfffffffeU & vlSelfRef.__PVT__dnpc)
                             : (0xfffffffeU & ((IData)(4U) 
                                               + vlSelfRef.ifu_out_bus_pc)));
        }
    }
    vlSelfRef.__PVT__in_reqValid = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset))) 
                                    && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid) 
                                        || ((1U & (~ (IData)(vlSelfRef.ifu_out_valid))) 
                                            || (IData)(vlSelfRef.ifu_out_ready))));
    vlSelfRef.ifu_out_bus_fetching = vlSelfRef.PC;
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state) {
        vlSelfRef.__PVT__rlast = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
        vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_master_sel)
                            ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rdata);
    } else {
        vlSelfRef.__PVT__rlast = 0U;
        vlSelfRef.rdata = 0U;
    }
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dnpc = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_exception_valid)
                              ? ((0x0eU == (0x0000000fU 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__WBU_0__DOT__wbu_out_bus_exception)))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC
                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC)
                              : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__exu_out_bus_dnpc_valid)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH))
                                  ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_snpc
                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__exu_out_bus_alu_result));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifu_out_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid)) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IDU_0__DOT__idu_in_ready)));
}

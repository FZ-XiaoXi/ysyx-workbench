// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bus_valid = (3U == (IData)(vlSelfRef.state));
    vlSelfRef.__PVT__icache_u0__DOT__r_fire = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))));
    vlSelfRef.in_reqValid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                             & (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.debug_is_hit = ((IData)(vlSelfRef.in_reqValid) 
                              & (vlSelfRef.__PVT__icache_u0__DOT__cache_valid
                                 [(0x000001ffU & (vlSelfRef.PC 
                                                  >> 5U))] 
                                 & (vlSelfRef.__PVT__icache_u0__DOT__cache_tag
                                    [(0x000001ffU & 
                                      (vlSelfRef.PC 
                                       >> 5U))] == 
                                    (vlSelfRef.PC >> 0x0000000eU))));
    vlSelfRef.__PVT__arvalid = ((~ (IData)(vlSelfRef.debug_is_hit)) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                   & (((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)) 
                                       & (IData)(vlSelfRef.in_reqValid)) 
                                      | (1U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)))));
}

extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_ha2463b9d_0;

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__rlast) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
                                  << 2U)) | ((((IData)(vlSelfRef.__PVT__arvalid) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IROM_arready)) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.debug_is_hit))) 
                     << 3U) | (((IData)(vlSelfRef.in_reqValid) 
                                << 2U) | (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)));
    vlSelfRef.__PVT__icache_u0__DOT__next_state = VysyxSoCFull__ConstPool__TABLE_ha2463b9d_0
        [__Vtableidx1];
    if ((0U == (IData)(vlSelfRef.state))) {
        vlSelfRef.r_fire = ((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state))
                             ? ((IData)(vlSelfRef.debug_is_hit) 
                                & (IData)(vlSelfRef.in_reqValid))
                             : ((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
                                & (0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__next_state))));
        vlSelfRef.__PVT__next_state = ((IData)(vlSelfRef.r_fire)
                                        ? 3U : 0U);
    } else {
        vlSelfRef.r_fire = 0U;
        if ((3U == (IData)(vlSelfRef.state))) {
            if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final) {
                vlSelfRef.__PVT__next_state = 0U;
            }
        } else {
            vlSelfRef.__PVT__next_state = 0U;
        }
    }
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__icache_u0__DOT__burst_cnt;
    __Vdly__icache_u0__DOT__burst_cnt = 0;
    SData/*8:0*/ __VdlyDim0__icache_u0__DOT__cache_valid__v0;
    __VdlyDim0__icache_u0__DOT__cache_valid__v0 = 0;
    CData/*0:0*/ __VdlyVal__icache_u0__DOT__cache_valid__v1;
    __VdlyVal__icache_u0__DOT__cache_valid__v1 = 0;
    SData/*8:0*/ __VdlyDim0__icache_u0__DOT__cache_valid__v1;
    __VdlyDim0__icache_u0__DOT__cache_valid__v1 = 0;
    IData/*17:0*/ __VdlyVal__icache_u0__DOT__cache_tag__v0;
    __VdlyVal__icache_u0__DOT__cache_tag__v0 = 0;
    SData/*8:0*/ __VdlyDim0__icache_u0__DOT__cache_tag__v0;
    __VdlyDim0__icache_u0__DOT__cache_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_tag__v0;
    __VdlySet__icache_u0__DOT__cache_tag__v0 = 0;
    // Body
    __Vdly__icache_u0__DOT__burst_cnt = vlSelfRef.__PVT__icache_u0__DOT__burst_cnt;
    vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v0 = 0U;
    __VdlySet__icache_u0__DOT__cache_tag__v0 = 0U;
    vlSelfRef.__Vdly__PC = vlSelfRef.PC;
    if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) 
         | (0x0000100fU == vlSelfRef.__PVT__PC_command))) {
        vlSelfRef.__PVT__icache_u0__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000200U, vlSelfRef.__PVT__icache_u0__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__icache_u0__DOT__cache_valid__v0 
                = (0x000001ffU & vlSelfRef.__PVT__icache_u0__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueueicache_u0__DOT__cache_valid.enqueue(0U, (IData)(__VdlyDim0__icache_u0__DOT__cache_valid__v0));
            vlSelfRef.__PVT__icache_u0__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.__PVT__icache_u0__DOT__unnamedblk1__DOT__i);
        }
    } else if (((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
                & (2U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)))) {
        __VdlyVal__icache_u0__DOT__cache_valid__v1 
            = ((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
               & (IData)(vlSelfRef.__PVT__rlast));
        __VdlyDim0__icache_u0__DOT__cache_valid__v1 
            = (0x000001ffU & (vlSelfRef.PC >> 5U));
        vlSelfRef.__VdlyCommitQueueicache_u0__DOT__cache_valid.enqueue(__VdlyVal__icache_u0__DOT__cache_valid__v1, (IData)(__VdlyDim0__icache_u0__DOT__cache_valid__v1));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) 
                  | (0x0000100fU == vlSelfRef.__PVT__PC_command))))) {
        if (((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
             & (2U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)))) {
            vlSelfRef.__VdlyVal__icache_u0__DOT__cache_mem__v0 
                = vlSelfRef.rdata;
            vlSelfRef.__VdlyLsb__icache_u0__DOT__cache_mem__v0 
                = (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.__PVT__icache_u0__DOT__burst_cnt), 5U));
            vlSelfRef.__VdlyDim0__icache_u0__DOT__cache_mem__v0 
                = (0x000001ffU & (vlSelfRef.PC >> 5U));
            vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v0 = 1U;
            __VdlyVal__icache_u0__DOT__cache_tag__v0 
                = (vlSelfRef.PC >> 0x0000000eU);
            __VdlyDim0__icache_u0__DOT__cache_tag__v0 
                = (0x000001ffU & (vlSelfRef.PC >> 5U));
            __VdlySet__icache_u0__DOT__cache_tag__v0 = 1U;
        }
    }
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        __Vdly__icache_u0__DOT__burst_cnt = 0U;
        vlSelfRef.__Vdly__PC = 0x30000000U;
        vlSelfRef.state = 0U;
    } else {
        __Vdly__icache_u0__DOT__burst_cnt = (7U & ((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)
                                                    ? 
                                                   ((((7U 
                                                       == (IData)(vlSelfRef.__PVT__icache_u0__DOT__burst_cnt)) 
                                                      & (IData)(vlSelfRef.__PVT__rlast)) 
                                                     & (IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire))
                                                     ? 0U
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__icache_u0__DOT__burst_cnt)))
                                                    : (IData)(vlSelfRef.__PVT__icache_u0__DOT__burst_cnt)));
        if (((IData)(vlSelfRef.bus_valid) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final))) {
            vlSelfRef.__Vdly__PC = ((1U & (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isJUMP) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBEQ)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBNE)
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL))
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLT) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLTU))
                                                    ? 
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_17))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE) 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_17)))))) 
                                             | (0x00000073U 
                                                == vlSelfRef.__PVT__PC_command)) 
                                            | (0x30200073U 
                                               == vlSelfRef.__PVT__PC_command)) 
                                           | (IData)(vlSelfRef.__PVT__lsu_access_fault)))
                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.dnpc
                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.snpc);
        }
        vlSelfRef.state = vlSelfRef.__PVT__next_state;
    }
    vlSelfRef.__VdlyCommitQueueicache_u0__DOT__cache_valid.commit(vlSelfRef.__PVT__icache_u0__DOT__cache_valid);
    vlSelfRef.__PVT__icache_u0__DOT__state = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__icache_u0__DOT__next_state));
    vlSelfRef.__PVT__icache_u0__DOT__burst_cnt = __Vdly__icache_u0__DOT__burst_cnt;
    if (__VdlySet__icache_u0__DOT__cache_tag__v0) {
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[__VdlyDim0__icache_u0__DOT__cache_tag__v0] 
            = __VdlyVal__icache_u0__DOT__cache_tag__v0;
    }
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bus_valid = (3U == (IData)(vlSelfRef.state));
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__PC_command = 0U;
    } else if (vlSelfRef.r_fire) {
        vlSelfRef.__PVT__PC_command = ((IData)(vlSelfRef.debug_is_hit)
                                        ? (((0U == 
                                             (0x0000001fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (0x0000001fU 
                                                               & vlSelfRef.PC), 3U)))
                                             ? 0U : 
                                            (vlSelfRef.__PVT__icache_u0__DOT__cache_mem
                                             [(0x000001ffU 
                                               & (vlSelfRef.PC 
                                                  >> 5U))][
                                             (((IData)(0x0000001fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000001fU 
                                                                   & vlSelfRef.PC), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000001fU 
                                                                   & vlSelfRef.PC), 3U))))) 
                                           | (vlSelfRef.__PVT__icache_u0__DOT__cache_mem
                                              [(0x000001ffU 
                                                & (vlSelfRef.PC 
                                                   >> 5U))][
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              (0x0000001fU 
                                                               & vlSelfRef.PC), 3U) 
                                                >> 5U))] 
                                              >> (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000001fU 
                                                                   & vlSelfRef.PC), 3U))))
                                        : ((7U == (7U 
                                                   & (vlSelfRef.PC 
                                                      >> 2U)))
                                            ? vlSelfRef.rdata
                                            : (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000001fU 
                                                                   & vlSelfRef.PC), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.__PVT__icache_u0__DOT__cache_mem
                                                 [(0x000001ffU 
                                                   & (vlSelfRef.PC 
                                                      >> 5U))][
                                                 (((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000000ffU 
                                                    & VL_SHIFTL_III(8,32,32, 
                                                                    (0x0000001fU 
                                                                     & vlSelfRef.PC), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000001fU 
                                                                    & vlSelfRef.PC), 3U))))) 
                                               | (vlSelfRef.__PVT__icache_u0__DOT__cache_mem
                                                  [
                                                  (0x000001ffU 
                                                   & (vlSelfRef.PC 
                                                      >> 5U))][
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,32,32, 
                                                                    (0x0000001fU 
                                                                     & vlSelfRef.PC), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000001fU 
                                                                    & vlSelfRef.PC), 3U))))));
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final) {
        vlSelfRef.__PVT__PC_command = 0xddddddddU;
    }
    if (vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v0) {
        VL_ASSIGNSEL_WI(256, 32, (IData)(vlSelfRef.__VdlyLsb__icache_u0__DOT__cache_mem__v0), 
                        vlSelfRef.__PVT__icache_u0__DOT__cache_mem
                        [vlSelfRef.__VdlyDim0__icache_u0__DOT__cache_mem__v0], vlSelfRef.__VdlyVal__icache_u0__DOT__cache_mem__v0);
    }
    vlSelfRef.PC = vlSelfRef.__Vdly__PC;
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.in_reqValid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                             & (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.debug_is_hit = ((IData)(vlSelfRef.in_reqValid) 
                              & (vlSelfRef.__PVT__icache_u0__DOT__cache_valid
                                 [(0x000001ffU & (vlSelfRef.PC 
                                                  >> 5U))] 
                                 & (vlSelfRef.__PVT__icache_u0__DOT__cache_tag
                                    [(0x000001ffU & 
                                      (vlSelfRef.PC 
                                       >> 5U))] == 
                                    (vlSelfRef.PC >> 0x0000000eU))));
    vlSelfRef.__PVT__arvalid = ((~ (IData)(vlSelfRef.debug_is_hit)) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                   & (((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)) 
                                       & (IData)(vlSelfRef.in_reqValid)) 
                                      | (1U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)))));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__icache_u0__DOT__r_fire = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))));
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        vlSelfRef.__PVT__rlast = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast));
        vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                            ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata);
    } else {
        vlSelfRef.__PVT__rlast = 0U;
        vlSelfRef.rdata = 0U;
    }
    vlSelfRef.__PVT__lsu_access_fault = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid) 
                                          & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp)) 
                                             | (3U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp)))) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid) 
                                            & ((2U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp)) 
                                               | (3U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp)))));
}

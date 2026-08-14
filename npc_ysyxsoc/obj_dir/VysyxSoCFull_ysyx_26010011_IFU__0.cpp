// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h1e044360_0;

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__icache_u0__DOT__is_hit = (vlSelfRef.__PVT__icache_u0__DOT__cache_valid
                                               [(0x0000000fU 
                                                 & (vlSelfRef.PC 
                                                    >> 2U))] 
                                               & (vlSelfRef.__PVT__icache_u0__DOT__cache_tag
                                                  [
                                                  (0x0000000fU 
                                                   & (vlSelfRef.PC 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSelfRef.PC 
                                                   >> 6U)));
    vlSelfRef.bus_valid = (3U == (IData)(vlSelfRef.state));
    vlSelfRef.__PVT__icache_u0__DOT__r_fire = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))));
    vlSelfRef.__PVT__in_reqValid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                    & (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__arvalid = ((~ (IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit)) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                   & (((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)) 
                                       & (IData)(vlSelfRef.__PVT__in_reqValid)) 
                                      | (1U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)))));
    __Vtableidx1 = ((((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
                      << 7U) | ((((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)
                                   ? 0U : 2U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__arvalid) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                            ? 0U : 
                                           (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full))))
                                        : ((IData)(vlSelfRef.__PVT__arvalid) 
                                           && (1U & 
                                               (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))))) 
                                   << 4U))) | (((IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.__PVT__in_reqValid) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.__PVT__icache_u0__DOT__state))));
    vlSelfRef.__PVT__icache_u0__DOT__next_state = VysyxSoCFull__ConstPool__TABLE_h1e044360_0
        [__Vtableidx1];
    vlSelfRef.r_fire = ((0U == (IData)(vlSelfRef.state)) 
                        & ((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state))
                            ? ((IData)(vlSelfRef.__PVT__in_reqValid) 
                               & ((IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit) 
                                  | (IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)))
                            : (0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__next_state))));
}

void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.state))) {
        vlSelfRef.__PVT__next_state = ((IData)(vlSelfRef.r_fire)
                                        ? 3U : 0U);
    } else if ((3U == (IData)(vlSelfRef.state))) {
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final) {
            vlSelfRef.__PVT__next_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__next_state = 0U;
    }
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_valid__v0;
    __VdlySet__icache_u0__DOT__cache_valid__v0 = 0;
    CData/*3:0*/ __VdlyDim0__icache_u0__DOT__cache_valid__v16;
    __VdlyDim0__icache_u0__DOT__cache_valid__v16 = 0;
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_valid__v16;
    __VdlySet__icache_u0__DOT__cache_valid__v16 = 0;
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_tag__v0;
    __VdlySet__icache_u0__DOT__cache_tag__v0 = 0;
    IData/*25:0*/ __VdlyVal__icache_u0__DOT__cache_tag__v16;
    __VdlyVal__icache_u0__DOT__cache_tag__v16 = 0;
    CData/*3:0*/ __VdlyDim0__icache_u0__DOT__cache_tag__v16;
    __VdlyDim0__icache_u0__DOT__cache_tag__v16 = 0;
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_tag__v16;
    __VdlySet__icache_u0__DOT__cache_tag__v16 = 0;
    // Body
    vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v0 = 0U;
    vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v16 = 0U;
    __VdlySet__icache_u0__DOT__cache_valid__v0 = 0U;
    __VdlySet__icache_u0__DOT__cache_valid__v16 = 0U;
    __VdlySet__icache_u0__DOT__cache_tag__v0 = 0U;
    __VdlySet__icache_u0__DOT__cache_tag__v16 = 0U;
    vlSelfRef.__Vdly__PC = vlSelfRef.PC;
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__icache_u0__DOT__unnamedblk1__DOT__i = 0x00000010U;
        vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v0 = 1U;
        __VdlySet__icache_u0__DOT__cache_valid__v0 = 1U;
        __VdlySet__icache_u0__DOT__cache_tag__v0 = 1U;
        vlSelfRef.__Vdly__PC = 0x30000000U;
        vlSelfRef.state = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__state = 0U;
    } else {
        if (((((0U != (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)) 
               | (IData)(vlSelfRef.__PVT__in_reqValid)) 
              & (IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)) 
             & (~ (IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit)))) {
            vlSelfRef.__VdlyVal__icache_u0__DOT__cache_mem__v16 
                = vlSelfRef.rdata;
            vlSelfRef.__VdlyDim0__icache_u0__DOT__cache_mem__v16 
                = (0x0000000fU & (vlSelfRef.PC >> 2U));
            vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v16 = 1U;
            __VdlyDim0__icache_u0__DOT__cache_valid__v16 
                = (0x0000000fU & (vlSelfRef.PC >> 2U));
            __VdlySet__icache_u0__DOT__cache_valid__v16 = 1U;
            __VdlyVal__icache_u0__DOT__cache_tag__v16 
                = (vlSelfRef.PC >> 6U);
            __VdlyDim0__icache_u0__DOT__cache_tag__v16 
                = (0x0000000fU & (vlSelfRef.PC >> 2U));
            __VdlySet__icache_u0__DOT__cache_tag__v16 = 1U;
        }
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
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_7))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE) 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU)) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_7)))))) 
                                             | (0x00000073U 
                                                == vlSelfRef.__PVT__PC_command)) 
                                            | (0x30200073U 
                                               == vlSelfRef.__PVT__PC_command)) 
                                           | (IData)(vlSelfRef.__PVT__lsu_access_fault)))
                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.dnpc
                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.snpc);
        }
        vlSelfRef.state = vlSelfRef.__PVT__next_state;
        vlSelfRef.__PVT__icache_u0__DOT__state = vlSelfRef.__PVT__icache_u0__DOT__next_state;
    }
    if (__VdlySet__icache_u0__DOT__cache_valid__v0) {
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[0U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[1U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[2U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[3U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[4U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[5U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[6U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[7U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[8U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[9U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[0x0aU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[0x0bU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[0x0cU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[0x0dU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[0x0eU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[0x0fU] = 0U;
    }
    if (__VdlySet__icache_u0__DOT__cache_valid__v16) {
        vlSelfRef.__PVT__icache_u0__DOT__cache_valid[__VdlyDim0__icache_u0__DOT__cache_valid__v16] = 1U;
    }
    if (__VdlySet__icache_u0__DOT__cache_tag__v0) {
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[0U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[1U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[2U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[3U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[4U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[5U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[6U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[7U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[8U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[9U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[0x0aU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[0x0bU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[0x0cU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[0x0dU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[0x0eU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[0x0fU] = 0U;
    }
    if (__VdlySet__icache_u0__DOT__cache_tag__v16) {
        vlSelfRef.__PVT__icache_u0__DOT__cache_tag[__VdlyDim0__icache_u0__DOT__cache_tag__v16] 
            = __VdlyVal__icache_u0__DOT__cache_tag__v16;
    }
    vlSelfRef.bus_valid = (3U == (IData)(vlSelfRef.state));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__PC_command = 0U;
    } else if (vlSelfRef.r_fire) {
        vlSelfRef.__PVT__PC_command = ((IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit)
                                        ? vlSelfRef.__PVT__icache_u0__DOT__cache_mem
                                       [(0x0000000fU 
                                         & (vlSelfRef.PC 
                                            >> 2U))]
                                        : vlSelfRef.rdata);
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final) {
        vlSelfRef.__PVT__PC_command = 0xddddddddU;
    }
    if (vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v0) {
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[0U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[1U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[2U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[3U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[4U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[5U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[6U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[7U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[8U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[9U] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[0x0aU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[0x0bU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[0x0cU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[0x0dU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[0x0eU] = 0U;
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[0x0fU] = 0U;
    }
    if (vlSelfRef.__VdlySet__icache_u0__DOT__cache_mem__v16) {
        vlSelfRef.__PVT__icache_u0__DOT__cache_mem[vlSelfRef.__VdlyDim0__icache_u0__DOT__cache_mem__v16] 
            = vlSelfRef.__VdlyVal__icache_u0__DOT__cache_mem__v16;
    }
    vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                            ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata)
                        : 0U);
    vlSelfRef.PC = vlSelfRef.__Vdly__PC;
    vlSelfRef.__PVT__icache_u0__DOT__is_hit = (vlSelfRef.__PVT__icache_u0__DOT__cache_valid
                                               [(0x0000000fU 
                                                 & (vlSelfRef.PC 
                                                    >> 2U))] 
                                               & (vlSelfRef.__PVT__icache_u0__DOT__cache_tag
                                                  [
                                                  (0x0000000fU 
                                                   & (vlSelfRef.PC 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSelfRef.PC 
                                                   >> 6U)));
}

void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__in_reqValid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                    & (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__icache_u0__DOT__r_fire = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))));
    vlSelfRef.__PVT__lsu_access_fault = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid) 
                                          & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp)) 
                                             | (3U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp)))) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid) 
                                            & ((2U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp)) 
                                               | (3U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp)))));
    vlSelfRef.__PVT__arvalid = ((~ (IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit)) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                   & (((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)) 
                                       & (IData)(vlSelfRef.__PVT__in_reqValid)) 
                                      | (1U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)))));
    __Vtableidx1 = ((((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
                      << 7U) | ((((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)
                                   ? 0U : 2U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__arvalid) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                            ? 0U : 
                                           (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full))))
                                        : ((IData)(vlSelfRef.__PVT__arvalid) 
                                           && (1U & 
                                               (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))))) 
                                   << 4U))) | (((IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.__PVT__in_reqValid) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.__PVT__icache_u0__DOT__state))));
    vlSelfRef.__PVT__icache_u0__DOT__next_state = VysyxSoCFull__ConstPool__TABLE_h1e044360_0
        [__Vtableidx1];
    vlSelfRef.r_fire = ((0U == (IData)(vlSelfRef.state)) 
                        & ((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state))
                            ? ((IData)(vlSelfRef.__PVT__in_reqValid) 
                               & ((IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit) 
                                  | (IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)))
                            : (0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__next_state))));
}

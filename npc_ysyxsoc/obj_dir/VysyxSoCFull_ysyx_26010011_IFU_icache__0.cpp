// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__0(VysyxSoCFull_ysyx_26010011_IFU_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_fire = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))));
}

void VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__1(VysyxSoCFull_ysyx_26010011_IFU_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_flush = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid;
    vlSelfRef.__PVT__in_reqValid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__in_reqValid) 
                                    & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid)) 
                                       & (~ (((0U != 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC))
                                               ? 0x10U
                                               : 0U) 
                                             >> 4U))));
}

extern const VlUnpacked<CData/*0:0*/, 512> VysyxSoCFull__ConstPool__TABLE_hb96f65ad_0;

void VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__2(VysyxSoCFull_ysyx_26010011_IFU_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__in_rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit)
                                  ? (vlSelfRef.__PVT__cache_mem
                                     [(0x0000000fU 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                          >> 2U))] 
                                     >> (0x0000001fU 
                                         & VL_SHIFTL_III(5,32,32, 
                                                         (2U 
                                                          & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U)))
                                  : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata);
    __Vtableidx1 = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit) 
                        << 4U) | (((IData)(vlSelfRef.pc_flushed) 
                                   << 3U) | ((IData)(vlSelfRef.pc_flush) 
                                             << 2U))) 
                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rlast) 
                          << 1U) | (IData)(vlSelfRef.__PVT__r_fire))) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__state) 
                                << 1U) | (IData)(vlSelfRef.__PVT__in_reqValid)));
    vlSelfRef.__PVT__in_respValid = VysyxSoCFull__ConstPool__TABLE_hb96f65ad_0
        [__Vtableidx1];
}

extern const VlUnpacked<CData/*2:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_h70231852_0;

void VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__3(VysyxSoCFull_ysyx_26010011_IFU_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26010011_IFU_icache___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__in_reqValid) 
                                   << 3U) | ((IData)(vlSelfRef.pc_flushed) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.pc_flush) 
                          << 1U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IROM_arready)))) 
                     << 5U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rlast) 
                                << 4U) | (((IData)(vlSelfRef.__PVT__r_fire) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__state))));
    vlSelfRef.__PVT__next_state = VysyxSoCFull__ConstPool__TABLE_h70231852_0
        [__Vtableidx2];
}

void VysyxSoCFull_ysyx_26010011_IFU_icache___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__0(VysyxSoCFull_ysyx_26010011_IFU_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26010011_IFU_icache___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__burst_cnt;
    __Vdly__burst_cnt = 0;
    CData/*0:0*/ __VdlySet__cache_valid__v0;
    __VdlySet__cache_valid__v0 = 0;
    CData/*0:0*/ __VdlyVal__cache_valid__v16;
    __VdlyVal__cache_valid__v16 = 0;
    CData/*3:0*/ __VdlyDim0__cache_valid__v16;
    __VdlyDim0__cache_valid__v16 = 0;
    CData/*0:0*/ __VdlySet__cache_valid__v16;
    __VdlySet__cache_valid__v16 = 0;
    CData/*3:0*/ __VdlyDim0__cache_valid__v17;
    __VdlyDim0__cache_valid__v17 = 0;
    CData/*0:0*/ __VdlySet__cache_valid__v17;
    __VdlySet__cache_valid__v17 = 0;
    IData/*31:0*/ __VdlyVal__cache_mem__v0;
    __VdlyVal__cache_mem__v0 = 0;
    CData/*4:0*/ __VdlyLsb__cache_mem__v0;
    __VdlyLsb__cache_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__cache_mem__v0;
    __VdlyDim0__cache_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_mem__v0;
    __VdlySet__cache_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__cache_mem__v1;
    __VdlyVal__cache_mem__v1 = 0;
    CData/*4:0*/ __VdlyLsb__cache_mem__v1;
    __VdlyLsb__cache_mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__cache_mem__v1;
    __VdlyDim0__cache_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_mem__v1;
    __VdlySet__cache_mem__v1 = 0;
    IData/*25:0*/ __VdlyVal__cache_tag__v0;
    __VdlyVal__cache_tag__v0 = 0;
    CData/*3:0*/ __VdlyDim0__cache_tag__v0;
    __VdlyDim0__cache_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tag__v0;
    __VdlySet__cache_tag__v0 = 0;
    IData/*25:0*/ __VdlyVal__cache_tag__v1;
    __VdlyVal__cache_tag__v1 = 0;
    CData/*3:0*/ __VdlyDim0__cache_tag__v1;
    __VdlyDim0__cache_tag__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tag__v1;
    __VdlySet__cache_tag__v1 = 0;
    // Body
    __Vdly__burst_cnt = vlSelfRef.__PVT__burst_cnt;
    __VdlySet__cache_mem__v0 = 0U;
    __VdlySet__cache_mem__v1 = 0U;
    __VdlySet__cache_tag__v0 = 0U;
    __VdlySet__cache_tag__v1 = 0U;
    __VdlySet__cache_valid__v0 = 0U;
    __VdlySet__cache_valid__v16 = 0U;
    __VdlySet__cache_valid__v17 = 0U;
    __Vdly__burst_cnt = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.pc_flush) 
                                       & (~ (IData)(vlSelfRef.pc_flushed))))) 
                             && ((IData)(vlSelfRef.__PVT__r_fire)
                                  ? ((1U & (~ (((~ (IData)(vlSelfRef.__PVT__burst_cnt)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rlast)) 
                                               & (IData)(vlSelfRef.__PVT__r_fire)))) 
                                     && (1U & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__burst_cnt))))
                                  : (IData)(vlSelfRef.__PVT__burst_cnt))));
    if ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))) {
        if ((((IData)(vlSelfRef.__PVT__r_fire) & (2U 
                                                  == (IData)(vlSelfRef.__PVT__state))) 
             & (~ (IData)(vlSelfRef.pc_flush)))) {
            __VdlyVal__cache_mem__v0 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata;
            __VdlyLsb__cache_mem__v0 = (0x0000001fU 
                                        & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__burst_cnt), 5U));
            __VdlyDim0__cache_mem__v0 = (0x0000000fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                            >> 2U));
            __VdlySet__cache_mem__v0 = 1U;
            __VdlyVal__cache_tag__v0 = (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                        >> 6U);
            __VdlyDim0__cache_tag__v0 = (0x0000000fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                            >> 2U));
            __VdlySet__cache_tag__v0 = 1U;
        } else if ((((IData)(vlSelfRef.__PVT__r_fire) 
                     & (2U == (IData)(vlSelfRef.__PVT__state))) 
                    & (IData)(vlSelfRef.pc_flush))) {
            __VdlyVal__cache_mem__v1 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata;
            __VdlyLsb__cache_mem__v1 = (0x0000001fU 
                                        & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.__PVT__burst_cnt), 5U));
            __VdlyDim0__cache_mem__v1 = (0x0000000fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                            >> 2U));
            __VdlySet__cache_mem__v1 = 1U;
            __VdlyVal__cache_tag__v1 = (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                        >> 6U);
            __VdlyDim0__cache_tag__v1 = (0x0000000fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                            >> 2U));
            __VdlySet__cache_tag__v1 = 1U;
        }
    }
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x00000010U;
        __VdlySet__cache_valid__v0 = 1U;
        vlSelfRef.pc_flushed = 0U;
        vlSelfRef.__PVT__state = 0U;
    } else {
        if ((((IData)(vlSelfRef.__PVT__r_fire) & (2U 
                                                  == (IData)(vlSelfRef.__PVT__state))) 
             & (~ (IData)(vlSelfRef.pc_flush)))) {
            __VdlyVal__cache_valid__v16 = ((IData)(vlSelfRef.__PVT__r_fire) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rlast));
            __VdlyDim0__cache_valid__v16 = (0x0000000fU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                               >> 2U));
            __VdlySet__cache_valid__v16 = 1U;
        } else if ((((IData)(vlSelfRef.__PVT__r_fire) 
                     & (2U == (IData)(vlSelfRef.__PVT__state))) 
                    & (IData)(vlSelfRef.pc_flush))) {
            __VdlyDim0__cache_valid__v17 = (0x0000000fU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                               >> 2U));
            __VdlySet__cache_valid__v17 = 1U;
        }
        if (vlSelfRef.pc_flush) {
            vlSelfRef.pc_flushed = 1U;
        } else if (vlSelfRef.__PVT__in_respValid) {
            vlSelfRef.pc_flushed = 0U;
        }
        vlSelfRef.__PVT__state = vlSelfRef.__PVT__next_state;
    }
    vlSelfRef.__PVT__burst_cnt = __Vdly__burst_cnt;
    if (__VdlySet__cache_mem__v0) {
        vlSelfRef.__PVT__cache_mem[__VdlyDim0__cache_mem__v0] 
            = (((~ ((IData)(0xffffffffU) << (IData)(__VdlyLsb__cache_mem__v0))) 
                & vlSelfRef.__PVT__cache_mem[__VdlyDim0__cache_mem__v0]) 
               | (0x00000000ffffffffULL & (__VdlyVal__cache_mem__v0 
                                           << (IData)(__VdlyLsb__cache_mem__v0))));
    }
    if (__VdlySet__cache_mem__v1) {
        vlSelfRef.__PVT__cache_mem[__VdlyDim0__cache_mem__v1] 
            = (((~ ((IData)(0xffffffffU) << (IData)(__VdlyLsb__cache_mem__v1))) 
                & vlSelfRef.__PVT__cache_mem[__VdlyDim0__cache_mem__v1]) 
               | (0x00000000ffffffffULL & (__VdlyVal__cache_mem__v1 
                                           << (IData)(__VdlyLsb__cache_mem__v1))));
    }
    if (__VdlySet__cache_tag__v0) {
        vlSelfRef.__PVT__cache_tag[__VdlyDim0__cache_tag__v0] 
            = __VdlyVal__cache_tag__v0;
    }
    if (__VdlySet__cache_tag__v1) {
        vlSelfRef.__PVT__cache_tag[__VdlyDim0__cache_tag__v1] 
            = __VdlyVal__cache_tag__v1;
    }
    if (__VdlySet__cache_valid__v0) {
        vlSelfRef.__PVT__cache_valid[0U] = 0U;
        vlSelfRef.__PVT__cache_valid[1U] = 0U;
        vlSelfRef.__PVT__cache_valid[2U] = 0U;
        vlSelfRef.__PVT__cache_valid[3U] = 0U;
        vlSelfRef.__PVT__cache_valid[4U] = 0U;
        vlSelfRef.__PVT__cache_valid[5U] = 0U;
        vlSelfRef.__PVT__cache_valid[6U] = 0U;
        vlSelfRef.__PVT__cache_valid[7U] = 0U;
        vlSelfRef.__PVT__cache_valid[8U] = 0U;
        vlSelfRef.__PVT__cache_valid[9U] = 0U;
        vlSelfRef.__PVT__cache_valid[0x0aU] = 0U;
        vlSelfRef.__PVT__cache_valid[0x0bU] = 0U;
        vlSelfRef.__PVT__cache_valid[0x0cU] = 0U;
        vlSelfRef.__PVT__cache_valid[0x0dU] = 0U;
        vlSelfRef.__PVT__cache_valid[0x0eU] = 0U;
        vlSelfRef.__PVT__cache_valid[0x0fU] = 0U;
    }
    if (__VdlySet__cache_valid__v16) {
        vlSelfRef.__PVT__cache_valid[__VdlyDim0__cache_valid__v16] 
            = __VdlyVal__cache_valid__v16;
    }
    if (__VdlySet__cache_valid__v17) {
        vlSelfRef.__PVT__cache_valid[__VdlyDim0__cache_valid__v17] = 0U;
    }
}

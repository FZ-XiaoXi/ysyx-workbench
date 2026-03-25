// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_LSU___stl_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___stl_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
}

VL_ATTR_COLD void Vtop_LSU___ctor_var_reset(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__lsu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7215086410235688806ull);
    vlSelf->__PVT__lsu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5289022911436506389ull);
    vlSelf->__PVT__lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3658037750161046613ull);
    vlSelf->__PVT__rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16104941632112136897ull);
    vlSelf->__PVT__lsu_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13598643557825439274ull);
    vlSelf->__PVT__isSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721690139541285193ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__lsu_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476661837632727266ull);
    vlSelf->__PVT__bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    vlSelf->__PVT__lsu_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11881322873208076425ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__lsu_respValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8636477089397954694ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10065165116613087284ull);
    vlSelf->__PVT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5324393166403162543ull);
    vlSelf->__PVT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10955695006771734379ull);
    vlSelf->__PVT__lsu_rdata4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14683804152484817446ull);
    vlSelf->__PVT__lsu_respValid_t = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5236844518421600776ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10563439750320617219ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1258137465832815374ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8568700393153990559ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3205558585022889190ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14945001024778963298ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17357906364188215045ull);
}

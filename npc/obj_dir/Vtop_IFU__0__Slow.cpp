// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_IFU___stl_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___stl_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
}

VL_ATTR_COLD void Vtop_IFU___ctor_var_reset(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->__PVT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->__PVT__snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
    vlSelf->__PVT__isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812665700179750437ull);
    vlSelf->__PVT__isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1884439264993369748ull);
    vlSelf->__PVT__isECALL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184926532974597313ull);
    vlSelf->__PVT__isMRET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828884427583364781ull);
    vlSelf->__PVT__wbu_final = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17405858545225522430ull);
    vlSelf->__PVT__PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    vlSelf->__PVT__bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    vlSelf->__PVT__ifu_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2344563912616762118ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__pmem_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12250641669446868879ull);
    vlSelf->__PVT__pmem_respValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7392642148508904925ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10563439750320617219ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1258137465832815374ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8568700393153990559ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3205558585022889190ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14945001024778963298ull);
    vlSelf->__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17357906364188215045ull);
}

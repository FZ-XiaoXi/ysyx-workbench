// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___eval_static__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0(VysyxSoCFull_ysyx_26010011_IFU_icache__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___eval_static__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_flushed = 0U;
    vlSelfRef.__PVT__burst_cnt = 0U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ctor_var_reset(VysyxSoCFull_ysyx_26010011_IFU_icache__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
    vlSelf->pc_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12257365378833293132ull);
    vlSelf->__PVT__in_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15295922204413368732ull);
    vlSelf->__PVT__in_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13927238251016224317ull);
    vlSelf->__PVT__in_respValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11409226531722426560ull);
    vlSelf->__PVT__in_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8396217702373097326ull);
    vlSelf->__PVT__out_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9056010028983952926ull);
    vlSelf->__PVT__out_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2658182563106304910ull);
    vlSelf->__PVT__out_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7523476947448271231ull);
    vlSelf->__PVT__out_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4178515423869658589ull);
    vlSelf->__PVT__out_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12404930231490556045ull);
    vlSelf->__PVT__out_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15266529077428982035ull);
    vlSelf->__PVT__out_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5620223489940384109ull);
    vlSelf->__PVT__out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8728579470209360184ull);
    vlSelf->__PVT__out_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14551577901992885649ull);
    vlSelf->__PVT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7267833764556986762ull);
    vlSelf->__PVT__out_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17430284168431524039ull);
    vlSelf->__PVT__out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8059687719875503935ull);
    vlSelf->__PVT__out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13197421409447846ull);
    vlSelf->__PVT__debug_is_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9597593556992448911ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__cache_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16322108757504633651ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__cache_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13624164365116228830ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__cache_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 8916907887533138551ull);
    }
    vlSelf->pc_flushed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7891879528763933891ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__ar_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531198051612780992ull);
    vlSelf->__PVT__r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673292808138091229ull);
    vlSelf->__PVT__burst_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17842020306072178892ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11372531115521842849ull);
}

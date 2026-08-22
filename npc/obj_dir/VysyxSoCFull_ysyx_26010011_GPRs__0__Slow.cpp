// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_GPRs___ctor_var_reset(VysyxSoCFull_ysyx_26010011_GPRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_GPRs___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__gpr_in_addra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8206786594731694284ull);
    vlSelf->__PVT__gpr_in_addrb = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17892913542393129583ull);
    vlSelf->__PVT__gpr_out_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8949155379691620726ull);
    vlSelf->__PVT__gpr_out_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13291922832006014359ull);
    vlSelf->__PVT__gpr_in_addw = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4798672166494912493ull);
    vlSelf->__PVT__gpr_in_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14566059391042856456ull);
    vlSelf->__PVT__gpr_in_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15922739037077186253ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->GPR[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3611090588693839745ull);
    }
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_mem_2048x32___ctor_var_reset(VysyxSoCFull_mem_2048x32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_mem_2048x32___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__R0_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12845283676701988290ull);
    vlSelf->__PVT__R0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14261355339832658091ull);
    vlSelf->__PVT__R0_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16715649935461638190ull);
    vlSelf->__PVT__R0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5979191165960405999ull);
    vlSelf->__PVT__W0_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12299210448680578171ull);
    vlSelf->__PVT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12081747263863994114ull);
    vlSelf->__PVT__W0_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17915999570588781328ull);
    vlSelf->__PVT__W0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17000914835400047819ull);
    vlSelf->__PVT__W0_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5764161081402713374ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11884773572712530491ull);
    }
    vlSelf->__PVT___R0_en_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18224787780758627465ull);
    vlSelf->__PVT___R0_addr_d0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2619114732432484148ull);
}

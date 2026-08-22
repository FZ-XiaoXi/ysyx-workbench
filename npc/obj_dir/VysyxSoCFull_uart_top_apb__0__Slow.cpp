// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_uart_top_apb___ctor_var_reset(VysyxSoCFull_uart_top_apb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_uart_top_apb___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5911576976048721760ull);
    vlSelf->__PVT__in_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11616097027865588247ull);
    vlSelf->__PVT__in_pprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15716578073646302290ull);
    vlSelf->__PVT__in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9222435789893260784ull);
    vlSelf->__PVT__in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15199853075796525497ull);
    vlSelf->__PVT__in_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 463535085866307531ull);
    vlSelf->__PVT__in_pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4709433572397926526ull);
    vlSelf->__PVT__in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3340818978946302843ull);
    vlSelf->__PVT__in_pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15835319557411818559ull);
    vlSelf->__PVT__in_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10235756236325045853ull);
    vlSelf->__PVT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2399467654730215438ull);
    vlSelf->__PVT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
    vlSelf->__PVT__reg_dat8_w = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16327304845887815468ull);
    vlSelf->__PVT__reg_dat8_w_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12831841092133543819ull);
    vlSelf->__VdfgRegularize_h953d1cf6_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1405554476732405985ull);
}

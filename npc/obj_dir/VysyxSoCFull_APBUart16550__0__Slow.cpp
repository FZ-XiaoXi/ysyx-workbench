// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_APBUart16550___ctor_var_reset(VysyxSoCFull_APBUart16550* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_APBUart16550___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__auto_in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14775763313287992812ull);
    vlSelf->__PVT__auto_in_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16098910746649278957ull);
    vlSelf->__PVT__auto_in_pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8960010300208990552ull);
    vlSelf->__PVT__auto_in_paddr = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 16334529524290240477ull);
    vlSelf->__PVT__auto_in_pprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6284226438430006887ull);
    vlSelf->__PVT__auto_in_pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9641628971445420226ull);
    vlSelf->__PVT__auto_in_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9609141132933801963ull);
    vlSelf->__PVT__auto_in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10159986018076491224ull);
    vlSelf->__PVT__auto_in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15716422564593325597ull);
    vlSelf->__PVT__auto_in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7278491388710772697ull);
    vlSelf->__PVT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2399467654730215438ull);
    vlSelf->__PVT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
}

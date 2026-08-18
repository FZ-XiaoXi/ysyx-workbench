// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___ctor_var_reset(VysyxSoCFull_ysyx_26010011_IF_ID_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IF_ID_pipeline___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301687952925534331ull);
    vlSelf->__PVT__ifu_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15794921026487040168ull);
    vlSelf->__PVT__ifu_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13473664978699002063ull);
    vlSelf->__PVT__ifu_out_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2966223906934898997ull);
    vlSelf->__PVT__ifu_out_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9972062482357180899ull);
    vlSelf->__PVT__ifu_out_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7176184147657711579ull);
    vlSelf->__PVT__ifu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16270981747284714961ull);
    vlSelf->idu_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13586840831705864853ull);
    vlSelf->__PVT__idu_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1715751720496286294ull);
    vlSelf->__PVT__idu_in_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7876254079229169303ull);
    vlSelf->idu_in_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11320836999121056574ull);
    vlSelf->__PVT__idu_in_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2018166718151256081ull);
    vlSelf->__PVT__idu_in_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12234316544121749211ull);
    vlSelf->__Vdly__idu_in_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13433541435561990746ull);
    vlSelf->__Vdly__idu_in_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1480325035876660660ull);
    vlSelf->__Vdly__idu_in_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6542986285180319241ull);
}

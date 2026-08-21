// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LS_WB_pipeline___ctor_var_reset(VysyxSoCFull_ysyx_26010011_LS_WB_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LS_WB_pipeline___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301687952925534331ull);
    vlSelf->__PVT__lsu_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3976488502487807843ull);
    vlSelf->__PVT__lsu_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12315416510729442014ull);
    vlSelf->__PVT__lsu_out_bus_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5074829392998883883ull);
    vlSelf->__PVT__lsu_out_bus_csr_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11848664461308994753ull);
    vlSelf->__PVT__lsu_out_bus_comp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13924931603779510290ull);
    vlSelf->__PVT__lsu_out_bus_lsu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 609999572664879936ull);
    vlSelf->__PVT__lsu_out_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9980951763828768867ull);
    vlSelf->__PVT__lsu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 904879937952889666ull);
    vlSelf->__PVT__lsu_out_bus_csrrd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15308181196039966972ull);
    vlSelf->__PVT__lsu_out_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17430936866903563308ull);
    vlSelf->__PVT__lsu_out_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7820392229066768031ull);
    vlSelf->__PVT__lsu_out_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15948087631603348972ull);
    vlSelf->__PVT__lsu_out_bus_isWGPR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8442856946116816002ull);
    vlSelf->__PVT__lsu_out_bus_isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14122251670820845448ull);
    vlSelf->__PVT__lsu_out_bus_isWCOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17228911799616038224ull);
    vlSelf->__PVT__lsu_out_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4675005313195201108ull);
    vlSelf->__PVT__lsu_out_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16002326217734672321ull);
    vlSelf->__PVT__lsu_out_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16270953366520607166ull);
    vlSelf->__PVT__lsu_out_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12846485210770503714ull);
    vlSelf->wbu_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7348323915768539249ull);
    vlSelf->__PVT__wbu_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6772342513096191989ull);
    vlSelf->__PVT__wbu_in_bus_lsu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13308670660371869755ull);
    vlSelf->__PVT__wbu_in_bus_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1871889077553299479ull);
    vlSelf->__PVT__wbu_in_bus_csr_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4174338316969120507ull);
    vlSelf->__PVT__wbu_in_bus_comp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14737095181936399087ull);
    vlSelf->__PVT__wbu_in_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15381764785183381688ull);
    vlSelf->__PVT__wbu_in_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6381871230954743719ull);
    vlSelf->__PVT__wbu_in_bus_csrrd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2582902305219585865ull);
    vlSelf->__PVT__wbu_in_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16223995228007458629ull);
    vlSelf->__PVT__wbu_in_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6285663554557266190ull);
    vlSelf->__PVT__wbu_in_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12955986694862163434ull);
    vlSelf->__PVT__wbu_in_bus_isWGPR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2650656573437712631ull);
    vlSelf->__PVT__wbu_in_bus_isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1288336172374693784ull);
    vlSelf->__PVT__wbu_in_bus_isWCOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8115843956253524906ull);
    vlSelf->__PVT__wbu_in_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6444053927342991924ull);
    vlSelf->__PVT__wbu_in_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16476135090564559800ull);
    vlSelf->wbu_in_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14902366855027757480ull);
    vlSelf->__PVT__wbu_in_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4148869682523486530ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2461389254652843162ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___ctor_var_reset(VysyxSoCFull_ysyx_26010011_ID_EX_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_ID_EX_pipeline___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301687952925534331ull);
    vlSelf->__PVT__idu_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6511924958169895207ull);
    vlSelf->__PVT__idu_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17955458417787956142ull);
    vlSelf->__PVT__idu_out_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4202667888144084253ull);
    vlSelf->__PVT__idu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12188877952293993608ull);
    vlSelf->__PVT__idu_out_bus_csrrd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15296301512332038326ull);
    vlSelf->__PVT__idu_out_bus_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2094052308727214119ull);
    vlSelf->__PVT__idu_out_bus_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15826497816046800292ull);
    vlSelf->__PVT__idu_out_bus_rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5549002579545358729ull);
    vlSelf->__PVT__idu_out_bus_rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14026260494958491921ull);
    vlSelf->__PVT__idu_out_bus_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12937762372200183453ull);
    vlSelf->__PVT__idu_out_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14364183636996957863ull);
    vlSelf->__PVT__idu_out_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11004728032774723394ull);
    vlSelf->__PVT__idu_out_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4519748237212810333ull);
    vlSelf->__PVT__idu_out_bus_isWGPR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1994276548017931328ull);
    vlSelf->__PVT__idu_out_bus_isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9134230816901321695ull);
    vlSelf->__PVT__idu_out_bus_isWCOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8171300561933334527ull);
    vlSelf->__PVT__idu_out_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8914714928645611673ull);
    vlSelf->__PVT__idu_out_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16111935974516961794ull);
    vlSelf->__PVT__idu_out_bus_isUnSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8165182960799301360ull);
    vlSelf->__PVT__idu_out_bus_isUsePC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13602514528151239164ull);
    vlSelf->__PVT__idu_out_bus_alu_isUseImm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8076286519576185987ull);
    vlSelf->__PVT__idu_out_bus_comp_isUseImm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3997477814729445796ull);
    vlSelf->__PVT__idu_out_bus_alu_op = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7980157981290629846ull);
    vlSelf->__PVT__idu_out_bus_comp_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10650822210898124736ull);
    vlSelf->__PVT__idu_out_bus_perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4499785422191369230ull);
    vlSelf->__PVT__idu_out_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7134559570505204209ull);
    vlSelf->__PVT__idu_out_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7832494776396704118ull);
    vlSelf->exu_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1186621848017686738ull);
    vlSelf->__PVT__exu_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12311749930967227544ull);
    vlSelf->__PVT__exu_in_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13401695877506376455ull);
    vlSelf->__PVT__exu_in_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10751391715306568291ull);
    vlSelf->__PVT__exu_in_bus_csrrd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11442087036974706640ull);
    vlSelf->__PVT__exu_in_bus_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7619374938991146114ull);
    vlSelf->__PVT__exu_in_bus_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10915404517801208273ull);
    vlSelf->__PVT__exu_in_bus_rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4768492139098380941ull);
    vlSelf->__PVT__exu_in_bus_rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 888953335557266864ull);
    vlSelf->__PVT__exu_in_bus_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2937127983589580789ull);
    vlSelf->__PVT__exu_in_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16606324017200648478ull);
    vlSelf->__PVT__exu_in_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3053934696094118311ull);
    vlSelf->__PVT__exu_in_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4042099511372492794ull);
    vlSelf->__PVT__exu_in_bus_isWGPR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4103147728177927834ull);
    vlSelf->__PVT__exu_in_bus_isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12109830986040348460ull);
    vlSelf->__PVT__exu_in_bus_isWCOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6509303573563496740ull);
    vlSelf->__PVT__exu_in_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12272955613059802462ull);
    vlSelf->__PVT__exu_in_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7962310914151607107ull);
    vlSelf->__PVT__exu_in_bus_isUnSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11262402917449642059ull);
    vlSelf->__PVT__exu_in_bus_isUsePC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14588966781187254461ull);
    vlSelf->__PVT__exu_in_bus_alu_isUseImm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2151576111721231749ull);
    vlSelf->__PVT__exu_in_bus_comp_isUseImm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3093465026826336488ull);
    vlSelf->__PVT__exu_in_bus_alu_op = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5277120169389257441ull);
    vlSelf->__PVT__exu_in_bus_comp_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16925098395088283548ull);
    vlSelf->__PVT__exu_in_bus_perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10388658488905647371ull);
    vlSelf->exu_in_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13152426038760962078ull);
    vlSelf->__PVT__exu_in_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12115186882859376803ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2461389254652843162ull);
    vlSelf->__Vdly__exu_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2812072764520721677ull);
}

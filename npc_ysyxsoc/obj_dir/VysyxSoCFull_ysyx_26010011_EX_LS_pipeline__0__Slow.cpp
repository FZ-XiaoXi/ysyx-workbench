// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___ctor_var_reset(VysyxSoCFull_ysyx_26010011_EX_LS_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301687952925534331ull);
    vlSelf->__PVT__exu_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15991923254800818468ull);
    vlSelf->__PVT__exu_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5972632104449802677ull);
    vlSelf->__PVT__exu_out_bus_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6464683271446975527ull);
    vlSelf->__PVT__exu_out_bus_csr_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18374539163807044174ull);
    vlSelf->__PVT__exu_out_bus_comp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5402745377302856199ull);
    vlSelf->__PVT__exu_out_bus_lsu_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3420429308660478757ull);
    vlSelf->__PVT__exu_out_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11096303818826192329ull);
    vlSelf->__PVT__exu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12053201596965599409ull);
    vlSelf->__PVT__exu_out_bus_csrrd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4837142392932910122ull);
    vlSelf->__PVT__exu_out_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15245031494321883429ull);
    vlSelf->__PVT__exu_out_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 424221285578980674ull);
    vlSelf->__PVT__exu_out_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3423149656099076007ull);
    vlSelf->__PVT__exu_out_bus_isWGPR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3884445150846748626ull);
    vlSelf->__PVT__exu_out_bus_isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5044585727984224751ull);
    vlSelf->__PVT__exu_out_bus_isWCOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1570683177069710541ull);
    vlSelf->__PVT__exu_out_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3492950519539928213ull);
    vlSelf->__PVT__exu_out_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12255540179194979362ull);
    vlSelf->__PVT__exu_out_bus_isUnSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13542091236843840661ull);
    vlSelf->__PVT__exu_out_bus_perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5056107177289799377ull);
    vlSelf->__PVT__exu_out_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12820455770204038540ull);
    vlSelf->__PVT__exu_out_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12010151792721209884ull);
    vlSelf->lsu_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9510214819170772049ull);
    vlSelf->__PVT__lsu_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1260193116019354778ull);
    vlSelf->__PVT__lsu_in_bus_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10084839590546003653ull);
    vlSelf->__PVT__lsu_in_bus_csr_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7357267931333464976ull);
    vlSelf->__PVT__lsu_in_bus_comp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12964005584040338278ull);
    vlSelf->__PVT__lsu_in_bus_lsu_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14969151609686512394ull);
    vlSelf->__PVT__lsu_in_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16833310774733762949ull);
    vlSelf->__PVT__lsu_in_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6526339356017408647ull);
    vlSelf->__PVT__lsu_in_bus_csrrd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5856448274621661494ull);
    vlSelf->__PVT__lsu_in_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3462536390724582597ull);
    vlSelf->__PVT__lsu_in_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4429564902089472088ull);
    vlSelf->__PVT__lsu_in_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13391707463715923727ull);
    vlSelf->__PVT__lsu_in_bus_isWGPR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2219095151155050461ull);
    vlSelf->__PVT__lsu_in_bus_isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15948413547009164365ull);
    vlSelf->__PVT__lsu_in_bus_isWCOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12471946517516348193ull);
    vlSelf->__PVT__lsu_in_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12634271922783140598ull);
    vlSelf->__PVT__lsu_in_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11402382612848342187ull);
    vlSelf->__PVT__lsu_in_bus_isUnSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14484214287239985907ull);
    vlSelf->__PVT__lsu_in_bus_perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11626300850549645301ull);
    vlSelf->lsu_in_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9813440319487010523ull);
    vlSelf->__PVT__lsu_in_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3702223484292238112ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11298606826339692203ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2461389254652843162ull);
    vlSelf->__Vdly__lsu_in_bus_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3479646451587634432ull);
    vlSelf->__Vdly__lsu_in_bus_csr_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1683457039337163205ull);
    vlSelf->__Vdly__lsu_in_bus_comp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6482002854481314763ull);
    vlSelf->__Vdly__lsu_in_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10176080516434417339ull);
    vlSelf->__Vdly__lsu_in_bus_csrrd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6325231883562630731ull);
    vlSelf->__Vdly__lsu_in_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6090763722862181945ull);
    vlSelf->__Vdly__lsu_in_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5911075734051539677ull);
    vlSelf->__Vdly__lsu_in_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2058160872003387283ull);
    vlSelf->__Vdly__lsu_in_bus_isWGPR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 296253622717885834ull);
    vlSelf->__Vdly__lsu_in_bus_isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2598136907540376214ull);
    vlSelf->__Vdly__lsu_in_bus_isWCOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4687277231890368303ull);
    vlSelf->__Vdly__lsu_in_bus_isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16911632368867480343ull);
    vlSelf->__Vdly__lsu_in_bus_opCSR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 298511824376665275ull);
    vlSelf->__Vdly__lsu_in_bus_isUnSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841859470887419213ull);
    vlSelf->__Vdly__lsu_in_bus_perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12646063639661431758ull);
    vlSelf->__Vdly__lsu_in_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4064683559451327225ull);
    vlSelf->__Vdly__lsu_in_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2404927333018726291ull);
}

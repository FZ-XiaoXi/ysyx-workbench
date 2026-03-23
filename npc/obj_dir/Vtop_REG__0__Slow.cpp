// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_REG___ctor_var_reset(Vtop_REG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_REG___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__addRA = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3742534636164052463ull);
    vlSelf->__PVT__addRB = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15890044701751212234ull);
    vlSelf->__PVT__addCSR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10954636313836833437ull);
    vlSelf->__PVT__addW = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3263691094783157846ull);
    vlSelf->__PVT__inData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17521711824098783449ull);
    vlSelf->__PVT__inCSRData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10788995554071240459ull);
    vlSelf->__PVT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->__PVT__outA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8920352487145152019ull);
    vlSelf->__PVT__outB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17388924514444529742ull);
    vlSelf->__PVT__CSR_BUS = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9457398825457557697ull);
    vlSelf->__PVT__csr_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16711562886451133210ull);
    vlSelf->__PVT__csr_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14107046366709206832ull);
    vlSelf->__PVT__WCSREN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1439781833436128944ull);
    vlSelf->__PVT__WEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16162439619744449072ull);
    vlSelf->__PVT__isECALL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184926532974597313ull);
    vlSelf->__PVT__isMRET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828884427583364781ull);
    vlSelf->__PVT__bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->GPR[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3611090588693839745ull);
    }
    vlSelf->CSR_MCYCLE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11165352791181867570ull);
    vlSelf->CSR_MCYCLEH = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16554325436592071722ull);
    vlSelf->CSR_MTVEC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11323515141155308250ull);
    vlSelf->CSR_MEPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7714916435077890502ull);
    vlSelf->CSR_MCAUSE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17025461536183969414ull);
    vlSelf->CSR_MSTATUS = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9103765532486773230ull);
    vlSelf->CSR_MVENDORID = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16657965402645930187ull);
    vlSelf->CSR_MARCHID = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3656773033635483453ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
}

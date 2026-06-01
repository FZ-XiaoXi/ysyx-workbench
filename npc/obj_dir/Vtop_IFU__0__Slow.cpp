// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_IFU___stl_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___stl_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arvalid = ((0U == (IData)(vlSelfRef.state)) 
                                | (1U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__rvalid = ((2U == (IData)(vlSymsp->TOP__top.__PVT__IROM__DOT__r_state)) 
                               | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IROM__DOT__r_state)) 
                                  & (IData)(vlSymsp->TOP__top.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__r_fire = ((IData)(vlSelfRef.__PVT__rvalid) 
                               & (3U != (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__ar_fire = ((IData)(vlSelfRef.__PVT__arvalid) 
                                & ((0U == (IData)(vlSymsp->TOP__top.__PVT__IROM__DOT__r_state)) 
                                   | ((3U != (IData)(vlSelfRef.state)) 
                                      & (IData)(vlSelfRef.__PVT__rvalid))));
}

VL_ATTR_COLD void Vtop_IFU___ctor_var_reset(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->__PVT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->__PVT__snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
    vlSelf->__PVT__isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812665700179750437ull);
    vlSelf->__PVT__isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1884439264993369748ull);
    vlSelf->__PVT__isECALL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184926532974597313ull);
    vlSelf->__PVT__isMRET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828884427583364781ull);
    vlSelf->__PVT__wbu_final = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17405858545225522430ull);
    vlSelf->__PVT__PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    vlSelf->__PVT__bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    vlSelf->__PVT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17685200476622543275ull);
    vlSelf->__PVT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16774798297805906817ull);
    vlSelf->__PVT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2587622265565774708ull);
    vlSelf->__PVT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10065165116613087284ull);
    vlSelf->__PVT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 810448354640171968ull);
    vlSelf->__PVT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125721737830190460ull);
    vlSelf->__PVT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8930348232195030647ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__ar_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531198051612780992ull);
    vlSelf->__PVT__r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673292808138091229ull);
}

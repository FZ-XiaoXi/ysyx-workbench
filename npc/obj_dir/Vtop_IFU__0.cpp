// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_IFU___ico_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ico_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_fire = ((IData)(vlSymsp->TOP__top.__PVT__IROM_rvalid) 
                               & (3U != (IData)(vlSelfRef.state)));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h56e6de32_0;

void Vtop_IFU___ico_sequent__TOP__top__IFU_0__1(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ico_sequent__TOP__top__IFU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((((IData)(vlSelfRef.__PVT__r_fire)
                        ? 3U : 2U) << 5U) | ((((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                                               & (IData)(vlSymsp->TOP__top.__PVT__IROM_arready)) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.__PVT__r_fire) 
                                                << 3U))) 
                    | (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final) 
                        << 2U) | (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__next_state = Vtop__ConstPool__TABLE_h56e6de32_0
        [__Vtableidx1];
}

void Vtop_IFU___nba_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___nba_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__PC = 0x80000000U;
        vlSelfRef.state = 0U;
        vlSelfRef.__PVT__PC_command = 0U;
    } else {
        if (((3U == (IData)(vlSelfRef.state)) & (IData)(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final))) {
            vlSelfRef.__PVT__PC = ((1U & ((((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isJUMP) 
                                            | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ)
                                                ? (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL)
                                                : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBNE)
                                                    ? 
                                                   (~ (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLT) 
                                                     | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU))
                                                     ? 
                                                    (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGE) 
                                                      | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU)) 
                                                     & (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0)))))) 
                                           | (0x00000073U 
                                              == vlSelfRef.__PVT__PC_command)) 
                                          | (0x30200073U 
                                             == vlSelfRef.__PVT__PC_command)))
                                    ? vlSymsp->TOP__top.dnpc
                                    : vlSymsp->TOP__top.snpc);
        }
        vlSelfRef.state = vlSelfRef.__PVT__next_state;
        if (vlSelfRef.__PVT__r_fire) {
            vlSelfRef.__PVT__PC_command = vlSymsp->TOP__top.__PVT__IROM_rdata;
        }
    }
}

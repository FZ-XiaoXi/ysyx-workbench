// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_IFU___ico_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ico_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_fire = ((IData)(vlSelfRef.__PVT__rvalid) 
                               & (3U != (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__arvalid = ((0U == (IData)(vlSelfRef.state)) 
                                | (1U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__ar_fire = ((IData)(vlSelfRef.__PVT__arvalid) 
                                & ((0U == (IData)(vlSymsp->TOP__top.__PVT__IROM__DOT__r_state)) 
                                   | ((3U != (IData)(vlSelfRef.state)) 
                                      & (IData)(vlSelfRef.__PVT__rvalid))));
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
                        ? 3U : 2U) << 5U) | (((IData)(vlSelfRef.__PVT__ar_fire) 
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
        if (vlSelfRef.__PVT__r_fire) {
            vlSelfRef.__PVT__PC_command = ((2U == (IData)(vlSymsp->TOP__top.__PVT__IROM__DOT__r_state))
                                            ? vlSymsp->TOP__top.__PVT__IROM__DOT__rdata_hold
                                            : vlSymsp->TOP__top.__PVT__IROM__DOT__current_mem_rdata);
        }
    }
}

void Vtop_IFU___nba_sequent__TOP__top__IFU_0__1(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___nba_sequent__TOP__top__IFU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state = ((IData)(vlSymsp->TOP.rst) ? 0U
                        : (IData)(vlSelfRef.__PVT__next_state));
    vlSelfRef.__PVT__arvalid = ((0U == (IData)(vlSelfRef.state)) 
                                | (1U == (IData)(vlSelfRef.state)));
}

void Vtop_IFU___nba_comb__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___nba_comb__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

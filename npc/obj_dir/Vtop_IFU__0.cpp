// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_IFU___ico_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ico_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.state)))) {
        vlSelfRef.__PVT__ifu_raddr = vlSelfRef.__PVT__PC;
    }
}

void Vtop_IFU___ico_sequent__TOP__top__IFU_0__1(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ico_sequent__TOP__top__IFU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_state = (1U & (~ ((IData)(vlSelfRef.state) 
                                            & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__LSU_final))));
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

void Vtop_IFU___nba_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___nba_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
    __Vfunc_pmem_read__0__Vfuncout = 0;
    IData/*31:0*/ __Vdly__PC;
    __Vdly__PC = 0;
    // Body
    __Vdly__PC = vlSelfRef.__PVT__PC;
    if (vlSymsp->TOP.rst) {
        __Vdly__PC = 0x80000000U;
    } else if (((IData)(vlSelfRef.state) & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__LSU_final))) {
        __Vdly__PC = ((1U & ((((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isJUMP) 
                               | ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBEQ)
                                   ? (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL)
                                   : ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBNE)
                                       ? (~ (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL))
                                       : (((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBLT) 
                                           | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBLTU))
                                           ? (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))
                                           : (((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBGE) 
                                               | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBGEU)) 
                                              & (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0)))))) 
                              | (0x00000073U == vlSelfRef.__PVT__PC_command)) 
                             | (0x30200073U == vlSelfRef.__PVT__PC_command)))
                       ? vlSymsp->TOP__top.dnpc : vlSymsp->TOP__top.snpc);
    }
    vlSelfRef.state = ((1U & (~ (IData)(vlSymsp->TOP.rst))) 
                       && (IData)(vlSelfRef.__PVT__next_state));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__PC_command = 0U;
    } else {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__PC, __Vfunc_pmem_read__0__Vfuncout);
        vlSelfRef.__PVT__PC_command = __Vfunc_pmem_read__0__Vfuncout;
    }
    vlSelfRef.__PVT__PC = __Vdly__PC;
    if ((1U & (~ (IData)(vlSelfRef.state)))) {
        vlSelfRef.__PVT__ifu_raddr = vlSelfRef.__PVT__PC;
    }
}

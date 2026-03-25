// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_h4914fed6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h50924678_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h401f36a4_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_he18a25b0_0;

void Vtop_IFU___ico_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ico_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__pmem_respValid) 
                                << 2U) | (IData)(vlSelfRef.state)));
    if ((1U & Vtop__ConstPool__TABLE_h4914fed6_0[__Vtableidx1])) {
        vlSelfRef.__PVT__bus_valid = Vtop__ConstPool__TABLE_h50924678_0
            [__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h4914fed6_0[__Vtableidx1])) {
        vlSelfRef.__PVT__pmem_reqValid = Vtop__ConstPool__TABLE_h401f36a4_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__next_state = Vtop__ConstPool__TABLE_he18a25b0_0
        [__Vtableidx1];
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
        vlSelfRef.state = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__bus_valid) & (IData)(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final))) {
            __Vdly__PC = ((1U & ((((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isJUMP) 
                                   | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ)
                                       ? (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL)
                                       : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBNE)
                                           ? (~ (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL))
                                           : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLT) 
                                               | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU))
                                               ? (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))
                                               : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGE) 
                                                   | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU)) 
                                                  & (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0)))))) 
                                  | (0x00000073U == vlSelfRef.__PVT__PC_command)) 
                                 | (0x30200073U == vlSelfRef.__PVT__PC_command)))
                           ? vlSymsp->TOP__top.dnpc
                           : vlSymsp->TOP__top.snpc);
        }
        vlSelfRef.state = vlSelfRef.__PVT__next_state;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__PC_command = 0U;
    } else {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__PC, __Vfunc_pmem_read__0__Vfuncout);
        vlSelfRef.__PVT__PC_command = __Vfunc_pmem_read__0__Vfuncout;
    }
    vlSelfRef.__PVT__PC = __Vdly__PC;
}

void Vtop_IFU___nba_sequent__TOP__top__IFU_0__1(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___nba_sequent__TOP__top__IFU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__random_delay_pulse_0__DOT__busy;
    __Vdly__random_delay_pulse_0__DOT__busy = 0;
    CData/*2:0*/ __Vdly__random_delay_pulse_0__DOT__delay_cnt;
    __Vdly__random_delay_pulse_0__DOT__delay_cnt = 0;
    CData/*2:0*/ __Vdly__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    __Vdly__random_delay_pulse_0__DOT__u_lfsr__DOT__state = 0;
    // Body
    __Vdly__random_delay_pulse_0__DOT__busy = vlSelfRef.__PVT__random_delay_pulse_0__DOT__busy;
    __Vdly__random_delay_pulse_0__DOT__delay_cnt = vlSelfRef.__PVT__random_delay_pulse_0__DOT__delay_cnt;
    __Vdly__random_delay_pulse_0__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    if (vlSymsp->TOP.rst) {
        __Vdly__random_delay_pulse_0__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__random_delay_pulse_0__DOT__busy = 0U;
        vlSelfRef.__PVT__random_delay_pulse_0__DOT__lfsr_en = 1U;
        __Vdly__random_delay_pulse_0__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__pmem_respValid = 0U;
    } else {
        if (vlSelfRef.__PVT__random_delay_pulse_0__DOT__lfsr_en) {
            __Vdly__random_delay_pulse_0__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback) 
                    << 2U) | (3U & ((IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        vlSelfRef.__PVT__pmem_respValid = 0U;
        if (vlSelfRef.__PVT__random_delay_pulse_0__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__delay_cnt))) {
                vlSelfRef.__PVT__pmem_respValid = 1U;
                __Vdly__random_delay_pulse_0__DOT__busy = 0U;
                vlSelfRef.__PVT__random_delay_pulse_0__DOT__lfsr_en = 1U;
                __Vdly__random_delay_pulse_0__DOT__delay_cnt = 0U;
            } else {
                __Vdly__random_delay_pulse_0__DOT__delay_cnt 
                    = (7U & ((IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__pmem_reqValid) 
                    & (~ (IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__pmem_respValid = 1U;
                __Vdly__random_delay_pulse_0__DOT__busy = 0U;
                vlSelfRef.__PVT__random_delay_pulse_0__DOT__lfsr_en = 1U;
                __Vdly__random_delay_pulse_0__DOT__delay_cnt = 0U;
            } else {
                __Vdly__random_delay_pulse_0__DOT__delay_cnt 
                    = (7U & ((IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__random_delay_pulse_0__DOT__busy = 1U;
                vlSelfRef.__PVT__random_delay_pulse_0__DOT__lfsr_en = 0U;
            }
        }
    }
    vlSelfRef.__PVT__random_delay_pulse_0__DOT__busy 
        = __Vdly__random_delay_pulse_0__DOT__busy;
    vlSelfRef.__PVT__random_delay_pulse_0__DOT__delay_cnt 
        = __Vdly__random_delay_pulse_0__DOT__delay_cnt;
    vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state 
        = __Vdly__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__random_delay_pulse_0__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__pmem_reqValid));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state_next 
        = ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state)
            ? (2U == (IData)(vlSelfRef.state)) : ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.state))));
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__out 
        = (((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state) 
            & (2U == (IData)(vlSelfRef.state))) | (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock));
    vlSelfRef.__PVT__lsu_final = ((2U == (IData)(vlSelfRef.state)) 
                                  & ((IData)(vlSelfRef.__PVT__lsu_respValid) 
                                     & (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out)));
}

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__1(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsu_rdata4 = ((2U & vlSymsp->TOP.lsu_addr)
                                    ? ((1U & vlSymsp->TOP.lsu_addr)
                                        ? (((- (IData)(
                                                       (vlSelfRef.__PVT__rdata 
                                                        >> 0x0000001fU))) 
                                            << 0x00000018U) 
                                           | (vlSelfRef.__PVT__val2 
                                              >> 8U))
                                        : vlSelfRef.__PVT__val2)
                                    : ((1U & vlSymsp->TOP.lsu_addr)
                                        ? vlSelfRef.__PVT__val1
                                        : vlSelfRef.__PVT__rdata));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h6e3e3312_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hf2da59e9_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hf4cb22f1_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hadeda171_0;

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__2(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__lsu_respValid) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock) 
                                           << 3U))) 
                    | (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN) 
                        << 2U) | (IData)(vlSelfRef.state)));
    if ((1U & Vtop__ConstPool__TABLE_h6e3e3312_0[__Vtableidx1])) {
        vlSelfRef.__PVT__lsu_reqValid = Vtop__ConstPool__TABLE_hf2da59e9_0
            [__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h6e3e3312_0[__Vtableidx1])) {
        vlSelfRef.__PVT__next_state = Vtop__ConstPool__TABLE_hf4cb22f1_0
            [__Vtableidx1];
    }
    vlSelfRef.RAM_0__DOT____Vcellinp__random_delay_pulse_0__start 
        = ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock) 
           & (IData)(vlSelfRef.__PVT__lsu_reqValid));
    __Vtableidx2 = ((((((IData)(vlSelfRef.__PVT__lsu_respValid) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__out_unlock) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__lsu_reqValid) 
                                << 2U) | (IData)(vlSelfRef.__PVT__RAM_0__DOT__state)));
    vlSelfRef.__PVT__RAM_0__DOT__next_state = Vtop__ConstPool__TABLE_hadeda171_0
        [__Vtableidx2];
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(IData/*31:0*/ addr);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

void Vtop_LSU___nba_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
    __Vfunc_pmem_read__0__Vfuncout = 0;
    // Body
    vlSelfRef.__PVT__RAM_0__DOT__state = ((IData)(vlSymsp->TOP.rst)
                                           ? 0U : (IData)(vlSelfRef.__PVT__RAM_0__DOT__next_state));
    if (((IData)(vlSelfRef.__PVT__lsu_reqValid) & (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock))) {
        vlSelfRef.__PVT__rdata = ((IData)(vlSymsp->TOP.LSU_WEN)
                                   ? 0x4f4f4f4fU : 
                                  ([&]() {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSymsp->TOP.lsu_addr, __Vfunc_pmem_read__0__Vfuncout);
                }(), __Vfunc_pmem_read__0__Vfuncout));
        if (vlSymsp->TOP.LSU_WEN) {
            Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(vlSymsp->TOP.lsu_addr);
            Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSymsp->TOP.lsu_addr, vlSymsp->TOP.lsu_wdata, (IData)(vlSymsp->TOP.lsu_wmask));
        }
    }
    vlSelfRef.state = ((IData)(vlSymsp->TOP.rst) ? 0U
                        : (IData)(vlSelfRef.__PVT__next_state));
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
}

void Vtop_LSU___nba_sequent__TOP__top__LSU_0__2(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_sequent__TOP__top__LSU_0__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy;
    __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy = 0;
    CData/*1:0*/ __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt;
    __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt = 0;
    CData/*1:0*/ __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state = 0;
    CData/*0:0*/ __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy;
    __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy = 0;
    CData/*1:0*/ __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt;
    __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt = 0;
    CData/*1:0*/ __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state = 0;
    CData/*0:0*/ __Vdly__random_delay_pulse_1__DOT__busy;
    __Vdly__random_delay_pulse_1__DOT__busy = 0;
    CData/*2:0*/ __Vdly__random_delay_pulse_1__DOT__delay_cnt;
    __Vdly__random_delay_pulse_1__DOT__delay_cnt = 0;
    CData/*2:0*/ __Vdly__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    __Vdly__random_delay_pulse_1__DOT__u_lfsr__DOT__state = 0;
    // Body
    __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy 
        = vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__busy;
    __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt 
        = vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt;
    __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    __Vdly__random_delay_pulse_1__DOT__busy = vlSelfRef.__PVT__random_delay_pulse_1__DOT__busy;
    __Vdly__random_delay_pulse_1__DOT__delay_cnt = vlSelfRef.__PVT__random_delay_pulse_1__DOT__delay_cnt;
    __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy 
        = vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__busy;
    __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt 
        = vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt;
    __Vdly__random_delay_pulse_1__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    if (vlSymsp->TOP.rst) {
        __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__random_delay_pulse_1__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy = 0U;
        vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__lfsr_en = 1U;
        __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock = 0U;
        __Vdly__random_delay_pulse_1__DOT__busy = 0U;
        vlSelfRef.__PVT__random_delay_pulse_1__DOT__lfsr_en = 1U;
        __Vdly__random_delay_pulse_1__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock = 0U;
        __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy = 0U;
        vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__lfsr_en = 1U;
        __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__out_unlock = 0U;
    } else {
        if (vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__lfsr_en) {
            __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback) 
                    << 1U) | (1U & ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__random_delay_pulse_1__DOT__lfsr_en) {
            __Vdly__random_delay_pulse_1__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback) 
                    << 2U) | (3U & ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__lfsr_en) {
            __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback) 
                    << 1U) | (1U & ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt))) {
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__lfsr_en = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__lsu_reqValid) 
                    & (~ (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__out_unlock = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__lfsr_en = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy = 1U;
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__lfsr_en = 0U;
            }
        }
        vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__random_delay_pulse_1__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__delay_cnt))) {
                vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock = 1U;
                __Vdly__random_delay_pulse_1__DOT__busy = 0U;
                vlSelfRef.__PVT__random_delay_pulse_1__DOT__lfsr_en = 1U;
                __Vdly__random_delay_pulse_1__DOT__delay_cnt = 0U;
            } else {
                __Vdly__random_delay_pulse_1__DOT__delay_cnt 
                    = (7U & ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.RAM_0__DOT____Vcellinp__random_delay_pulse_0__start) 
                    & (~ (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock = 1U;
                __Vdly__random_delay_pulse_1__DOT__busy = 0U;
                vlSelfRef.__PVT__random_delay_pulse_1__DOT__lfsr_en = 1U;
                __Vdly__random_delay_pulse_1__DOT__delay_cnt = 0U;
            } else {
                __Vdly__random_delay_pulse_1__DOT__delay_cnt 
                    = (7U & ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__random_delay_pulse_1__DOT__busy = 1U;
                vlSelfRef.__PVT__random_delay_pulse_1__DOT__lfsr_en = 0U;
            }
        }
        vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt))) {
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__out_unlock = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__lfsr_en = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.RAM_0__DOT____Vcellinp__random_delay_pulse_0__start) 
                    & (~ (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__out_unlock = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__lfsr_en = 1U;
                __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy = 1U;
                vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__lfsr_en = 0U;
            }
        }
    }
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__lock_state = 0U;
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__lock_state = 0U;
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state_next));
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__busy 
        = __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__busy;
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt 
        = __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt;
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state 
        = __Vdly__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__busy 
        = __Vdly__random_delay_pulse_1__DOT__busy;
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__delay_cnt 
        = __Vdly__random_delay_pulse_1__DOT__delay_cnt;
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state 
        = __Vdly__random_delay_pulse_1__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__busy 
        = __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__busy;
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt 
        = __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt;
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state 
        = __Vdly__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__lsu_reqValid));
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.RAM_0__DOT____Vcellinp__random_delay_pulse_0__start));
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.RAM_0__DOT____Vcellinp__random_delay_pulse_0__start));
}

void Vtop_LSU___nba_comb__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___nba_comb__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state_next 
        = ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state)
            ? (2U == (IData)(vlSelfRef.state)) : ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.state))));
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__out 
        = (((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state) 
            & (2U == (IData)(vlSelfRef.state))) | (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock));
    vlSelfRef.__PVT__lsu_respValid = (((2U == (IData)(vlSelfRef.__PVT__RAM_0__DOT__state)) 
                                       & (IData)(vlSelfRef.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__out_unlock)) 
                                      | (3U == (IData)(vlSelfRef.__PVT__RAM_0__DOT__state)));
    vlSelfRef.__PVT__lsu_final = ((2U == (IData)(vlSelfRef.state)) 
                                  & ((IData)(vlSelfRef.__PVT__lsu_respValid) 
                                     & (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out)));
}

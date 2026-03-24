// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_hcae78dbe_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h9e1a23f1_0;

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP.LSU_REN) 
                     << 2U) | (((IData)(vlSymsp->TOP__top__IFU_0.state) 
                                << 1U) | (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__next_state = Vtop__ConstPool__TABLE_hcae78dbe_0
        [__Vtableidx1];
    vlSelfRef.__PVT__LSU_final = Vtop__ConstPool__TABLE_h9e1a23f1_0
        [__Vtableidx1];
}

void Vtop_LSU___ico_sequent__TOP__top__LSU_0__1(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ico_sequent__TOP__top__LSU_0__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rdata4 = ((2U & vlSymsp->TOP.LSU_address)
                                ? ((1U & vlSymsp->TOP.LSU_address)
                                    ? (((- (IData)(
                                                   (vlSelfRef.__PVT__LSU_rdata 
                                                    >> 0x0000001fU))) 
                                        << 0x00000018U) 
                                       | (vlSelfRef.__PVT__val2 
                                          >> 8U)) : vlSelfRef.__PVT__val2)
                                : ((1U & vlSymsp->TOP.LSU_address)
                                    ? vlSelfRef.__PVT__val1
                                    : vlSelfRef.__PVT__LSU_rdata));
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
    vlSelfRef.state = ((1U & (~ (IData)(vlSymsp->TOP.rst))) 
                       && ((IData)(vlSymsp->TOP__top__IFU_0.state)
                            ? (IData)(vlSelfRef.__PVT__next_state)
                            : (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__LSU_rdata = ((1U & ((IData)(vlSymsp->TOP.LSU_WEN) 
                                         | (~ (IData)(vlSymsp->TOP.LSU_REN))))
                                   ? 0x4f4f4f4fU : 
                                  ([&]() {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSymsp->TOP.LSU_address, __Vfunc_pmem_read__0__Vfuncout);
            }(), __Vfunc_pmem_read__0__Vfuncout));
    if (vlSymsp->TOP.LSU_WEN) {
        Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(vlSymsp->TOP.LSU_address);
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSymsp->TOP.LSU_address, vlSymsp->TOP.LSU_writedata, (IData)(vlSymsp->TOP.LSU_wmask));
    }
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__LSU_rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__LSU_rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__LSU_rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
}

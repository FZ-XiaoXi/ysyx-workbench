// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0\n"); );
    // Body
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VALU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0_sub_0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.ALU__DOT__inB_modified),4);
        bufp->chgCData(oldp+1,(vlSelfRef.ALU__DOT__sum),5);
        bufp->chgCData(oldp+2,(vlSelfRef.ALU__DOT__diff),4);
    }
    bufp->chgBit(oldp+3,(vlSelfRef.cin));
    bufp->chgCData(oldp+4,(vlSelfRef.inA),4);
    bufp->chgCData(oldp+5,(vlSelfRef.inB),4);
    bufp->chgCData(oldp+6,(vlSelfRef.mode),3);
    bufp->chgCData(oldp+7,(vlSelfRef.out),4);
    bufp->chgBit(oldp+8,(vlSelfRef.CF));
    bufp->chgBit(oldp+9,(vlSelfRef.ZF));
    bufp->chgBit(oldp+10,(vlSelfRef.OF));
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Body
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

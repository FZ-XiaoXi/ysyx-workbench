// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsCPU__Syms.h"


void VsCPU___024root__trace_chg_0_sub_0(VsCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_chg_0\n"); );
    // Body
    VsCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsCPU___024root*>(voidSelf);
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VsCPU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsCPU___024root__trace_chg_0_sub_0(VsCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_chg_0_sub_0\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.sCPU__DOT__R[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.sCPU__DOT__R[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.sCPU__DOT__R[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.sCPU__DOT__R[3]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+4,((IData)((0x80U == (0xc0U 
                                                & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))))));
        bufp->chgBit(oldp+5,(vlSelfRef.sCPU__DOT__addFlag));
        bufp->chgBit(oldp+6,((3U == (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                           >> 6U)))));
        bufp->chgBit(oldp+7,((IData)((0x40U == (0xc0U 
                                                & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))))));
        bufp->chgCData(oldp+8,((3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                      >> 6U))),2);
        bufp->chgCData(oldp+9,((0x0000000fU & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))),8);
        bufp->chgBit(oldp+10,(((IData)(vlSelfRef.sCPU__DOT__addFlag) 
                               | (0x80U == (0xc0U & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))))));
        bufp->chgCData(oldp+11,((3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                       >> 4U))),2);
        bufp->chgCData(oldp+12,((3U & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))),2);
        bufp->chgCData(oldp+13,(((3U == (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                               >> 6U)))
                                  ? 0U : (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                                >> 2U)))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+14,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C));
        bufp->chgBit(oldp+15,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C))));
        bufp->chgBit(oldp+16,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C));
        bufp->chgBit(oldp+17,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C))));
        bufp->chgBit(oldp+18,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C))));
        bufp->chgBit(oldp+20,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C));
        bufp->chgBit(oldp+21,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C))));
        bufp->chgBit(oldp+22,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C))));
        bufp->chgBit(oldp+24,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C));
        bufp->chgBit(oldp+25,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C))));
        bufp->chgBit(oldp+26,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C));
        bufp->chgBit(oldp+27,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C))));
    }
    bufp->chgBit(oldp+28,(vlSelfRef.clk));
    bufp->chgCData(oldp+29,(vlSelfRef.segH),7);
    bufp->chgCData(oldp+30,(vlSelfRef.segL),7);
    bufp->chgCData(oldp+31,(vlSelfRef.segnum),8);
    bufp->chgCData(oldp+32,(vlSelfRef.PC),4);
    bufp->chgCData(oldp+33,(vlSelfRef.temp),8);
    bufp->chgCData(oldp+34,(vlSelfRef.tempR1),8);
    bufp->chgCData(oldp+35,(vlSelfRef.tempR2),8);
    bufp->chgCData(oldp+36,(vlSelfRef.tempR3),8);
    bufp->chgCData(oldp+37,(vlSelfRef.tempR0),8);
    bufp->chgCData(oldp+38,(vlSelfRef.regA),8);
    bufp->chgCData(oldp+39,(vlSelfRef.regB),8);
    bufp->chgCData(oldp+40,(vlSelfRef.sCPU__DOT__CLKcounter),2);
    bufp->chgCData(oldp+41,(((0U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                              ? 1U : ((1U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                       ? 2U : ((2U 
                                                == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                                ? 4U
                                                : 0U)))),3);
    bufp->chgBit(oldp+42,((IData)(((0xc0U == (0xc0U 
                                              & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))) 
                                   & ((IData)(vlSelfRef.regA) 
                                      != (IData)(vlSelfRef.regB))))));
    bufp->chgCData(oldp+43,((0x0000000fU & ((IData)(vlSelfRef.segnum) 
                                            >> 4U))),4);
    bufp->chgCData(oldp+44,((0x0000000fU & (IData)(vlSelfRef.segnum))),4);
    bufp->chgCData(oldp+45,((((((2U & ((0x03fffffeU 
                                        & (((IData)(vlSelfRef.regA) 
                                            & (IData)(vlSelfRef.regB)) 
                                           >> 6U)) 
                                       ^ (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C) 
                                           & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0)) 
                                          << 1U))) 
                                | (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C)) 
                               << 6U) | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C) 
                                          << 4U))) 
                             | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C) 
                                  << 3U) | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C) 
                                    << 1U) | (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C))))),8);
    bufp->chgBit(oldp+46,((1U & (IData)(vlSelfRef.regA))));
    bufp->chgBit(oldp+47,((1U & (IData)(vlSelfRef.regB))));
    bufp->chgBit(oldp+48,((1U & ((IData)(vlSelfRef.regA) 
                                 ^ (IData)(vlSelfRef.regB)))));
    bufp->chgBit(oldp+49,((1U & ((IData)(vlSelfRef.regA) 
                                 >> 1U))));
    bufp->chgBit(oldp+50,((1U & ((IData)(vlSelfRef.regB) 
                                 >> 1U))));
    bufp->chgBit(oldp+51,((1U & ((IData)(vlSelfRef.regA) 
                                 >> 2U))));
    bufp->chgBit(oldp+52,((1U & ((IData)(vlSelfRef.regB) 
                                 >> 2U))));
    bufp->chgBit(oldp+53,((1U & ((IData)(vlSelfRef.regA) 
                                 >> 3U))));
    bufp->chgBit(oldp+54,((1U & ((IData)(vlSelfRef.regB) 
                                 >> 3U))));
    bufp->chgBit(oldp+55,((1U & ((IData)(vlSelfRef.regA) 
                                 >> 4U))));
    bufp->chgBit(oldp+56,((1U & ((IData)(vlSelfRef.regB) 
                                 >> 4U))));
    bufp->chgBit(oldp+57,((1U & ((IData)(vlSelfRef.regA) 
                                 >> 5U))));
    bufp->chgBit(oldp+58,((1U & ((IData)(vlSelfRef.regB) 
                                 >> 5U))));
    bufp->chgBit(oldp+59,((1U & ((IData)(vlSelfRef.regA) 
                                 >> 6U))));
    bufp->chgBit(oldp+60,((1U & ((IData)(vlSelfRef.regB) 
                                 >> 6U))));
    bufp->chgBit(oldp+61,((1U & ((IData)(vlSelfRef.regA) 
                                 >> 7U))));
    bufp->chgBit(oldp+62,((1U & ((IData)(vlSelfRef.regB) 
                                 >> 7U))));
    bufp->chgBit(oldp+63,((1U & ((((IData)(vlSelfRef.regA) 
                                   & (IData)(vlSelfRef.regB)) 
                                  >> 7U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C) 
                                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0))))));
}

void VsCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_cleanup\n"); );
    // Body
    VsCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsCPU___024root*>(voidSelf);
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

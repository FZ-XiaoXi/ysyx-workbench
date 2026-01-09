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
        bufp->chgCData(oldp+14,(vlSelfRef.sCPU__DOT__regA),8);
        bufp->chgCData(oldp+15,(vlSelfRef.sCPU__DOT__regB),8);
        bufp->chgCData(oldp+16,((((((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0) 
                                      ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C)) 
                                     << 3U) | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0) 
                                                ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C)) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0) 
                                        ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C)) 
                                       << 1U) | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0) 
                                                 ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C)))) 
                                  << 4U) | (((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0) 
                                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C)) 
                                              << 3U) 
                                             | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0) 
                                                 ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C)) 
                                                << 2U)) 
                                            | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0) 
                                                 ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C)) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                                     ^ (IData)(vlSelfRef.sCPU__DOT__regB))))))),8);
        bufp->chgCData(oldp+17,((((((2U & ((0x03fffffeU 
                                            & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                                                & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                                               >> 6U)) 
                                           ^ (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C) 
                                               & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0)) 
                                              << 1U))) 
                                    | (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C)) 
                                   << 6U) | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C) 
                                                << 4U))) 
                                 | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C) 
                                      << 3U) | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C) 
                                        << 1U) | (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C))))),8);
        bufp->chgBit(oldp+18,((1U & (IData)(vlSelfRef.sCPU__DOT__regA))));
        bufp->chgBit(oldp+19,((1U & (IData)(vlSelfRef.sCPU__DOT__regB))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     ^ (IData)(vlSelfRef.sCPU__DOT__regB)))));
        bufp->chgBit(oldp+21,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     >> 1U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                     >> 1U))));
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C))));
        bufp->chgBit(oldp+25,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     >> 2U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                     >> 2U))));
        bufp->chgBit(oldp+28,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C))));
        bufp->chgBit(oldp+29,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C));
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     >> 3U))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                     >> 3U))));
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C))));
        bufp->chgBit(oldp+33,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     >> 4U))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                     >> 4U))));
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C))));
        bufp->chgBit(oldp+37,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     >> 5U))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                     >> 5U))));
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C))));
        bufp->chgBit(oldp+41,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     >> 6U))));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                     >> 6U))));
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C))));
        bufp->chgBit(oldp+45,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                     >> 7U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                     >> 7U))));
        bufp->chgBit(oldp+48,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0) 
                               ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C))));
        bufp->chgBit(oldp+49,((1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                                       & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                                      >> 7U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C) 
                                                & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0))))));
    }
    bufp->chgBit(oldp+50,(vlSelfRef.clk));
    bufp->chgCData(oldp+51,(vlSelfRef.segH),7);
    bufp->chgCData(oldp+52,(vlSelfRef.segL),7);
    bufp->chgCData(oldp+53,(vlSelfRef.segnum),8);
    bufp->chgCData(oldp+54,(vlSelfRef.PC),4);
    bufp->chgCData(oldp+55,(vlSelfRef.sCPU__DOT__CLKcounter),2);
    bufp->chgCData(oldp+56,(((0U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                              ? 1U : ((1U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                       ? 2U : ((2U 
                                                == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                                ? 4U
                                                : 0U)))),3);
    bufp->chgBit(oldp+57,((IData)(((0xc0U == (0xc0U 
                                              & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))) 
                                   & (0U != ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                             ^ (IData)(vlSelfRef.sCPU__DOT__regB)))))));
    bufp->chgCData(oldp+58,((0x0000000fU & ((IData)(vlSelfRef.segnum) 
                                            >> 4U))),4);
    bufp->chgCData(oldp+59,((0x0000000fU & (IData)(vlSelfRef.segnum))),4);
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

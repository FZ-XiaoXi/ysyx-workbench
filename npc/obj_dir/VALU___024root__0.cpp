// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool VALU___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ALU__DOT__diff = (0x0000000fU & ((IData)(1U) 
                                               + ((~ (IData)(vlSelfRef.inB)) 
                                                  + (IData)(vlSelfRef.inA))));
    vlSelfRef.ALU__DOT__inB_modified = (0x0000000fU 
                                        & ((IData)(vlSelfRef.cin)
                                            ? (~ (IData)(vlSelfRef.inB))
                                            : (IData)(vlSelfRef.inB)));
    vlSelfRef.ALU__DOT__sum = (0x0000001fU & ((IData)(vlSelfRef.inA) 
                                              + ((IData)(vlSelfRef.ALU__DOT__inB_modified) 
                                                 + (IData)(vlSelfRef.cin))));
    vlSelfRef.CF = (1U & ((IData)(vlSelfRef.cin) ? 
                          (~ ((IData)(vlSelfRef.ALU__DOT__sum) 
                              >> 4U)) : ((IData)(vlSelfRef.ALU__DOT__sum) 
                                         >> 4U)));
    vlSelfRef.OF = (((1U & ((IData)(vlSelfRef.inA) 
                            >> 3U)) == (1U & ((IData)(vlSelfRef.ALU__DOT__inB_modified) 
                                              >> 3U))) 
                    & ((1U & ((IData)(vlSelfRef.ALU__DOT__sum) 
                              >> 3U)) != (1U & ((IData)(vlSelfRef.inA) 
                                                >> 3U))));
    vlSelfRef.out = (0x0000000fU & ((4U & (IData)(vlSelfRef.mode))
                                     ? ((2U & (IData)(vlSelfRef.mode))
                                         ? ((1U & (IData)(vlSelfRef.mode))
                                             ? ((0U 
                                                 == (IData)(vlSelfRef.ALU__DOT__diff))
                                                 ? 1U
                                                 : 0U)
                                             : (1U 
                                                & (((1U 
                                                     & ((IData)(vlSelfRef.inA) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.inB) 
                                                        >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.ALU__DOT__diff) 
                                                    >> 3U)
                                                    : 
                                                   ((IData)(vlSelfRef.inA) 
                                                    >> 3U))))
                                         : ((1U & (IData)(vlSelfRef.mode))
                                             ? ((IData)(vlSelfRef.inA) 
                                                ^ (IData)(vlSelfRef.inB))
                                             : ((IData)(vlSelfRef.inA) 
                                                | (IData)(vlSelfRef.inB))))
                                     : ((2U & (IData)(vlSelfRef.mode))
                                         ? ((1U & (IData)(vlSelfRef.mode))
                                             ? ((IData)(vlSelfRef.inA) 
                                                & (IData)(vlSelfRef.inB))
                                             : (~ (IData)(vlSelfRef.inA)))
                                         : (IData)(vlSelfRef.ALU__DOT__sum))));
    vlSelfRef.ZF = (1U & (~ (0U != (IData)(vlSelfRef.out))));
}

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool VALU___024root___eval_phase__ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VALU___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = VALU___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VALU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("vsrc/ALU.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VALU___024root___eval_phase__ico(vlSelf));
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.cin & 0xfeU)))) {
        Verilated::overWidthError("cin");
    }
    if (VL_UNLIKELY(((vlSelfRef.inA & 0xf0U)))) {
        Verilated::overWidthError("inA");
    }
    if (VL_UNLIKELY(((vlSelfRef.inB & 0xf0U)))) {
        Verilated::overWidthError("inB");
    }
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xf8U)))) {
        Verilated::overWidthError("mode");
    }
}
#endif  // VL_DEBUG

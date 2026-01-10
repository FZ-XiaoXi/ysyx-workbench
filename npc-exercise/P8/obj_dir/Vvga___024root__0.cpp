// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga.h for the primary calling header

#include "Vvga__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vvga___024root___eval_triggers__act(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_triggers__act\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.vga__DOT__pclk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vga__DOT__pclk__0))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.reset) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__vga__DOT__pclk__0 
        = vlSelfRef.vga__DOT__pclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvga___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vvga___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___trigger_anySet__act\n"); );
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

void Vvga___024root___act_sequent__TOP__0(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___act_sequent__TOP__0\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.vga__DOT__my_vgaclk__DOT__clkcount = 0U;
        vlSelfRef.vga__DOT__pclk = 0U;
    } else {
        vlSelfRef.vga__DOT__my_vgaclk__DOT__clkcount 
            = ((IData)(1U) + vlSelfRef.vga__DOT__my_vgaclk__DOT__clkcount);
        if ((1U <= vlSelfRef.vga__DOT__my_vgaclk__DOT__clkcount)) {
            vlSelfRef.vga__DOT__pclk = (1U & (~ (IData)(vlSelfRef.vga__DOT__pclk)));
            vlSelfRef.vga__DOT__my_vgaclk__DOT__clkcount = 0U;
        }
    }
}

void Vvga___024root___eval_act(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_act\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vvga___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vvga___024root___nba_sequent__TOP__0(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___nba_sequent__TOP__0\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__vga__DOT__u_vga_ctrl__DOT__x_cnt 
        = vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt;
    vlSelfRef.__Vdly__vga__DOT__u_vga_ctrl__DOT__x_cnt 
        = ((IData)(vlSelfRef.reset) ? 1U : ((0x0320U 
                                             == (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt))
                                             ? 1U : 
                                            (0x000003ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt)))));
}

void Vvga___024root___nba_sequent__TOP__1(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___nba_sequent__TOP__1\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__vga__DOT__u_vga_ctrl__DOT__y_cnt;
    __Vdly__vga__DOT__u_vga_ctrl__DOT__y_cnt = 0;
    // Body
    __Vdly__vga__DOT__u_vga_ctrl__DOT__y_cnt = vlSelfRef.vga__DOT__u_vga_ctrl__DOT__y_cnt;
    if (vlSelfRef.reset) {
        __Vdly__vga__DOT__u_vga_ctrl__DOT__y_cnt = 1U;
    } else if (((0x020dU == (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__y_cnt)) 
                & (0x0320U == (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt)))) {
        __Vdly__vga__DOT__u_vga_ctrl__DOT__y_cnt = 1U;
    } else if ((0x0320U == (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt))) {
        __Vdly__vga__DOT__u_vga_ctrl__DOT__y_cnt = 
            (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__y_cnt)));
    }
    vlSelfRef.vga__DOT__u_vga_ctrl__DOT__y_cnt = __Vdly__vga__DOT__u_vga_ctrl__DOT__y_cnt;
    vlSelfRef.vsync = (2U < (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__y_cnt));
    vlSelfRef.vga__DOT__u_vga_ctrl__DOT__v_valid = 
        ((0x0023U < (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__y_cnt)) 
         & (0x0203U >= (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__y_cnt)));
}

void Vvga___024root___nba_sequent__TOP__2(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___nba_sequent__TOP__2\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt = vlSelfRef.__Vdly__vga__DOT__u_vga_ctrl__DOT__x_cnt;
    vlSelfRef.hsync = (0x0060U < (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt));
    vlSelfRef.vga__DOT__u_vga_ctrl__DOT__h_valid = 
        ((0x0090U < (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt)) 
         & (0x0310U >= (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__x_cnt)));
}

void Vvga___024root___nba_comb__TOP__0(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___nba_comb__TOP__0\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__h_valid) 
                       & (IData)(vlSelfRef.vga__DOT__u_vga_ctrl__DOT__v_valid));
}

void Vvga___024root___eval_nba(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_nba\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vvga___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vvga___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vvga___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vvga___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vvga___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vvga___024root___eval_phase__act(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_phase__act\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vvga___024root___eval_triggers__act(vlSelf);
    Vvga___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vvga___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vvga___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vvga___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vvga___024root___eval_phase__nba(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_phase__nba\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vvga___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vvga___024root___eval_nba(vlSelf);
        Vvga___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vvga___024root___eval(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vvga___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/vga.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vvga___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/vga.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vvga___024root___eval_phase__act(vlSelf));
    } while (Vvga___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vvga___024root___eval_debug_assertions(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_debug_assertions\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG

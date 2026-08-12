// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool VysyxSoCFull___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_anySet__ico\n"); );
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

void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.externalPins_uart_tx = (IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                               >> 4U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_pad_o)));
}

void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf);
void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0(VysyxSoCFull_ysyx_26010011_REG* vlSelf);
void VysyxSoCFull_uart_top_apb___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__0(VysyxSoCFull_uart_top_apb* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
void VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf);
void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__1(VysyxSoCFull_ysyx_26010011_REG* vlSelf);
void VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0(VysyxSoCFull_ysyx_26010011_IDU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__2(VysyxSoCFull_ysyx_26010011_REG* vlSelf);
void VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1(VysyxSoCFull_ysyx_26010011_IDU* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
        VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0));
        VysyxSoCFull_uart_top_apb___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__0((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart));
        VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
        VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0));
        VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0));
        VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0));
        VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
}

bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = VysyxSoCFull___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VysyxSoCFull___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.reset) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.clock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__clock) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__clock__0))))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_sck) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_sck__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_ce_n__0))) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic____PVT__spi_sck__0))) 
                                                               << 1U) 
                                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__reset) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__flash__DOT__reset__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__flash__DOT__reset__0 
        = vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic____PVT__spi_sck__0 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_ce_n__0 
        = vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_sck__0 
        = vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__clock__0 
        = vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock__0 
        = vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock__0 
        = vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VysyxSoCFull___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_anySet__act\n"); );
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

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.externalPins_gpio_out = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg;
    vlSelfRef.externalPins_gpio_seg_7 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [7U];
    vlSelfRef.externalPins_gpio_seg_6 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [6U];
    vlSelfRef.externalPins_gpio_seg_5 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [5U];
    vlSelfRef.externalPins_gpio_seg_4 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [4U];
    vlSelfRef.externalPins_gpio_seg_3 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [3U];
    vlSelfRef.externalPins_gpio_seg_2 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [2U];
    vlSelfRef.externalPins_gpio_seg_1 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [1U];
    vlSelfRef.externalPins_gpio_seg_0 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode
        [0U];
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf);
void VysyxSoCFull_ysyx_26010011_REG___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0(VysyxSoCFull_ysyx_26010011_REG* vlSelf);
void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__0(VysyxSoCFull_uart_top_apb* vlSelf);
void VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0(VysyxSoCFull_ysyx_26010011_IDU* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1(VysyxSoCFull_ysyx_26010011_IDU* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_26010011_REG___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__2(VysyxSoCFull_ysyx_26010011_REG* vlSelf);
void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__2(VysyxSoCFull_ysyx_26010011_IDU* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__1(VysyxSoCFull_uart_top_apb* vlSelf);
void VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__2(VysyxSoCFull_uart_regs* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
        VysyxSoCFull_ysyx_26010011_REG___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0));
        VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__0((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart));
        VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0));
        VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0));
        VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0));
        VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyx_26010011_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011_REG___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0));
        VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0));
        VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelfRef.__Vm_traceActivity[0x0000000aU] = 1U;
        VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelfRef.__Vm_traceActivity[0x0000000bU] = 1U;
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x0000000000000182ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelfRef.__Vm_traceActivity[0x0000000cU] = 1U;
        VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__1((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart));
        VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__2((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
    }
    if ((0x0000000000000190ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[0x0000000dU] = 1U;
    }
    if ((0x00000000000001a0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x00000000000001c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
        vlSelfRef.__Vm_traceActivity[0x0000000eU] = 1U;
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x00000000000001b0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[0x0000000fU] = 1U;
    }
    if ((0x00000000000001d0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__6((&vlSymsp->TOP__ysyxSoCFull));
        vlSelfRef.__Vm_traceActivity[0x00000010U] = 1U;
    }
    if ((0x000000000000018cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((0x00000000000001f0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelfRef.__Vm_traceActivity[0x00000011U] = 1U;
    }
}

void VysyxSoCFull___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root___eval_triggers__act(vlSelf);
    VysyxSoCFull___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VysyxSoCFull___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VysyxSoCFull___024root___eval_phase__nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VysyxSoCFull___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VysyxSoCFull___024root___eval_nba(vlSelf);
        VysyxSoCFull___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 5248, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VysyxSoCFull___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 5248, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 5248, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VysyxSoCFull___024root___eval_phase__act(vlSelf));
    } while (VysyxSoCFull___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.externalPins_ps2_clk 
                      & 0xfeU)))) {
        Verilated::overWidthError("externalPins_ps2_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.externalPins_ps2_data 
                      & 0xfeU)))) {
        Verilated::overWidthError("externalPins_ps2_data");
    }
    if (VL_UNLIKELY(((vlSelfRef.externalPins_uart_rx 
                      & 0xfeU)))) {
        Verilated::overWidthError("externalPins_uart_rx");
    }
}
#endif  // VL_DEBUG

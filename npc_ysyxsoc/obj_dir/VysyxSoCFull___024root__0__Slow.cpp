// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___eval_static__TOP__ysyxSoCFull(VysyxSoCFull_ysyxSoCFull* vlSelf);
VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_uart_regs___eval_static__TOP__ysyxSoCFull__asic__luart__muart__Uregs(VysyxSoCFull_uart_regs* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull_ysyxSoCFull___eval_static__TOP__ysyxSoCFull((&vlSymsp->TOP__ysyxSoCFull));
    VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
    VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic((&vlSymsp->TOP__ysyxSoCFull__asic));
    VysyxSoCFull_uart_regs___eval_static__TOP__ysyxSoCFull__asic__luart__muart__Uregs((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
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
    vlSelfRef.__Vtrigprevexpr___TOP__externalPins_ps2_clk__0 
        = vlSelfRef.externalPins_ps2_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__axi4delay_delayer__DOT____Vcellinp__inst_u0__reset__0 
        = vlSymsp->TOP__ysyxSoCFull__asic.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset;
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_initial__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_26010011* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull_ysyxSoCASIC___eval_initial__TOP__ysyxSoCFull__asic((&vlSymsp->TOP__ysyxSoCFull__asic));
    VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
    VysyxSoCFull_ysyx_26010011___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 6979, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VysyxSoCFull___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VysyxSoCFull___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VysyxSoCFull___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VysyxSoCFull___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.externalPins_vga_vsync = (2U < (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt));
    vlSelfRef.externalPins_vga_hsync = (0x0060U < (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt));
    vlSelfRef.externalPins_gpio_out = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg;
}

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.externalPins_vga_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
    vlSelfRef.externalPins_vga_b = (0x000000ffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data);
    vlSelfRef.externalPins_vga_g = (0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                                   >> 8U));
    vlSelfRef.externalPins_vga_r = (0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                                   >> 0x00000010U));
    vlSelfRef.externalPins_uart_tx = (IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                               >> 4U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_pad_o)));
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyx_26010011_CSRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf);
void VysyxSoCFull_ysyx_26010011_GPRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0__0(VysyxSoCFull_ysyx_26010011_GPRs* vlSelf);
void VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0(VysyxSoCFull_mem_2048x32* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__1(VysyxSoCFull_uart_top_apb* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__0(VysyxSoCFull_ysyx_26010011_IFU_icache__pi1* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__0(VysyxSoCFull_ysyx_26010011_EX_LS_pipeline* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__0(VysyxSoCFull_AXI4RAM* vlSelf);
void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__1(VysyxSoCFull_ysyx_26010011_IFU_icache__pi1* vlSelf);
void VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__1(VysyxSoCFull_AXI4RAM* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__3(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
void VysyxSoCFull_mem_2048x32___nba_comb__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0(VysyxSoCFull_mem_2048x32* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__2(VysyxSoCFull_ysyx_26010011_IFU_icache__pi1* vlSelf);
void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__4(VysyxSoCFull_ysyx_26010011_IFU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_mem_2048x32___nba_comb__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__1(VysyxSoCFull_mem_2048x32* vlSelf);
void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_26010011* vlSelf);
void VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3(VysyxSoCFull_ysyx_26010011_LSU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__3(VysyxSoCFull_ysyx_26010011_IFU_icache__pi1* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
        VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyx_26010011_CSRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0));
        VysyxSoCFull_ysyx_26010011_GPRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0));
        VysyxSoCFull_mem_2048x32___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0((&vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext));
        VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull___024root___stl_sequent__TOP__1(vlSelf);
        VysyxSoCFull_uart_top_apb___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__1((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart));
        VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0));
        VysyxSoCFull_ysyx_26010011___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_EX_LS_pipeline___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst));
        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1((&vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs));
        VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__0((&vlSymsp->TOP__ysyxSoCFull__asic__axi4ram));
        VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0));
        VysyxSoCFull_AXI4RAM___ico_sequent__TOP__ysyxSoCFull__asic__axi4ram__1((&vlSymsp->TOP__ysyxSoCFull__asic__axi4ram));
        VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_mem_2048x32___nba_comb__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__0((&vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext));
        VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0));
        VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__4((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_mem_2048x32___nba_comb__TOP__ysyxSoCFull__asic__axi4ram__mem_ext__1((&vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext));
        VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_26010011_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_26010011_IFU_icache__pi1___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0));
    }
}

VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VysyxSoCFull___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VysyxSoCFull___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VysyxSoCFull___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VysyxSoCFull___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VysyxSoCFull___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VysyxSoCFull___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge ysyxSoCFull.flash.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge ysyxSoCFull.asic.spi_sck)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge ysyxSoCFull._asic_psram_ce_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge ysyxSoCFull.sdram.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge ysyxSoCFull.sdram.sdram_32_0.u_sdram_16_H.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge ysyxSoCFull.sdram.sdram_32_1.u_sdram_16_H.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(negedge externalPins_ps2_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge ysyxSoCFull.asic.axi4delay_delayer.__Vcellinp__inst_u0__reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vm_traceActivitySetAll\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000dU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000eU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000fU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x00000010U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x00000011U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x00000012U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x00000013U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->externalPins_gpio_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 822586098003852132ull);
    vlSelf->externalPins_gpio_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9685265187411425855ull);
    vlSelf->externalPins_gpio_seg_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6033921801942580967ull);
    vlSelf->externalPins_gpio_seg_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15543389452754430714ull);
    vlSelf->externalPins_gpio_seg_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8772214742636758696ull);
    vlSelf->externalPins_gpio_seg_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5024408221642847872ull);
    vlSelf->externalPins_gpio_seg_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10457141804080140056ull);
    vlSelf->externalPins_gpio_seg_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1959206588904405241ull);
    vlSelf->externalPins_gpio_seg_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16552903033054095957ull);
    vlSelf->externalPins_gpio_seg_7 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3744180331418777232ull);
    vlSelf->externalPins_ps2_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16322331395874519872ull);
    vlSelf->externalPins_ps2_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13568837990582422912ull);
    vlSelf->externalPins_vga_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16669989510370052666ull);
    vlSelf->externalPins_vga_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16026913326201140098ull);
    vlSelf->externalPins_vga_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9009997286950620541ull);
    vlSelf->externalPins_vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 399868960241165010ull);
    vlSelf->externalPins_vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497527002255972198ull);
    vlSelf->externalPins_vga_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12074553774880755048ull);
    vlSelf->externalPins_uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676035079867404527ull);
    vlSelf->externalPins_uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041353987071012103ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__flash__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4200549873766141417ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__asic____PVT__spi_sck__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16922055095286911739ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_ce_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376599365100612846ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_sck__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12750872355276837962ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3633494671647802397ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4518844674926396265ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15887004186800973584ull);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    vlSelf->__Vtrigprevexpr___TOP__externalPins_ps2_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4062748326117743790ull);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487628987237401141ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__asic__axi4delay_delayer__DOT____Vcellinp__inst_u0__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8741629217924791844ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

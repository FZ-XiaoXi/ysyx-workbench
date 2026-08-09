// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__data_bswap = ((((0x0000ff00U 
                                                  & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                       >> 8U))) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelfRef.__PVT__flash__DOT__rdata 
                                                     >> 0x00000018U)));
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__reset = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss));
    if ((0U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 1U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else if ((7U == (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 2U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 1U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt)));
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else if ((7U == (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt))) {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 0U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt = 0U;
        } else {
            vlSelfRef.__PVT__bitrev__DOT__next_state = 2U;
            vlSelfRef.__PVT__bitrev__DOT__next_cnt 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__bitrev__DOT__cnt)));
        }
    }
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___ctor_var_reset(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___ctor_var_reset\n"); );
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
    vlSelf->__PVT___bitrev_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1267752862150344715ull);
    vlSelf->__PVT__flash__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11083757627637674981ull);
    vlSelf->__PVT__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17625211534711366913ull);
    vlSelf->__PVT__flash__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11124242782341192905ull);
    vlSelf->__PVT__flash__DOT__cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5750376372595020666ull);
    vlSelf->__PVT__flash__DOT__addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1834941183407282102ull);
    vlSelf->__PVT__flash__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2639680746379343509ull);
    vlSelf->__PVT__flash__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17258517742643236571ull);
    vlSelf->__PVT__flash__DOT__data_bswap = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13024019485753997655ull);
    vlSelf->__PVT__bitrev__DOT__cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7006879593298660608ull);
    vlSelf->__PVT__bitrev__DOT__next_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11188395584480338995ull);
    vlSelf->__PVT__bitrev__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18283552713648747324ull);
    vlSelf->__PVT__bitrev__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12537720271739814533ull);
    vlSelf->__PVT__bitrev__DOT__rev = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4425537562118401209ull);
    vlSelf->__Vdly__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7744435258945760442ull);
    vlSelf->__Vdly__flash__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3943315733366985099ull);
    vlSelf->__Vdly__flash__DOT__cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 399508186265648637ull);
    vlSelf->__Vdly__flash__DOT__addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6640450372815847773ull);
    vlSelf->__Vdly__flash__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10977621429052341973ull);
    vlSelf->__Vdly__bitrev__DOT__rev = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3736434024921297344ull);
}

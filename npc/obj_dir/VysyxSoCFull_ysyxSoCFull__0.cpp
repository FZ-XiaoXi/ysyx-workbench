// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__flash__DOT__counter = vlSelfRef.__PVT__flash__DOT__counter;
    vlSelfRef.__Vdly__flash__DOT__cmd = vlSelfRef.__PVT__flash__DOT__cmd;
    vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
    vlSelfRef.__Vdly__flash__DOT__data = vlSelfRef.__PVT__flash__DOT__data;
    vlSelfRef.__Vdly__flash__DOT__addr = vlSelfRef.__PVT__flash__DOT__addr;
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__counter = 0U;
        vlSelfRef.__Vdly__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__counter = (0x000000ffU 
                                                 & ((7U 
                                                     > (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                     : 0U));
        vlSelfRef.__Vdly__flash__DOT__cmd = ((0x000000feU 
                                              & ((IData)(vlSelfRef.__PVT__flash__DOT__cmd) 
                                                 << 1U)) 
                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
    } else {
        vlSelfRef.__Vdly__flash__DOT__counter = (0x000000ffU 
                                                 & ((1U 
                                                     == (IData)(vlSelfRef.__PVT__flash__DOT__state))
                                                     ? 
                                                    ((0x17U 
                                                      > (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                      : 0U)
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__flash__DOT__counter))));
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__state = ((7U 
                                                == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                ? 1U
                                                : (IData)(vlSelfRef.__PVT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__state = ((3U 
                                                != (IData)(vlSelfRef.__PVT__flash__DOT__cmd))
                                                ? 3U
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                    ? 2U
                                                    : (IData)(vlSelfRef.__PVT__flash__DOT__state)));
    } else if (VL_LIKELY(((2U == (IData)(vlSelfRef.__PVT__flash__DOT__state))))) {
        vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
    } else {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",0,
                      8,vlSelfRef.__PVT__flash__DOT__cmd);
        VL_FFLUSH_I(0x80000002U);
        vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/flash/flash.v", 44, "", false);
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__data = 0U;
        vlSelfRef.__Vdly__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
            vlSelfRef.__Vdly__flash__DOT__data = ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                    ? vlSelfRef.__PVT__flash__DOT__data_bswap
                                                    : vlSelfRef.__PVT__flash__DOT__data) 
                                                  << 1U);
        }
        if (((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelfRef.__PVT__flash__DOT__counter)))) {
            vlSelfRef.__Vdly__flash__DOT__addr = ((0x00fffffeU 
                                                   & (vlSelfRef.__PVT__flash__DOT__addr 
                                                      << 1U)) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        }
    }
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__reset = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss));
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    // Body
    if (((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelfRef.__PVT__flash__DOT__counter)))) {
        if (VL_LIKELY(((3U == (IData)(vlSelfRef.__PVT__flash__DOT__cmd))))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0x00fffffeU 
                                                                             & (vlSelfRef.__PVT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi)), __Vtask_flash_read__0__data);
            vlSelfRef.__PVT__flash__DOT__rdata = __Vtask_flash_read__0__data;
        } else {
            VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",0,
                          8,vlSelfRef.__PVT__flash__DOT__cmd);
            VL_FFLUSH_I(0x80000002U);
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/flash/flash.v", 98, "", false);
        }
    }
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

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__data = vlSelfRef.__Vdly__flash__DOT__data;
    vlSelfRef.__PVT__flash__DOT__addr = vlSelfRef.__Vdly__flash__DOT__addr;
    vlSelfRef.__PVT__flash__DOT__cmd = vlSelfRef.__Vdly__flash__DOT__cmd;
    vlSelfRef.__PVT__flash__DOT__counter = vlSelfRef.__Vdly__flash__DOT__counter;
    vlSelfRef.__PVT__flash__DOT__state = vlSelfRef.__Vdly__flash__DOT__state;
}

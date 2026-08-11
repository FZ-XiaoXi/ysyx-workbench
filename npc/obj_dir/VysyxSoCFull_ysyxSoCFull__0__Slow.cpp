// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___eval_static__TOP__ysyxSoCFull(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___eval_static__TOP__ysyxSoCFull\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psram__DOT__is_QPI = 0U;
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state = 0U;
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__count = 0U;
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state = 0U;
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__count = 0U;
}

void VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ count, IData/*31:0*/ &rdata, CData/*0:0*/ sel);
void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(IData/*31:0*/ raddr, IData/*31:0*/ count, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:232: Assertion failed in %NysyxSoCFull.sdram.u_sdram_16_L\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/sdram/sdram.v", 232, "", false);
    }
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:232: Assertion failed in %NysyxSoCFull.sdram.u_sdram_16_H\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/sdram/sdram.v", 232, "", false);
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
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__clock 
        = ((~ (IData)(vlSymsp->TOP.clock)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    vlSelfRef.__VdfgRegularize_hbc52461a_1_0 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q) 
                                                 << 0x0000000bU) 
                                                | (0x000007fcU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                                                      << 2U)));
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__count), vlSelfRef.__Vtask_sdram_read__5__rdata, 0U);
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__5__rdata;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__count), vlSelfRef.__Vtask_sdram_read__8__rdata, 1U);
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__8__rdata;
    if ((8U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        vlSelfRef.__PVT__psram__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        vlSelfRef.__PVT__psram__DOT__next_state = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                     ? 6U
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                     ? 4U
                                                     : 5U));
    } else if ((2U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
            vlSelfRef.__PVT__psram__DOT__next_state 
                = ((5U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                    ? 7U : 3U);
        } else if ((5U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
            if ((0x38U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 5U;
            } else if (VL_LIKELY(((0xebU == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 3U;
            } else {
                VL_FWRITEF_NX(0x80000002U,"[ADDR]Assertion failed: Unsupported command `%xh`, only support `EBh` and `38h` read command\n",0,
                              8,vlSelfRef.__PVT__psram__DOT__buf_command);
                VL_FFLUSH_I(0x80000002U);
                vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                VL_WRITEF_NX("[%0t] %%Fatal: psram.v:185: Assertion failed in %NysyxSoCFull.psram\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/psram/psram.v", 185, "", false);
            }
        } else {
            vlSelfRef.__PVT__psram__DOT__next_state = 2U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__psram__DOT__state))) {
        if (vlSelfRef.__PVT__psram__DOT__is_QPI) {
            if ((1U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
                if ((0x35U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                    vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                } else if ((0x38U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                    vlSelfRef.__PVT__psram__DOT__next_state = 2U;
                } else if (VL_LIKELY(((0xebU == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))))) {
                    vlSelfRef.__PVT__psram__DOT__next_state = 2U;
                } else {
                    VL_FWRITEF_NX(0x80000002U,"[COMM_QPI]Assertion failed: Unsupported command `%xh`, only support `35h` `EBh` and `38h` read command\n",0,
                                  8,vlSelfRef.__PVT__psram__DOT__buf_command);
                    VL_FFLUSH_I(0x80000002U);
                    vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.__PVT__psram__DOT__next_state = 1U;
            }
        } else if ((7U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
            if ((0x35U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 0U;
            } else if ((0x38U == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 2U;
            } else if (VL_LIKELY(((0xebU == (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))))) {
                vlSelfRef.__PVT__psram__DOT__next_state = 2U;
            } else {
                vlSelfRef.__PVT__psram__DOT__next_state = 0U;
                VL_FWRITEF_NX(0x80000002U,"[COMM]Assertion failed: Unsupported command `%xh`, only support `35h` `EBh` and `38h` read command\n",0,
                              8,vlSelfRef.__PVT__psram__DOT__buf_command);
                VL_FFLUSH_I(0x80000002U);
                VL_WRITEF_NX("[%0t] %%Fatal: psram.v:168: Assertion failed in %NysyxSoCFull.psram\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/perip/psram/psram.v", 168, "", false);
            }
        } else {
            vlSelfRef.__PVT__psram__DOT__next_state = 1U;
        }
    } else {
        vlSelfRef.__PVT__psram__DOT__next_state = 1U;
    }
    vlSelfRef.__PVT__psram__DOT__buf_addr = (((((((4U 
                                                   & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                                      >> 3U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                           >> 5U)))) 
                                                 << 9U) 
                                                | (((4U 
                                                     & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                                        >> 3U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                             >> 4U)))) 
                                                   << 6U)) 
                                               | ((((4U 
                                                     & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                        >> 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                                             >> 3U)))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                         >> 1U)) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                            >> 2U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                                              >> 3U)))))) 
                                              << 0x0000000cU) 
                                             | (((((4U 
                                                    & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                            >> 2U)))) 
                                                  << 9U) 
                                                 | (((4U 
                                                      & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0)) 
                                                     | ((2U 
                                                         & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                              >> 1U)))) 
                                                    << 6U)) 
                                                | ((((4U 
                                                      & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                         << 1U)) 
                                                     | ((2U 
                                                         & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0)) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3)))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_active_row
            [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_0));
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_active_row
            [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_0));
    vlSelfRef.psram__DOT____VdfgRegularize_h886b63e5_0_0 
        = ((6U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)) 
           | (7U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)));
    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(vlSelfRef.__PVT__psram__DOT__buf_addr, (IData)(vlSelfRef.__PVT__psram__DOT__counter), vlSelfRef.__Vtask_psram__DOT__psram_read__2__rdata);
    vlSelfRef.__PVT__psram__DOT__psram_rdata = vlSelfRef.__Vtask_psram__DOT__psram_read__2__rdata;
    if ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
        vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state = 0U;
        vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state = 0U;
    } else {
        vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__count) 
                                                    == 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))
                                                    ? 0U
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
        vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__count) 
                                                    == 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)))
                                                    ? 0U
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
    }
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__state)));
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__state)));
    vlSelfRef.sdram__DOT__dq__out__strong__out2 = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.sdram__DOT__dq__out__strong__out2) 
                                                   | (((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                                        ? vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__sdram_rdata
                                                        : 0U) 
                                                      & ((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                                          ? 0xffffU
                                                          : 0U)));
    vlSelfRef.sdram__DOT__dq__out__strong__out3 = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.sdram__DOT__dq__out__strong__out3) 
                                                   | ((((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                                         ? vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__sdram_rdata
                                                         : 0U) 
                                                       & ((IData)(vlSelfRef.__PVT__sdram__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                                           ? 0xffffU
                                                           : 0U)) 
                                                      << 0x00000010U));
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
    if ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
    } else {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
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
    vlSelf->__PVT___asic_psram_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14094072321038918006ull);
    vlSelf->__PVT___asic_psram_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9378011390545183188ull);
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
    vlSelf->__PVT__psram__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12000957063862366897ull);
    vlSelf->__PVT__psram__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13066789608357557261ull);
    vlSelf->__PVT__psram__DOT__counter = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11239602773159463372ull);
    vlSelf->__PVT__psram__DOT__buf_command = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14398244879534046989ull);
    vlSelf->__PVT__psram__DOT__buf_addr_in0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10920138910115343059ull);
    vlSelf->__PVT__psram__DOT__buf_addr_in1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14493718919064096622ull);
    vlSelf->__PVT__psram__DOT__buf_addr_in2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9891631038933479584ull);
    vlSelf->__PVT__psram__DOT__buf_addr_in3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5642274271295778694ull);
    vlSelf->__PVT__psram__DOT__buf_addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15222709929416809367ull);
    vlSelf->__PVT__psram__DOT__buf_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3964083222662464568ull);
    vlSelf->__PVT__psram__DOT__is_QPI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7731731775018156243ull);
    vlSelf->__PVT__psram__DOT__psram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12761166612694987915ull);
    vlSelf->psram__DOT____VdfgRegularize_h886b63e5_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3582736912210650732ull);
    vlSelf->sdram__DOT__dq__out__strong__out2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3980828420823666175ull);
    vlSelf->sdram__DOT__dq__out__strong__out3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12412123705559796020ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_active_row[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8785759771356441244ull);
    }
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_active_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12556639814210792822ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__wire_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8004181782939565495ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__wire_dq_out_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14404124130509328864ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__reg_mode = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10533601454939978491ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 673205430454888974ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6933962359687794079ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11561483913847207670ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__next_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13858303466467098ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_L__DOT__sdram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5320129377416151707ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_active_row[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1281008410212229395ull);
    }
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_active_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8464250709046660456ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__wire_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5858090297625487766ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__wire_dq_out_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12026179751732667542ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__reg_mode = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7216176100958877288ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1031264491749930290ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2702822641253971742ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 514502825704334196ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__next_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18041082390796824204ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10256281830404407475ull);
    vlSelf->__PVT__sdram__DOT__u_sdram_16_H__DOT__sdram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15286181734545335105ull);
    vlSelf->__VdfgRegularize_hbc52461a_1_0 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11668366209105902420ull);
    vlSelf->__Vtask_psram__DOT__psram_read__2__rdata = 0;
    vlSelf->__Vtask_sdram_read__5__rdata = 0;
    vlSelf->__Vtask_sdram_read__8__rdata = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1089712541536271632ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 732631769977400134ull);
    vlSelf->__Vdly__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7744435258945760442ull);
    vlSelf->__Vdly__flash__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3943315733366985099ull);
    vlSelf->__Vdly__flash__DOT__cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 399508186265648637ull);
    vlSelf->__Vdly__flash__DOT__addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6640450372815847773ull);
    vlSelf->__Vdly__flash__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10977621429052341973ull);
    vlSelf->__Vdly__bitrev__DOT__rev = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3736434024921297344ull);
}

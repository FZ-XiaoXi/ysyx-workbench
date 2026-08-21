// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void psram_write(int waddr, int count, int wdata);

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull(IData/*31:0*/ waddr, IData/*31:0*/ count, IData/*31:0*/ wdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int count__Vcvt;
    count__Vcvt = count;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    psram_write(waddr__Vcvt, count__Vcvt, wdata__Vcvt);
}

extern "C" void psram_read(int raddr, int count, int* rdata);

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(IData/*31:0*/ raddr, IData/*31:0*/ count, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int count__Vcvt;
    count__Vcvt = count;
    int rdata__Vcvt;
    psram_read(raddr__Vcvt, count__Vcvt, &rdata__Vcvt);
    rdata = (rdata__Vcvt);
}

void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__clock = ((~ (IData)(vlSymsp->TOP.clock)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock 
        = ((~ (IData)(vlSymsp->TOP.clock)) & ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__cs0)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock 
        = ((~ (IData)(vlSymsp->TOP.clock)) & ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__cs1)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)));
}

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
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:47: Assertion failed in %NysyxSoCFull.flash\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/flash/flash.v", 47, "", false);
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__data = 0U;
        vlSelfRef.__Vdly__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
            vlSelfRef.__Vdly__flash__DOT__data = ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                    ? 
                                                   ((((0x00007f00U 
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
                                                          >> 0x00000018U)))
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

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    // Body
    vlSelfRef.__Vdly__bitrev__DOT__rev = vlSelfRef.__PVT__bitrev__DOT__rev;
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
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:102: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/flash/flash.v", 102, "", false);
        }
    }
    if ((0x00000080U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__bitrev__DOT__rev = 0U;
        vlSelfRef.__PVT__bitrev__DOT__cnt = 0U;
    } else {
        if (((1U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state)) 
             | ((1U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state)) 
                & (2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state))))) {
            vlSelfRef.__Vdly__bitrev__DOT__rev = ((0x0000fffeU 
                                                   & ((IData)(vlSelfRef.__PVT__bitrev__DOT__rev) 
                                                      << 1U)) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        } else if (((2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state)) 
                    | ((2U == (IData)(vlSelfRef.__PVT__bitrev__DOT__state)) 
                       & (0U == (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state))))) {
            vlSelfRef.__Vdly__bitrev__DOT__rev = (0x00007fffU 
                                                  & ((IData)(vlSelfRef.__PVT__bitrev__DOT__rev) 
                                                     >> 1U));
        }
        vlSelfRef.__PVT__bitrev__DOT__cnt = vlSelfRef.__PVT__bitrev__DOT__next_cnt;
    }
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__psram__DOT__buf_wdata;
    __Vdly__psram__DOT__buf_wdata = 0;
    // Body
    __Vdly__psram__DOT__buf_wdata = vlSelfRef.__PVT__psram__DOT__buf_wdata;
    if (vlSelfRef.__PVT___asic_psram_ce_n) {
        __Vdly__psram__DOT__buf_wdata = 0U;
    } else if (((5U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)) 
                & (~ (IData)(vlSelfRef.__PVT___asic_psram_ce_n)))) {
        __Vdly__psram__DOT__buf_wdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                         << 4U);
    } else if (((4U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)) 
                & (~ (IData)(vlSelfRef.__PVT___asic_psram_ce_n)))) {
        __Vdly__psram__DOT__buf_wdata = vlSelfRef.__PVT__psram__DOT__buf_wdata;
        VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull(vlSelfRef.__PVT__psram__DOT__buf_addr, (IData)(vlSelfRef.__PVT__psram__DOT__counter), 
                                                                                ((0x000000f0U 
                                                                                & (IData)(vlSelfRef.__PVT__psram__DOT__buf_wdata)) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)));
    } else {
        __Vdly__psram__DOT__buf_wdata = 0U;
    }
    if (vlSelfRef.__PVT___asic_psram_ce_n) {
        vlSelfRef.__PVT__psram__DOT__buf_addr_in0 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_addr_in1 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_addr_in2 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_addr_in3 = 0U;
        vlSelfRef.__PVT__psram__DOT__buf_command = 0U;
        vlSelfRef.__PVT__psram__DOT__counter = 0U;
    } else {
        if (((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
             & (2U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))) {
            vlSelfRef.__PVT__psram__DOT__buf_addr_in0 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                   << 1U)) | (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in1 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 1U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in2 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 2U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in3 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 3U)));
        } else if (((2U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                    & (2U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))) {
            vlSelfRef.__PVT__psram__DOT__buf_addr_in0 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in0) 
                                   << 1U)) | (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in1 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in1) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 1U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in2 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in2) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 2U)));
            vlSelfRef.__PVT__psram__DOT__buf_addr_in3 
                = ((0x0000003eU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_addr_in3) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                                               >> 3U)));
        } else {
            vlSelfRef.__PVT__psram__DOT__buf_addr_in0 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in0;
            vlSelfRef.__PVT__psram__DOT__buf_addr_in1 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in1;
            vlSelfRef.__PVT__psram__DOT__buf_addr_in2 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in2;
            vlSelfRef.__PVT__psram__DOT__buf_addr_in3 
                = vlSelfRef.__PVT__psram__DOT__buf_addr_in3;
        }
        vlSelfRef.__PVT__psram__DOT__buf_command = 
            ((IData)(vlSelfRef.__PVT__psram__DOT__is_QPI)
              ? (((0U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                  & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                  ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din) 
                     << 4U) : (((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                                ? ((0x000000f0U & (IData)(vlSelfRef.__PVT__psram__DOT__buf_command)) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din))
                                : (IData)(vlSelfRef.__PVT__psram__DOT__buf_command)))
              : (((0U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                  & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                  ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_command) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)))
                  : (((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                      & (1U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                      ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__psram__DOT__buf_command) 
                                         << 1U)) | 
                         (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din)))
                      : (IData)(vlSelfRef.__PVT__psram__DOT__buf_command))));
        vlSelfRef.__PVT__psram__DOT__counter = (0x000003ffU 
                                                & (((6U 
                                                     == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                    | (7U 
                                                       == (IData)(vlSelfRef.__PVT__psram__DOT__state)))
                                                    ? 
                                                   (((6U 
                                                      == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                     : (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__psram__DOT__state)))
                                                     ? 
                                                    (((4U 
                                                       == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)))
                                                      ? (IData)(vlSelfRef.__PVT__psram__DOT__counter)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__psram__DOT__counter)))
                                                     : 
                                                    (((IData)(vlSelfRef.__PVT__psram__DOT__state) 
                                                      != (IData)(vlSelfRef.__PVT__psram__DOT__next_state))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__psram__DOT__counter)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__psram__DOT__state))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                          : 0U))))))));
    }
    vlSelfRef.__PVT__psram__DOT__buf_wdata = __Vdly__psram__DOT__buf_wdata;
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
    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(vlSelfRef.__PVT__psram__DOT__buf_addr, (IData)(vlSelfRef.__PVT__psram__DOT__counter), vlSelfRef.__Vtask_psram__DOT__psram_read__2__rdata);
    vlSelfRef.__PVT__psram__DOT__psram_rdata = vlSelfRef.__Vtask_psram__DOT__psram_read__2__rdata;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psram__DOT__is_QPI = ((((1U == (IData)(vlSelfRef.__PVT__psram__DOT__state)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__psram__DOT__next_state))) 
                                            & (IData)(vlSelfRef.__PVT___asic_psram_ce_n)) 
                                           || (IData)(vlSelfRef.__PVT__psram__DOT__is_QPI));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__clock = ((~ (IData)(vlSymsp->TOP.clock)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__reg_ba = ((IData)(vlSelfRef.__PVT__sdram__DOT__comm_active)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)
                                            : (IData)(vlSelfRef.__PVT__sdram__DOT__reg_ba));
}

void VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ count, IData/*31:0*/ wdata, IData/*31:0*/ sel);
void VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ count, IData/*31:0*/ &rdata, IData/*31:0*/ sel);

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr = 0;
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    // Body
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0U;
    __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0U;
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = (((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
            | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i)), 0U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i)), 0U);
    }
    __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = (((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
            | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 1U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 1U);
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode));
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 1U;
    }
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 1U;
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr;
    if (__VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    }
    if (__VdlySet__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_count;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_count;
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:312: Assertion failed in %NysyxSoCFull.sdram.sdram_32_0.u_sdram_16_L\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/sdram/sdram.v", 312, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:312: Assertion failed in %NysyxSoCFull.sdram.sdram_32_0.u_sdram_16_H\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/sdram/sdram.v", 312, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count), vlSelfRef.__Vtask_sdram_read__5__rdata, 0U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__5__rdata;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count), vlSelfRef.__Vtask_sdram_read__8__rdata, 1U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__8__rdata;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr = 0;
    IData/*31:0*/ __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0;
    // Body
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 0U;
    __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 0U;
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = (((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
            | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i)), 2U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count), 
                                                                        (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                                                                          << 0x0000001eU) 
                                                                         | (0x0000ffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i)), 2U);
    }
    __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = (((4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
            | (5U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr
            : vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr);
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
         & (4U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 3U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))) {
        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count), 
                                                                        (((~ 
                                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                                            >> 2U)) 
                                                                          << 0x0000001eU) 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                                                            >> 0x00000010U)), 3U);
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode 
        = (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
            & (0U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
            ? (0x000003ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
            : (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode));
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0 = 1U;
    }
    if (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
         & (3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
        __VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        __VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0 = 1U;
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr 
        = __Vdly__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr;
    if (__VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row__v0;
    }
    if (__VdlySet__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[__VdlyDim0__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0] 
            = __VdlyVal__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row__v0;
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_count;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_count;
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:312: Assertion failed in %NysyxSoCFull.sdram.sdram_32_1.u_sdram_16_L\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/sdram/sdram.v", 312, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    if (VL_UNLIKELY(((IData)((0U != (0x000cU & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Burst Type is not supported\n",0);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: sdram.v:312: Assertion failed in %NysyxSoCFull.sdram.sdram_32_1.u_sdram_16_H\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/sdram/sdram.v", 312, "", false);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                    ? 7U
                                                    : 1U)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state;
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state 
        = vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count), vlSelfRef.__Vtask_sdram_read__11__rdata, 2U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__11__rdata;
    VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr, (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count), vlSelfRef.__Vtask_sdram_read__14__rdata, 3U);
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata 
        = vlSelfRef.__Vtask_sdram_read__14__rdata;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__addr = vlSelfRef.__Vdly__flash__DOT__addr;
    vlSelfRef.__PVT__flash__DOT__cmd = vlSelfRef.__Vdly__flash__DOT__cmd;
    vlSelfRef.__PVT__flash__DOT__data = vlSelfRef.__Vdly__flash__DOT__data;
    vlSelfRef.__PVT__flash__DOT__counter = vlSelfRef.__Vdly__flash__DOT__counter;
    vlSelfRef.__PVT__flash__DOT__state = vlSelfRef.__Vdly__flash__DOT__state;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psram__DOT__state = ((IData)(vlSelfRef.__PVT___asic_psram_ce_n)
                                           ? 0U : (IData)(vlSelfRef.__PVT__psram__DOT__next_state));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___bitrev_miso = ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                            >> 7U)) 
                                     || ((2U != (IData)(vlSelfRef.__PVT__bitrev__DOT__state)) 
                                         || (1U & (IData)(vlSelfRef.__PVT__bitrev__DOT__rev))));
    vlSelfRef.__PVT__bitrev__DOT__rev = vlSelfRef.__Vdly__bitrev__DOT__rev;
    vlSelfRef.__PVT__bitrev__DOT__state = ((0x00000080U 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))
                                            ? 0U : (IData)(vlSelfRef.__PVT__bitrev__DOT__next_state));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__reset = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss));
    vlSelfRef.__VdfgRegularize_hbc52461a_1_0 = ((0x00001800U 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                    << 0x0000000bU)) 
                                                | (0x000007fcU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      << 2U)));
    vlSelfRef.__PVT__sdram__DOT__comm_active = ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                  >> 3U)) 
                                                & ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                                   | ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                                      | (5U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/psram/psram.v", 185, "", false);
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
                VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/perip/psram/psram.v", 168, "", false);
            }
        } else {
            vlSelfRef.__PVT__psram__DOT__next_state = 1U;
        }
    } else {
        vlSelfRef.__PVT__psram__DOT__next_state = 1U;
    }
    vlSelfRef.psram__DOT____VdfgRegularize_h886b63e5_0_0 
        = ((6U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)) 
           | (7U == (IData)(vlSelfRef.__PVT__psram__DOT__next_state)));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_0));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_0));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_0));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr 
        = ((vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row
            [(3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))] 
            << 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_hbc52461a_1_0));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__now_sel = (1U & ((IData)(vlSelfRef.__PVT__sdram__DOT__comm_active)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__sdram__DOT__reg_ba) 
                                                   >> 2U)));
    vlSelfRef.__PVT__sdram__DOT__cs0 = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__now_sel)) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 3U)));
    vlSelfRef.__PVT__sdram__DOT__cs1 = (1U & ((~ ((IData)(vlSelfRef.__PVT__sdram__DOT__now_sel) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 3U)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock 
        = ((~ (IData)(vlSymsp->TOP.clock)) & ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__cs0)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock 
        = ((~ (IData)(vlSymsp->TOP.clock)) & ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__cs1)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__sdram__DOT__cs0) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state = 0U;
    } else {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))
                                                     ? 3U
                                                     : 0U)
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
        vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))
                                                     ? 3U
                                                     : 0U)
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)));
    vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata
                : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                          ? 0xffffU : 0U)));
    vlSelfRef.sdram__DOT__dq__en0 = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                       ? 0xffffU : 0U) 
                                     | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                          ? 0xffffU
                                          : 0U) << 0x10U));
    vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out3 
        = ((0x0000ffffU & vlSelfRef.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                 ? vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata
                 : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                           ? 0xffffU : 0U)) << 0x00000010U));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__sdram__DOT__cs1) {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state = 0U;
    } else {
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))
                                                     ? 3U
                                                     : 0U)
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
        vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                ? 0U : ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                         ? ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                                      ? 0U : (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count) 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46))
                                               ? 0U
                                               : 4U)))
                         : ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                             ? ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                                 ? (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count) 
                                     == ((7U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                                >> 4U)) 
                                         - (IData)(1U)))
                                     ? 2U : 3U) : (
                                                   ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                      ? 0U
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))
                                                     ? 3U
                                                     : 0U)
                                                    : 2U))
                             : ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state))
                                 ? 2U : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                               ? 3U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode)))
                                                   ? 0U
                                                   : 4U)))
                                          : 0U)))));
    }
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_count 
        = ((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))
            ? 0U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                     & (4U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                     ? 1U : (((0U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                              & (3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                              ? 1U : (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                       ? 0U : (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count)))))));
    vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en 
        = (((3U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
            & (3U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))) 
           | (2U == (IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)));
    vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata
                : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                          ? 0xffffU : 0U)));
    vlSelfRef.sdram__DOT__dq__en1 = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                       ? 0xffffU : 0U) 
                                     | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                          ? 0xffffU
                                          : 0U) << 0x10U));
    vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out3 
        = ((0x0000ffffU & vlSelfRef.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                 ? vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata
                 : 0U) & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                           ? 0xffffU : 0U)) << 0x00000010U));
}

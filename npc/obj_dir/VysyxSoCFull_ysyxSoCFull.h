// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_
#define VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_  // guard

#include "verilated.h"
class VysyxSoCFull_ysyxSoCASIC;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyxSoCFull final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyxSoCASIC* asic;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(externalPins_gpio_seg_0,7,0);
        VL_OUT8(externalPins_gpio_seg_1,7,0);
        VL_OUT8(externalPins_gpio_seg_2,7,0);
        VL_OUT8(externalPins_gpio_seg_3,7,0);
        VL_OUT8(externalPins_gpio_seg_4,7,0);
        VL_OUT8(externalPins_gpio_seg_5,7,0);
        VL_OUT8(externalPins_gpio_seg_6,7,0);
        VL_OUT8(externalPins_gpio_seg_7,7,0);
        VL_IN8(externalPins_ps2_clk,0,0);
        VL_IN8(externalPins_ps2_data,0,0);
        VL_OUT8(externalPins_vga_r,7,0);
        VL_OUT8(externalPins_vga_g,7,0);
        VL_OUT8(externalPins_vga_b,7,0);
        VL_OUT8(externalPins_vga_hsync,0,0);
        VL_OUT8(externalPins_vga_vsync,0,0);
        VL_OUT8(externalPins_vga_valid,0,0);
        VL_IN8(externalPins_uart_rx,0,0);
        VL_OUT8(externalPins_uart_tx,0,0);
        CData/*0:0*/ __PVT___bitrev_miso;
        CData/*0:0*/ __PVT___asic_psram_sck;
        CData/*0:0*/ __PVT___asic_psram_ce_n;
        CData/*0:0*/ __PVT__flash__DOT__reset;
        CData/*2:0*/ __PVT__flash__DOT__state;
        CData/*7:0*/ __PVT__flash__DOT__counter;
        CData/*7:0*/ __PVT__flash__DOT__cmd;
        CData/*7:0*/ __PVT__bitrev__DOT__cnt;
        CData/*7:0*/ __PVT__bitrev__DOT__next_cnt;
        CData/*1:0*/ __PVT__bitrev__DOT__state;
        CData/*1:0*/ __PVT__bitrev__DOT__next_state;
        CData/*3:0*/ __PVT__psram__DOT__state;
        CData/*3:0*/ __PVT__psram__DOT__next_state;
        CData/*7:0*/ __PVT__psram__DOT__buf_command;
        CData/*5:0*/ __PVT__psram__DOT__buf_addr_in0;
        CData/*5:0*/ __PVT__psram__DOT__buf_addr_in1;
        CData/*5:0*/ __PVT__psram__DOT__buf_addr_in2;
        CData/*5:0*/ __PVT__psram__DOT__buf_addr_in3;
        CData/*7:0*/ __PVT__psram__DOT__buf_wdata;
        CData/*0:0*/ __PVT__psram__DOT__is_QPI;
        CData/*0:0*/ psram__DOT____VdfgRegularize_h886b63e5_0_0;
        CData/*0:0*/ __PVT__sdram__DOT__clock;
        CData/*0:0*/ __PVT__sdram__DOT__comm_active;
        CData/*0:0*/ __PVT__sdram__DOT__now_sel;
        CData/*2:0*/ __PVT__sdram__DOT__reg_ba;
        CData/*0:0*/ __PVT__sdram__DOT__cs0;
        CData/*0:0*/ __PVT__sdram__DOT__cs1;
        CData/*0:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_count;
        CData/*0:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_count;
        CData/*0:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock;
        CData/*0:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_count;
        CData/*0:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en;
    };
    struct {
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count;
        CData/*3:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_count;
        CData/*0:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_22;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_25;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_28;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_31;
        CData/*2:0*/ __Vdly__flash__DOT__state;
        CData/*7:0*/ __Vdly__flash__DOT__counter;
        CData/*7:0*/ __Vdly__flash__DOT__cmd;
        VL_OUT16(externalPins_gpio_out,15,0);
        VL_IN16(externalPins_gpio_in,15,0);
        SData/*15:0*/ __PVT__bitrev__DOT__rev;
        SData/*9:0*/ __PVT__psram__DOT__counter;
        SData/*12:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode;
        SData/*12:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode;
        SData/*12:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode;
        SData/*12:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode;
        SData/*12:0*/ __VdfgRegularize_hbc52461a_1_0;
        SData/*15:0*/ __Vdly__bitrev__DOT__rev;
        IData/*23:0*/ __PVT__flash__DOT__addr;
        IData/*31:0*/ __PVT__flash__DOT__data;
        IData/*31:0*/ __PVT__flash__DOT__rdata;
        IData/*31:0*/ __PVT__flash__DOT__data_bswap;
        IData/*23:0*/ __PVT__psram__DOT__buf_addr;
        IData/*31:0*/ __PVT__psram__DOT__psram_rdata;
        IData/*31:0*/ sdram__DOT__dq__en0;
        IData/*31:0*/ sdram__DOT__dq__en1;
        IData/*31:0*/ sdram__DOT__sdram_32_0__DOT__dq__out__strong__out2;
        IData/*31:0*/ sdram__DOT__sdram_32_0__DOT__dq__out__strong__out3;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata;
        IData/*31:0*/ sdram__DOT__sdram_32_1__DOT__dq__out__strong__out2;
        IData/*31:0*/ sdram__DOT__sdram_32_1__DOT__dq__out__strong__out3;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr;
        IData/*31:0*/ __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata;
        IData/*31:0*/ __Vtask_psram__DOT__psram_read__2__rdata;
        IData/*31:0*/ __Vtask_sdram_read__5__rdata;
        IData/*31:0*/ __Vtask_sdram_read__8__rdata;
        IData/*31:0*/ __Vtask_sdram_read__11__rdata;
        IData/*31:0*/ __Vtask_sdram_read__14__rdata;
        IData/*23:0*/ __Vdly__flash__DOT__addr;
        IData/*31:0*/ __Vdly__flash__DOT__data;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyxSoCFull(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyxSoCFull();
    VL_UNCOPYABLE(VysyxSoCFull_ysyxSoCFull);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

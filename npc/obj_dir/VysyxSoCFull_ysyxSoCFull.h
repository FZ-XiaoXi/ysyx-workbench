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
    CData/*0:0*/ __PVT__flash__DOT__reset;
    CData/*2:0*/ __PVT__flash__DOT__state;
    CData/*7:0*/ __PVT__flash__DOT__counter;
    CData/*7:0*/ __PVT__flash__DOT__cmd;
    VL_OUT16(externalPins_gpio_out,15,0);
    VL_IN16(externalPins_gpio_in,15,0);
    IData/*23:0*/ __PVT__flash__DOT__addr;
    IData/*31:0*/ __PVT__flash__DOT__data;
    IData/*31:0*/ __PVT__flash__DOT__rdata;

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

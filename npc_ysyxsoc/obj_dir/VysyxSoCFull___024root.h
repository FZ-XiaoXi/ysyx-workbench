// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL___024ROOT_H_
#define VERILATED_VYSYXSOCFULL___024ROOT_H_  // guard

#include "verilated.h"
class VysyxSoCFull___024unit;
class VysyxSoCFull_ysyxSoCFull;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull___024root final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyxSoCFull* ysyxSoCFull;
    VysyxSoCFull___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(externalPins_ps2_clk,0,0);
    VL_OUT8(externalPins_gpio_seg_0,7,0);
    VL_OUT8(externalPins_gpio_seg_1,7,0);
    VL_OUT8(externalPins_gpio_seg_2,7,0);
    VL_OUT8(externalPins_gpio_seg_3,7,0);
    VL_OUT8(externalPins_gpio_seg_4,7,0);
    VL_OUT8(externalPins_gpio_seg_5,7,0);
    VL_OUT8(externalPins_gpio_seg_6,7,0);
    VL_OUT8(externalPins_gpio_seg_7,7,0);
    VL_IN8(externalPins_ps2_data,0,0);
    VL_OUT8(externalPins_vga_r,7,0);
    VL_OUT8(externalPins_vga_g,7,0);
    VL_OUT8(externalPins_vga_b,7,0);
    VL_OUT8(externalPins_vga_hsync,0,0);
    VL_OUT8(externalPins_vga_vsync,0,0);
    VL_OUT8(externalPins_vga_valid,0,0);
    VL_IN8(externalPins_uart_rx,0,0);
    VL_OUT8(externalPins_uart_tx,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull____PVT__flash__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull__asic____PVT__spi_sck__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_ce_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull____PVT___asic_psram_sck__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull____PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__externalPins_ps2_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull__asic__axi4delay_delayer__DOT____Vcellinp__inst_u0__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__reset__0;
    VL_OUT16(externalPins_gpio_out,15,0);
    VL_IN16(externalPins_gpio_in,15,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 23> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull___024root(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull___024root();
    VL_UNCOPYABLE(VysyxSoCFull___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

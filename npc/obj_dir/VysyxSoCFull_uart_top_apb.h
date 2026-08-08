// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_UART_TOP_APB_H_
#define VERILATED_VYSYXSOCFULL_UART_TOP_APB_H_  // guard

#include "verilated.h"
class VysyxSoCFull_uart_regs;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_uart_top_apb final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_uart_regs* Uregs;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__in_psel,0,0);
    VL_IN8(__PVT__in_penable,0,0);
    VL_IN8(__PVT__in_pprot,2,0);
    VL_OUT8(__PVT__in_pready,0,0);
    VL_OUT8(__PVT__in_pslverr,0,0);
    VL_IN8(__PVT__in_pwrite,0,0);
    VL_IN8(__PVT__in_pstrb,3,0);
    VL_IN8(__PVT__uart_rx,0,0);
    VL_OUT8(__PVT__uart_tx,0,0);
    CData/*7:0*/ __PVT__reg_dat8_w;
    CData/*7:0*/ __PVT__reg_dat8_w_reg;
    CData/*0:0*/ __VdfgRegularize_h953d1cf6_0_0;
    VL_IN(__PVT__in_paddr,31,0);
    VL_OUT(__PVT__in_prdata,31,0);
    VL_IN(__PVT__in_pwdata,31,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_uart_top_apb(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_uart_top_apb();
    VL_UNCOPYABLE(VysyxSoCFull_uart_top_apb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

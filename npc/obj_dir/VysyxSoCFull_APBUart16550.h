// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_APBUART16550_H_
#define VERILATED_VYSYXSOCFULL_APBUART16550_H_  // guard

#include "verilated.h"
class VysyxSoCFull_uart_top_apb;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_APBUart16550 final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_uart_top_apb* muart;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__auto_in_psel,0,0);
    VL_IN8(__PVT__auto_in_penable,0,0);
    VL_IN8(__PVT__auto_in_pwrite,0,0);
    VL_IN8(__PVT__auto_in_pprot,2,0);
    VL_IN8(__PVT__auto_in_pstrb,3,0);
    VL_OUT8(__PVT__auto_in_pready,0,0);
    VL_OUT8(__PVT__auto_in_pslverr,0,0);
    VL_IN8(__PVT__uart_rx,0,0);
    VL_OUT8(__PVT__uart_tx,0,0);
    VL_IN(__PVT__auto_in_paddr,28,0);
    VL_IN(__PVT__auto_in_pwdata,31,0);
    VL_OUT(__PVT__auto_in_prdata,31,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_APBUart16550(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_APBUart16550();
    VL_UNCOPYABLE(VysyxSoCFull_APBUart16550);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

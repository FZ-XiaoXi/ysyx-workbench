// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LSU_H_
#define VERILATED_VTOP_LSU_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_LSU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__lsu_wen,0,0);
    VL_IN8(__PVT__lsu_reqEN,0,0);
    VL_OUT8(__PVT__lsu_final,0,0);
    VL_IN8(__PVT__rmask,3,0);
    VL_IN8(__PVT__lsu_wmask,3,0);
    VL_IN8(__PVT__isSigned,0,0);
    VL_IN8(__PVT__bus_valid,0,0);
    VL_OUT8(__PVT__awvalid,0,0);
    VL_IN8(__PVT__awready,0,0);
    VL_OUT8(__PVT__wstrb,3,0);
    VL_OUT8(__PVT__wvalid,0,0);
    VL_IN8(__PVT__wready,0,0);
    VL_IN8(__PVT__bresp,1,0);
    VL_IN8(__PVT__bvalid,0,0);
    VL_OUT8(__PVT__bready,0,0);
    VL_OUT8(__PVT__arvalid,0,0);
    VL_IN8(__PVT__arready,0,0);
    VL_IN8(__PVT__rresp,1,0);
    VL_IN8(__PVT__rvalid,0,0);
    VL_OUT8(__PVT__rready,0,0);
    CData/*2:0*/ state;
    CData/*2:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__aw_fire;
    CData/*0:0*/ __PVT__b_fire;
    CData/*0:0*/ __PVT__r_fire;
    VL_IN(__PVT__lsu_addr,31,0);
    VL_OUT(__PVT__lsu_rdata,31,0);
    VL_IN(__PVT__lsu_wdata,31,0);
    VL_OUT(__PVT__awaddr,31,0);
    VL_OUT(__PVT__wdata,31,0);
    VL_OUT(__PVT__araddr,31,0);
    VL_IN(__PVT__rdata,31,0);
    IData/*31:0*/ __PVT__val1;
    IData/*31:0*/ __PVT__val2;
    IData/*31:0*/ __PVT__val;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_LSU(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_LSU();
    VL_UNCOPYABLE(Vtop_LSU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

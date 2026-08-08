// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_LSU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_LSU_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_LSU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(lsu_wen,0,0);
    VL_IN8(lsu_reqEN,0,0);
    VL_OUT8(__PVT__lsu_final,0,0);
    VL_IN8(__PVT__rmask,3,0);
    VL_IN8(lsu_wmask,3,0);
    VL_IN8(__PVT__isSigned,0,0);
    VL_IN8(__PVT__bus_valid,0,0);
    VL_OUT8(__PVT__awvalid,0,0);
    VL_IN8(__PVT__awready,0,0);
    VL_OUT8(__PVT__awid,3,0);
    VL_OUT8(__PVT__awlen,7,0);
    VL_OUT8(__PVT__awsize,2,0);
    VL_OUT8(__PVT__awburst,1,0);
    VL_OUT8(__PVT__wstrb,3,0);
    VL_OUT8(__PVT__wvalid,0,0);
    VL_IN8(__PVT__wready,0,0);
    VL_OUT8(__PVT__wlast,0,0);
    VL_IN8(__PVT__bresp,1,0);
    VL_IN8(__PVT__bvalid,0,0);
    VL_OUT8(__PVT__bready,0,0);
    VL_IN8(__PVT__bid,3,0);
    VL_OUT8(__PVT__arvalid,0,0);
    VL_IN8(__PVT__arready,0,0);
    VL_OUT8(__PVT__arid,3,0);
    VL_OUT8(__PVT__arlen,7,0);
    VL_OUT8(__PVT__arsize,2,0);
    VL_OUT8(__PVT__arbureset,1,0);
    VL_IN8(__PVT__rresp,1,0);
    VL_IN8(__PVT__rvalid,0,0);
    VL_OUT8(__PVT__rready,0,0);
    VL_IN8(__PVT__rlast,0,0);
    VL_IN8(__PVT__rid,3,0);
    CData/*2:0*/ state;
    CData/*2:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__b_fire;
    CData/*0:0*/ __PVT__ar_fire;
    CData/*0:0*/ __PVT__r_fire;
    CData/*0:0*/ __VdfgRegularize_hc456a51f_0_1;
    VL_IN(lsu_addr,31,0);
    VL_OUT(__PVT__lsu_rdata,31,0);
    VL_IN(lsu_wdata,31,0);
    VL_OUT(__PVT__awaddr,31,0);
    VL_OUT(__PVT__wdata,31,0);
    VL_OUT(__PVT__araddr,31,0);
    VL_IN(__PVT__rdata,31,0);
    IData/*31:0*/ __PVT__val1;
    IData/*31:0*/ __PVT__val2;
    IData/*31:0*/ __PVT__val;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011_LSU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011_LSU();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011_LSU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

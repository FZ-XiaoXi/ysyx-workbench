// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_AXI4RAM_H_
#define VERILATED_VYSYXSOCFULL_AXI4RAM_H_  // guard

#include "verilated.h"
class VysyxSoCFull_mem_2048x32;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_AXI4RAM final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_mem_2048x32* mem_ext;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__auto_in_awready,0,0);
    VL_IN8(__PVT__auto_in_awvalid,0,0);
    VL_IN8(__PVT__auto_in_awid,3,0);
    VL_OUT8(__PVT__auto_in_wready,0,0);
    VL_IN8(__PVT__auto_in_wvalid,0,0);
    VL_IN8(__PVT__auto_in_wstrb,3,0);
    VL_IN8(__PVT__auto_in_bready,0,0);
    VL_OUT8(__PVT__auto_in_bvalid,0,0);
    VL_OUT8(__PVT__auto_in_bid,3,0);
    VL_OUT8(__PVT__auto_in_bresp,1,0);
    VL_OUT8(__PVT__auto_in_arready,0,0);
    VL_IN8(__PVT__auto_in_arvalid,0,0);
    VL_IN8(__PVT__auto_in_arid,3,0);
    VL_IN8(__PVT__auto_in_rready,0,0);
    VL_OUT8(__PVT__auto_in_rvalid,0,0);
    VL_OUT8(__PVT__auto_in_rid,3,0);
    VL_OUT8(__PVT__auto_in_rresp,1,0);
    CData/*0:0*/ __PVT__w_full;
    CData/*3:0*/ __PVT__w_id;
    CData/*0:0*/ __PVT__r_sel1;
    CData/*0:0*/ __PVT__w_sel1;
    CData/*0:0*/ __PVT___GEN;
    CData/*0:0*/ __PVT__r_full;
    CData/*3:0*/ __PVT__r_id;
    CData/*0:0*/ __PVT__rdata_REG;
    CData/*7:0*/ __PVT__rdata_r0;
    CData/*7:0*/ __PVT__rdata_r1;
    CData/*7:0*/ __PVT__rdata_r2;
    CData/*7:0*/ __PVT__rdata_r3;
    CData/*0:0*/ __VdfgRegularize_h9fc36335_0_0;
    VL_IN(__PVT__auto_in_awaddr,27,0);
    VL_IN(__PVT__auto_in_wdata,31,0);
    VL_IN(__PVT__auto_in_araddr,27,0);
    VL_OUT(__PVT__auto_in_rdata,31,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_AXI4RAM(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_AXI4RAM();
    VL_UNCOPYABLE(VysyxSoCFull_AXI4RAM);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

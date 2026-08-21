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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__flush_valid,0,0);
        VL_IN8(__PVT__lsu_in_valid,0,0);
        VL_IN8(__PVT__lsu_in_bus_exception,4,0);
        VL_OUT8(__PVT__lsu_in_ready,0,0);
        VL_IN8(__PVT__lsu_in_bus_perip_mask,1,0);
        VL_IN8(__PVT__lsu_in_bus_isUnSigned,0,0);
        VL_IN8(__PVT__lsu_in_bus_isLOAD,0,0);
        VL_IN8(__PVT__lsu_in_bus_isSTORE,0,0);
        VL_OUT8(lsu_out_valid,0,0);
        VL_OUT8(__PVT__lsu_out_bus_exception,4,0);
        VL_IN8(__PVT__lsu_out_ready,0,0);
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
        VL_OUT8(__PVT__arburst,1,0);
        VL_IN8(__PVT__rresp,1,0);
        VL_IN8(__PVT__rvalid,0,0);
        VL_OUT8(__PVT__rready,0,0);
        VL_IN8(__PVT__rlast,0,0);
        VL_IN8(__PVT__rid,3,0);
        CData/*2:0*/ state;
        CData/*2:0*/ __PVT__next_state;
        CData/*0:0*/ b_fire;
        CData/*0:0*/ __PVT__ar_fire;
        CData/*0:0*/ r_fire;
        CData/*2:0*/ __PVT__awsize_q;
        CData/*3:0*/ __PVT__wstrb_q;
        CData/*0:0*/ debug_LSU_LOADING;
        CData/*0:0*/ debug_LSU_WRITING;
        CData/*0:0*/ debug_LSU_WRITE_FINAL;
        CData/*0:0*/ debug_LSU_LOAD_FINAL;
        CData/*0:0*/ __VdfgRegularize_hc456a51f_0_4;
        CData/*0:0*/ __VdfgRegularize_hc456a51f_0_7;
        CData/*0:0*/ __VdfgRegularize_hc456a51f_0_8;
        VL_IN(__PVT__lsu_in_bus_addr,31,0);
        VL_IN(__PVT__lsu_in_bus_wdata,31,0);
        VL_OUT(__PVT__lsu_out_bus_rdata,31,0);
        VL_OUT(__PVT__awaddr,31,0);
        VL_OUT(__PVT__wdata,31,0);
        VL_OUT(__PVT__araddr,31,0);
        VL_IN(__PVT__rdata,31,0);
        IData/*31:0*/ __PVT__awaddr_q;
        IData/*31:0*/ __PVT__wdata_q;
        IData/*31:0*/ __PVT__val1;
        IData/*31:0*/ __PVT__val2;
        IData/*31:0*/ __PVT__val;
    };
    struct {
        IData/*31:0*/ __PVT__lsu_rdata1;
    };

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

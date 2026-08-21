// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_IFU_ICACHE__PI1_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_IFU_ICACHE__PI1_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_IFU_icache__pi1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__flush,0,0);
    VL_IN8(pc_flush,0,0);
    VL_IN8(__PVT__in_reqValid,0,0);
    VL_OUT8(__PVT__in_respValid,0,0);
    VL_OUT8(__PVT__out_arvalid,0,0);
    VL_IN8(__PVT__out_arready,0,0);
    VL_OUT8(__PVT__out_arid,3,0);
    VL_OUT8(__PVT__out_arlen,7,0);
    VL_OUT8(__PVT__out_arsize,2,0);
    VL_OUT8(__PVT__out_arburst,1,0);
    VL_IN8(__PVT__out_rresp,1,0);
    VL_IN8(__PVT__out_rvalid,0,0);
    VL_OUT8(__PVT__out_rready,0,0);
    VL_IN8(__PVT__out_rlast,0,0);
    VL_IN8(__PVT__out_rid,3,0);
    VL_OUT8(__PVT__debug_is_hit,0,0);
    CData/*0:0*/ pc_flushed;
    CData/*2:0*/ __PVT__state;
    CData/*2:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__ar_fire;
    CData/*0:0*/ __PVT__r_fire;
    CData/*1:0*/ __PVT__burst_cnt;
    VL_IN(__PVT__in_addr,31,0);
    VL_OUT(__PVT__in_rdata,31,0);
    VL_OUT(__PVT__out_araddr,31,0);
    VL_IN(__PVT__out_rdata,31,0);
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    VlUnpacked<VlWide<4>/*127:0*/, 4> __PVT__cache_mem;
    VlUnpacked<CData/*0:0*/, 4> __PVT__cache_valid;
    VlUnpacked<IData/*25:0*/, 4> __PVT__cache_tag;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011_IFU_icache__pi1(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011_IFU_icache__pi1();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011_IFU_icache__pi1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

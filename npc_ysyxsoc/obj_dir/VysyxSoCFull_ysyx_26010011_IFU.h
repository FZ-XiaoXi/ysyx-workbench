// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_IFU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_IFU_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_IFU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__flush_icache,0,0);
    VL_IN8(__PVT__isJUMP,0,0);
    VL_IN8(__PVT__isBRANCH,0,0);
    VL_IN8(__PVT__isECALL,0,0);
    VL_IN8(__PVT__isMRET,0,0);
    VL_IN8(__PVT__wbu_final,0,0);
    VL_OUT8(bus_valid,0,0);
    VL_IN8(__PVT__lsu_access_fault,0,0);
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
    CData/*0:0*/ debug_is_hit;
    CData/*1:0*/ state;
    CData/*1:0*/ __PVT__next_state;
    CData/*0:0*/ r_fire;
    CData/*0:0*/ in_reqValid;
    CData/*1:0*/ __PVT__icache_u0__DOT__state;
    CData/*1:0*/ __PVT__icache_u0__DOT__next_state;
    CData/*0:0*/ __PVT__icache_u0__DOT__r_fire;
    CData/*2:0*/ __PVT__icache_u0__DOT__burst_cnt;
    CData/*7:0*/ __VdlyLsb__icache_u0__DOT__cache_mem__v0;
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_mem__v0;
    SData/*8:0*/ __VdlyDim0__icache_u0__DOT__cache_mem__v0;
    VL_OUT(PC,31,0);
    VL_IN(__PVT__dnpc,31,0);
    VL_OUT(__PVT__snpc,31,0);
    VL_OUT(__PVT__PC_command,31,0);
    VL_OUT(__PVT__araddr,31,0);
    VL_IN(rdata,31,0);
    IData/*31:0*/ __PVT__icache_u0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vdly__PC;
    IData/*31:0*/ __VdlyVal__icache_u0__DOT__cache_mem__v0;
    VlUnpacked<VlWide<8>/*255:0*/, 512> __PVT__icache_u0__DOT__cache_mem;
    VlUnpacked<CData/*0:0*/, 512> __PVT__icache_u0__DOT__cache_valid;
    VlUnpacked<IData/*17:0*/, 512> __PVT__icache_u0__DOT__cache_tag;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 512>, false, CData/*0:0*/, 1> __VdlyCommitQueueicache_u0__DOT__cache_valid;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011_IFU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011_IFU();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011_IFU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

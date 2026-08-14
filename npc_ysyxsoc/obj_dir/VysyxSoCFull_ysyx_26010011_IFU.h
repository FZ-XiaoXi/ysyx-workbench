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
    CData/*1:0*/ state;
    CData/*1:0*/ __PVT__next_state;
    CData/*0:0*/ r_fire;
    CData/*0:0*/ __PVT__in_reqValid;
    CData/*0:0*/ __PVT__icache_u0__DOT__is_hit;
    CData/*1:0*/ __PVT__icache_u0__DOT__state;
    CData/*1:0*/ __PVT__icache_u0__DOT__next_state;
    CData/*0:0*/ __PVT__icache_u0__DOT__r_fire;
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_mem__v0;
    CData/*3:0*/ __VdlyDim0__icache_u0__DOT__cache_mem__v16;
    CData/*0:0*/ __VdlySet__icache_u0__DOT__cache_mem__v16;
    VL_OUT(PC,31,0);
    VL_IN(__PVT__dnpc,31,0);
    VL_OUT(__PVT__snpc,31,0);
    VL_OUT(__PVT__PC_command,31,0);
    VL_OUT(__PVT__araddr,31,0);
    VL_IN(rdata,31,0);
    IData/*31:0*/ __PVT__icache_u0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vdly__PC;
    IData/*31:0*/ __VdlyVal__icache_u0__DOT__cache_mem__v16;
    VlUnpacked<IData/*31:0*/, 16> __PVT__icache_u0__DOT__cache_mem;
    VlUnpacked<CData/*0:0*/, 16> __PVT__icache_u0__DOT__cache_valid;
    VlUnpacked<IData/*25:0*/, 16> __PVT__icache_u0__DOT__cache_tag;

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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_IFU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_IFU_H_  // guard

#include "verilated.h"
class VysyxSoCFull_ysyx_26010011_IFU_icache__pi1;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_IFU final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyx_26010011_IFU_icache__pi1* icache_u0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__flush_valid,0,0);
    VL_IN8(__PVT__dnpc_valid,0,0);
    VL_OUT8(ifu_out_valid,0,0);
    VL_IN8(ifu_out_ready,0,0);
    VL_OUT8(__PVT__ifu_out_bus_exception,4,0);
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
    VL_IN8(__PVT__fencei_flush,0,0);
    CData/*0:0*/ __PVT__ifu_out_valid_r;
    CData/*0:0*/ __PVT__in_reqValid;
    CData/*0:0*/ debug_IFU_is_hit;
    CData/*0:0*/ debug_IFU_is_hit_inst;
    CData/*0:0*/ debug_IFU_get_inst;
    CData/*0:0*/ __VdfgRegularize_hb9205a68_0_0;
    VL_IN(__PVT__dnpc,31,0);
    VL_OUT(__PVT__ifu_out_bus_instruction,31,0);
    VL_OUT(ifu_out_bus_pc,31,0);
    VL_OUT(ifu_out_bus_fetching,31,0);
    VL_OUT(__PVT__ifu_out_bus_snpc,31,0);
    VL_OUT(__PVT__araddr,31,0);
    VL_IN(rdata,31,0);
    IData/*31:0*/ __PVT__ifu_out_bus_instruction_r;
    IData/*31:0*/ __PVT__ifu_out_bus_pc_r;
    IData/*31:0*/ PC;

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

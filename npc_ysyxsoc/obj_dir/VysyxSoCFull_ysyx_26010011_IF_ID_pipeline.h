// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_IF_ID_PIPELINE_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_IF_ID_PIPELINE_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_IF_ID_pipeline final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__flush_valid,0,0);
    VL_IN8(__PVT__ifu_out_valid,0,0);
    VL_OUT8(__PVT__ifu_out_ready,0,0);
    VL_IN8(__PVT__ifu_out_bus_exception,4,0);
    VL_OUT8(idu_in_valid,0,0);
    VL_IN8(__PVT__idu_in_ready,0,0);
    VL_OUT8(__PVT__idu_in_bus_exception,4,0);
    CData/*0:0*/ __Vdly__idu_in_valid;
    VL_IN(__PVT__ifu_out_bus_instruction,31,0);
    VL_IN(__PVT__ifu_out_bus_pc,31,0);
    VL_IN(__PVT__ifu_out_bus_snpc,31,0);
    VL_OUT(__PVT__idu_in_bus_instruction,31,0);
    VL_OUT(idu_in_bus_pc,31,0);
    VL_OUT(__PVT__idu_in_bus_snpc,31,0);
    IData/*31:0*/ __Vdly__idu_in_bus_instruction;
    IData/*31:0*/ __Vdly__idu_in_bus_pc;
    IData/*31:0*/ __Vdly__idu_in_bus_snpc;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011_IF_ID_pipeline(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011_IF_ID_pipeline();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011_IF_ID_pipeline);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

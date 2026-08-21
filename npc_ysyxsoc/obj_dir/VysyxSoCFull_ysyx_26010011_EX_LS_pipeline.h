// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_EX_LS_PIPELINE_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_EX_LS_PIPELINE_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_EX_LS_pipeline final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__flush_valid,0,0);
    VL_IN8(__PVT__exu_out_valid,0,0);
    VL_OUT8(__PVT__exu_out_ready,0,0);
    VL_IN8(__PVT__exu_out_bus_comp_result,0,0);
    VL_IN8(__PVT__exu_out_bus_rd,4,0);
    VL_IN8(__PVT__exu_out_bus_exception,4,0);
    VL_IN8(__PVT__exu_out_bus_isLOAD,0,0);
    VL_IN8(__PVT__exu_out_bus_isSTORE,0,0);
    VL_IN8(__PVT__exu_out_bus_isWGPR,0,0);
    VL_IN8(__PVT__exu_out_bus_isJUMP,0,0);
    VL_IN8(__PVT__exu_out_bus_isWCOMP,0,0);
    VL_IN8(__PVT__exu_out_bus_isBRANCH,0,0);
    VL_IN8(__PVT__exu_out_bus_opCSR,2,0);
    VL_IN8(__PVT__exu_out_bus_isUnSigned,0,0);
    VL_IN8(__PVT__exu_out_bus_perip_mask,1,0);
    VL_OUT8(lsu_in_valid,0,0);
    VL_IN8(__PVT__lsu_in_ready,0,0);
    VL_OUT8(__PVT__lsu_in_bus_comp_result,0,0);
    VL_OUT8(__PVT__lsu_in_bus_rd,4,0);
    VL_OUT8(__PVT__lsu_in_bus_exception,4,0);
    VL_OUT8(__PVT__lsu_in_bus_isLOAD,0,0);
    VL_OUT8(__PVT__lsu_in_bus_isSTORE,0,0);
    VL_OUT8(__PVT__lsu_in_bus_isWGPR,0,0);
    VL_OUT8(__PVT__lsu_in_bus_isJUMP,0,0);
    VL_OUT8(__PVT__lsu_in_bus_isWCOMP,0,0);
    VL_OUT8(__PVT__lsu_in_bus_isBRANCH,0,0);
    VL_OUT8(__PVT__lsu_in_bus_opCSR,2,0);
    VL_OUT8(__PVT__lsu_in_bus_isUnSigned,0,0);
    VL_OUT8(__PVT__lsu_in_bus_perip_mask,1,0);
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    CData/*0:0*/ __Vdly__lsu_in_valid;
    VL_IN16(__PVT__exu_out_bus_csrrd,11,0);
    VL_OUT16(__PVT__lsu_in_bus_csrrd,11,0);
    VL_IN(__PVT__exu_out_bus_alu_result,31,0);
    VL_IN(__PVT__exu_out_bus_csr_result,31,0);
    VL_IN(__PVT__exu_out_bus_lsu_val,31,0);
    VL_IN(__PVT__exu_out_bus_instruction,31,0);
    VL_IN(__PVT__exu_out_bus_pc,31,0);
    VL_IN(__PVT__exu_out_bus_snpc,31,0);
    VL_OUT(__PVT__lsu_in_bus_alu_result,31,0);
    VL_OUT(__PVT__lsu_in_bus_csr_result,31,0);
    VL_OUT(__PVT__lsu_in_bus_lsu_val,31,0);
    VL_OUT(__PVT__lsu_in_bus_instruction,31,0);
    VL_OUT(lsu_in_bus_pc,31,0);
    VL_OUT(__PVT__lsu_in_bus_snpc,31,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011_EX_LS_pipeline(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011_EX_LS_pipeline();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011_EX_LS_pipeline);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_GPRS_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_GPRS_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011_GPRs final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__gpr_in_addra,4,0);
    VL_IN8(__PVT__gpr_in_addrb,4,0);
    VL_IN8(__PVT__gpr_in_addw,4,0);
    VL_IN8(__PVT__gpr_in_wen,0,0);
    CData/*0:0*/ __VdlySet__GPR__v0;
    CData/*4:0*/ __VdlyDim0__GPR__v32;
    CData/*0:0*/ __VdlySet__GPR__v32;
    VL_OUT(__PVT__gpr_out_a,31,0);
    VL_OUT(__PVT__gpr_out_b,31,0);
    VL_IN(__PVT__gpr_in_data,31,0);
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __VdlyVal__GPR__v32;
    VlUnpacked<IData/*31:0*/, 32> GPR;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011_GPRs(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011_GPRs();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011_GPRs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_MEM_2048X32_H_
#define VERILATED_VYSYXSOCFULL_MEM_2048X32_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_mem_2048x32 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__R0_en,0,0);
    VL_IN8(__PVT__R0_clk,0,0);
    VL_IN8(__PVT__W0_en,0,0);
    VL_IN8(__PVT__W0_clk,0,0);
    VL_IN8(__PVT__W0_mask,3,0);
    CData/*0:0*/ __PVT___R0_en_d0;
    VL_IN16(__PVT__R0_addr,10,0);
    VL_IN16(__PVT__W0_addr,10,0);
    SData/*10:0*/ __PVT___R0_addr_d0;
    VL_OUT(__PVT__R0_data,31,0);
    VL_IN(__PVT__W0_data,31,0);
    VlUnpacked<IData/*31:0*/, 2048> Memory;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_mem_2048x32(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_mem_2048x32();
    VL_UNCOPYABLE(VysyxSoCFull_mem_2048x32);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

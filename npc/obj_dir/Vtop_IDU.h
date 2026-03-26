// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IDU_H_
#define VERILATED_VTOP_IDU_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_IDU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__isGREATER,0,0);
        VL_IN8(__PVT__isEQUAL,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__bus_valid,0,0);
        VL_IN8(__PVT__wbu_final,0,0);
        VL_OUT8(__PVT__opcode,6,0);
        VL_OUT8(__PVT__rd,4,0);
        VL_OUT8(__PVT__rs1,4,0);
        VL_OUT8(__PVT__rs2,4,0);
        VL_OUT8(__PVT__funct3,2,0);
        VL_OUT8(__PVT__funct7,6,0);
        VL_OUT8(__PVT__isEBREAK,0,0);
        VL_OUT8(__PVT__isECALL,0,0);
        VL_OUT8(__PVT__isMRET,0,0);
        VL_OUT8(__PVT__isLOAD,0,0);
        VL_OUT8(__PVT__isSTORE,0,0);
        VL_OUT8(__PVT__isWRITE,0,0);
        VL_OUT8(__PVT__isJUMP,0,0);
        VL_OUT8(__PVT__isCOMPARE,0,0);
        VL_OUT8(__PVT__isBRANCH,0,0);
        VL_OUT8(__PVT__isCSR,1,0);
        VL_OUT8(__PVT__COMP_data,0,0);
        VL_OUT8(__PVT__isSigned,0,0);
        VL_OUT8(__PVT__isPC,0,0);
        VL_OUT8(__PVT__LSU_WEN,0,0);
        VL_OUT8(__PVT__lsu_reqEN,0,0);
        VL_OUT8(__PVT__LSU_rmask,3,0);
        VL_OUT8(__PVT__lsu_wmask,3,0);
        VL_OUT8(__PVT__ctype,6,0);
        CData/*0:0*/ state;
        CData/*0:0*/ __PVT__next_state;
        CData/*0:0*/ __PVT__isJALR;
        CData/*0:0*/ __PVT__isBEQ;
        CData/*0:0*/ __PVT__isBNE;
        CData/*0:0*/ __PVT__isBLT;
        CData/*0:0*/ __PVT__isBGE;
        CData/*0:0*/ __PVT__isBLTU;
        CData/*0:0*/ __PVT__isBGEU;
        CData/*0:0*/ __PVT__isLH;
        CData/*0:0*/ __PVT__isLW;
        CData/*0:0*/ __PVT__isLBU;
        CData/*0:0*/ __PVT__isLHU;
        CData/*0:0*/ __PVT__isSB;
        CData/*0:0*/ __PVT__isSH;
        CData/*0:0*/ __PVT__isSW;
        CData/*0:0*/ __PVT__isADDI;
        CData/*0:0*/ __PVT__isSLTIU;
        CData/*0:0*/ __PVT__isXORI;
        CData/*0:0*/ __PVT__isORI;
        CData/*0:0*/ __PVT__isANDI;
        CData/*0:0*/ __PVT__isSLLI;
        CData/*0:0*/ __PVT__isSRLI;
        CData/*0:0*/ __PVT__isSRAI;
        CData/*0:0*/ __PVT__isADD;
        CData/*0:0*/ __PVT__isSLL;
        CData/*0:0*/ __PVT__isSLT;
        CData/*0:0*/ __PVT__isSLTU;
        CData/*0:0*/ __PVT__isXOR;
        CData/*0:0*/ __PVT__isSRL;
        CData/*0:0*/ __PVT__isSRA;
        CData/*0:0*/ __PVT__isOR;
        CData/*0:0*/ __PVT__isAND;
        CData/*0:0*/ __PVT__isMUL;
    };
    struct {
        CData/*0:0*/ __PVT__isMULH;
        CData/*0:0*/ __PVT__isMULHSU;
        CData/*0:0*/ __PVT__isMULHU;
        CData/*0:0*/ __PVT__isDIV;
        CData/*0:0*/ __PVT__isDIVU;
        CData/*0:0*/ __PVT__isREM;
        CData/*0:0*/ __PVT__isREMU;
        CData/*0:0*/ __PVT__isCSRRW;
        CData/*0:0*/ __PVT__isCSRRS;
        CData/*0:0*/ __PVT__isCSRRC;
        CData/*0:0*/ __PVT__isCSRRWI;
        CData/*0:0*/ __PVT__isCSRRSI;
        CData/*0:0*/ __PVT__isCSRRCI;
        CData/*0:0*/ __PVT__isR;
        CData/*0:0*/ __PVT__isI;
        CData/*0:0*/ __PVT__isB;
        CData/*0:0*/ __PVT__isU;
        CData/*0:0*/ __VdfgExtracted_h790550e9__0;
        CData/*0:0*/ __VdfgRegularize_h52656aab_0_16;
        CData/*0:0*/ __VdfgRegularize_h52656aab_0_19;
        CData/*0:0*/ __VdfgRegularize_h52656aab_0_20;
        CData/*0:0*/ __VdfgRegularize_h52656aab_0_21;
        CData/*0:0*/ __VdfgRegularize_h52656aab_0_22;
        CData/*0:0*/ __VdfgRegularize_h52656aab_0_25;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        VL_OUT16(__PVT__rcsr,11,0);
        VL_OUT16(__PVT__immI,11,0);
        VL_OUT16(__PVT__immS,11,0);
        VL_OUT16(__PVT__immB,12,1);
        VL_OUT16(__PVT__op,9,0);
        VL_IN(__PVT__command,31,0);
        VL_OUT(__PVT__immU,31,12);
        VL_OUT(__PVT__immJ,20,1);
        VL_OUT(__PVT__imm,31,0);
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_IDU(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_IDU();
    VL_UNCOPYABLE(Vtop_IDU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
class Vtop_IFU;
class Vtop_REG;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_REG* REG_0;
    Vtop_IFU* IFU_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(LSU_rmask,3,0);
        VL_OUT8(LSU_wmask,3,0);
        VL_OUT8(LSU_WEN,0,0);
        VL_OUT8(LSU_REN,0,0);
        VL_OUT8(COMP_data,0,0);
        CData/*0:0*/ __VdfgRegularize_he2b63832_0_0;
        CData/*0:0*/ __PVT__IDU_0__DOT__isLOAD;
        CData/*0:0*/ __PVT__IDU_0__DOT__isWRITE;
        CData/*0:0*/ __PVT__IDU_0__DOT__isJUMP;
        CData/*0:0*/ __PVT__IDU_0__DOT__isBRANCH;
        CData/*1:0*/ __PVT__IDU_0__DOT__isCSR;
        CData/*0:0*/ __PVT__IDU_0__DOT__isJALR;
        CData/*0:0*/ __PVT__IDU_0__DOT__isBEQ;
        CData/*0:0*/ __PVT__IDU_0__DOT__isBNE;
        CData/*0:0*/ __PVT__IDU_0__DOT__isBLT;
        CData/*0:0*/ __PVT__IDU_0__DOT__isBGE;
        CData/*0:0*/ __PVT__IDU_0__DOT__isBLTU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isBGEU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isLB;
        CData/*0:0*/ __PVT__IDU_0__DOT__isLH;
        CData/*0:0*/ __PVT__IDU_0__DOT__isLW;
        CData/*0:0*/ __PVT__IDU_0__DOT__isLBU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isLHU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSB;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSH;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSW;
        CData/*0:0*/ __PVT__IDU_0__DOT__isADDI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLTIU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isXORI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isORI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isANDI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLLI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRLI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRAI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isADD;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLL;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLT;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLTU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isXOR;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRL;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRA;
        CData/*0:0*/ __PVT__IDU_0__DOT__isOR;
        CData/*0:0*/ __PVT__IDU_0__DOT__isAND;
        CData/*0:0*/ __PVT__IDU_0__DOT__isMUL;
        CData/*0:0*/ __PVT__IDU_0__DOT__isMULH;
        CData/*0:0*/ __PVT__IDU_0__DOT__isMULHSU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isMULHU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isDIV;
        CData/*0:0*/ __PVT__IDU_0__DOT__isDIVU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isREM;
        CData/*0:0*/ __PVT__IDU_0__DOT__isREMU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRW;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRS;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRC;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRWI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRSI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRCI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isR;
        CData/*0:0*/ __PVT__IDU_0__DOT__isI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isS;
        CData/*0:0*/ __PVT__IDU_0__DOT__isB;
        CData/*0:0*/ __PVT__IDU_0__DOT__isU;
    };
    struct {
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_19;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_20;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_21;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_22;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_25;
        CData/*0:0*/ __PVT__EXU_0__DOT__ADDER_0__DOT__cin;
        CData/*0:0*/ __PVT__COMP_0__DOT__isEQUAL;
        CData/*0:0*/ __PVT__COMP_0__DOT__isGREATER;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_0;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_1;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_2;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_3;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_4;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_5;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_6;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_7;
        VL_OUT(LSU_address,31,0);
        VL_OUT(LSU_writedata,31,0);
        VL_OUT(LSU_readdata,31,0);
        VL_OUT(PC_command,31,0);
        VL_OUT(EXU_inA,31,0);
        VL_OUT(EXU_inB,31,0);
        VL_OUT(EXU_data,31,0);
        VL_OUT(CSR_data,31,0);
        VL_OUT(rs1_val,31,0);
        VL_OUT(rs2_val,31,0);
        VL_OUT(reg_data,31,0);
        VL_OUT(imm,31,0);
        IData/*31:0*/ PC;
        IData/*31:0*/ dnpc;
        IData/*31:0*/ snpc;
        IData/*31:0*/ __PVT__command;
        IData/*31:0*/ __PVT__COMP_0__DOT__inB;
        IData/*31:0*/ __PVT__COMP_0__DOT__out;
        IData/*31:0*/ __PVT__LSU_0__DOT__val0;
        IData/*31:0*/ __PVT__LSU_0__DOT__val1;
        IData/*31:0*/ __PVT__LSU_0__DOT__val2;
        IData/*31:0*/ __PVT__LSU_0__DOT__rdata4;
        IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
        QData/*32:0*/ __PVT__EXU_0__DOT__ADDER_0__DOT__inB;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_top(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_top();
    VL_UNCOPYABLE(Vtop_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

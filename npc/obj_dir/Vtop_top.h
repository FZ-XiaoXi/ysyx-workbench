// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
class Vtop_IDU;
class Vtop_IFU;
class Vtop_LSU;
class Vtop_REG;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_REG* REG_0;
    Vtop_IFU* IFU_0;
    Vtop_IDU* IDU_0;
    Vtop_LSU* LSU_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(LSU_rmask,3,0);
        VL_OUT8(lsu_wmask,3,0);
        VL_OUT8(LSU_WEN,0,0);
        VL_OUT8(COMP_data,0,0);
        CData/*0:0*/ __VdfgRegularize_he2b63832_0_0;
        CData/*1:0*/ __PVT__IROM__DOT__r_state;
        CData/*1:0*/ __PVT__IROM__DOT__r_next;
        CData/*1:0*/ __PVT__IROM__DOT__w_state;
        CData/*1:0*/ __PVT__IROM__DOT__w_next;
        CData/*0:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__lfsr_en;
        CData/*3:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__lock_state;
        CData/*3:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__lfsr_en;
        CData/*1:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__lock_state;
        CData/*1:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __PVT__EXU_0__DOT__ADDER_0__DOT__cin;
        CData/*0:0*/ __PVT__COMP_0__DOT__isEQUAL;
        CData/*0:0*/ __PVT__COMP_0__DOT__isGREATER;
        CData/*1:0*/ __PVT__DRAM__DOT__r_state;
        CData/*1:0*/ __PVT__DRAM__DOT__r_next;
        CData/*1:0*/ __PVT__DRAM__DOT__w_state;
        CData/*1:0*/ __PVT__DRAM__DOT__w_next;
        CData/*0:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__start;
        CData/*0:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__lfsr_en;
        CData/*3:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__lock_state;
        CData/*3:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__start;
        CData/*0:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__lfsr_en;
        CData/*1:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__lock_state;
        CData/*1:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*0:0*/ __Vdly__IROM__DOT__read_delay_inst__DOT__busy;
        CData/*3:0*/ __Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt;
        CData/*3:0*/ __Vdly__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __Vdly__DRAM__DOT__read_delay_inst__DOT__busy;
        CData/*3:0*/ __Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt;
        CData/*3:0*/ __Vdly__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
        VL_OUT(lsu_addr,31,0);
        VL_OUT(lsu_wdata,31,0);
        VL_OUT(lsu_rdata,31,0);
        VL_OUT(PC_command,31,0);
        VL_OUT(EXU_inA,31,0);
    };
    struct {
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
        IData/*31:0*/ __PVT__IROM__DOT__raddr_reg;
        IData/*31:0*/ __PVT__IROM__DOT__rdata_hold;
        IData/*31:0*/ __PVT__IROM__DOT__current_mem_rdata;
        IData/*31:0*/ __PVT__COMP_0__DOT__inB;
        IData/*31:0*/ __PVT__COMP_0__DOT__out;
        IData/*31:0*/ __PVT__DRAM__DOT__raddr_reg;
        IData/*31:0*/ __PVT__DRAM__DOT__rdata_hold;
        IData/*31:0*/ __PVT__DRAM__DOT__current_mem_rdata;
        IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
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

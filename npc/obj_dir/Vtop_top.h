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
        CData/*0:0*/ __PVT__IROM_arready;
        CData/*0:0*/ __PVT__DRAM_bvalid;
        CData/*0:0*/ __PVT__DRAM_awready;
        CData/*0:0*/ __PVT__DRAM_wready;
        CData/*0:0*/ __PVT__DRAM_arready;
        CData/*1:0*/ __PVT__DRAM_bresp;
        CData/*0:0*/ __PVT__S_arvalid;
        CData/*0:0*/ __PVT__S_awvalid;
        CData/*0:0*/ __PVT__S_awready;
        CData/*0:0*/ __PVT__S_wvalid;
        CData/*0:0*/ __PVT__S_wready;
        CData/*0:0*/ __PVT__S_bvalid;
        CData/*0:0*/ __PVT__S_bready;
        CData/*1:0*/ __PVT__S_bresp;
        CData/*3:0*/ __PVT__S_wstrb;
        CData/*3:0*/ __PVT__RAM_wstrb;
        CData/*0:0*/ __PVT__RAM_awvalid;
        CData/*0:0*/ __PVT__RAM_wvalid;
        CData/*0:0*/ __PVT__RAM_bready;
        CData/*3:0*/ __PVT__UART_wstrb;
        CData/*0:0*/ __PVT__UART_awvalid;
        CData/*0:0*/ __PVT__UART_wvalid;
        CData/*0:0*/ __PVT__UART_bready;
        CData/*3:0*/ __PVT__CLINT_wstrb;
        CData/*0:0*/ __PVT__CLINT_awvalid;
        CData/*0:0*/ __PVT__CLINT_wvalid;
        CData/*0:0*/ __PVT__CLINT_bready;
        CData/*0:0*/ __VdfgRegularize_he2b63832_0_0;
        CData/*0:0*/ __PVT__EXU_0__DOT__ADDER_0__DOT__cin;
        CData/*0:0*/ __PVT__COMP_0__DOT__isEQUAL;
        CData/*0:0*/ __PVT__COMP_0__DOT__isGREATER;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M1_awready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M1_wready;
        CData/*1:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M1_bresp;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M1_bvalid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_rready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_bready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_arready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_next_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_next_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__MEM_arvalid;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__MEM_arready;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__MEM_rvalid;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__MEM_rready;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__MEM_bvalid;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__UART_arvalid;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__UART_arready;
    };
    struct {
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__UART_rvalid;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__UART_rready;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__CLINT_arvalid;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__CLINT_arready;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__CLINT_rready;
        CData/*3:0*/ __PVT__XBAR_Bridge_inst__DOT__aw_sel_reg;
        CData/*3:0*/ __PVT__XBAR_Bridge_inst__DOT__ar_sel_reg;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__R_state;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__R_next_state;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__W_state;
        CData/*0:0*/ __PVT__XBAR_Bridge_inst__DOT__W_next_state;
        CData/*1:0*/ __PVT__RAM__DOT__r_state;
        CData/*1:0*/ __PVT__RAM__DOT__r_next;
        CData/*1:0*/ __PVT__RAM__DOT__w_state;
        CData/*1:0*/ __PVT__RAM__DOT__w_next;
        CData/*0:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__start;
        CData/*0:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en;
        CData/*3:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__lock_state;
        CData/*3:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__start;
        CData/*0:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en;
        CData/*1:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__lock_state;
        CData/*1:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*1:0*/ __PVT__UART_inst__DOT__r_state;
        CData/*1:0*/ __PVT__UART_inst__DOT__r_next;
        CData/*1:0*/ __PVT__UART_inst__DOT__w_state;
        CData/*1:0*/ __PVT__UART_inst__DOT__w_next;
        CData/*0:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__start;
        CData/*0:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en;
        CData/*3:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__lock_state;
        CData/*3:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__start;
        CData/*0:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en;
        CData/*1:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__lock_state;
        CData/*1:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*1:0*/ __PVT__CLINT_inst__DOT__r_state;
        CData/*1:0*/ __PVT__CLINT_inst__DOT__r_next;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__r_req_fire;
        CData/*1:0*/ __PVT__CLINT_inst__DOT__w_state;
        CData/*1:0*/ __PVT__CLINT_inst__DOT__w_next;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__w_req_fire;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en;
    };
    struct {
        CData/*3:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__lock_state;
        CData/*3:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en;
        CData/*1:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__busy;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__start_d;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__lock_state;
        CData/*1:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
        CData/*0:0*/ __PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_3;
        CData/*0:0*/ __VdfgRegularize_he2b63832_1_4;
        CData/*5:0*/ __Vtableidx3;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        VL_OUT(lsu_addr,31,0);
        VL_OUT(lsu_wdata,31,0);
        VL_OUT(lsu_rdata,31,0);
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
        IData/*31:0*/ __PVT__S_araddr;
        IData/*31:0*/ __PVT__S_awaddr;
        IData/*31:0*/ __PVT__S_wdata;
        IData/*31:0*/ __PVT__RAM_awaddr;
        IData/*31:0*/ __PVT__RAM_wdata;
        IData/*31:0*/ __PVT__UART_awaddr;
        IData/*31:0*/ __PVT__UART_wdata;
        IData/*31:0*/ __PVT__CLINT_awaddr;
        IData/*31:0*/ __PVT__CLINT_wdata;
        IData/*31:0*/ __PVT__COMP_0__DOT__inB;
        IData/*31:0*/ __PVT__COMP_0__DOT__out;
        IData/*31:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata;
        IData/*31:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        IData/*31:0*/ __PVT__XBAR_Bridge_inst__DOT__MEM_rdata;
        IData/*31:0*/ __PVT__RAM__DOT__raddr_reg;
        IData/*31:0*/ __PVT__RAM__DOT__rdata_hold;
        IData/*31:0*/ __PVT__RAM__DOT__current_mem_rdata;
        IData/*31:0*/ __PVT__UART_inst__DOT__raddr_reg;
        IData/*31:0*/ __PVT__UART_inst__DOT__rdata_hold;
        IData/*31:0*/ __PVT__CLINT_inst__DOT__raddr_reg;
        IData/*31:0*/ __PVT__CLINT_inst__DOT__rdata_hold;
        IData/*31:0*/ __PVT__CLINT_inst__DOT__current_clint_rdata;
        IData/*31:0*/ __PVT__CLINT_inst__DOT__mtime_L;
        IData/*31:0*/ __PVT__CLINT_inst__DOT__mtime_H;
        IData/*31:0*/ __Vfunc_pmem_read__5__Vfuncout;
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

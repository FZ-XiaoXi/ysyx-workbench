// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_H_  // guard

#include "verilated.h"
class VysyxSoCFull_ysyx_26010011_IDU;
class VysyxSoCFull_ysyx_26010011_IFU;
class VysyxSoCFull_ysyx_26010011_LSU;
class VysyxSoCFull_ysyx_26010011_REG;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011 final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyx_26010011_REG* REG_0;
    VysyxSoCFull_ysyx_26010011_IFU* IFU_0;
    VysyxSoCFull_ysyx_26010011_IDU* IDU_0;
    VysyxSoCFull_ysyx_26010011_LSU* LSU_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(__PVT__io_interrupt,0,0);
        VL_IN8(__PVT__io_master_awready,0,0);
        VL_OUT8(__PVT__io_master_awvalid,0,0);
        VL_OUT8(__PVT__io_master_awid,3,0);
        VL_OUT8(__PVT__io_master_awlen,7,0);
        VL_OUT8(__PVT__io_master_awsize,2,0);
        VL_OUT8(__PVT__io_master_awburst,1,0);
        VL_IN8(__PVT__io_master_wready,0,0);
        VL_OUT8(__PVT__io_master_wvalid,0,0);
        VL_OUT8(__PVT__io_master_wstrb,3,0);
        VL_OUT8(__PVT__io_master_wlast,0,0);
        VL_OUT8(__PVT__io_master_bready,0,0);
        VL_IN8(__PVT__io_master_bvalid,0,0);
        VL_IN8(__PVT__io_master_bresp,1,0);
        VL_IN8(__PVT__io_master_bid,3,0);
        VL_IN8(__PVT__io_master_arready,0,0);
        VL_OUT8(__PVT__io_master_arvalid,0,0);
        VL_OUT8(__PVT__io_master_arid,3,0);
        VL_OUT8(__PVT__io_master_arlen,7,0);
        VL_OUT8(__PVT__io_master_arsize,2,0);
        VL_OUT8(__PVT__io_master_arburst,1,0);
        VL_OUT8(__PVT__io_master_rready,0,0);
        VL_IN8(__PVT__io_master_rvalid,0,0);
        VL_IN8(__PVT__io_master_rresp,1,0);
        VL_IN8(__PVT__io_master_rlast,0,0);
        VL_IN8(__PVT__io_master_rid,3,0);
        VL_OUT8(__PVT__io_slave_awready,0,0);
        VL_IN8(__PVT__io_slave_awvalid,0,0);
        VL_IN8(__PVT__io_slave_awid,3,0);
        VL_IN8(__PVT__io_slave_awlen,7,0);
        VL_IN8(__PVT__io_slave_awsize,2,0);
        VL_IN8(__PVT__io_slave_awburst,1,0);
        VL_OUT8(__PVT__io_slave_wready,0,0);
        VL_IN8(__PVT__io_slave_wvalid,0,0);
        VL_IN8(__PVT__io_slave_wstrb,3,0);
        VL_IN8(__PVT__io_slave_wlast,0,0);
        VL_IN8(__PVT__io_slave_bready,0,0);
        VL_OUT8(__PVT__io_slave_bvalid,0,0);
        VL_OUT8(__PVT__io_slave_bresp,1,0);
        VL_OUT8(__PVT__io_slave_bid,3,0);
        VL_OUT8(__PVT__io_slave_arready,0,0);
        VL_IN8(__PVT__io_slave_arvalid,0,0);
        VL_IN8(__PVT__io_slave_arid,3,0);
        VL_IN8(__PVT__io_slave_arlen,7,0);
        VL_IN8(__PVT__io_slave_arsize,2,0);
        VL_IN8(__PVT__io_slave_arburst,1,0);
        VL_IN8(__PVT__io_slave_rready,0,0);
        VL_OUT8(__PVT__io_slave_rvalid,0,0);
        VL_OUT8(__PVT__io_slave_rresp,1,0);
        VL_OUT8(__PVT__io_slave_rlast,0,0);
        VL_OUT8(__PVT__io_slave_rid,3,0);
        CData/*0:0*/ wbu_final;
        CData/*0:0*/ __PVT__DRAM_wready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M1_wready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid;
        CData/*1:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_bready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid;
        CData/*2:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize;
        CData/*1:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid;
    };
    struct {
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_rready;
        CData/*1:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_bresp;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid;
        CData/*3:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_bid;
        CData/*1:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rresp;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rready;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rlast;
        CData/*3:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rid;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_next_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_next_state;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel;
        CData/*0:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next;
        VL_OUT(__PVT__io_master_awaddr,31,0);
        VL_OUT(__PVT__io_master_wdata,31,0);
        VL_OUT(__PVT__io_master_araddr,31,0);
        VL_IN(__PVT__io_master_rdata,31,0);
        VL_IN(__PVT__io_slave_awaddr,31,0);
        VL_IN(__PVT__io_slave_wdata,31,0);
        VL_IN(__PVT__io_slave_araddr,31,0);
        VL_OUT(__PVT__io_slave_rdata,31,0);
        IData/*31:0*/ PC;
        IData/*31:0*/ dnpc;
        IData/*31:0*/ snpc;
        IData/*31:0*/ __PVT__command;
        IData/*31:0*/ __PVT__EXU_0__DOT__inA;
        IData/*31:0*/ __PVT__EXU_0__DOT__inB;
        IData/*31:0*/ __PVT__COMP_0__DOT__inA;
        IData/*31:0*/ __PVT__COMP_0__DOT__inB;
        IData/*31:0*/ __PVT__COMP_0__DOT__out;
        IData/*31:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata;
        IData/*31:0*/ __PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        QData/*32:0*/ __PVT__EXU_0__DOT__ADDER_0__DOT__inB;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_26010011(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_26010011();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_26010011);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

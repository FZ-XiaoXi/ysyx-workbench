// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_26010011_H_
#define VERILATED_VYSYXSOCFULL_YSYX_26010011_H_  // guard

#include "verilated.h"
class VysyxSoCFull_ysyx_26010011_CSRs;
class VysyxSoCFull_ysyx_26010011_EX_LS_pipeline;
class VysyxSoCFull_ysyx_26010011_GPRs;
class VysyxSoCFull_ysyx_26010011_ID_EX_pipeline;
class VysyxSoCFull_ysyx_26010011_IFU;
class VysyxSoCFull_ysyx_26010011_IF_ID_pipeline;
class VysyxSoCFull_ysyx_26010011_LSU;
class VysyxSoCFull_ysyx_26010011_LS_WB_pipeline;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyx_26010011 final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyx_26010011_IFU* IFU_0;
    VysyxSoCFull_ysyx_26010011_IF_ID_pipeline* IF_ID_inst;
    VysyxSoCFull_ysyx_26010011_ID_EX_pipeline* ID_EX_inst;
    VysyxSoCFull_ysyx_26010011_EX_LS_pipeline* EX_LS_inst;
    VysyxSoCFull_ysyx_26010011_LSU* LSU_0;
    VysyxSoCFull_ysyx_26010011_LS_WB_pipeline* LS_WB_inst;
    VysyxSoCFull_ysyx_26010011_GPRs* GPR_0;
    VysyxSoCFull_ysyx_26010011_CSRs* CSR_0;

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
        CData/*0:0*/ idu_isRAW;
        CData/*0:0*/ __PVT__dnpc_valid;
        CData/*0:0*/ flush_valid;
        CData/*0:0*/ flush_exception_valid;
        CData/*0:0*/ __PVT__idu_out_valid;
        CData/*2:0*/ __PVT__idu_out_bus_opCSR;
        CData/*0:0*/ __PVT__exu_out_bus_dnpc_valid;
        CData/*0:0*/ tb_isFINAL;
        CData/*0:0*/ tb_dnpc_valid;
        CData/*0:0*/ tb_isMEM;
        CData/*0:0*/ __PVT__S_arvalid;
    };
    struct {
        CData/*0:0*/ __PVT__S_rvalid;
        CData/*0:0*/ __PVT__S_rlast;
        CData/*0:0*/ __PVT__S_arready;
        CData/*1:0*/ __PVT__S_arburst;
        CData/*2:0*/ __PVT__S_arsize;
        CData/*7:0*/ __PVT__S_arlen;
        CData/*0:0*/ __PVT__CLINT_arvalid;
        CData/*0:0*/ __PVT__CLINT_rvalid;
        CData/*0:0*/ __PVT__CLINT_bvalid;
        CData/*0:0*/ __PVT__CLINT_rlast;
        CData/*0:0*/ __PVT__CLINT_arready;
        CData/*0:0*/ __PVT__CLINT_awready;
        CData/*0:0*/ __PVT__CLINT_wready;
        CData/*0:0*/ __VdfgRegularize_he0d61652_0_2;
        CData/*0:0*/ __PVT__IDU_0__DOT__flush_valid;
        CData/*0:0*/ __PVT__IDU_0__DOT__idu_in_ready;
        CData/*4:0*/ __PVT__IDU_0__DOT__idu_out_bus_exception;
        CData/*0:0*/ __PVT__IDU_0__DOT__idu_out_bus_isLOAD;
        CData/*0:0*/ __PVT__IDU_0__DOT__idu_out_bus_isSTORE;
        CData/*0:0*/ __PVT__IDU_0__DOT__idu_out_bus_isBRANCH;
        CData/*0:0*/ __PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm;
        CData/*0:0*/ __PVT__IDU_0__DOT__state;
        CData/*0:0*/ __PVT__IDU_0__DOT__next_state;
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
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLTI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLTIU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isXORI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isORI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isANDI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLLI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRLI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRAI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isADD;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSUB;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLL;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLT;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSLTU;
        CData/*0:0*/ __PVT__IDU_0__DOT__isXOR;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRL;
        CData/*0:0*/ __PVT__IDU_0__DOT__isSRA;
        CData/*0:0*/ __PVT__IDU_0__DOT__isOR;
        CData/*0:0*/ __PVT__IDU_0__DOT__isAND;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRW;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRS;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRC;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRWI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRSI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isCSRRCI;
        CData/*0:0*/ __PVT__IDU_0__DOT__isI;
    };
    struct {
        CData/*0:0*/ __PVT__IDU_0__DOT__isU;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_0;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_2;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_3;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_23;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_24;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_26;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_28;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_29;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_32;
        CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_34;
        CData/*0:0*/ __PVT__EXU_0__DOT__exu_out_bus_comp_result;
        CData/*0:0*/ __PVT__EXU_0__DOT__comp_isEQUAL;
        CData/*4:0*/ __PVT__WBU_0__DOT__wbu_out_bus_exception;
        CData/*0:0*/ WBU_0__DOT____VdfgRegularize_h03859d6a_0_0;
        CData/*0:0*/ __PVT__RAM_AXI4Arbiter__DOT__R_state;
        CData/*0:0*/ __PVT__RAM_AXI4Arbiter__DOT__R_next_state;
        CData/*0:0*/ __PVT__RAM_AXI4Arbiter__DOT__R_master_sel;
        CData/*0:0*/ __PVT__RAM_AXI4Arbiter__DOT__R_master_sel_next;
        CData/*3:0*/ __PVT__u_bridge__DOT__CLINT_bid;
        CData/*3:0*/ __PVT__u_bridge__DOT__CLINT_rid;
        CData/*0:0*/ __PVT__u_bridge__DOT__aw_sel_reg;
        CData/*0:0*/ __PVT__u_bridge__DOT__ar_sel_reg;
        CData/*0:0*/ __PVT__u_bridge__DOT__ar_sel_now;
        CData/*0:0*/ __PVT__u_bridge__DOT__R_state;
        CData/*0:0*/ __PVT__u_bridge__DOT__R_next_state;
        CData/*0:0*/ __PVT__u_bridge__DOT__W_state;
        CData/*0:0*/ __PVT__u_bridge__DOT__W_next_state;
        CData/*3:0*/ __PVT__u_clint__DOT__wstate;
        CData/*3:0*/ __PVT__u_clint__DOT__wnext_state;
        CData/*3:0*/ __PVT__u_clint__DOT__rstate;
        CData/*3:0*/ __PVT__u_clint__DOT__rnext_state;
        CData/*0:0*/ __VdfgSynthJoin___PVT__idu_ra_isRAW_h6e95ff9d_0_28;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
        SData/*12:0*/ __PVT__idu_out_bus_signals;
        SData/*12:0*/ __PVT__exu_in_bus_signals;
        VL_OUT(__PVT__io_master_awaddr,31,0);
        VL_OUT(__PVT__io_master_wdata,31,0);
        VL_OUT(__PVT__io_master_araddr,31,0);
        VL_IN(__PVT__io_master_rdata,31,0);
        VL_IN(__PVT__io_slave_awaddr,31,0);
        VL_IN(__PVT__io_slave_wdata,31,0);
        VL_IN(__PVT__io_slave_araddr,31,0);
        VL_OUT(__PVT__io_slave_rdata,31,0);
        IData/*31:0*/ __PVT__idu_ra_bypass;
        IData/*31:0*/ __PVT__idu_rb_bypass;
        IData/*31:0*/ __PVT__idu_out_bus_csr;
        IData/*31:0*/ tb_FINAL_pc;
        IData/*31:0*/ tb_FINAL_npc;
        IData/*31:0*/ tb_alu_result;
        IData/*31:0*/ tb_FINAL_inst;
        IData/*31:0*/ __PVT__S_araddr;
        IData/*31:0*/ __PVT__S_rdata;
        IData/*31:0*/ __PVT__EXU_0__DOT__exu_out_bus_alu_result;
        IData/*31:0*/ __PVT__EXU_0__DOT__a;
        IData/*31:0*/ __PVT__EXU_0__DOT__b;
        IData/*31:0*/ __PVT__EXU_0__DOT__comp_b;
        IData/*31:0*/ __PVT__EXU_0__DOT__op_or;
        IData/*31:0*/ __PVT__EXU_0__DOT__op_and;
        IData/*31:0*/ __PVT__EXU_0__DOT__comp_suber_out;
        IData/*31:0*/ __PVT__u_clint__DOT__raddr_reg;
        IData/*31:0*/ __PVT__u_clint__DOT__mtime_L;
        IData/*31:0*/ __PVT__u_clint__DOT__mtime_H;
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

import "DPI-C" function void ebreak();
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

module ysyx_26010011(
  input clock,
  input reset/*verilator public*/,
  input io_interrupt,

  input		io_master_awready,
  output		io_master_awvalid,
  output	[31:0]	io_master_awaddr,
  output	[3:0]	io_master_awid,
  output	[7:0]	io_master_awlen,
  output	[2:0]	io_master_awsize,
  output	[1:0]	io_master_awburst,
  input		io_master_wready,
  output		io_master_wvalid,
  output	[31:0]	io_master_wdata,
  output	[3:0]	io_master_wstrb,
  output		io_master_wlast,
  output		io_master_bready,
  input		io_master_bvalid,
  input	[1:0]	io_master_bresp,
  input	[3:0]	io_master_bid,
  input		io_master_arready,
  output		io_master_arvalid,
  output	[31:0]	io_master_araddr,
  output	[3:0]	io_master_arid,
  output	[7:0]	io_master_arlen,
  output	[2:0]	io_master_arsize,
  output	[1:0]	io_master_arburst,
  output		io_master_rready,
  input		io_master_rvalid,
  input	[1:0]	io_master_rresp,
  input	[31:0]	io_master_rdata,
  input		io_master_rlast,
  input	[3:0]	io_master_rid,

  output		io_slave_awready,
  input		io_slave_awvalid,
  input	[31:0]	io_slave_awaddr,
  input	[3:0]	io_slave_awid,
  input	[7:0]	io_slave_awlen,
  input	[2:0]	io_slave_awsize,
  input	[1:0]	io_slave_awburst,
  output		io_slave_wready,
  input		io_slave_wvalid,
  input	[31:0]	io_slave_wdata,
  input	[3:0]	io_slave_wstrb,
  input		io_slave_wlast,
  input		io_slave_bready,
  output		io_slave_bvalid,
  output	[1:0]	io_slave_bresp,
  output	[3:0]	io_slave_bid,
  output		io_slave_arready,
  input		io_slave_arvalid,
  input	[31:0]	io_slave_araddr,
  input	[3:0]	io_slave_arid,
  input	[7:0]	io_slave_arlen,
  input	[2:0]	io_slave_arsize,
  input	[1:0]	io_slave_arburst,
  input		io_slave_rready,
  output		io_slave_rvalid,
  output	[1:0]	io_slave_rresp,
  output	[31:0]	io_slave_rdata,
  output		io_slave_rlast,
  output	[3:0]	io_slave_rid
);

  assign io_slave_awready = 0;
  assign io_slave_wready=0;
  assign io_slave_bvalid=0;
  assign io_slave_bresp=0;
  assign io_slave_bid=0;
  assign io_slave_arready=0;
  assign io_slave_rvalid=0;
  assign io_slave_rresp=0;
  assign io_slave_rdata=0;
  assign io_slave_rlast=0;
  assign io_slave_rid=0;
  
  wire lsu_access_fault;
  wire [31:0]PC/* verilator public */,dnpc/* verilator public */,snpc/* verilator public */;
  // verilator lint_off PINMISSING
  wire lsu_final,lsu_reqEN,wbu_final;
  wire [31:0] command;
  
  wire isR,isI,isS,isB,isU,isJ,isCR;

  wire [4:0] rd_add,rs1_add,rs2_add,gpr_address;
  wire [11:0] rcsr_add;


  wire COMP_data;
  wire [31:0] EXU_inA,EXU_inB,EXU_data,CSR_data;
  wire [31:0] rs1_val,rs2_val,reg_data;
  wire [31:0] imm;
  wire [31:0]lsu_addr;
  wire [3:0]LSU_rmask,lsu_wmask;
  wire [31:0]lsu_wdata;
  wire LSU_WEN;
  wire [31:0]lsu_rdata;
  wire [31:0]PC_command;
  wire gpr_WEN;
  wire isEBREAK,isECALL,isMRET,isLOAD,isSTORE,isWRITE,isJUMP,isSigned,isPC;
  wire [1:0]isCSR;
  wire isGREATER,isEQUAL,isBRANCH,isCOMPARE;
  wire [9:0]op;
  wire [31:0]csr_mepc,csr_mtvec;
  wire bus_valid;
  ysyx_26010011_REG REG_0(.clock(clock),.reset(reset),.addRA(rs1_add),.addRB(rs2_add),.addW(gpr_address),.addCSR(rcsr_add),.outA(rs1_val),.outB(rs2_val),.inData(reg_data),.gpr_WEN(gpr_WEN),.CSR_BUS(CSR_data),.WCSREN(|isCSR),.isECALL(isECALL),.isMRET(isMRET),.csr_mepc(csr_mepc),.csr_mtvec(csr_mtvec),.pc(PC),.bus_valid(bus_valid));/*verilator public_module*/
  ysyx_26010011_WBU WBU_0(.clock(clock),.reset(reset),.LSU_data(lsu_rdata),.EXU_data(EXU_data),.COMP_data(COMP_data),.address(rd_add),.isLOAD(isLOAD),.isWRITE(isWRITE),.isJUMP(isJUMP),.snpc(snpc),.gpr_WEN(gpr_WEN),.reg_data(reg_data),.gpr_address(gpr_address),.isCOMPARE(isCOMPARE),.CSR_data(CSR_data),.isCSR(isCSR),.lsu_final(lsu_final),.wbu_final(wbu_final),.isSTORE(isSTORE));
  
  ysyx_26010011_IFU IFU_0(
    .clock(clock),
    .reset(reset),
    .PC(PC),
    .dnpc(dnpc),
    .snpc(snpc),
    .isJUMP(isJUMP),
    .isBRANCH(isBRANCH),
    .isECALL(isECALL),
    .isMRET(isMRET),
    .wbu_final(wbu_final),
    .PC_command(PC_command),
    .bus_valid(bus_valid),
    .lsu_access_fault(lsu_access_fault),

    .araddr(IROM_araddr),
    .arvalid(IROM_arvalid),
    .arready(IROM_arready),
    .arid(IROM_arid),
    .arlen(IROM_arlen),
    .arsize(IROM_arsize),
    .arbureset(IROM_arbureset),
    .rdata(IROM_rdata),
    .rresp(IROM_rresp),
    .rvalid(IROM_rvalid),
    .rready(IROM_rready),
    .rlast(IROM_rlast),
    .rid(IROM_rid)
    
  );/*verilator public_module*/
  wire [31:0] IROM_araddr,IROM_rdata;
  wire IROM_arvalid,IROM_arready,IROM_rvalid,IROM_rready;
  wire [1:0] IROM_rresp;
  wire [3:0] IROM_arid;
  wire [7:0] IROM_arlen;
  wire [2:0] IROM_arsize;
  wire [1:0] IROM_arbureset;
  wire IROM_rlast;
  wire [3:0] IROM_rid;


  ysyx_26010011_IDU IDU_0(
    .clock(clock),
    .reset(reset),
    .bus_valid(bus_valid),
    .wbu_final(wbu_final),
    .command(PC_command),
    .opcode(),
    .imm(imm),
    .rd(rd_add),
    .rs1(rs1_add),
    .rs2(rs2_add),
    .rcsr(rcsr_add),
    .op(op),
    .ctype({isR,isI,isS,isB,isU,isJ,isCR}),
    .LSU_rmask(LSU_rmask),
    .lsu_wmask(lsu_wmask),
    .isLOAD(isLOAD),
    .isSTORE(isSTORE),
    .isWRITE(isWRITE),
    .isJUMP(isJUMP),
    .isCOMPARE(isCOMPARE),
    .isEBREAK(isEBREAK),
    .isECALL(isECALL),
    .isMRET(isMRET),
    .isSigned(isSigned),
    .isCSR(isCSR),
    .LSU_WEN(LSU_WEN),
    .lsu_reqEN(lsu_reqEN),
    .isPC(isPC),
    .isGREATER(isGREATER),
    .isEQUAL(isEQUAL),
    .isBRANCH(isBRANCH),
    .COMP_data(COMP_data)
  );/*verilator public_module*/
  ////////////////////////////////////////

  assign EXU_inB=(isI|isU|isB|isS|isJ)?imm:((|isCSR)?rs1_val:rs2_val);
  assign EXU_inA=(isI|isU|isB|isS|isJ)?((isPC)?PC:rs1_val):rs1_val;
  ysyx_26010011_EXU EXU_0(.inA(EXU_inA),.inB(EXU_inB),.op(op),.out(EXU_data));

  wire [31:0]COMP_inA,COMP_inB;
  assign COMP_inB=(isI)?imm:rs2_val;
  assign COMP_inA=rs1_val;
  ysyx_26010011_COMP COMP_0(.inA(COMP_inA),.inB(COMP_inB),.isCompSigned(isSigned),.isGREATER(isGREATER),.isEQUAL(isEQUAL));
  
  assign dnpc=(isECALL || lsu_access_fault)?csr_mtvec:(isMRET?csr_mepc:EXU_data);
  assign lsu_addr=EXU_data;
  assign lsu_wdata=rs2_val;
  ysyx_26010011_LSU LSU_0(
    .clock(clock),
    .reset(reset),
    .lsu_addr(lsu_addr),
    .lsu_rdata(lsu_rdata),
    .lsu_wdata(lsu_wdata),
    .lsu_wen(LSU_WEN),
    .lsu_reqEN(lsu_reqEN),
    .lsu_final(lsu_final),
    .rmask(LSU_rmask),
    .lsu_wmask(lsu_wmask),
    .isSigned(isSigned),
    .bus_valid(bus_valid),
    .lsu_access_fault(lsu_access_fault),

    .awaddr(DRAM_awaddr),
    .awvalid(DRAM_awvalid),
    .awready(DRAM_awready),
    .awid(DRAM_awid),
    .awlen(DRAM_awlen),
    .awsize(DRAM_awsize),
    .awburst(DRAM_awburst),
    .wdata(DRAM_wdata),
    .wstrb(DRAM_wstrb),
    .wvalid(DRAM_wvalid),
    .wready(DRAM_wready),
    .wlast(DRAM_wlast),
    .bresp(DRAM_bresp),
    .bvalid(DRAM_bvalid),
    .bready(DRAM_bready),
    .bid(DRAM_bid),

    .araddr(DRAM_araddr),
    .arvalid(DRAM_arvalid),
    .arready(DRAM_arready),
    .arid(DRAM_arid),
    .arlen(DRAM_arlen),
    .arsize(DRAM_arsize),
    .arbureset(DRAM_arbureset),
    .rdata(DRAM_rdata),
    .rresp(DRAM_rresp),
    .rvalid(DRAM_rvalid),
    .rready(DRAM_rready),
    .rlast(DRAM_rlast),
    .rid(DRAM_rid)
  );/*verilator public_module*/
  wire [31:0] DRAM_awaddr,DRAM_wdata,DRAM_araddr,DRAM_rdata;
  wire [3:0] DRAM_wstrb;
  wire DRAM_awvalid,DRAM_wvalid,DRAM_arvalid,DRAM_rvalid,DRAM_bvalid;
  wire DRAM_awready,DRAM_wready,DRAM_arready,DRAM_rready,DRAM_bready;
  wire [1:0] DRAM_bresp,DRAM_rresp;
  wire [3:0] DRAM_awid;  wire [7:0] DRAM_awlen;  wire [2:0] DRAM_awsize;  wire [1:0] DRAM_awburst;
  wire DRAM_wlast;
  wire [3:0] DRAM_bid;
  wire [3:0] DRAM_arid;  wire [7:0] DRAM_arlen;  wire [2:0] DRAM_arsize;  wire [1:0] DRAM_arbureset;
  wire DRAM_rlast;
  wire [3:0] DRAM_rid;


  ysyx_26010011_AXI4LiteArbiter RAM_AXI4LiteArbiter(
    .clock(clock),
    .reset(reset),

    //MASTER1 AW
    .M1_awaddr(0),            .M1_awvalid(0),             .M1_awready(),
    .M1_awid(0),              .M1_awlen(0),               .M1_awsize(0),             .M1_awburst(0),
    //MASTER1 W
    .M1_wdata(0),             .M1_wstrb(0),               .M1_wvalid(0),              .M1_wready(),
    .M1_wlast(0),
    //MASTER1 B
    .M1_bresp(),              .M1_bvalid(),               .M1_bready(0),
    .M1_bid(),
    //MASTER1 AR
    .M1_araddr(IROM_araddr),  .M1_arvalid(IROM_arvalid),  .M1_arready(IROM_arready),
    .M1_arid(IROM_arid),      .M1_arlen(IROM_arlen),      .M1_arsize(IROM_arsize),    .M1_arbureset(IROM_arbureset),
    //MASTER1 R
    .M1_rdata(IROM_rdata),    .M1_rresp(IROM_rresp),      .M1_rvalid(IROM_rvalid),    .M1_rready(IROM_rready),
    .M1_rlast(IROM_rlast),    .M1_rid(IROM_rid),

    //MASTER2 AW
    .M2_awaddr(DRAM_awaddr),  .M2_awvalid(DRAM_awvalid),  .M2_awready(DRAM_awready),
    .M2_awid(DRAM_awid),      .M2_awlen(DRAM_awlen),      .M2_awsize(DRAM_awsize),    .M2_awburst(DRAM_awburst),
    //MASTER2 W
    .M2_wdata(DRAM_wdata),    .M2_wstrb(DRAM_wstrb),      .M2_wvalid(DRAM_wvalid),    .M2_wready(DRAM_wready),
    .M2_wlast(DRAM_wlast),
    //MASTER2 B
    .M2_bresp(DRAM_bresp),    .M2_bvalid(DRAM_bvalid),    .M2_bready(DRAM_bready),
    .M2_bid(DRAM_bid),
    //MASTER2 AR
    .M2_araddr(DRAM_araddr),  .M2_arvalid(DRAM_arvalid),  .M2_arready(DRAM_arready),
    .M2_arid(DRAM_arid),      .M2_arlen(DRAM_arlen),      .M2_arsize(DRAM_arsize),    .M2_arbureset(DRAM_arbureset),
    //MASTER2 R
    .M2_rdata(DRAM_rdata),    .M2_rresp(DRAM_rresp),      .M2_rvalid(DRAM_rvalid),    .M2_rready(DRAM_rready),
    .M2_rlast(DRAM_rlast),    .M2_rid(DRAM_rid),

    //SLAVE AW
    .S_awaddr(io_master_awaddr),  .S_awvalid(io_master_awvalid),  .S_awready(io_master_awready),
    .S_awid(io_master_awid),      .S_awlen(io_master_awlen),      .S_awsize(io_master_awsize),    .S_awburst(io_master_awburst),
    //SLAVE W
    .S_wdata(io_master_wdata),    .S_wstrb(io_master_wstrb),      .S_wvalid(io_master_wvalid),    .S_wready(io_master_wready),
    .S_wlast(io_master_wlast),
    //SLAVE B
    .S_bresp(io_master_bresp),    .S_bvalid(io_master_bvalid),    .S_bready(io_master_bready),
    .S_bid(io_master_bid),
    //SLAVE AR
    .S_araddr(io_master_araddr),  .S_arvalid(io_master_arvalid),  .S_arready(io_master_arready),
    .S_arid(io_master_arid),      .S_arlen(io_master_arlen),      .S_arsize(io_master_arsize),    .S_arbureset(io_master_arburst),
    //SLAVE R
    .S_rdata(io_master_rdata),    .S_rresp(io_master_rresp),      .S_rvalid(io_master_rvalid),    .S_rready(io_master_rready),
    .S_rlast(io_master_rlast),    .S_rid(io_master_rid)
  );
  always @(posedge clock) begin
    if(isEBREAK)  ebreak();
  end
endmodule
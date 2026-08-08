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
  
  assign dnpc=isECALL?csr_mtvec:(isMRET?csr_mepc:EXU_data);
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

  // wire [31:0]S_araddr,S_rdata,S_awaddr,S_wdata;
  // wire S_arvalid,S_arready,S_rvalid,S_rready,S_awvalid,S_awready,S_wvalid,S_wready,S_bvalid,S_bready;
  // wire [1:0]S_rresp,S_bresp;
  // wire [3:0]S_wstrb;
  // wire [3:0] S_awid;  wire [7:0] S_awlen;  wire [2:0] S_awsize;  wire [1:0] S_awburst;
  // wire S_wlast;
  // wire [3:0] S_bid;
  // wire [3:0] S_arid;  wire [7:0] S_arlen;  wire [2:0] S_arsize;  wire [1:0] S_arbureset;
  // wire S_rlast;
  // wire [3:0] S_rid;
  // ysyx_26010011_bridge XBAR_Bridge_inst(
  //   .clock(clock),
  //   .reset(reset),

  //   // S side
  //   .S_awaddr(S_awaddr),  .S_awvalid(S_awvalid),  .S_awready(S_awready),
  //   .S_awid(S_awid),      .S_awlen(S_awlen),      .S_awsize(S_awsize),    .S_awburst(S_awburst),
  //   .S_wdata(S_wdata),    .S_wstrb(S_wstrb),      .S_wvalid(S_wvalid),    .S_wready(S_wready),
  //   .S_wlast(S_wlast),
  //   .S_bresp(S_bresp),    .S_bvalid(S_bvalid),    .S_bready(S_bready),
  //   .S_bid(S_bid),
  //   .S_araddr(S_araddr),  .S_arvalid(S_arvalid),  .S_arready(S_arready),
  //   .S_arid(S_arid),      .S_arlen(S_arlen),      .S_arsize(S_arsize),    .S_arbureset(S_arbureset),
  //   .S_rdata(S_rdata),    .S_rresp(S_rresp),      .S_rvalid(S_rvalid),    .S_rready(S_rready),
  //   .S_rlast(S_rlast),    .S_rid(S_rid),

  //   // ysyx_26010011_MEM
  //   .MEM_awaddr(RAM_awaddr),  .MEM_awvalid(RAM_awvalid),  .MEM_awready(RAM_awready),
  //   .MEM_awid(RAM_awid),      .MEM_awlen(RAM_awlen),      .MEM_awsize(RAM_awsize),    .MEM_awburst(RAM_awburst),
  //   .MEM_wdata(RAM_wdata),    .MEM_wstrb(RAM_wstrb),      .MEM_wvalid(RAM_wvalid),    .MEM_wready(RAM_wready),
  //   .MEM_wlast(RAM_wlast),
  //   .MEM_bresp(RAM_bresp),    .MEM_bvalid(RAM_bvalid),    .MEM_bready(RAM_bready),
  //   .MEM_bid(RAM_bid),
  //   .MEM_araddr(RAM_araddr),  .MEM_arvalid(RAM_arvalid),  .MEM_arready(RAM_arready),
  //   .MEM_arid(RAM_arid),      .MEM_arlen(RAM_arlen),      .MEM_arsize(RAM_arsize),    .MEM_arbureset(RAM_arbureset),
  //   .MEM_rdata(RAM_rdata),    .MEM_rresp(RAM_rresp),      .MEM_rvalid(RAM_rvalid),    .MEM_rready(RAM_rready),
  //   .MEM_rlast(RAM_rlast),    .MEM_rid(RAM_rid),

  //   // ysyx_26010011_UART
  //   .UART_awaddr(UART_awaddr),  .UART_awvalid(UART_awvalid),  .UART_awready(UART_awready),
  //   .UART_awid(UART_awid),      .UART_awlen(UART_awlen),      .UART_awsize(UART_awsize),    .UART_awburst(UART_awburst),
  //   .UART_wdata(UART_wdata),    .UART_wstrb(UART_wstrb),      .UART_wvalid(UART_wvalid),    .UART_wready(UART_wready),
  //   .UART_wlast(UART_wlast),
  //   .UART_bresp(UART_bresp),    .UART_bvalid(UART_bvalid),    .UART_bready(UART_bready),
  //   .UART_bid(UART_bid),
  //   .UART_araddr(UART_araddr),  .UART_arvalid(UART_arvalid),  .UART_arready(UART_arready),
  //   .UART_arid(UART_arid),      .UART_arlen(UART_arlen),      .UART_arsize(UART_arsize),    .UART_arbureset(UART_arbureset),
  //   .UART_rdata(UART_rdata),    .UART_rresp(UART_rresp),      .UART_rvalid(UART_rvalid),    .UART_rready(UART_rready),
  //   .UART_rlast(UART_rlast),    .UART_rid(UART_rid),

  //   // ysyx_26010011_CLINT
  //   .CLINT_awaddr(CLINT_awaddr),  .CLINT_awvalid(CLINT_awvalid),  .CLINT_awready(CLINT_awready),
  //   .CLINT_awid(CLINT_awid),      .CLINT_awlen(CLINT_awlen),      .CLINT_awsize(CLINT_awsize),    .CLINT_awburst(CLINT_awburst),
  //   .CLINT_wdata(CLINT_wdata),    .CLINT_wstrb(CLINT_wstrb),      .CLINT_wvalid(CLINT_wvalid),    .CLINT_wready(CLINT_wready),
  //   .CLINT_wlast(CLINT_wlast),
  //   .CLINT_bresp(CLINT_bresp),    .CLINT_bvalid(CLINT_bvalid),    .CLINT_bready(CLINT_bready),
  //   .CLINT_bid(CLINT_bid),
  //   .CLINT_araddr(CLINT_araddr),  .CLINT_arvalid(CLINT_arvalid),  .CLINT_arready(CLINT_arready),
  //   .CLINT_arid(CLINT_arid),      .CLINT_arlen(CLINT_arlen),      .CLINT_arsize(CLINT_arsize),    .CLINT_arbureset(CLINT_arbureset),
  //   .CLINT_rdata(CLINT_rdata),    .CLINT_rresp(CLINT_rresp),      .CLINT_rvalid(CLINT_rvalid),    .CLINT_rready(CLINT_rready),
  //   .CLINT_rlast(CLINT_rlast),    .CLINT_rid(CLINT_rid)
  // );
  // wire [31:0] RAM_awaddr,RAM_wdata,RAM_araddr,RAM_rdata;
  // wire [3:0] RAM_wstrb;
  // wire RAM_awvalid,RAM_wvalid,RAM_arvalid,RAM_rvalid,RAM_bvalid;
  // wire RAM_awready,RAM_wready,RAM_arready,RAM_rready,RAM_bready;
  // wire [1:0] RAM_bresp,RAM_rresp;
  // wire [3:0] RAM_awid;  wire [7:0] RAM_awlen;  wire [2:0] RAM_awsize;  wire [1:0] RAM_awburst;
  // wire RAM_wlast;
  // wire [3:0] RAM_bid;
  // wire [3:0] RAM_arid;  wire [7:0] RAM_arlen;  wire [2:0] RAM_arsize;  wire [1:0] RAM_arbureset;
  // wire RAM_rlast;
  // wire [3:0] RAM_rid;
  // ysyx_26010011_MEM RAM(
  //   .clock(clock),
  //   .reset(reset),

  //   .araddr(RAM_araddr),
  //   .arvalid(RAM_arvalid),
  //   .arready(RAM_arready),
  //   .arid(RAM_arid),
  //   .arlen(RAM_arlen),
  //   .arsize(RAM_arsize),
  //   .arbureset(RAM_arbureset),

  //   .rdata(RAM_rdata),
  //   .rresp(RAM_rresp),
  //   .rvalid(RAM_rvalid),
  //   .rready(RAM_rready),
  //   .rlast(RAM_rlast),
  //   .rid(RAM_rid),

  //   .awaddr(RAM_awaddr),
  //   .awvalid(RAM_awvalid),
  //   .awready(RAM_awready),
  //   .awid(RAM_awid),
  //   .awlen(RAM_awlen),
  //   .awsize(RAM_awsize),
  //   .awburst(RAM_awburst),

  //   .wdata(RAM_wdata),
  //   .wstrb(RAM_wstrb),
  //   .wvalid(RAM_wvalid),
  //   .wready(RAM_wready),
  //   .wlast(RAM_wlast),

  //   .bresp(RAM_bresp),
  //   .bvalid(RAM_bvalid),
  //   .bready(RAM_bready),
  //   .bid(RAM_bid)
  // );

  // wire [31:0] UART_awaddr,UART_wdata,UART_araddr,UART_rdata;
  // wire [3:0] UART_wstrb;
  // wire UART_awvalid,UART_wvalid,UART_arvalid,UART_rvalid,UART_bvalid;
  // wire UART_awready,UART_wready,UART_arready,UART_rready,UART_bready;
  // wire [1:0] UART_bresp,UART_rresp;
  // wire [3:0] UART_awid;  wire [7:0] UART_awlen;  wire [2:0] UART_awsize;  wire [1:0] UART_awburst;
  // wire UART_wlast;
  // wire [3:0] UART_bid;
  // wire [3:0] UART_arid;  wire [7:0] UART_arlen;  wire [2:0] UART_arsize;  wire [1:0] UART_arbureset;
  // wire UART_rlast;
  // wire [3:0] UART_rid;
  // ysyx_26010011_UART UART_inst(
  //   .clock(clock),
  //   .reset(reset),

  //   .araddr(UART_araddr),
  //   .arvalid(UART_arvalid),
  //   .arready(UART_arready),
  //   .arid(UART_arid),
  //   .arlen(UART_arlen),
  //   .arsize(UART_arsize),
  //   .arbureset(UART_arbureset),

  //   .rdata(UART_rdata),
  //   .rresp(UART_rresp),
  //   .rvalid(UART_rvalid),
  //   .rready(UART_rready),
  //   .rlast(UART_rlast),
  //   .rid(UART_rid),

  //   .awaddr(UART_awaddr),
  //   .awvalid(UART_awvalid),
  //   .awready(UART_awready),
  //   .awid(UART_awid),
  //   .awlen(UART_awlen),
  //   .awsize(UART_awsize),
  //   .awburst(UART_awburst),

  //   .wdata(UART_wdata),
  //   .wstrb(UART_wstrb),
  //   .wvalid(UART_wvalid),
  //   .wready(UART_wready),
  //   .wlast(UART_wlast),

  //   .bresp(UART_bresp),
  //   .bvalid(UART_bvalid),
  //   .bready(UART_bready),
  //   .bid(UART_bid)
  // );

  // wire [31:0] CLINT_awaddr,CLINT_wdata,CLINT_araddr,CLINT_rdata;
  // wire [3:0] CLINT_wstrb;
  // wire CLINT_awvalid,CLINT_wvalid,CLINT_arvalid,CLINT_rvalid,CLINT_bvalid;
  // wire CLINT_awready,CLINT_wready,CLINT_arready,CLINT_rready,CLINT_bready;
  // wire [1:0] CLINT_bresp,CLINT_rresp;
  // wire [3:0] CLINT_awid;  wire [7:0] CLINT_awlen;  wire [2:0] CLINT_awsize;  wire [1:0] CLINT_awburst;
  // wire CLINT_wlast;
  // wire [3:0] CLINT_bid;
  // wire [3:0] CLINT_arid;  wire [7:0] CLINT_arlen;  wire [2:0] CLINT_arsize;  wire [1:0] CLINT_arbureset;
  // wire CLINT_rlast;
  // wire [3:0] CLINT_rid;
  // ysyx_26010011_CLINT CLINT_inst(
  //   .clock(clock),
  //   .reset(reset),

  //   .araddr(CLINT_araddr),
  //   .arvalid(CLINT_arvalid),
  //   .arready(CLINT_arready),
  //   .arid(CLINT_arid),
  //   .arlen(CLINT_arlen),
  //   .arsize(CLINT_arsize),
  //   .arbureset(CLINT_arbureset),

  //   .rdata(CLINT_rdata),
  //   .rresp(CLINT_rresp),
  //   .rvalid(CLINT_rvalid),
  //   .rready(CLINT_rready),
  //   .rlast(CLINT_rlast),
  //   .rid(CLINT_rid),

  //   .awaddr(CLINT_awaddr),
  //   .awvalid(CLINT_awvalid),
  //   .awready(CLINT_awready),
  //   .awid(CLINT_awid),
  //   .awlen(CLINT_awlen),
  //   .awsize(CLINT_awsize),
  //   .awburst(CLINT_awburst),

  //   .wdata(CLINT_wdata),
  //   .wstrb(CLINT_wstrb),
  //   .wvalid(CLINT_wvalid),
  //   .wready(CLINT_wready),
  //   .wlast(CLINT_wlast),

  //   .bresp(CLINT_bresp),
  //   .bvalid(CLINT_bvalid),
  //   .bready(CLINT_bready),
  //   .bid(CLINT_bid)
  // );

  always @(posedge clock) begin
    if(isEBREAK)  ebreak();
  end
endmodule
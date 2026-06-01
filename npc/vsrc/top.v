import "DPI-C" function void ebreak();
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

module top(
  input clk,
  input rst,

  output [31:0]lsu_addr,
  output [3:0]LSU_rmask,lsu_wmask,
  output [31:0]lsu_wdata,
  output LSU_WEN,
  output [31:0]lsu_rdata,
  output [31:0]PC_command,
  output [31:0] EXU_inA,EXU_inB,EXU_data,CSR_data,
    output [31:0] rs1_val,rs2_val,reg_data,
    output [31:0] imm,
  output COMP_data
);
  wire [31:0]PC/* verilator public */,dnpc/* verilator public */,snpc/* verilator public */;
  // verilator lint_off PINMISSING
  wire lsu_final,lsu_reqEN,wbu_final;
  wire [31:0] command;
  
  wire isR,isI,isS,isB,isU,isJ,isCR;

  wire [4:0] rd_add,rs1_add,rs2_add,gpr_address;
  wire [11:0] rcsr_add;

  
  wire gpr_WEN;
  wire isEBREAK,isECALL,isMRET,isLOAD,isSTORE,isWRITE,isJUMP,isSigned,isPC;
  wire [1:0]isCSR;
  wire isGREATER,isEQUAL,isBRANCH,isCOMPARE;
  wire [9:0]op;
  wire [31:0]csr_mepc,csr_mtvec;
  wire bus_valid;
  REG REG_0(.clk(clk),.rst(rst),.addRA(rs1_add),.addRB(rs2_add),.addW(gpr_address),.addCSR(rcsr_add),.outA(rs1_val),.outB(rs2_val),.inData(reg_data),.gpr_WEN(gpr_WEN),.CSR_BUS(CSR_data),.WCSREN(|isCSR),.isECALL(isECALL),.isMRET(isMRET),.csr_mepc(csr_mepc),.csr_mtvec(csr_mtvec),.pc(PC),.bus_valid(bus_valid));/*verilator public_module*/
  WBU WBU_0(.clk(clk),.rst(rst),.LSU_data(lsu_rdata),.EXU_data(EXU_data),.COMP_data(COMP_data),.address(rd_add),.isLOAD(isLOAD),.isWRITE(isWRITE),.isJUMP(isJUMP),.snpc(snpc),.gpr_WEN(gpr_WEN),.reg_data(reg_data),.gpr_address(gpr_address),.isCOMPARE(isCOMPARE),.CSR_data(CSR_data),.isCSR(isCSR),.lsu_final(lsu_final),.wbu_final(wbu_final),.isSTORE(isSTORE));
  
  IFU IFU_0(
    .clk(clk),
    .rst(rst),
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
    .rdata(IROM_rdata),
    .rresp(IROM_rresp),
    .rvalid(IROM_rvalid),
    .rready(IROM_rready)
    
  );/*verilator public_module*/
  wire [31:0] IROM_araddr,IROM_rdata;
  wire IROM_arvalid,IROM_arready,IROM_rvalid,IROM_rready;
  wire [1:0] IROM_rresp;
  MEM IROM(
    .clk(clk),
    .rst(rst),

    .araddr(IROM_araddr),
    .arvalid(IROM_arvalid),
    .arready(IROM_arready),

    .rdata(IROM_rdata),
    .rresp(IROM_rresp),
    .rvalid(IROM_rvalid),
    .rready(IROM_rready),

    .awaddr(0),
    .awvalid(0),
    .awready(),

    .wdata(0),
    .wstrb(0),
    .wvalid(0),
    .wready(),
    
    .bresp(),
    .bvalid(),
    .bready(0)
);

  IDU IDU_0(
    .clk(clk),
    .rst(rst),
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
  EXU EXU_0(.inA(EXU_inA),.inB(EXU_inB),.op(op),.out(EXU_data));

  wire [31:0]COMP_inA,COMP_inB;
  assign COMP_inB=(isI)?imm:rs2_val;
  assign COMP_inA=rs1_val;
  COMP COMP_0(.inA(COMP_inA),.inB(COMP_inB),.isCompSigned(isSigned),.isGREATER(isGREATER),.isEQUAL(isEQUAL));
  
  assign dnpc=isECALL?csr_mtvec:(isMRET?csr_mepc:EXU_data);
  assign lsu_addr=EXU_data;
  assign lsu_wdata=rs2_val;
  LSU LSU_0(
    .clk(clk),
    .rst(rst),
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
    .wdata(DRAM_wdata),
    .wstrb(DRAM_wstrb),
    .wvalid(DRAM_wvalid),
    .wready(DRAM_wready),
    .bresp(DRAM_bresp),
    .bvalid(DRAM_bvalid),
    .bready(DRAM_bready),

    .araddr(DRAM_araddr),
    .arvalid(DRAM_arvalid),
    .arready(DRAM_arready),
    .rdata(DRAM_rdata),
    .rresp(DRAM_rresp),
    .rvalid(DRAM_rvalid),
    .rready(DRAM_rready)
  );/*verilator public_module*/
  wire [31:0] DRAM_awaddr,DRAM_wdata,DRAM_araddr,DRAM_rdata;
  wire [3:0] DRAM_wstrb;
  wire DRAM_awvalid,DRAM_wvalid,DRAM_arvalid,DRAM_rvalid,DRAM_bvalid;
  wire DRAM_awready,DRAM_wready,DRAM_arready,DRAM_rready,DRAM_bready;
  wire [1:0] DRAM_bresp,DRAM_rresp;
  MEM DRAM(
    .clk(clk),
    .rst(rst),

    .araddr(DRAM_araddr),
    .arvalid(DRAM_arvalid),
    .arready(DRAM_arready),

    .rdata(DRAM_rdata),
    .rresp(DRAM_rresp),
    .rvalid(DRAM_rvalid),
    .rready(DRAM_rready),

    .awaddr(DRAM_awaddr),
    .awvalid(DRAM_awvalid),
    .awready(DRAM_awready),

    .wdata(DRAM_wdata),
    .wstrb(DRAM_wstrb),
    .wvalid(DRAM_wvalid),
    .wready(DRAM_wready),
    
    .bresp(DRAM_bresp),
    .bvalid(DRAM_bvalid),
    .bready(DRAM_bready)
  );

  always @(posedge clk) begin
    if(isEBREAK)  ebreak();
  end
endmodule
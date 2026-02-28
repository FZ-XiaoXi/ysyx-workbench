import "DPI-C" function void ebreak();
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);


module top(
  input clk,
  input rst,

  output [31:0]LSU_address,
  output [3:0]LSU_rmask,LSU_wmask,
  output [31:0]LSU_writedata,
  output LSU_WEN,
  output LSU_REN,
  output [31:0]LSU_readdata,
  output [31:0]PC_command,
  output [31:0] EXU_inA,EXU_inB,EXU_data,CSR_data,
    output [31:0] rs1_val,rs2_val,reg_data,
    output [31:0] imm,
  output COMP_data
);
  wire [31:0]PC/* verilator public */,dnpc/* verilator public */,snpc/* verilator public */;
  // verilator lint_off PINMISSING

  wire [31:0] command;
  
  wire isR,isI,isS,isB,isU,isJ,isCR;

  wire [4:0] rd_add,rs1_add,rs2_add,gpr_address;
  wire [11:0] rcsr_add;

  
  wire gpr_WEN;
  wire isEBREAK,isECALL,isMRET,isLOAD,isWRITE,isJUMP,isSigned,isPC;
  wire [1:0]isCSR;
  wire isGREATER,isEQUAL,isBRANCH,isCOMPARE;
  wire [9:0]op;
  wire [31:0]csr_mepc,csr_mtvec;
  
  REG REG_0(.clk(clk),.rst(rst),.addRA(rs1_add),.addRB(rs2_add),.addW(gpr_address),.addCSR(rcsr_add),.outA(rs1_val),.outB(rs2_val),.inData(reg_data),.WEN(gpr_WEN),.CSR_BUS(CSR_data),.WCSREN(|isCSR),.isECALL(isECALL),.isMRET(isMRET),.csr_mepc(csr_mepc),.csr_mtvec(csr_mtvec),.pc(PC));/*verilator public_module*/
  WBU WBU_0(.clk(clk),.rst(rst),.LSU_data(LSU_readdata),.EXU_data(EXU_data),.COMP_data(COMP_data),.address(rd_add),.isLOAD(isLOAD),.isWRITE(isWRITE),.isJUMP(isJUMP),.snpc(snpc),.gpr_WEN(gpr_WEN),.reg_data(reg_data),.gpr_address(gpr_address),.isCOMPARE(isCOMPARE),.CSR_data(CSR_data),.isCSR(isCSR));
  IFU IFU_0(.clk(clk),.rst(rst),.PC(PC),.dnpc(dnpc),.snpc(snpc),.isJUMP(isJUMP),.PC_command(PC_command),.isBRANCH(isBRANCH),.isECALL(isECALL),.isMRET(isMRET));
  //LSU LSU_0(.address({2'b00,value[31:2]}),.data(LSU_readdata),.wdata(LSU_writedata),.range(LSU_rmask),.clk(clk),.writeEN(LSU_WEN),.PC_address({2'b00,PC[31:2]}),.PC_data(PC_command));
  IDU IDU_0(
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
    .LSU_wmask(LSU_wmask),
    .isLOAD(isLOAD),
    .isWRITE(isWRITE),
    .isJUMP(isJUMP),
    .isCOMPARE(isCOMPARE),
    .isEBREAK(isEBREAK),
    .isECALL(isECALL),
    .isMRET(isMRET),
    .isSigned(isSigned),
    .isCSR(isCSR),
    .LSU_WEN(LSU_WEN),
    .LSU_REN(LSU_REN),
    .isPC(isPC),
    .isGREATER(isGREATER),
    .isEQUAL(isEQUAL),
    .isBRANCH(isBRANCH),
    .COMP_data(COMP_data)
  );
  ////////////////////////////////////////

  assign EXU_inB=(isI|isU|isB|isS|isJ)?imm:((|isCSR)?rs1_val:rs2_val);
  assign EXU_inA=(isI|isU|isB|isS|isJ)?((isPC)?PC:rs1_val):rs1_val;
  EXU EXU_0(.inA(EXU_inA),.inB(EXU_inB),.op(op),.out(EXU_data));

  wire [31:0]COMP_inA,COMP_inB;
  assign COMP_inB=(isI)?imm:rs2_val;
  assign COMP_inA=rs1_val;
  COMP COMP_0(.inA(COMP_inA),.inB(COMP_inB),.isCompSigned(isSigned),.isGREATER(isGREATER),.isEQUAL(isEQUAL));
  
  assign dnpc=isECALL?csr_mtvec:(isMRET?csr_mepc:EXU_data);
  assign LSU_address=EXU_data;
  assign LSU_writedata=rs2_val;
  LSU LSU_0(.clk(clk),.writeEN(LSU_WEN),.address(LSU_address),.rdata(LSU_readdata),.wdata(LSU_writedata),.rmask(LSU_rmask),.wmask(LSU_wmask),.isSigned(isSigned),.readEN(LSU_REN));
  always @(posedge clk) begin
    if(isEBREAK)  ebreak();
  end
endmodule
import "DPI-C" function void ebreak();



module top(
  input clk,
  input rst,

  output [31:0]LSU_address,
  output [3:0]LSU_range,
  output [31:0]LSU_writedata,
  output LSU_WEN,
  input [31:0]LSU_readdata,
  output [31:0]PC,
  output [31:0]PC_command,

  output [31:0]GPRTEST[31:0]
);

  // verilator lint_off PINMISSING
  wire clk0,clk1,clk2;
  clkdiv clkdiv_0(clk,rst,clk0,clk1,clk2);
  wire [31:0] imm;
  wire [31:0] command;
  wire [31:0] dnpc,snpc;
  wire isR,isI,isS,isB,isU,isJ;

  wire [4:0] rd_add,rs1_add,rs2_add,gpr_address;
  wire [31:0] rs1_val,rs2_val,gpr_data;
  wire [31:0] EXU_inA,EXU_inB,EXU_data;
  wire gpr_WEN;
  wire isEBREAK,isLOAD,isWRITE,isJUMP;
  wire [9:0]op;
  assign LSU_range=4'b1111;
  assign LSU_writedata=0;
  assign LSU_WEN=0;
  GPR GPR_0(.clk(clk),.rst(rst),.addRA(rs1_add),.addRB(rs2_add),.addW(gpr_address),.outA(rs1_val),.outB(rs2_val),.inData(gpr_data),.WEN(gpr_WEN),.GPRTEST(GPRTEST));
  WBU WBU_0(.clk(clk),.rst(rst),.LSU_data(LSU_readdata),.EXU_data(EXU_data),.address(rd_add),.isLOAD(isLOAD),.isWRITE(isWRITE),.isJUMP(isJUMP),.snpc(snpc),.gpr_WEN(gpr_WEN),.gpr_data(gpr_data),.gpr_address(gpr_address));
  IFU IFU_0(.clk(clk),.rst(rst),.PC(PC),.dnpc(dnpc),.snpc(snpc),.isJUMP(isJUMP),.PC_command(PC_command));
  //LSU LSU_0(.address({2'b00,value[31:2]}),.data(LSU_readdata),.wdata(LSU_writedata),.range(LSU_range),.clk(clk),.writeEN(LSU_WEN),.PC_address({2'b00,PC[31:2]}),.PC_data(PC_command));
  IDU IDU_0(.command(PC_command),.opcode(),.imm(imm),.rd(rd_add),.rs1(rs1_add),.rs2(rs2_add),.op(op),.ctype({isR,isI,isS,isB,isU,isJ}),.isLOAD(isLOAD),.isWRITE(isWRITE),.isJUMP(isJUMP),.isEBREAK(isEBREAK));
  assign EXU_inA=(isI|isU|isB)?imm:rs1_val;
  assign EXU_inB=(isI|isU|isB)?rs1_val:rs2_val;
  EXU EXU_0(.inA(EXU_inA),.inB(EXU_inB),.op(op),.out(EXU_data));
  assign dnpc=EXU_data;

  always @(isEBREAK) begin
    if(isEBREAK)  ebreak();
  end
endmodule


module clkdiv(
  input clk,
  input rst,
  output clk0,
  output clk1,
  output clk2
);
  reg [2:0] cnt;
  always @(posedge clk,posedge rst) begin
    if(rst) cnt<=3'b001;
    else cnt<={cnt[1:0],cnt[2:2]};
    //$display("clkdiv: cnt=%b, clk0=%b, clk1=%b, clk2=%b", cnt, clk0, clk1, clk2);
  end
  assign clk0=cnt[0];
  assign clk1=cnt[1];
  assign clk2=cnt[2];
endmodule


module GPR(
  input clk,
  input rst,
  input [4:0]addRA,
  input [4:0]addRB,
  input [4:0]addW,
  output [31:0]outA,
  output [31:0]outB,
  input [31:0]inData,
  output [31:0]GPRTEST[31:0],
  input WEN
);
  reg [31:0]GPR[31:0];

  assign outA=(addRA==0)?{32{1'b0}}:GPR[addRA];
  assign outB=(addRB==0)?{32{1'b0}}:GPR[addRB];

  always @(posedge clk,posedge rst) begin
    if(rst) begin
      for(int i=0;i<32;i=i+1) begin
        GPR[i]<={32{1'b0}};
      end
    end else begin
      GPR[addW]<=(addW==5'b00000)?{32{1'b0}}:inData;
    end
  end

  assign GPRTEST=GPR;
endmodule
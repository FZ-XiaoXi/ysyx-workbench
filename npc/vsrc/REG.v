import "DPI-C" function void difftest_skip_ref();
module REG(
  input clk,
  input rst,
  input [4:0]addRA,
  input [4:0]addRB,
  input [11:0]addCSR,
  input [4:0]addW,
  input [31:0]inData,
  input [31:0]inCSRData,
  input [31:0]pc,
  output [31:0]outA,
  output [31:0]outB,
  output reg [31:0]CSR_BUS,
  output [31:0]csr_mtvec,
  output [31:0]csr_mepc,
  input WCSREN,
  input WEN,
  input isECALL,
  input isMRET
); 
  parameter [11:0]ADD_MCYCLE = 12'hb00;
  parameter [11:0]ADD_MCYCLEH = 12'hb80;
  parameter [11:0]ADD_MTVEC = 12'h305;
  parameter [11:0]ADD_MEPC = 12'h341;
  parameter [11:0]ADD_MCAUSE = 12'h342;
  parameter [11:0]ADD_MSTATUS = 12'h300;
  parameter [11:0]ADD_MVENDORID = 12'hf11;
  parameter [11:0]ADD_MARCHID = 12'hf12;

  reg [31:0]GPR[31:0]/* verilator public */;

  reg [31:0]CSR_MCYCLE/* verilator public */;
  reg [31:0]CSR_MCYCLEH/* verilator public */;
  reg [31:0]CSR_MTVEC/* verilator public */;
  reg [31:0]CSR_MEPC/* verilator public */;
  reg [31:0]CSR_MCAUSE/* verilator public */;
  reg [31:0]CSR_MSTATUS/* verilator public */;
  reg [31:0]CSR_MVENDORID/* verilator public */;
  reg [31:0]CSR_MARCHID/* verilator public */;

  assign outA=(addRA==0)?{32{1'b0}}:GPR[addRA];
  assign outB=(addRB==0)?{32{1'b0}}:GPR[addRB];

  always @(*) begin
    case(addCSR)
      ADD_MCYCLE:   CSR_BUS = CSR_MCYCLE;
      ADD_MCYCLEH:   CSR_BUS = CSR_MCYCLEH;
      ADD_MTVEC:   CSR_BUS = CSR_MTVEC;
      ADD_MEPC:   CSR_BUS = CSR_MEPC;
      ADD_MCAUSE:   CSR_BUS = CSR_MCAUSE;
      ADD_MSTATUS:   CSR_BUS = CSR_MSTATUS;
      ADD_MVENDORID:   CSR_BUS = CSR_MVENDORID;
      ADD_MARCHID:   CSR_BUS = CSR_MARCHID;
      default:      CSR_BUS = 32'h2b2b2b2b;
    endcase
  end

  always @(posedge clk,posedge rst) begin
    if(rst) begin
      CSR_MCYCLE <= 0;
      CSR_MCYCLEH <= 0;
      CSR_MTVEC <= 0;
      CSR_MEPC <= 0;
      CSR_MCAUSE <= 0;
      CSR_MSTATUS <= 32'h1800;
      CSR_MVENDORID <= 32'h79737978;
      CSR_MARCHID <= 32'h018ce19b;
    end else begin
      if(WCSREN) begin
        case (addCSR)
            ADD_MTVEC:      CSR_MTVEC   <= inData;
            ADD_MEPC:       CSR_MEPC    <= inData;
            ADD_MCAUSE:     CSR_MCAUSE  <= inData;
            ADD_MSTATUS:    CSR_MSTATUS <= inData;
            default:;
        endcase
      end else if(isECALL)begin
        CSR_MEPC   <= pc;
        CSR_MCAUSE <= 32'd11;
      end

      CSR_MCYCLE <= CSR_MCYCLE + 1;
      CSR_MCYCLEH <= (&CSR_MCYCLE)?(CSR_MCYCLEH + 1):CSR_MCYCLEH;
    end
  end

  always @(posedge clk,posedge rst) begin
    if(rst) begin
      for(int i=0;i<32;i=i+1) begin
        GPR[i]<={32{1'b0}};
      end
    end else if(WEN | WCSREN) begin
      GPR[addW]<=(addW==5'b00000)?{32{1'b0}}:(WCSREN?CSR_BUS:inData);
    end else begin
      GPR[addW]<=GPR[addW];
    end
  end

    always @(*) begin
        if(WCSREN & ((addCSR==ADD_MCYCLE) | (addCSR==ADD_MCYCLEH)))  difftest_skip_ref();
    end
    assign csr_mepc  = CSR_MEPC;
    assign csr_mtvec = CSR_MTVEC;
endmodule
import "DPI-C" function void difftest_skip_ref(int reason);
`include "ysyx_26010011_csr_defines.v"
module ysyx_26010011_GPRs(
  input        clock,
  input        reset,
  input  [ 4:0]gpr_in_addra,
  input  [ 4:0]gpr_in_addrb,
  output [31:0]gpr_out_a,
  output [31:0]gpr_out_b,
  input  [ 4:0]gpr_in_addw,
  input  [31:0]gpr_in_data,
  input        gpr_in_wen
); 
  

  reg [31:0]GPR[31:0]/* verilator public */;

  

  assign gpr_out_a=(gpr_in_addra==0)?{32{1'b0}}:GPR[gpr_in_addra];
  assign gpr_out_b=(gpr_in_addrb==0)?{32{1'b0}}:GPR[gpr_in_addrb];

  
  integer i;
  always @(posedge clock) begin
    if(reset) begin
      for(i=0;i<32;i=i+1) begin
        GPR[i]<={32{1'b0}};
      end
    end else begin
      if(gpr_in_wen) begin
        GPR[gpr_in_addw]<=(gpr_in_addw==5'b00000)?{32{1'b0}}:(gpr_in_data);
      end
    end
  end



endmodule

module ysyx_26010011_CSRs(
  input            clock,
  input            reset,

  input      [11:0]csr_in_addr,
  output reg [31:0]csr_out_data,

  input      [31:0]csr_pc,
  input      [31:0]csr_in_data,
  input            csr_in_wen,
  input      [11:0]csr_in_addw,

  output     [31:0]csr_mtvec,
  output     [31:0]csr_mepc,
  
  input [4:0]csr_in_bus_exception
);


  reg [31:0]CSR_MCYCLE/* verilator public */;
  reg [31:0]CSR_MCYCLEH/* verilator public */;
  reg [31:0]CSR_MISA/* verilator public */;
  reg [31:0]CSR_MTVEC/* verilator public */;
  reg [31:0]CSR_MSCRATCH/* verilator public */;
  reg [31:0]CSR_MEPC/* verilator public */;
  reg [31:0]CSR_MCAUSE/* verilator public */;
  reg [31:0]CSR_MSTATUS/* verilator public */;
  reg [31:0]CSR_MVENDORID/* verilator public */;
  reg [31:0]CSR_MARCHID/* verilator public */;
  reg [31:0]CSR_MTVAL/* verilator public */;

  always @(*) begin
    case(csr_in_addr)
      `ADD_MCYCLE:   csr_out_data = CSR_MCYCLE;
      `ADD_MCYCLEH:   csr_out_data = CSR_MCYCLEH;
      `ADD_MISA:   csr_out_data = CSR_MISA;
      `ADD_MTVEC:   csr_out_data = CSR_MTVEC;
      `ADD_MSCRATCH:   csr_out_data = CSR_MSCRATCH;
      `ADD_MEPC:   csr_out_data = CSR_MEPC;
      `ADD_MCAUSE:   csr_out_data = CSR_MCAUSE;
      `ADD_MSTATUS:   csr_out_data = CSR_MSTATUS;
      `ADD_MVENDORID:   csr_out_data = CSR_MVENDORID;
      `ADD_MARCHID:   csr_out_data = CSR_MARCHID;
      `ADD_MTVAL:      csr_out_data = CSR_MTVAL;
      
      default:      csr_out_data = 32'h2b2b2b2b;
    endcase
  end

  always @(posedge clock) begin
    if(reset) begin
      CSR_MCYCLE <= 0;
      CSR_MCYCLEH <= 0;
      CSR_MISA <= 32'h40000100;
      CSR_MTVEC <= 32'h0;
      CSR_MSCRATCH <= 0;
      CSR_MEPC <= 0;
      CSR_MCAUSE <= 0;
      CSR_MSTATUS <= 32'h1800;
      CSR_MVENDORID <= 32'h79737978;
      CSR_MARCHID <= 32'h018ce19b;
      CSR_MTVAL <= 32'h00;
    end else if(1) begin
      if(csr_in_bus_exception[4]) begin
        if(csr_in_bus_exception[3:0] != `EXCEPTION_MRET) begin
          CSR_MEPC    <= csr_pc;
          CSR_MCAUSE  <= {1'b0, 27'b0, csr_in_bus_exception[3:0]};
        end
      end else if(csr_in_wen) begin
        case (csr_in_addw)
            `ADD_MTVEC:      CSR_MTVEC   <= csr_in_data;
            `ADD_MSCRATCH: begin
                 CSR_MSCRATCH <= csr_in_data;
                 $display("Write CSR_MSCRATCH: %08x", csr_in_data);
            end
            `ADD_MEPC:       CSR_MEPC    <= csr_in_data;
            `ADD_MCAUSE:     CSR_MCAUSE  <= csr_in_data;
            `ADD_MSTATUS:    CSR_MSTATUS <= csr_in_data;
            `ADD_MTVAL:      CSR_MTVAL   <= csr_in_data;
            default:;
        endcase
      end

      CSR_MCYCLE <= CSR_MCYCLE + 1;
      CSR_MCYCLEH <= (&CSR_MCYCLE)?(CSR_MCYCLEH + 1):CSR_MCYCLEH;
    end
  end

  assign csr_mepc  = CSR_MEPC;
  assign csr_mtvec = CSR_MTVEC;



  always @(*) begin
      if (csr_in_wen & ((csr_in_addw==`ADD_MCYCLE) | (csr_in_addw==`ADD_MCYCLEH))) begin
         difftest_skip_ref(4);
      end
  end
endmodule
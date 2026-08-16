module ysyx_26010011_EXU(
    input            clock,
    input            reset,
    input            flush_valid,

    input            exu_in_valid,
    output           exu_in_ready,
    input      [31:0]exu_in_bus_a,
    input      [31:0]exu_in_bus_b,
    input      [31:0]exu_in_bus_pc,
    input      [31:0]exu_in_bus_imm,
    input      [ 9:0]exu_in_bus_alu_op,
    input      [ 1:0]exu_in_bus_comp_op,
    input      [ 2:0]exu_in_bus_opCSR,
    input            exu_in_bus_isUnSigned,
    input            exu_in_bus_isUsePC,//PC+imm
    input            exu_in_bus_alu_isUseImm,//imm
    input            exu_in_bus_comp_isUseImm,//imm


    output           exu_out_valid,
    input            exu_out_ready,
    output reg [31:0]exu_out_bus_alu_result,
    output reg [31:0]exu_out_bus_csr_result,
    output reg       exu_out_bus_comp_result

);
    wire [31:0] a,b,comp_a,comp_b;
    assign a=(exu_in_bus_alu_isUseImm)?(exu_in_bus_isUsePC?exu_in_bus_pc:exu_in_bus_a):exu_in_bus_a;
    assign b=(exu_in_bus_alu_isUseImm)?exu_in_bus_imm:exu_in_bus_b;
    assign comp_a=exu_in_bus_a;
    assign comp_b=(exu_in_bus_comp_isUseImm)?exu_in_bus_imm:exu_in_bus_b;


    assign exu_in_ready = exu_out_ready;
    assign exu_out_valid = exu_in_valid;
    wire [31:0]op_xor;
    wire [31:0]op_or;
    wire [31:0]op_and;
    wire [31:0]op_ar;
    wire [31:0]op_lr;
    wire [31:0]op_ll;


    wire [31:0]op_adder;
    
    assign op_xor=a^b;
    assign op_or=a|b;
    assign op_and=a&b;
    assign op_ar=$signed(a) >>> (b & 32'h1f);
    assign op_lr=a >> (b & 32'h1f);
    assign op_ll=a << (b & 32'h1f);

    ysyx_26010011_M_ADDER ADDER_0 (.inA({1'b0,a}),.inB((exu_in_bus_alu_op[8])?~{1'b0,b}:{1'b0,b}),.cin((exu_in_bus_alu_op[8])?1:0),.out(op_adder),.carry());
    always @(*) begin
        if(exu_in_bus_alu_op[9] | exu_in_bus_alu_op[8]) exu_out_bus_alu_result=op_adder;
        else if(exu_in_bus_alu_op[5]) exu_out_bus_alu_result=op_ll;
        else if(exu_in_bus_alu_op[4]) exu_out_bus_alu_result=op_lr;
        else if(exu_in_bus_alu_op[3]) exu_out_bus_alu_result=op_ar;
        else if(exu_in_bus_alu_op[2]) exu_out_bus_alu_result=op_and;
        else if(exu_in_bus_alu_op[1]) exu_out_bus_alu_result=op_or;
        else if(exu_in_bus_alu_op[0]) exu_out_bus_alu_result=op_xor;
        else                          exu_out_bus_alu_result=b;
    end
    always @(*) begin
        if     ( exu_in_bus_opCSR[1]&~exu_in_bus_opCSR[0]) exu_out_bus_csr_result=op_and;
        else if(~exu_in_bus_opCSR[1]& exu_in_bus_opCSR[0]) exu_out_bus_csr_result=op_or;
        else                                               exu_out_bus_csr_result=exu_in_bus_a;
    end
    wire comp_isEQUAL,comp_isSGREATER,comp_isUGREATER,comp_isGREATER,comp_suber_carry;
    wire [31:0]comp_suber_out;
    ysyx_26010011_M_ADDER COMP_SUBER_0 (.inA({1'b0,comp_a}),.inB(~{1'b0,comp_b}),.cin(1),.out(comp_suber_out),.carry(comp_suber_carry));
    assign comp_isEQUAL = &(comp_a ~^ comp_b);
    assign comp_isUGREATER = (|comp_suber_out) & ~comp_suber_carry;
    assign comp_isSGREATER = (~comp_a[31] & comp_b[31]) | ((comp_a[31] ~^ comp_b[31])  & ~comp_suber_out[31]);
    assign comp_isGREATER = (exu_in_bus_isUnSigned)?comp_isUGREATER:comp_isSGREATER;
    always @(*) begin
        case (exu_in_bus_comp_op)
            2'b00: exu_out_bus_comp_result=comp_isEQUAL | comp_isGREATER;
            2'b01: exu_out_bus_comp_result=~(comp_isEQUAL | comp_isGREATER);
            2'b10: exu_out_bus_comp_result=~comp_isEQUAL;
            2'b11: exu_out_bus_comp_result=comp_isEQUAL;
        endcase
    end
    // wire debug_EXU_isCSR = exu_out_valid & exu_out_ready & (|exu_in_bus_opCSR);
    // wire debug_EXU_isCALC = 
endmodule


module ysyx_26010011_M_ADDER(
    input [32:0] inA,
    input [32:0] inB,
    input cin,
    output [31:0] out,
    output carry
);
    assign {carry,out} = inA + inB + {32'b0,cin};
endmodule
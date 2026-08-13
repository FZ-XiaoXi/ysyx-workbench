module EXU(
    input [31:0]inA,
    input [31:0]inB,
    input [9:0]op,
    output reg [31:0]out
);
    wire [31:0]op_xor;
    wire [31:0]op_or;
    wire [31:0]op_and;
    wire [31:0]op_ar;
    wire [31:0]op_lr;
    wire [31:0]op_ll;


    wire [31:0]op_adder;
    
    assign op_xor=inA^inB;
    assign op_or=inA|inB;
    assign op_and=inA&inB;
    
    assign op_ar=$signed(inA) >>> (inB & 32'h1f);
    assign op_lr=inA >> (inB & 32'h1f);
    assign op_ll=inA << (inB & 32'h1f);

    M_ADDER ADDER_0 (.inA({1'b0,inA}),.inB((op[8])?~{1'b0,inB}:{1'b0,inB}),.cin((op[8])?1:0),.out(op_adder),.carry());
    always @(*) begin
        if(op[9] | op[8]) out=op_adder;

        
        else if(op[5]) out=op_ll;
        else if(op[4]) out=op_lr;
        else if(op[3]) out=op_ar;
        else if(op[2]) out=op_and;
        else if(op[1]) out=op_or;
        else if(op[0]) out=op_xor;
        else out=inB;
        // case(op)
        // endcase
            
    end

    
endmodule

module COMP(
    input [31:0]inA,
    input [31:0]inB,
    input isCompSigned,
    output isEQUAL,
    output isGREATER
);
    wire [31:0] out;
    wire carry;
    M_ADDER COMP_SUBER_0 (.inA({1'b0,inA}),.inB(~{1'b0,inB}),.cin(1),.out(out),.carry(carry));
    
    assign isEQUAL = &(inA ~^ inB);
    wire isSGREATER,isUGREATER;
    assign isUGREATER = (|out) & ~carry;
    assign isSGREATER = (~inA[31] & inB[31]) | ((inA[31] ~^ inB[31])  & ~out[31]);
    assign isGREATER = (isCompSigned)?isSGREATER:isUGREATER;
endmodule

module M_ADDER(
    input [32:0] inA,
    input [32:0] inB,
    input cin,
    output [31:0] out,
    output carry
);
    assign {carry,out} = inA + inB + {32'b0,cin};

endmodule
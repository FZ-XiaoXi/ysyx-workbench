module WBU(
    input clk,
    input rst,
    input [31:0]LSU_data,
    input [31:0]EXU_data,
    input [4:0]address,
    input isLOAD,
    input isWRITE,

    output gpr_WEN,
    output [31:0]gpr_data,
    output [4:0]gpr_address
);  

    assign gpr_data=isLOAD?LSU_data:EXU_data;
    assign gpr_address=address;
    assign gpr_WEN=(isLOAD|isWRITE)?1:0;

endmodule
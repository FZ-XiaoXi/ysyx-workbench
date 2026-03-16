module WBU(
    input clk,
    input rst,
    input [31:0]LSU_data,
    input [31:0]EXU_data,
    input [31:0]CSR_data,
    input COMP_data,
    input [31:0]snpc,
    input [4:0]address,
    input isLOAD,
    input [1:0]isCSR,
    input isWRITE,
    input isJUMP,
    input isCOMPARE,
    output gpr_WEN,
    output reg [31:0]reg_data,
    output [4:0]gpr_address
);  
    always @(*) begin
        if(isLOAD) begin
                                    reg_data = LSU_data;
        end else if(isJUMP) begin
                                    reg_data = snpc;
        end else if(isWRITE) begin
            if(isCOMPARE)           reg_data = {31'b0,COMP_data};
            else                    reg_data = EXU_data;
        end else if(|isCSR) begin
            if(isCSR == 2'b01)      reg_data = CSR_data | EXU_data;//CSRRS
            else if(isCSR == 2'b10) reg_data = CSR_data & ~EXU_data;//CSRRC
            else                    reg_data = EXU_data;//CSRRW
        end else begin
                                    reg_data = 32'hf0f0f0f0;
        end

    end
    //assign reg_data=isLOAD?LSU_data:(isJUMP?snpc:(isWRITE?(isCOMPARE?{31'b0,COMP_data}:EXU_data):(32'hf0f0f0f0)));
    assign gpr_address=address;
    assign gpr_WEN=(isLOAD|isWRITE)?1:0;
endmodule
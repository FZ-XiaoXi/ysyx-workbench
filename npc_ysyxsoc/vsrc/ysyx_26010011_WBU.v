module ysyx_26010011_WBU(
    input clock,
    input reset,
    input [31:0]LSU_data,
    input [31:0]EXU_data,
    input [31:0]CSR_data,
    input COMP_data,
    input [31:0]snpc,
    input [4:0]address,
    input isLOAD,
    input isSTORE,
    input [1:0]isCSR,
    input isWRITE,
    input isJUMP,
    input isCOMPARE,
    input lsu_final,
    input bus_valid,
    output gpr_WEN,
    output reg [31:0]reg_data,
    output [4:0]gpr_address,
    output reg wbu_final
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

    assign gpr_address=address;
    assign gpr_WEN=(isLOAD)?(lsu_final?1:0):(isWRITE| |isCSR?1:0);
    always @(*) begin
        if(gpr_WEN)begin
            wbu_final = 1 & bus_valid;
        end else if(isLOAD | isSTORE)begin
            if(lsu_final) begin
                wbu_final = 1 & bus_valid;
            end else begin
                wbu_final = 0;
            end
        end else begin
            wbu_final = 1 & bus_valid;
        end
    end
endmodule
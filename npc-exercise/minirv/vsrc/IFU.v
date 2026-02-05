module IFU(
    input clk,
    input rst,
    output reg [31:0] PC,
    input [31:0] dnpc,
    input ifJUMP,
    input [31:0]PC_command,
    output reg [31:0]command
);
    wire snpc;
    always @(posedge clk,posedge rst) begin
        if (rst) begin
            PC<=0;
        end else begin
            if (ifJUMP) begin
                PC<=dnpc;
            end else begin
                PC<=snpc;
            end
        end
    end
    assign snpc=PC+4;

    always @(posedge clk,posedge rst) begin
        if (rst) begin
            command<=0;
        end else begin
            
        end
    end
endmodule
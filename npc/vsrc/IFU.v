
module IFU(
    input clk,
    input rst,
    output reg [31:0] PC,
    input [31:0] dnpc,
    output [31:0] snpc,
    input isJUMP,
    input isBRANCH,
    input isECALL,
    input isMRET,
    output reg [31:0]PC_command,
    output reg bus_valid
);

    reg [31:0]ifu_raddr;
    parameter state_idle= 1'b0;
    parameter state_wait=1'b1;
    reg state/*verilator public*/;
    reg next_state;

    always @(*) begin
        case(state)
            state_idle:begin
                ifu_raddr=PC;
                bus_valid=0;
                next_state=state_wait;
            end
            state_wait:begin
                bus_valid=1;
                next_state=state_idle;
            end
            default:
                next_state=state_idle;
        endcase
    end
    always @(posedge clk) begin
        if (rst) begin
            state<=state_idle;
        end else begin
            state<=next_state;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            PC_command<=0;
        end else begin
            PC_command<=pmem_read(PC);
        end
    end


    always @(posedge clk) begin
        if (rst) begin
            PC<=32'h80000000;
        end else if (bus_valid) begin
            if (isJUMP | isBRANCH | isECALL | isMRET) begin
                PC<=dnpc;
            end else begin
                PC<=snpc;
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            PC<=32'h80000000;
        end else if (bus_valid) begin
            if (isJUMP | isBRANCH | isECALL | isMRET) begin
                PC<=dnpc;
            end else begin
                PC<=snpc;
            end
        end
    end
    assign snpc=PC+4;


endmodule
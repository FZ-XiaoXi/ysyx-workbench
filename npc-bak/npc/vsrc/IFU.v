module IFU(
    input clk,
    input rst,
    
    output reg [31:0] PC,
    input [31:0]      dnpc,
    output [31:0]     snpc,
    input             isJUMP,
    input             isBRANCH,
    input             isECALL,
    input             isMRET,
    input             wbu_final,
    output reg [31:0] PC_command,
    output reg        bus_valid,

    output [31:0]     araddr,
    output            arvalid,
    input             arready,
    input  [31:0]     rdata,
    input  [1:0]      rresp,
    input             rvalid,
    output            rready
);
    localparam S_IDLE       = 2'b00;
    localparam S_WAIT_READY = 2'b01; // 等待地址通道接受地址
    localparam S_WAIT_DATA  = 2'b10; // 等待数据返回
    localparam S_WAIT_EXEC  = 2'b11; // 指令读取完成，等待CPU执行完毕

    reg [1:0] state/*verilator public*/, next_state;

    // 握手成功标志
    wire ar_fire = arvalid && arready;
    wire r_fire  = rvalid && rready;

    assign araddr  = PC;
    assign arvalid = (state == S_IDLE) || (state == S_WAIT_READY);
    assign rready  = (state != S_WAIT_EXEC);

    always @(*) begin
        next_state = state;
        case(state)
            S_IDLE, S_WAIT_READY: begin
                if (ar_fire) begin
                    if (r_fire)  next_state = S_WAIT_EXEC;
                    else         next_state = S_WAIT_DATA;
                end else begin
                    next_state = S_WAIT_READY;
                end
            end
            S_WAIT_DATA: begin
                if (r_fire) begin
                    next_state = S_WAIT_EXEC;
                end
            end
            S_WAIT_EXEC: begin
                if (wbu_final) begin
                    next_state = S_IDLE;
                end
            end
            default: next_state = S_IDLE;
        endcase
    end

    always @(posedge clk) begin
        if (rst) state <= S_IDLE;
        else     state <= next_state;
    end

    always @(*) begin
        bus_valid = (state == S_WAIT_EXEC);
    end

    always @(posedge clk) begin
        if (rst) begin
            PC_command <= 32'h0;
        end else if (r_fire) begin
            PC_command <= rdata;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            PC <= 32'h80000000;
        end else if (bus_valid && wbu_final) begin
            if (isJUMP | isBRANCH | isECALL | isMRET) begin
                PC <= dnpc;
            end else begin
                PC <= snpc;
            end
        end
    end
    assign snpc = PC + 4;
endmodule
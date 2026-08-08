module ysyx_26010011_IFU(
    input clock,
    input reset,
    
    output reg [31:0] PC/*verilator public*/,
    input [31:0]      dnpc,
    output [31:0]     snpc,
    input             isJUMP,
    input             isBRANCH,
    input             isECALL,
    input             isMRET,
    input             wbu_final,
    output reg [31:0] PC_command,
    output reg        bus_valid,
    input             lsu_access_fault,

    output [31:0]     araddr,
    output            arvalid,
    input             arready,
    output [3:0]      arid,
    output [7:0]      arlen,
    output [2:0]      arsize,
    output [1:0]      arbureset,
    input  [31:0]     rdata,
    input  [1:0]      rresp,
    input             rvalid,
    output            rready,
    input             rlast,
    input  [3:0]      rid
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
    assign arid    = 4'b0;
    assign arlen   = 8'b0;
    assign arsize  = 3'b010;
    assign arbureset = 2'b01;
    assign arvalid = ((state == S_IDLE) || (state == S_WAIT_READY))&!reset;
    assign rready  = (state != S_WAIT_EXEC)&!reset;

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

    always @(posedge clock) begin
        if (reset) state <= S_IDLE;
        else     state <= next_state;
    end

    always @(*) begin
        bus_valid = (state == S_WAIT_EXEC);
    end

    always @(posedge clock) begin
        if (reset) begin
            PC_command <= 32'h0;
        end else if (r_fire) begin
            PC_command <= rdata;
        end
    end

    always @(posedge clock) begin
        if (reset) begin
            PC <= 32'h20000000;
        end else if (bus_valid && wbu_final) begin
            if (isJUMP | isBRANCH | isECALL | isMRET | lsu_access_fault) begin
                PC <= dnpc;
            end else begin
                PC <= snpc;
            end
        end
    end
    assign snpc = PC + 4;
endmodule
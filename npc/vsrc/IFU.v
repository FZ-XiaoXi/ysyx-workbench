
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
    input wbu_final,
    output reg [31:0]PC_command,
    output reg bus_valid
);

    reg [31:0]ifu_raddr;
    parameter state_idle= 2'b00;
    parameter state_wait_ready=2'b01;
    parameter state_wait_command=2'b10;
    parameter state_wait_exec=2'b11;
    reg [1:0]state/*verilator public*/;
    reg [1:0]next_state;
    reg pmem_reqValid,pmem_respValid,pmem_reqReady,pmem_respReady;
    always @(*) begin
        case(state)
            state_idle:begin
                bus_valid=0;
                pmem_reqValid=1;
                if(pmem_reqReady) begin
                    next_state=state_wait_command;
                end else begin
                    next_state=state_wait_ready;
                end
                
            end
            state_wait_ready:begin
                bus_valid=0;
                pmem_reqValid=1;
                if(pmem_reqReady) begin
                    next_state=state_wait_command;
                end else begin
                    next_state=state_wait_ready;
                end
                
            end
            state_wait_command:begin
                bus_valid=0;
                pmem_reqValid=0;
                if(pmem_respValid & pmem_respReady) begin
                    next_state=state_wait_exec;
                end else begin
                    next_state=state_wait_command;
                end
            end
            state_wait_exec:begin
                bus_valid=1;
                pmem_reqValid=0;
                if(wbu_final) begin
                    next_state=state_idle;
                end else begin
                    next_state=state_wait_exec;
                end
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
    wire [31:0]PC_command_t;
    always @(posedge clk) begin
        if (rst) begin
            PC_command<=PC_command_t;
        end else begin
            PC_command<=PC_command_t;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            PC<=32'h80000000;
        end else if (bus_valid && wbu_final) begin
            if (isJUMP | isBRANCH | isECALL | isMRET) begin
                PC<=dnpc;
            end else begin
                PC<=snpc;
            end
        end
    end
    assign snpc=PC+4;

    MEM ROM_0(.clk(clk),.rst(rst),.wen(0),.addr(PC),.wdata(),.rdata(PC_command_t),.wmask(),.reqValid(pmem_reqValid),.respValid(pmem_respValid),.respReady(pmem_respReady),.reqReady(pmem_reqReady));

    random_delay_pulse #(
        .LFSR_WIDTH (3)                     // LFSR 位宽，决定随机延迟的范围（1 ~ 2^LFSR_WIDTH-1）
    ) random_delay_pulse_1(
        .clk(clk),                             // 时钟
        .rst_n(~rst),                           // 异步复位，低有效
        .start(pmem_reqValid & pmem_reqReady),                           // 启动脉冲（上升沿有效）
        .out_lock(state==state_wait_command),                      // 复位锁存，保持输出直到状态机进入等待命令状态
        .out(pmem_respReady)                              // 输出脉冲，高有效，宽度一个时钟周期
    );
endmodule
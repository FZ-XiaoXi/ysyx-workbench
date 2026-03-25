// ============================================================
// 参数化 LFSR 模块（Fibonacci 型，右移结构）
// ============================================================
module lfsr #(
    parameter WIDTH = 8,                         // 寄存器位宽
    parameter [WIDTH-1:0] TAP_MASK = {{WIDTH-2{1'b0}}, 2'b11}  // 默认：最高两位反馈
) (
    input  wire             clk,
    input  wire             rst_n,
    input  wire             en,
    output wire [WIDTH-1:0] state_out,
    output wire             data_out
);
    reg [WIDTH-1:0] state;
    wire feedback;

    assign feedback = ^(state & TAP_MASK);       // 抽头异或

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            state <= {{WIDTH-1{1'b0}}, 1'b1};    // 种子：最低位为1，其余为0
        else if (en)
            state <= {feedback, state[WIDTH-1:1]}; // 右移，反馈值移入最高位
    end

    assign state_out = state;
    assign data_out  = state[0];

endmodule

// ============================================================
// 随机延迟脉冲发生器
// ============================================================
module random_delay_pulse #(
    parameter LFSR_WIDTH = 8
) (
    input  wire clk,
    input  wire rst_n,
    input  wire start,
    output reg  out
);
    wire [LFSR_WIDTH-1:0] lfsr_state;
    wire                  lfsr_data;
    reg                   lfsr_en;
    reg [LFSR_WIDTH-1:0]  delay_cnt;
    reg                   busy;
    reg                   start_d;   // start 延迟一拍

    // LFSR 实例化（同前，略）

    // 合并边沿检测与状态机，避免多拍延迟
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            start_d   <= 1'b0;
            busy      <= 1'b0;
            lfsr_en   <= 1'b1;
            delay_cnt <= {LFSR_WIDTH{1'b0}};
            out       <= 1'b0;
        end else begin
            // 默认输出清零
            out <= 1'b0;
            
            // 边沿检测（先更新 start_d）
            start_d <= start;
            
            if (!busy) begin
                // 检测 start 上升沿
                if (start && !start_d) begin
                    if (lfsr_state == 1) begin
                        // 延迟为 1 个周期，直接输出
                        out <= 1'b1;
                        // 不进入 busy 状态，LFSR 保持运行
                        busy <= 1'b0;
                        lfsr_en <= 1'b1;
                        delay_cnt <= {LFSR_WIDTH{1'b0}};
                    end else begin
                        // 延迟大于 1：将捕获值减 1 作为初值，立即加载
                        delay_cnt <= lfsr_state - 1;
                        busy <= 1'b1;
                        lfsr_en <= 1'b0;   // 停止 LFSR，进入计数
                    end
                end
            end else begin
                // 计数阶段
                if (delay_cnt == 1) begin
                    out <= 1'b1;
                    busy <= 1'b0;
                    lfsr_en <= 1'b1;       // 恢复 LFSR
                    delay_cnt <= {LFSR_WIDTH{1'b0}};
                end else begin
                    delay_cnt <= delay_cnt - 1;
                end
            end
        end
    end
    // 实例化 LFSR（同级）
    lfsr #(
        .WIDTH (LFSR_WIDTH)
        // TAP_MASK 使用默认值，若需自定义可在顶层传递参数
    ) u_lfsr (
        .clk       (clk),
        .rst_n     (rst_n),
        .en        (lfsr_en),
        .state_out (lfsr_state),
        .data_out  (lfsr_data)
    );

endmodule
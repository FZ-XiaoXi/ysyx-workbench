module MEM(
    input clk,
    input rst,
    input wen,
    input [31:0]addr,
    input [31:0]wdata,
    output reg [31:0]rdata,
    input [3:0]wmask,
    input reqValid,
    output reqReady,
    output respValid,
    input respReady

);
    always @(posedge clk) begin
        rdata <= (!wen)?pmem_read(addr):32'h4f4f4f4f;
        if(wen) begin
            difftest_mem_set(addr);
            pmem_write(addr,wdata,{4'h0,wmask});
        end
    end

    random_delay_pulse #(
        .LFSR_WIDTH (2)                     // LFSR 位宽，决定随机延迟的范围（1 ~ 2^LFSR_WIDTH-1）
    ) random_delay_pulse_0(
        .clk(clk),                             // 时钟
        .rst_n(~rst),                           // 异步复位，低有效
        .start(reqValid & reqReady),                           // 启动脉冲（上升沿有效）
        .out(respValid)                              // 输出脉冲，高有效，宽度一个时钟周期
    );

    random_delay_pulse #(
        .LFSR_WIDTH (2)                     // LFSR 位宽，决定随机延迟的范围（1 ~ 2^LFSR_WIDTH-1）
    ) random_delay_pulse_1(
        .clk(clk),                             // 时钟
        .rst_n(~rst),                           // 异步复位，低有效
        .start(reqValid),                           // 启动脉冲（上升沿有效）
        .out(reqReady)                              // 输出脉冲，高有效，宽度一个时钟周期
    );
endmodule
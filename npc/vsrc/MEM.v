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
    wire respFinal;
    parameter state_idle=0,state_wait_slave_ready=1,state_working=2,state_wait_master_ready=3;
    reg [1:0]state,next_state;

    assign respValid = (state == state_working && respFinal) || (state == state_wait_master_ready);
    always @(*) begin
        case(state)
            state_idle:begin
                if(reqValid & reqReady) begin
                    next_state=state_working;
                end else if(reqValid) begin
                    next_state=state_wait_slave_ready;
                end else begin
                    next_state=state_idle;
                end
            end
            state_wait_slave_ready:begin
                if(reqValid & reqReady) begin
                    next_state=state_working;
                end else begin
                    next_state=state_wait_slave_ready;
                end
            end
            state_working:begin
                if(respFinal & respReady) begin
                    next_state=state_idle;
                end else if(respFinal) begin
                    next_state=state_wait_master_ready;
                end else begin
                    next_state=state_working;
                end
            end 
            state_wait_master_ready:begin
                if(respValid & respReady) begin
                    next_state=state_idle;
                end else begin
                    next_state=state_wait_master_ready;
                end
            end
        endcase
    end

    always @(posedge clk) begin
        if(rst) begin
            state<=state_idle;
        end else begin
            state<=next_state;
        end
    end

    always @(posedge clk) begin
        if(reqValid & reqReady) begin
            rdata <= (!wen)?pmem_read(addr):32'h4f4f4f4f;
            if(wen) begin
                difftest_mem_set(addr);
                pmem_write(addr,wdata,{4'h0,wmask});
            end
        end
    end

    random_delay_pulse #(
        .LFSR_WIDTH (2)                     // LFSR 位宽，决定随机延迟的范围（1 ~ 2^LFSR_WIDTH-1）
    ) random_delay_pulse_0(
        .clk(clk),                             // 时钟
        .rst_n(~rst),                           // 异步复位，低有效
        .out_lock(0),
        .start(reqValid & reqReady),                           // 启动脉冲（上升沿有效）
        .out(respFinal)                              // 输出脉冲，高有效，宽度一个时钟周期
    );

    random_delay_pulse #(
        .LFSR_WIDTH (2)                     // LFSR 位宽，决定随机延迟的范围（1 ~ 2^LFSR_WIDTH-1）
    ) random_delay_pulse_1(
        .clk(clk),                             // 时钟
        .rst_n(~rst),                           // 异步复位，低有效
        .out_lock(0),
        .start(reqValid),                           // 启动脉冲（上升沿有效）
        .out(reqReady)                              // 输出脉冲，高有效，宽度一个时钟周期
    );
endmodule
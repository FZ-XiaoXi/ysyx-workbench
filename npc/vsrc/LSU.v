import "DPI-C" function void difftest_mem_set(int addr);

module LSU(
    input [31:0]lsu_addr,
    output reg [31:0]lsu_rdata,

    input [31:0]lsu_wdata,
    input [3:0]rmask,
    input [3:0]lsu_wmask,
    input isSigned,
    input clk,
    input lsu_wen,
    input bus_valid,
    input lsu_reqValid,
    input rst,
    output reg lsu_respValid
);
    parameter state_idle=0,state_wait=1;
    reg state/*verilator public*/,next_state;
    always @(*) begin
        case(state)
            state_idle:begin
                if(lsu_reqValid) begin
                    next_state=state_wait;
                end else begin
                    next_state=state_idle;
                end
            end
            state_wait:begin
                if(lsu_respValid) begin
                    next_state=state_idle;
                end else begin
                    next_state=state_wait;
                end
            end 
        endcase
    end
    always@(posedge clk) begin
        if(rst) begin
            state<=state_idle;
        end else begin
            state<=next_state;
        end
    end
    reg [31:0] rdata;
    wire [31:0]val0,val1,val2,val3,lsu_rdata1,lsu_rdata2,lsu_rdata4;
    reg [31:0]val;
    reg lsu_respValid_t;
    always @(posedge clk) begin
        // case (state)
        //     state_idle:begin
        //         if(lsu_reqValid) begin

        //         end
        //     end
        //     state_wait:begin
        //         //lsu_respValid<=lsu_reqValid & bus_valid;
        //     end
        // endcase
        //lsu_respValid_t <= state==state_wait;
        //lsu_respValid <= lsu_respValid?0:lsu_respValid_t;
        rdata <= (!lsu_wen)?pmem_read(lsu_addr):32'h4f4f4f4f;
        if(lsu_wen) begin
            difftest_mem_set(lsu_addr);
            pmem_write(lsu_addr,lsu_wdata,{4'h0,lsu_wmask});
        end
    end
    
    assign val0=rdata;
    assign val1={{8{val0[31]}},val0[31:8]};
    assign val2={{8{val1[31]}},val1[31:8]};
    assign val3={{8{val2[31]}},val2[31:8]};
    always @(*) begin
        case(lsu_addr[1:0])
            2'b00:val=val0;
            2'b01:val=val1;
            2'b10:val=val2;
            2'b11:val=val3;
        endcase
    end
    //assign val=lsu_rdata;

    assign lsu_rdata1=(isSigned)?{{24{val[7:7]}},val[7:0]}:{{24{1'b0}},val[7:0]};
    assign lsu_rdata2=(isSigned)?{{16{val[15:15]}},val[15:0]}:{{16{1'b0}},val[15:0]};
    assign lsu_rdata4=val[31:0];
    
    always @(*) begin
        case(rmask)
            4'b0001:lsu_rdata=lsu_rdata1;
            4'b0011:lsu_rdata=lsu_rdata2;
            4'b0111:lsu_rdata=32'hffffffff;
            4'b1111:lsu_rdata=lsu_rdata4;
            default:lsu_rdata=32'hffffffff;
        endcase
    end

    random_delay_pulse #(
        .LFSR_WIDTH (3)                     // LFSR 位宽，决定随机延迟的范围（1 ~ 2^LFSR_WIDTH-1）
    ) random_delay_pulse_0(
        .clk(clk),                             // 时钟
        .rst_n(~rst),                           // 异步复位，低有效
        .start(lsu_reqValid),                           // 启动脉冲（上升沿有效）
        .out(lsu_respValid)                              // 输出脉冲，高有效，宽度一个时钟周期
    );

endmodule
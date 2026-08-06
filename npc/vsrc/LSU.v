import "DPI-C" function void difftest_mem_set(int addr);

module LSU(
    input             clk,
    input             rst,
    // CPU 流水线接口
    input [31:0]      lsu_addr,
    output reg [31:0] lsu_rdata,
    input [31:0]      lsu_wdata,
    input             lsu_wen,
    input             lsu_reqEN,
    output            lsu_final,
    input [3:0]       rmask,
    input [3:0]       lsu_wmask,
    input             isSigned,
    input             bus_valid,
    
    // AXI4-Lite 写通道
    output [31:0]     awaddr,
    output            awvalid,
    input             awready,
    output [31:0]     wdata,
    output [3:0]      wstrb,
    output            wvalid,
    input             wready,
    input  [1:0]      bresp,
    input             bvalid,
    output            bready,

    // AXI4-Lite 读通道
    output [31:0]     araddr,
    output            arvalid,
    input             arready,
    input  [31:0]     rdata,
    input  [1:0]      rresp,
    input             rvalid,
    output            rready
);

    localparam S_IDLE        = 3'd0;
    localparam S_WAIT_AW_W   = 3'd1; // 等待写地址与写数据握手
    localparam S_WAIT_BRESP  = 3'd2; // 等待写响应(B通道)
    localparam S_WAIT_AR     = 3'd3; // 等待读地址握手
    localparam S_WAIT_RDATA  = 3'd4; // 等待读数据返回(R通道)

    reg [2:0] state/*verilator public*/, next_state;

    // 握手信号
    wire aw_fire = awvalid && awready;
    wire w_fire  = wvalid && wready;
    wire b_fire  = bvalid && bready;
    wire ar_fire = arvalid && arready;
    wire r_fire  = rvalid && rready;

    assign awaddr  = lsu_addr;
    assign wdata   = lsu_wdata;
    assign wstrb   = lsu_wmask;
    assign araddr  = lsu_addr;

    assign awvalid = (state == S_IDLE && lsu_reqEN && lsu_wen) || (state == S_WAIT_AW_W);
    assign wvalid  = (state == S_IDLE && lsu_reqEN && lsu_wen) || (state == S_WAIT_AW_W);
    assign arvalid = (state == S_IDLE && lsu_reqEN && !lsu_wen) || (state == S_WAIT_AR);

    assign bready  = (state == S_WAIT_BRESP) || (state == S_IDLE);
    assign rready  = (state == S_WAIT_RDATA) || (state == S_IDLE);

    always @(*) begin
        next_state = state;
        case(state)
            S_IDLE: begin
                if (lsu_reqEN) begin
                    if (lsu_wen) begin
                        if (aw_fire && w_fire) next_state = S_WAIT_BRESP;
                        else                   next_state = S_WAIT_AW_W;
                    end else begin
                        if (ar_fire) next_state = S_WAIT_RDATA;
                        else         next_state = S_WAIT_AR;
                    end
                end
            end
            
            S_WAIT_AW_W: begin
                if (aw_fire && w_fire) begin
                    next_state = S_WAIT_BRESP;
                end
            end
            
            S_WAIT_BRESP: begin
                if (b_fire) next_state = S_IDLE;
            end
            
            S_WAIT_AR: begin
                if (ar_fire) begin
                    next_state = S_WAIT_RDATA;
                end
            end
            
            S_WAIT_RDATA: begin
                if (r_fire) next_state = S_IDLE;
            end
            
            default: next_state = S_IDLE;
        endcase
    end

    always @(posedge clk) begin
        if (rst) state <= S_IDLE;
        else     state <= next_state;
    end

    assign lsu_final = (state == S_WAIT_RDATA && r_fire) || 
                       (state == S_WAIT_BRESP && b_fire);


    wire [31:0] val0 = rdata; 
    wire [31:0] val1 = {{8{val0[31]}}, val0[31:8]};
    wire [31:0] val2 = {{8{val1[31]}}, val1[31:8]};
    wire [31:0] val3 = {{8{val2[31]}}, val2[31:8]};
    
    reg [31:0] val;
    always @(*) begin
        case(lsu_addr[1:0])
            2'b00: val = val0;
            2'b01: val = val1;
            2'b10: val = val2;
            2'b11: val = val3;
            default: val = val0;
        endcase
    end

    wire [31:0] lsu_rdata1 = (isSigned) ? {{24{val[7]}},  val[7:0]}  : {{24{1'b0}}, val[7:0]};
    wire [31:0] lsu_rdata2 = (isSigned) ? {{16{val[15]}}, val[15:0]} : {{16{1'b0}}, val[15:0]};
    wire [31:0] lsu_rdata4 = val[31:0];
    
    always @(*) begin
        case(rmask)
            4'b0001: lsu_rdata = lsu_rdata1;
            4'b0011: lsu_rdata = lsu_rdata2;
            4'b0111: lsu_rdata = 32'hffffffff;
            4'b1111: lsu_rdata = lsu_rdata4;
            default: lsu_rdata = 32'hffffffff;
        endcase
    end

endmodule
import "DPI-C" function void difftest_mem_set(int addr);

module ysyx_26010011_LSU(
    input             clock,
    input             reset,
    // CPU 流水线接口
    input [31:0]      lsu_addr/*verilator public*/,
    output reg [31:0] lsu_rdata,
    input [31:0]      lsu_wdata/*verilator public*/,
    input             lsu_wen/*verilator public*/,
    input             lsu_reqEN/*verilator public*/,
    output            lsu_final,
    input [3:0]       rmask,
    input [3:0]       lsu_wmask/*verilator public*/,
    input             isSigned,
    input             bus_valid,
    output            lsu_access_fault,
    
    // AXI4 写地址通道
    output [31:0]     awaddr,
    output            awvalid,
    input             awready,
    output [3:0]      awid,
    output [7:0]      awlen,
    output [2:0]      awsize,
    output [1:0]      awburst,
    // AXI4 写数据通道
    output [31:0]     wdata,
    output [3:0]      wstrb,
    output            wvalid,
    input             wready,
    output            wlast,
    // AXI4 写响应通道
    input  [1:0]      bresp,
    input             bvalid,
    output            bready,
    input  [3:0]      bid,

    // AXI4 读地址通道
    output [31:0]     araddr,
    output            arvalid,
    input             arready,
    output [3:0]      arid,
    output [7:0]      arlen,
    output [2:0]      arsize,
    output [1:0]      arbureset,
    // AXI4 读数据通道
    input  [31:0]     rdata,
    input  [1:0]      rresp,
    input             rvalid,
    output            rready,
    input             rlast,
    input  [3:0]      rid
);

    assign lsu_access_fault = (rvalid && (rresp==2'b10 || rresp==2'b11)) || (bvalid && (bresp==2'b10 || bresp==2'b11));

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

    assign awaddr  = {lsu_addr};
    assign awid    = 4'b0;
    assign awlen   = 8'b0;
    
    assign awsize  = (lsu_wmask == 4'b0001) ? 3'b000 :
                     (lsu_wmask == 4'b0011) ? 3'b001 : 3'b010;
    assign awburst = 2'b01;   // INCR

    // 对于 awsize=0(byte), wdata 只取 [7:0]，靠 wstrb 选 lane
    // 对于 awsize=1(half), wdata 只取 [15:0]
    // Fragmenter 对齐地址后 UART APB 用 paddr[1:0] 选字节，故数据必须放在对应 lane
    assign wdata   = lsu_wdata << (awaddr[1:0] * 8);
    assign wstrb   = lsu_wmask << awaddr[1:0];
    assign wlast   = 1'b1;    // single beat

    assign araddr  = lsu_addr;
    assign arid    = 4'b0;
    assign arlen   = 8'b0;
    assign arsize  = (rmask == 4'b0001) ? 3'b000 :
                     (rmask == 4'b0011) ? 3'b001 : 3'b010;
    assign arbureset = 2'b01;   // INCR

    assign awvalid = ((state == S_IDLE && lsu_reqEN && lsu_wen) || (state == S_WAIT_AW_W)) & !reset;
    assign wvalid  = ((state == S_IDLE && lsu_reqEN && lsu_wen) || (state == S_WAIT_AW_W)) & !reset;
    assign arvalid = ((state == S_IDLE && lsu_reqEN && !lsu_wen) || (state == S_WAIT_AR)) & !reset;

    assign bready  = ((state == S_WAIT_BRESP) || (state == S_IDLE)) & !reset;
    assign rready  = ((state == S_WAIT_RDATA) || (state == S_IDLE)) & !reset;

    always @(*) begin
        if(lsu_wen && lsu_reqEN) begin
            difftest_mem_set(lsu_addr);
        end
        if(lsu_wen && lsu_reqEN && !(awaddr >= 32'h0f000000 && awaddr < 32'h0f002000)) begin
            difftest_skip_ref(lsu_addr);
        end
        if(arvalid && lsu_reqEN && !(araddr >= 32'h0f000000 && araddr < 32'h0f002000)) begin
            difftest_skip_ref(lsu_addr);
        end
    end

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

    always @(posedge clock) begin
        if (reset) state <= S_IDLE;
        else     state <= next_state;
    end

    assign lsu_final = (state == S_WAIT_RDATA && r_fire) || 
                       (state == S_WAIT_BRESP && b_fire);


    wire [31:0] val0 = rdata; 
    wire [31:0] val1 = {{8{val0[31]}}, val0[31:8]};
    wire [31:0] val2 = {{8{val1[31]}}, val1[31:8]};
    wire [31:0] val3 = {{8{val2[31]}}, val2[31:8]};
    
    reg[31:0]val;
    // assign val = val0;
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
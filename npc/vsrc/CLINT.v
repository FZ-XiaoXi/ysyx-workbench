module CLINT(
    input clk,
    input rst,

    //AR
    input  [31:0] araddr,
    input         arvalid,
    output        arready,
    input  [3:0]  arid,
    input  [7:0]  arlen,
    input  [2:0]  arsize,
    input  [1:0]  arburst,

    //R
    output [31:0] rdata,
    output [1:0]  rresp,
    output        rvalid,
    input         rready,
    output        rlast,
    output [3:0]  rid,

    //AW
    input  [31:0] awaddr,
    input         awvalid,
    output        awready,
    input  [3:0]  awid,
    input  [7:0]  awlen,
    input  [2:0]  awsize,
    input  [1:0]  awburst,

    //W
    input  [31:0] wdata,
    input  [3:0]  wstrb,
    input         wvalid,
    output        wready,
    input         wlast,

    //B
    output [1:0]  bresp,
    output        bvalid,
    input         bready,
    output [3:0]  bid
);

    // AR / R
    localparam R_IDLE = 2'd0, R_WAIT_MEM = 2'd1, R_HOLD_DATA = 2'd2;
    reg [1:0] r_state, r_next;
    
    reg [31:0] raddr_reg;
    reg [31:0] rdata_hold;
    wire       r_mem_ready;

    always @(posedge clk) begin
        if(rst) r_state <= R_IDLE;
        else    r_state <= r_next;
    end

    always @(*) begin
        r_next = r_state;
        case(r_state)
            R_IDLE: begin
                if(arvalid) r_next = R_WAIT_MEM;
            end
            R_WAIT_MEM: begin
                if(r_mem_ready) begin
                    if(rready) begin
                        if(arvalid) r_next = R_WAIT_MEM;//////马上进入下一周期事务，后面写事务还没有，待优化
                        else        r_next = R_IDLE;
                    end else begin
                        r_next = R_HOLD_DATA;   ///////没准备好就保持数据
                    end
                end
            end
            R_HOLD_DATA: begin
                if(rready) begin
                    if(arvalid) r_next = R_WAIT_MEM;
                    else        r_next = R_IDLE;
                end
            end
            default: r_next = R_IDLE;
        endcase
    end

    wire r_req_fire = (arvalid && arready);
    always @(posedge clk) begin
        if(r_req_fire) raddr_reg <= araddr;
    end

    random_delay_pulse #(.LFSR_WIDTH(4)) read_delay_inst (
        .clk(clk),
        .rst_n(~rst),
        .out_lock(0),
        .start(r_req_fire),
        .out(r_mem_ready)
    );

    wire [31:0] current_clint_rdata = ((|raddr_reg)?mtime_H:mtime_L);

    always @(posedge clk) begin
        if (r_state == R_WAIT_MEM && r_mem_ready && !rready) begin
            rdata_hold <= current_clint_rdata; 
        end
    end

    assign rvalid  = (r_state == R_HOLD_DATA) || (r_state == R_WAIT_MEM && r_mem_ready);
    assign rdata   = (r_state == R_HOLD_DATA) ? rdata_hold : current_clint_rdata;
    assign rresp   = 2'b00;
    assign arready = (r_state == R_IDLE) || 
                     (r_state == R_HOLD_DATA && rready) || 
                     (r_state == R_WAIT_MEM && r_mem_ready && rready);


    // AW / W / B
    localparam W_IDLE = 2'd0, W_WAIT_MEM = 2'd1, W_HOLD_RESP = 2'd2;
    reg [1:0] w_state, w_next;
    wire      w_mem_ready;

    always @(posedge clk) begin
        if(rst) w_state <= W_IDLE;
        else    w_state <= w_next;
    end

    wire w_req_fire = (w_state == W_IDLE) && awvalid && wvalid;

    always @(*) begin
        w_next = w_state;
        case(w_state)
            W_IDLE: begin
                if(awvalid && wvalid) w_next = W_WAIT_MEM;
            end
            W_WAIT_MEM: begin
                if(w_mem_ready) begin
                    if(bready) w_next = W_IDLE;
                    else       w_next = W_HOLD_RESP;
                end
            end
            W_HOLD_RESP: begin
                if(bready) w_next = W_IDLE;
            end
            default: w_next = W_IDLE;
        endcase
        
    end

    always @(posedge clk) begin
        if(w_req_fire) begin
            $display("Error! CLINT Only READ!");
            
            // difftest_mem_set(awaddr);
            // pmem_write(awaddr, wdata, {4'h0, wstrb});
        end
    end

    random_delay_pulse #(.LFSR_WIDTH(2)) write_delay_inst (
        .clk(clk),
        .rst_n(~rst),
        .out_lock(0),
        .start(w_req_fire),
        .out(w_mem_ready)
    );

    assign awready = (w_state == W_IDLE);
    assign wready  = (w_state == W_IDLE);
    
    assign bvalid  = (w_state == W_HOLD_RESP) || (w_state == W_WAIT_MEM && w_mem_ready);
    assign bresp   = 2'b00;


    
    reg [31:0]mtime_L,mtime_H;
    always @(posedge clk) begin
        if(rst) begin
            mtime_L <= 32'd0;
            mtime_H <= 32'd0;
        end
        else begin
            {mtime_H,mtime_L} <= {mtime_H,mtime_L} + 1;
        end
    end

endmodule
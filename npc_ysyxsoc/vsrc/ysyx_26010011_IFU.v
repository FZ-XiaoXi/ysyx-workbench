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
    output reg        bus_valid/*verilator public*/,
    input             lsu_access_fault,

    output [31:0]     araddr,
    output            arvalid,
    input             arready,
    output [3:0]      arid,
    output [7:0]      arlen,
    output [2:0]      arsize,
    output [1:0]      arbureset,
    input  [31:0]     rdata/*verilator public*/,
    input  [1:0]      rresp,
    input             rvalid,
    output            rready,
    input             rlast,
    input  [3:0]      rid
);
    ysyx_26010011_IFU_icache #(.CACHE_BLOCK_SIZE(8), .CACHE_SIZE(16)) icache_u0(
        .clock(clock),
        .reset(reset),
        .in_addr(in_addr),
        .in_reqValid(in_reqValid),
        .in_respValid(in_respValid),
        .in_rdata(in_rdata),

        .out_araddr(araddr),
        .out_arvalid(arvalid),
        .out_arready(arready),
        .out_arid(arid),
        .out_arlen(arlen),
        .out_arsize(arsize),
        .out_arburst(arbureset),
        .out_rdata(rdata),
        .out_rresp(rresp),
        .out_rvalid(rvalid),
        .out_rready(rready),
        .out_rlast(rlast),
        .out_rid(rid),

        .debug_is_hit(debug_is_hit)
    );
    wire debug_is_hit/*verilator public*/;
    wire [31:0] in_addr,in_rdata;
    assign in_addr = PC;
    wire in_respValid;
    localparam S_FETCH       = 2'b00;
    localparam S_WAIT_EXEC  = 2'b11; // 指令读取完成，等待CPU执行完毕

    reg [1:0] state/*verilator public*/, next_state;

    // 握手成功标志
    wire r_fire/*verilator public*/ = (state==S_FETCH) && in_respValid;
    wire in_reqValid = (state==S_FETCH) && !reset;


    always @(*) begin
        case(state)
            S_FETCH: begin
                if (r_fire) begin
                    next_state = S_WAIT_EXEC;
                end else begin
                    next_state = S_FETCH;
                end
            end
            S_WAIT_EXEC: begin
                if (wbu_final) begin
                    next_state = S_FETCH;
                end
            end
            default: next_state = S_FETCH;
        endcase
    end

    always @(posedge clock) begin
        if (reset) state <= S_FETCH;
        else     state <= next_state;
    end

    always @(*) begin
        bus_valid = (state == S_WAIT_EXEC);
    end

    always @(posedge clock) begin
        if (reset) begin
            PC_command <= 32'h0;
        end else if (r_fire) begin
            PC_command <= in_rdata;
        end else if (wbu_final) begin
            PC_command <= 32'hdddddddd;
        end
    end

    always @(posedge clock) begin
        if (reset) begin
            PC <= 32'h30000000;
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

module ysyx_26010011_IFU_icache #(
    parameter CACHE_BLOCK_SIZE = 4,
    parameter CACHE_SIZE = 16
)(
    input     clock,
    input     reset,

    input      [31:0] in_addr,
    input             in_reqValid,
    output reg        in_respValid,
    output reg [31:0] in_rdata,


    output [31:0]     out_araddr, output            out_arvalid,input             out_arready,output [3:0]      out_arid,
    output [7:0]      out_arlen,  output [2:0]      out_arsize, output [1:0]      out_arburst,

    input  [31:0]     out_rdata,  input  [1:0]      out_rresp,  input             out_rvalid, output            out_rready,
    input             out_rlast,  input  [3:0]      out_rid,

    output           debug_is_hit
);

`ifdef FORMAL
    always @(*) begin

        c_assert: assert(1 == 1);
    end
`endif  // FORMAL

    parameter BLOCK_W = CACHE_BLOCK_SIZE * 8;
    parameter INDEX_W = $clog2(CACHE_SIZE);
    parameter OFFSET_W = $clog2(CACHE_BLOCK_SIZE);
    parameter TAG_W   = 32 - OFFSET_W - INDEX_W;
    parameter BURST_LEN = CACHE_BLOCK_SIZE>>2;
    parameter BURST_W = (|($clog2(BURST_LEN)))?($clog2(BURST_LEN)):1;
    localparam [BURST_W-1:0] BURST_LAST = BURST_W'(BURST_LEN - 1);



    wire [INDEX_W-1:0] now_index = {in_addr[31:OFFSET_W][INDEX_W-1:0]} ;
    wire [TAG_W-1:0]   now_tag   = {in_addr[31:OFFSET_W][INDEX_W + TAG_W - 1: INDEX_W]};
    wire [OFFSET_W:0]now_offset = {1'b0, in_addr[OFFSET_W-1:0]};
    wire is_hit = in_reqValid & cache_valid[now_index] && (cache_tag[now_index] == now_tag);
    assign debug_is_hit = is_hit;
    reg [BLOCK_W-1:0] cache_mem   [0:CACHE_SIZE-1];
    reg               cache_valid [0:CACHE_SIZE-1];
    reg [TAG_W-1:0]   cache_tag   [0:CACHE_SIZE-1];
    //IDLE -> 
    // reg 

    always @(posedge clock) begin
        if (reset) begin
            integer i;
            for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                cache_valid[i] <= 1'b0;
                cache_tag[i]   <= {TAG_W{1'b0}};
                cache_mem[i]   <= {BLOCK_W{1'b0}};
            end
        end else begin
            if((r_fire & (state == S_WAIT_DATA))) begin
                cache_valid[now_index] <= r_fire & out_rlast;
                cache_tag[now_index]   <= now_tag;
                cache_mem[now_index][burst_cnt*32 +: 32]   <= out_rdata;
            end
        end
    end


    localparam S_IDLE       = 2'b00;
    localparam S_WAIT_READY = 2'b01; // 等待地址通道接受地址
    localparam S_WAIT_DATA  = 2'b10; // 等待数据返回

    reg [1:0] state, next_state;

    // 握手成功标志
    wire ar_fire = out_arvalid && out_arready;
    wire r_fire  = out_rvalid && out_rready;

    assign out_araddr  = in_addr & {{(32-OFFSET_W){1'b1}}, {OFFSET_W{1'b0}}};
    assign out_arid    = 4'b0;
    assign out_arlen   = BURST_LEN - 1;
    assign out_arsize  = 3'b010;
    assign out_arburst = 2'b01;
    assign out_arvalid = (!is_hit & (((state == S_IDLE) && in_reqValid) || (state == S_WAIT_READY)))&!reset;
    assign out_rready  = !reset;




    reg [BURST_W-1:0] burst_cnt=0;
    always @(posedge clock) begin
        if (reset) begin
            burst_cnt <= 0;
        end else if (r_fire) begin
            if (burst_cnt == BURST_LAST && out_rlast && r_fire) begin
                burst_cnt <= 0;
            end else begin
                burst_cnt <= burst_cnt + {{(BURST_W-1){1'b0}}, 1'b1};
            end
        end else begin
            burst_cnt <= burst_cnt;
        end
    end

    always @(*) begin
        if(is_hit) begin
            in_rdata = cache_mem[now_index][now_offset*8 +: 32];
        end else if(now_offset[2+BURST_W-1:2] == BURST_LAST)begin
            in_rdata = out_rdata;
        end else begin
            in_rdata = cache_mem[now_index][now_offset*8 +: 32];
        end
    end
    always @(*) begin
        if(state == S_IDLE) begin
            if(in_reqValid && is_hit) begin
                in_respValid = 1'b1;
            end else begin
                in_respValid = 1'b0;
            end
        end else if(r_fire & (next_state == S_IDLE)) begin
            in_respValid = 1'b1;
        end else begin
            in_respValid = 1'b0;
        end
    end

    always @(*) begin
        next_state = state;
        case(state)
            S_IDLE: begin
                if(in_reqValid & is_hit) begin
                    next_state = S_IDLE;
                end else if(in_reqValid) begin
                    if (ar_fire) begin
                        next_state = S_WAIT_DATA;
                    end else begin
                        next_state = S_WAIT_READY;
                    end
                end else begin
                    next_state = S_IDLE;
                end
            end
            S_WAIT_READY: begin
                if (ar_fire) begin
                    next_state = S_WAIT_DATA;
                end else begin
                    next_state = S_WAIT_READY;
                end
            end
            S_WAIT_DATA: begin
                if (r_fire) begin
                    if (out_rlast) begin
                        next_state = S_IDLE;
                    end else begin
                        next_state = S_WAIT_DATA;
                    end
                end
            end
            default: next_state = S_IDLE;
        endcase
    end

    always @(posedge clock) begin
        if (reset) state <= S_IDLE;
        else       state <= next_state;
    end

endmodule
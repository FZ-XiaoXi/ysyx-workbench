

// ██████╗  ██████╗  ██╗ ██████╗   ██████╗  ███████╗
// ██╔══██╗ ██╔══██╗ ██║ ██╔══██╗ ██╔════╝  ██╔════╝
// ██████╔╝ ██████╔╝ ██║ ██║  ██║ ██║  ███╗ █████╗
// ██╔══██╗ ██╔══██╗ ██║ ██║  ██║ ██║   ██║ ██╔══╝
// ██████╔╝ ██║  ██║ ██║ ██████╔╝ ╚██████╔╝ ███████╗
// ╚═════╝  ╚═╝  ╚═╝ ╚═╝ ╚═════╝   ╚═════╝  ╚══════╝
module ysyx_26010011_bridge(
    input clock,
    input reset,
    //////////////////////////////////////////////////////////
    input      [31:0] S_awaddr,  input             S_awvalid, output reg        S_awready,
    input      [3:0]  S_awid,    input      [7:0]  S_awlen,   input      [2:0]  S_awsize,  input      [1:0]  S_awburst,
    input      [31:0] S_wdata,   input      [3:0]  S_wstrb,   input             S_wvalid,  output reg        S_wready,
    input             S_wlast,
    output reg [1:0]  S_bresp,   output reg        S_bvalid,  input             S_bready,
    output reg [3:0]  S_bid,
    input      [31:0] S_araddr,  input             S_arvalid, output reg        S_arready,
    input      [3:0]  S_arid,    input      [7:0]  S_arlen,   input      [2:0]  S_arsize,  input      [1:0]  S_arburst,
    output     [31:0] S_rdata,   output     [1:0]  S_rresp,   output reg        S_rvalid,  input             S_rready,
    output            S_rlast,   output     [3:0]  S_rid,
    ///////////////////////////////////////////////////////
    //MEM
    //SLAVE AW
    output     [31:0] MEM_awaddr,   output            MEM_awvalid,  input             MEM_awready,
    output     [3:0]  MEM_awid,     output     [7:0]  MEM_awlen,    output     [2:0]  MEM_awsize,   output     [1:0]  MEM_awburst,
    //SLAVE W
    output     [31:0] MEM_wdata,    output     [3:0]  MEM_wstrb,    output            MEM_wvalid,   input             MEM_wready,
    output            MEM_wlast,
    //SLAVE B
    input      [1:0]  MEM_bresp,    input             MEM_bvalid,   output            MEM_bready,
    input      [3:0]  MEM_bid,
    //SLAVE AR
    output reg [31:0] MEM_araddr,   output reg        MEM_arvalid,  input             MEM_arready,
    output reg [3:0]  MEM_arid,     output reg [7:0]  MEM_arlen,    output reg [2:0]  MEM_arsize,   output reg [1:0]  MEM_arburst,
    //SLAVE R
    input      [31:0] MEM_rdata,    input      [1:0]  MEM_rresp,    input             MEM_rvalid,   output reg        MEM_rready,
    input             MEM_rlast,    input      [3:0]  MEM_rid,

    //CLINT
    //SLAVE AW
    output     [31:0] CLINT_awaddr,   output            CLINT_awvalid,  input             CLINT_awready,
    output     [3:0]  CLINT_awid,     output     [7:0]  CLINT_awlen,    output     [2:0]  CLINT_awsize,   output     [1:0]  CLINT_awburst,
    //SLAVE W
    output     [31:0] CLINT_wdata,    output     [3:0]  CLINT_wstrb,    output            CLINT_wvalid,   input             CLINT_wready,
    output            CLINT_wlast,
    //SLAVE B
    input      [1:0]  CLINT_bresp,    input             CLINT_bvalid,   output            CLINT_bready,
    input      [3:0]  CLINT_bid,
    //SLAVE AR
    output reg [31:0] CLINT_araddr,   output reg        CLINT_arvalid,  input             CLINT_arready,
    output reg [3:0]  CLINT_arid,     output reg [7:0]  CLINT_arlen,    output reg [2:0]  CLINT_arsize,   output reg [1:0]  CLINT_arburst,
    //SLAVE R
    input      [31:0] CLINT_rdata,    input      [1:0]  CLINT_rresp,    input             CLINT_rvalid,   output reg        CLINT_rready,
    input             CLINT_rlast,    input      [3:0]  CLINT_rid

);

    parameter STATE_IDLE   = 0;
    parameter STATE_BUSY   = 1;
    // parameter ADDR_MEM_BASE  = 32'h80000000;
    // parameter ADDR_MEM_SIZE  = 32'h08000000;
    parameter ADDR_CLINT_BASE = 32'h02000000;
    parameter ADDR_CLINT_SIZE = 32'h00000008;

    reg aw_sel_reg, ar_sel_reg;
    wire aw_sel_now, ar_sel_now;
    reg R_state, R_next_state, W_state, W_next_state;
    reg aw_fire, ar_fire;

    always @(*) begin
        ar_fire = S_arvalid && S_arready;
        aw_fire = S_awvalid && S_awready;
    end

    always @(posedge clock) begin
        if(reset) begin
            R_state <= STATE_IDLE;
            W_state <= STATE_IDLE;
        end else begin
            R_state <= R_next_state;
            W_state <= W_next_state;
        end
    end
    always @(*) begin
        R_next_state = R_state;
        W_next_state = W_state;
        case(R_state)
            STATE_IDLE: begin
                if(S_arvalid) R_next_state = STATE_BUSY;
            end
            STATE_BUSY: begin
                if(S_rready && S_rvalid && S_rlast) R_next_state = STATE_IDLE;
            end
        endcase

        case(W_state)
            STATE_IDLE: begin
                if(S_awvalid && S_wvalid) W_next_state = STATE_BUSY;
            end
            STATE_BUSY: begin
                if(S_bready && S_bvalid) W_next_state = STATE_IDLE;
            end
        endcase
    end
    assign aw_sel_now = (S_awaddr >= ADDR_CLINT_BASE && S_awaddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE);
    assign ar_sel_now = (S_araddr >= ADDR_CLINT_BASE && S_araddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE);
    always @(posedge clock) begin
        if(reset) begin
            aw_sel_reg <= 1'b0;
            ar_sel_reg <= 1'b0;
        end else begin
            // 握手时寄存设备选择
            if(aw_fire) begin
                if(S_awaddr >= ADDR_CLINT_BASE && S_awaddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE) begin aw_sel_reg <= 1'b1; end
                else aw_sel_reg <= 1'b0;
            end
            if(ar_fire) begin
                if(S_araddr >= ADDR_CLINT_BASE && S_araddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE) begin ar_sel_reg <= 1'b1; end
                else ar_sel_reg <= 1'b0;
            end
            if(R_next_state == STATE_IDLE) ar_sel_reg <= 1'b0;
            if(W_next_state == STATE_IDLE) aw_sel_reg <= 1'b0;
        end
    end

    assign MEM_arid = S_arid;
    assign MEM_arlen = S_arlen;
    assign MEM_arsize = S_arsize;
    assign MEM_arburst = S_arburst;
    assign MEM_rready = S_rready;
    assign MEM_araddr = S_araddr;
    assign CLINT_arid = S_arid;
    assign CLINT_arlen = S_arlen;
    assign CLINT_arsize = S_arsize;
    assign CLINT_arburst = S_arburst;
    assign CLINT_rready = S_rready;
    assign CLINT_araddr = S_araddr;
    always @(*) begin
        //READ
        if((R_state == STATE_IDLE)) begin
            MEM_arvalid =   ar_sel_now?0:S_arvalid;
            CLINT_arvalid = ar_sel_now?S_arvalid:0;

            S_arready = ar_sel_now?CLINT_arready:MEM_arready;
            S_rdata = 0;
            S_rresp = 0;
            S_rvalid = 0;
            S_rlast = 0;
            S_rid = 0;
        end else if(ar_sel_reg == 1'b0) begin
            MEM_arvalid = S_arvalid;
            CLINT_arvalid = 0;

            S_arready = MEM_arready;
            S_rdata = MEM_rdata; S_rresp = MEM_rresp; S_rvalid = MEM_rvalid;
            S_rlast = MEM_rlast; S_rid = MEM_rid;
        end
        else begin
            CLINT_arvalid = S_arvalid;
            MEM_arvalid = 0;

            S_arready = CLINT_arready;
            S_rdata = CLINT_rdata; S_rresp = CLINT_rresp; S_rvalid = CLINT_rvalid;
            S_rlast = CLINT_rlast; S_rid = CLINT_rid;
        end
    end


    assign MEM_awaddr = S_awaddr;
    assign MEM_awid = S_awid;
    assign MEM_awlen = S_awlen;
    assign MEM_awsize = S_awsize;
    assign MEM_awburst = S_awburst;
    assign MEM_wdata = S_wdata;
    assign MEM_wstrb = S_wstrb;
    assign MEM_wlast = S_wlast;
    assign MEM_bready = S_bready;
    assign CLINT_awaddr = S_awaddr;
    assign CLINT_awid = S_awid;
    assign CLINT_awlen = S_awlen;
    assign CLINT_awsize = S_awsize;
    assign CLINT_awburst = S_awburst;
    assign CLINT_wdata = S_wdata;
    assign CLINT_wstrb = S_wstrb;
    assign CLINT_wlast = S_wlast;
    assign CLINT_bready = S_bready;

    always @(*) begin
        //WRITE
        if(W_state == STATE_IDLE)begin
            MEM_awvalid = aw_sel_now?0:S_awvalid;
            MEM_wvalid = aw_sel_now?0:S_wvalid;
            CLINT_awvalid = aw_sel_now?S_awvalid:0;
            CLINT_wvalid = aw_sel_now?S_wvalid:0;

            S_awready = aw_sel_now?CLINT_awready:MEM_awready;
            S_wready = aw_sel_now?CLINT_wready:MEM_wready;
            S_bresp = 0;
            S_bvalid = 0;
            S_bid = 0;
        end else if(aw_sel_reg == 1'b0) begin
            MEM_awvalid = S_awvalid;
            MEM_wvalid = S_wvalid;
            CLINT_awvalid = 0;
            CLINT_wvalid = 0;

            S_awready = MEM_awready; S_wready = MEM_wready;
            S_bresp = MEM_bresp; S_bvalid = MEM_bvalid;
            S_bid = MEM_bid;
        end else begin
            MEM_awvalid = 0;
            MEM_wvalid = 0;
            CLINT_awvalid = S_awvalid;
            CLINT_wvalid = S_wvalid;

            S_awready = CLINT_awready; S_wready = CLINT_wready;
            S_bresp = CLINT_bresp; S_bvalid = CLINT_bvalid;
            S_bid = CLINT_bid;
        end
    end

endmodule

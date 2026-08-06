module bridge(
    input clk,
    input rst,
    //////////////////////////////////////////////////////////
    
    // S 侧 AW
    input      [31:0] S_awaddr,  input             S_awvalid, output reg        S_awready,
    input      [3:0]  S_awid,    input      [7:0]  S_awlen,   input      [2:0]  S_awsize,  input      [1:0]  S_awburst,
    // S 侧 W
    input      [31:0] S_wdata,   input      [3:0]  S_wstrb,   input             S_wvalid,  output reg        S_wready,
    input             S_wlast,
    // S 侧 B
    output reg [1:0]  S_bresp,   output reg        S_bvalid,  input             S_bready,
    output reg [3:0]  S_bid,
    // S 侧 AR
    input      [31:0] S_araddr,  input             S_arvalid, output reg        S_arready,
    input      [3:0]  S_arid,    input      [7:0]  S_arlen,   input      [2:0]  S_arsize,  input      [1:0]  S_arburst,
    // S 侧 R
    output reg [31:0] S_rdata,   output reg [1:0]  S_rresp,   output reg        S_rvalid,  input             S_rready,
    output reg        S_rlast,   output reg [3:0]  S_rid,

    ///////////////////////////////////////////////////////
    //MEM AW
    output reg [31:0] MEM_awaddr,  output reg        MEM_awvalid, input             MEM_awready,
    output reg [3:0]  MEM_awid,    output reg [7:0]  MEM_awlen,   output reg [2:0]  MEM_awsize, output reg [1:0]  MEM_awburst,
    //MEM W
    output reg [31:0] MEM_wdata,   output reg [3:0]  MEM_wstrb,   output reg        MEM_wvalid, input             MEM_wready,
    output reg        MEM_wlast,
    //MEM B
    input      [1:0]  MEM_bresp,   input             MEM_bvalid,  output reg        MEM_bready,
    input      [3:0]  MEM_bid,
    //MEM AR
    output reg [31:0] MEM_araddr,  output reg        MEM_arvalid, input             MEM_arready,
    output reg [3:0]  MEM_arid,    output reg [7:0]  MEM_arlen,   output reg [2:0]  MEM_arsize, output reg [1:0]  MEM_arburst,
    //MEM R
    input      [31:0] MEM_rdata,   input      [1:0]  MEM_rresp,   input             MEM_rvalid,  output reg        MEM_rready,
    input             MEM_rlast,   input      [3:0]  MEM_rid,

    //UART AW
    output reg [31:0] UART_awaddr,  output reg        UART_awvalid, input             UART_awready,
    output reg [3:0]  UART_awid,    output reg [7:0]  UART_awlen,   output reg [2:0]  UART_awsize, output reg [1:0]  UART_awburst,
    //UART W
    output reg [31:0] UART_wdata,   output reg [3:0]  UART_wstrb,   output reg        UART_wvalid, input             UART_wready,
    output reg        UART_wlast,
    //UART B
    input      [1:0]  UART_bresp,   input             UART_bvalid,  output reg        UART_bready,
    input      [3:0]  UART_bid,
    //UART AR
    output reg [31:0] UART_araddr,  output reg        UART_arvalid, input             UART_arready,
    output reg [3:0]  UART_arid,    output reg [7:0]  UART_arlen,   output reg [2:0]  UART_arsize, output reg [1:0]  UART_arburst,
    //UART R
    input      [31:0] UART_rdata,   input      [1:0]  UART_rresp,   input             UART_rvalid,  output reg        UART_rready,
    input             UART_rlast,   input      [3:0]  UART_rid,

    //CLINT AW
    output reg [31:0] CLINT_awaddr,  output reg        CLINT_awvalid, input             CLINT_awready,
    output reg [3:0]  CLINT_awid,    output reg [7:0]  CLINT_awlen,   output reg [2:0]  CLINT_awsize, output reg [1:0]  CLINT_awburst,
    //CLINT W
    output reg [31:0] CLINT_wdata,   output reg [3:0]  CLINT_wstrb,   output reg        CLINT_wvalid, input             CLINT_wready,
    output reg        CLINT_wlast,
    //CLINT B
    input      [1:0]  CLINT_bresp,   input             CLINT_bvalid,  output reg        CLINT_bready,
    input      [3:0]  CLINT_bid,
    //CLINT AR
    output reg [31:0] CLINT_araddr,  output reg        CLINT_arvalid, input             CLINT_arready,
    output reg [3:0]  CLINT_arid,    output reg [7:0]  CLINT_arlen,   output reg [2:0]  CLINT_arsize, output reg [1:0]  CLINT_arburst,
    //CLINT R
    input      [31:0] CLINT_rdata,   input      [1:0]  CLINT_rresp,   input             CLINT_rvalid,  output reg        CLINT_rready,
    input             CLINT_rlast,   input      [3:0]  CLINT_rid


);

    parameter STATE_IDLE   = 0;
    parameter STATE_BUSY   = 1;
    parameter ADDR_MEM_BASE  = 32'h80000000;
    parameter ADDR_MEM_SIZE  = 32'h08000000;
    parameter ADDR_UART_BASE = 32'h10000000;
    parameter ADDR_UART_SIZE = 32'h00000004;
    parameter ADDR_CLINT_BASE = 32'h10000048;
    parameter ADDR_CLINT_SIZE = 32'h00000008;

    reg [3:0] aw_sel_reg, ar_sel_reg;
    reg R_state, R_next_state, W_state, W_next_state;
    reg aw_fire, ar_fire;

    always @(*) begin
        ar_fire = S_arvalid && S_arready;
        aw_fire = S_awvalid && S_awready;
    end

    always @(posedge clk) begin
        if(rst) begin
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
                if(S_rready && S_rvalid) R_next_state = STATE_IDLE;
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

    always @(posedge clk) begin
        if(rst) begin
            aw_sel_reg <= 4'b0;
            ar_sel_reg <= 4'b0;
        end else begin
            // 握手时寄存设备选择
            if(aw_fire) begin
                if(S_awaddr >= ADDR_MEM_BASE && S_awaddr < ADDR_MEM_BASE + ADDR_MEM_SIZE) aw_sel_reg <= 4'b0001;
                else if(S_awaddr >= ADDR_UART_BASE && S_awaddr < ADDR_UART_BASE + ADDR_UART_SIZE) begin aw_sel_reg <= 4'b0010; difftest_skip_ref(4); end
                else if(S_awaddr >= ADDR_CLINT_BASE && S_awaddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE) begin aw_sel_reg <= 4'b0100; difftest_skip_ref(4); end
                else aw_sel_reg <= 4'b0000;
            end
            if(ar_fire) begin
                if(S_araddr >= ADDR_MEM_BASE && S_araddr < ADDR_MEM_BASE + ADDR_MEM_SIZE) ar_sel_reg <= 4'b0001;
                else if(S_araddr >= ADDR_UART_BASE && S_araddr < ADDR_UART_BASE + ADDR_UART_SIZE) begin ar_sel_reg <= 4'b0010; difftest_skip_ref(4); end
                else if(S_araddr >= ADDR_CLINT_BASE && S_araddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE) begin ar_sel_reg <= 4'b0100; difftest_skip_ref(4); end
                else ar_sel_reg <= 4'b0000;
            end
            // 交易结束回 IDLE 时清零，下次交易走组合译码，避免旧设备残留
            if(R_next_state == STATE_IDLE) ar_sel_reg <= 4'b0;
            if(W_next_state == STATE_IDLE) aw_sel_reg <= 4'b0;
        end
    end


    always @(*) begin
        //READ
        MEM_araddr = 32'b0;  MEM_arvalid = 1'b0;  MEM_rready = 1'b0;
        MEM_arid = 0; MEM_arlen = 0; MEM_arsize = 0; MEM_arburst = 0;
        UART_araddr = 32'b0; UART_arvalid = 1'b0; UART_rready = 1'b0;
        UART_arid = 0; UART_arlen = 0; UART_arsize = 0; UART_arburst = 0;
        CLINT_araddr = 32'b0; CLINT_arvalid = 1'b0; CLINT_rready = 1'b0;
        CLINT_arid = 0; CLINT_arlen = 0; CLINT_arsize = 0; CLINT_arburst = 0;
        S_arready = 1'b0;
        S_rdata = 32'b0; S_rresp = 2'b0; S_rvalid = 1'b0;
        S_rlast = 0; S_rid = 0;

        if(ar_sel_reg == 4'b0001) begin
            MEM_araddr = S_araddr; MEM_arvalid = S_arvalid; MEM_rready = S_rready;
            MEM_arid = S_arid; MEM_arlen = S_arlen; MEM_arsize = S_arsize; MEM_arburst = S_arburst;
            UART_araddr = 32'hdeadbeef; UART_arvalid = 0; UART_rready = 0;
            UART_arid = 0; UART_arlen = 0; UART_arsize = 0; UART_arburst = 0;
            CLINT_araddr = 32'hdeadbeef; CLINT_arvalid = 0; CLINT_rready = 0;
            CLINT_arid = 0; CLINT_arlen = 0; CLINT_arsize = 0; CLINT_arburst = 0;

            S_arready = MEM_arready;
            S_rdata = MEM_rdata; S_rresp = MEM_rresp; S_rvalid = MEM_rvalid;
            S_rlast = MEM_rlast; S_rid = MEM_rid;
        end
        else if(ar_sel_reg == 4'b0010) begin
            UART_araddr = (S_araddr - ADDR_UART_BASE); UART_arvalid = S_arvalid; UART_rready = S_rready;
            UART_arid = S_arid; UART_arlen = S_arlen; UART_arsize = S_arsize; UART_arburst = S_arburst;
            MEM_araddr = 32'hdeadbeef; MEM_arvalid = 0; MEM_rready = 0;
            MEM_arid = 0; MEM_arlen = 0; MEM_arsize = 0; MEM_arburst = 0;
            CLINT_araddr = 32'hdeadbeef; CLINT_arvalid = 0; CLINT_rready = 0;
            CLINT_arid = 0; CLINT_arlen = 0; CLINT_arsize = 0; CLINT_arburst = 0;

            S_arready = UART_arready;
            S_rdata = UART_rdata; S_rresp = UART_rresp; S_rvalid = UART_rvalid;
            S_rlast = UART_rlast; S_rid = UART_rid;
        end
        else if(ar_sel_reg == 4'b0100) begin
            CLINT_araddr = (S_araddr - ADDR_CLINT_BASE); CLINT_arvalid = S_arvalid; CLINT_rready = S_rready;
            CLINT_arid = S_arid; CLINT_arlen = S_arlen; CLINT_arsize = S_arsize; CLINT_arburst = S_arburst;
            MEM_araddr = 32'hdeadbeef; MEM_arvalid = 0; MEM_rready = 0;
            MEM_arid = 0; MEM_arlen = 0; MEM_arsize = 0; MEM_arburst = 0;
            UART_araddr = 32'hdeadbeef; UART_arvalid = 0; UART_rready = 0;
            UART_arid = 0; UART_arlen = 0; UART_arsize = 0; UART_arburst = 0;

            S_arready = CLINT_arready;
            S_rdata = CLINT_rdata; S_rresp = CLINT_rresp; S_rvalid = CLINT_rvalid;
            S_rlast = CLINT_rlast; S_rid = CLINT_rid;
        end
        else if (S_araddr >= ADDR_UART_BASE && S_araddr < ADDR_UART_BASE + ADDR_UART_SIZE) begin
            UART_araddr = (S_araddr - ADDR_UART_BASE); UART_arvalid = S_arvalid; UART_rready = S_rready;
            UART_arid = S_arid; UART_arlen = S_arlen; UART_arsize = S_arsize; UART_arburst = S_arburst;
            MEM_araddr = 32'hdeadbeef; MEM_arvalid = 0; MEM_rready = 0;
            MEM_arid = 0; MEM_arlen = 0; MEM_arsize = 0; MEM_arburst = 0;
            S_arready = UART_arready;
            S_rdata = MEM_rdata; S_rresp = MEM_rresp; S_rvalid = MEM_rvalid;
        end
        else if (S_araddr >= ADDR_CLINT_BASE && S_araddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE) begin
            CLINT_araddr = (S_araddr - ADDR_CLINT_BASE); CLINT_arvalid = S_arvalid; CLINT_rready = S_rready;
            CLINT_arid = S_arid; CLINT_arlen = S_arlen; CLINT_arsize = S_arsize; CLINT_arburst = S_arburst;
            MEM_araddr = 32'hdeadbeef; MEM_arvalid = 0; MEM_rready = 0;
            MEM_arid = 0; MEM_arlen = 0; MEM_arsize = 0; MEM_arburst = 0;
            UART_araddr = 32'hdeadbeef; UART_arvalid = 0; UART_rready = 0;
            UART_arid = 0; UART_arlen = 0; UART_arsize = 0; UART_arburst = 0;
            S_arready = CLINT_arready;
            S_rdata = MEM_rdata; S_rresp = MEM_rresp; S_rvalid = MEM_rvalid;
        end
        else begin
            MEM_araddr = S_araddr; MEM_arvalid = S_arvalid; MEM_rready = S_rready;
            MEM_arid = S_arid; MEM_arlen = S_arlen; MEM_arsize = S_arsize; MEM_arburst = S_arburst;
            UART_araddr = 32'hdeadbeef; UART_arvalid = 0; UART_rready = 0;
            UART_arid = 0; UART_arlen = 0; UART_arsize = 0; UART_arburst = 0;
            CLINT_araddr = 32'hdeadbeef; CLINT_arvalid = 0; CLINT_rready = 0;
            CLINT_arid = 0; CLINT_arlen = 0; CLINT_arsize = 0; CLINT_arburst = 0;

            S_arready = MEM_arready;
            S_rdata = MEM_rdata; S_rresp = MEM_rresp; S_rvalid = MEM_rvalid;
            S_rlast = MEM_rlast; S_rid = MEM_rid;
        end
    end

    always @(*) begin
        //WRITE
        MEM_awaddr = 32'b0; MEM_awvalid = 1'b0; MEM_awid = 0; MEM_awlen = 0; MEM_awsize = 0; MEM_awburst = 0;
        MEM_wdata = 32'b0; MEM_wstrb = 4'b0; MEM_wvalid = 1'b0; MEM_wlast = 0;
        MEM_bready = 1'b0;
        UART_awaddr = 32'b0; UART_awvalid = 1'b0; UART_awid = 0; UART_awlen = 0; UART_awsize = 0; UART_awburst = 0;
        UART_wdata = 32'b0; UART_wstrb = 4'b0; UART_wvalid = 1'b0; UART_wlast = 0;
        UART_bready = 1'b0;
        CLINT_awaddr = 32'b0; CLINT_awvalid = 1'b0; CLINT_awid = 0; CLINT_awlen = 0; CLINT_awsize = 0; CLINT_awburst = 0;
        CLINT_wdata = 32'b0; CLINT_wstrb = 4'b0; CLINT_wvalid = 1'b0; CLINT_wlast = 0;
        CLINT_bready = 1'b0;
        S_awready = 1'b0; S_wready = 1'b0;
        S_bresp = 2'b0; S_bvalid = 1'b0; S_bid = 0;

        if(aw_sel_reg == 4'b0001) begin
            MEM_awaddr = S_awaddr; MEM_awvalid = S_awvalid;
            MEM_awid = S_awid; MEM_awlen = S_awlen; MEM_awsize = S_awsize; MEM_awburst = S_awburst;
            MEM_wdata  = S_wdata;  MEM_wstrb   = S_wstrb; MEM_wvalid = S_wvalid; MEM_wlast = S_wlast;
            MEM_bready = S_bready;
            UART_awaddr = 32'hdeadbeef; UART_awvalid = 0; UART_awid = 0; UART_awlen = 0; UART_awsize = 0; UART_awburst = 0;
            UART_wdata  = 0;  UART_wstrb   = 0; UART_wvalid = 0; UART_wlast = 0;
            UART_bready = 0;
            CLINT_awaddr = 32'hdeadbeef; CLINT_awvalid = 0; CLINT_awid = 0; CLINT_awlen = 0; CLINT_awsize = 0; CLINT_awburst = 0;
            CLINT_wdata  = 0;  CLINT_wstrb   = 0; CLINT_wvalid = 0; CLINT_wlast = 0;
            CLINT_bready = 0;

            S_awready = MEM_awready; S_wready = MEM_wready;
            S_bresp = MEM_bresp; S_bvalid = MEM_bvalid; S_bid = MEM_bid;
        end
        else if(aw_sel_reg == 4'b0010) begin
            MEM_awaddr = 32'hdeadbeef; MEM_awvalid = 0; MEM_awid = 0; MEM_awlen = 0; MEM_awsize = 0; MEM_awburst = 0;
            MEM_wdata  = 0;  MEM_wstrb   = 0; MEM_wvalid = 0; MEM_wlast = 0;
            MEM_bready = 0;
            UART_awaddr = (S_awaddr - ADDR_UART_BASE); UART_awvalid = S_awvalid;
            UART_awid = S_awid; UART_awlen = S_awlen; UART_awsize = S_awsize; UART_awburst = S_awburst;
            UART_wdata  = S_wdata;  UART_wstrb   = S_wstrb; UART_wvalid = S_wvalid; UART_wlast = S_wlast;
            UART_bready = S_bready;
            CLINT_awaddr = 32'hdeadbeef; CLINT_awvalid = 0; CLINT_awid = 0; CLINT_awlen = 0; CLINT_awsize = 0; CLINT_awburst = 0;
            CLINT_wdata  = 0;  CLINT_wstrb   = 0; CLINT_wvalid = 0; CLINT_wlast = 0;
            CLINT_bready = 0;

            S_awready = UART_awready; S_wready = UART_wready;
            S_bresp = UART_bresp; S_bvalid = UART_bvalid; S_bid = UART_bid;
        end else if(aw_sel_reg == 4'b0100) begin
            MEM_awaddr = 32'hdeadbeef; MEM_awvalid = 0; MEM_awid = 0; MEM_awlen = 0; MEM_awsize = 0; MEM_awburst = 0;
            MEM_wdata  = 0;  MEM_wstrb   = 0; MEM_wvalid = 0; MEM_wlast = 0;
            MEM_bready = 0;
            UART_awaddr = 32'hdeadbeef; UART_awvalid = 0; UART_awid = 0; UART_awlen = 0; UART_awsize = 0; UART_awburst = 0;
            UART_wdata  = 0;  UART_wstrb   = 0; UART_wvalid = 0; UART_wlast = 0;
            UART_bready = 0;
            CLINT_awaddr = (S_awaddr - ADDR_CLINT_BASE); CLINT_awvalid = S_awvalid;
            CLINT_awid = S_awid; CLINT_awlen = S_awlen; CLINT_awsize = S_awsize; CLINT_awburst = S_awburst;
            CLINT_wdata  = S_wdata;  CLINT_wstrb   = S_wstrb; CLINT_wvalid = S_wvalid; CLINT_wlast = S_wlast;
            CLINT_bready = S_bready;

            S_awready = CLINT_awready; S_wready = CLINT_wready;
            S_bresp = CLINT_bresp; S_bvalid = CLINT_bvalid; S_bid = CLINT_bid;
        end
        else if (S_awaddr >= ADDR_UART_BASE && S_awaddr < ADDR_UART_BASE + ADDR_UART_SIZE) begin
            MEM_awaddr = 32'hdeadbeef; MEM_awvalid = 0; MEM_awid = 0; MEM_awlen = 0; MEM_awsize = 0; MEM_awburst = 0;
            MEM_wdata  = 0;  MEM_wstrb   = 0; MEM_wvalid = 0; MEM_wlast = 0;
            MEM_bready = 0;
            UART_awaddr = (S_awaddr - ADDR_UART_BASE); UART_awvalid = S_awvalid;
            UART_awid = S_awid; UART_awlen = S_awlen; UART_awsize = S_awsize; UART_awburst = S_awburst;
            UART_wdata  = S_wdata;  UART_wstrb   = S_wstrb; UART_wvalid = S_wvalid; UART_wlast = S_wlast;
            UART_bready = S_bready;
            CLINT_awaddr = 32'hdeadbeef; CLINT_awvalid = 0; CLINT_awid = 0; CLINT_awlen = 0; CLINT_awsize = 0; CLINT_awburst = 0;
            CLINT_wdata  = 0;  CLINT_wstrb   = 0; CLINT_wvalid = 0; CLINT_wlast = 0;
            CLINT_bready = 0;

            S_awready = UART_awready; S_wready = UART_wready;
            S_bresp = MEM_bresp; S_bvalid = MEM_bvalid;
        end
        else if (S_awaddr >= ADDR_CLINT_BASE && S_awaddr < ADDR_CLINT_BASE + ADDR_CLINT_SIZE) begin
            MEM_awaddr = 32'hdeadbeef; MEM_awvalid = 0; MEM_awid = 0; MEM_awlen = 0; MEM_awsize = 0; MEM_awburst = 0;
            MEM_wdata  = 0;  MEM_wstrb   = 0; MEM_wvalid = 0; MEM_wlast = 0;
            MEM_bready = 0;
            UART_awaddr = 32'hdeadbeef; UART_awvalid = 0; UART_awid = 0; UART_awlen = 0; UART_awsize = 0; UART_awburst = 0;
            UART_wdata  = 0;  UART_wstrb   = 0; UART_wvalid = 0; UART_wlast = 0;
            UART_bready = 0;
            CLINT_awaddr = (S_awaddr - ADDR_CLINT_BASE); CLINT_awvalid = S_awvalid;
            CLINT_awid = S_awid; CLINT_awlen = S_awlen; CLINT_awsize = S_awsize; CLINT_awburst = S_awburst;
            CLINT_wdata  = S_wdata;  CLINT_wstrb   = S_wstrb; CLINT_wvalid = S_wvalid; CLINT_wlast = S_wlast;
            CLINT_bready = S_bready;

            S_awready = CLINT_awready; S_wready = CLINT_wready;
            S_bresp = MEM_bresp; S_bvalid = MEM_bvalid;
        end
        else begin
            MEM_awaddr = S_awaddr; MEM_awvalid = S_awvalid;
            MEM_awid = S_awid; MEM_awlen = S_awlen; MEM_awsize = S_awsize; MEM_awburst = S_awburst;
            MEM_wdata  = S_wdata;  MEM_wstrb   = S_wstrb; MEM_wvalid = S_wvalid; MEM_wlast = S_wlast;
            MEM_bready = S_bready;
            UART_awaddr = 32'hdeadbeef; UART_awvalid = 0; UART_awid = 0; UART_awlen = 0; UART_awsize = 0; UART_awburst = 0;
            UART_wdata  = 0;  UART_wstrb   = 0; UART_wvalid = 0; UART_wlast = 0;
            UART_bready = 0;
            S_awready = MEM_awready; S_wready = MEM_wready;
            S_bresp = MEM_bresp; S_bvalid = MEM_bvalid; S_bid = MEM_bid;
        end
    end

endmodule
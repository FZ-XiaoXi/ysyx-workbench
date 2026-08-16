module ysyx_26010011_AXI4LiteArbiter(
    input     clock,
    input     reset,

    //MASTER1 AW
    input      [31:0] M1_awaddr,  input             M1_awvalid, output reg        M1_awready,
    input      [3:0]  M1_awid,    input      [7:0]  M1_awlen,   input      [2:0]  M1_awsize,  input      [1:0]  M1_awburst,
    //MASTER1 W
    input      [31:0] M1_wdata,   input      [3:0]  M1_wstrb,   input             M1_wvalid,  output reg        M1_wready,
    input             M1_wlast,
    //MASTER1 B
    output reg [1:0]  M1_bresp,   output reg        M1_bvalid,  input             M1_bready,
    output reg [3:0]  M1_bid,
    //MASTER1 AR
    input      [31:0] M1_araddr,  input             M1_arvalid, output reg        M1_arready,
    input      [3:0]  M1_arid,    input      [7:0]  M1_arlen,   input      [2:0]  M1_arsize,  input      [1:0]  M1_arbureset,
    //MASTER1 R
    output reg [31:0] M1_rdata,   output reg [1:0]  M1_rresp,   output reg        M1_rvalid,  input             M1_rready,
    output reg        M1_rlast,   output reg [3:0]  M1_rid,

    //MASTER2 AW
    input      [31:0] M2_awaddr,  input             M2_awvalid, output reg        M2_awready,
    input      [3:0]  M2_awid,    input      [7:0]  M2_awlen,   input      [2:0]  M2_awsize,  input      [1:0]  M2_awburst,
    //MASTER2 W
    input      [31:0] M2_wdata,   input      [3:0]  M2_wstrb,   input             M2_wvalid,  output reg        M2_wready,
    input             M2_wlast,
    //MASTER2 B
    output reg [1:0]  M2_bresp,   output reg        M2_bvalid,  input             M2_bready,
    output reg [3:0]  M2_bid,
    //MASTER2 AR
    input      [31:0] M2_araddr,  input             M2_arvalid, output reg        M2_arready,
    input      [3:0]  M2_arid,    input      [7:0]  M2_arlen,   input      [2:0]  M2_arsize,  input      [1:0]  M2_arbureset,
    //MASTER2 R
    output reg [31:0] M2_rdata,   output reg [1:0]  M2_rresp,   output reg        M2_rvalid,  input             M2_rready,
    output reg        M2_rlast,   output reg [3:0]  M2_rid,

    //SLAVE AW
    output reg [31:0] S_awaddr,   output reg        S_awvalid,  input             S_awready,
    output reg [3:0]  S_awid,     output reg [7:0]  S_awlen,    output reg [2:0]  S_awsize,   output reg [1:0]  S_awburst,
    //SLAVE W
    output reg [31:0] S_wdata,    output reg [3:0]  S_wstrb,    output reg        S_wvalid,   input             S_wready,
    output reg        S_wlast,
    //SLAVE B
    input      [1:0]  S_bresp,    input             S_bvalid,   output reg        S_bready,
    input      [3:0]  S_bid,
    //SLAVE AR
    output reg [31:0] S_araddr,   output reg        S_arvalid,  input             S_arready,
    output reg [3:0]  S_arid,     output reg [7:0]  S_arlen,    output reg [2:0]  S_arsize,   output reg [1:0]  S_arbureset,
    //SLAVE R
    input      [31:0] S_rdata,    input      [1:0]  S_rresp,    input             S_rvalid,   output reg        S_rready,
    input             S_rlast,    input      [3:0]  S_rid
);
    /////////////////////////////////////////////////////////////////////R - Arbiter
    parameter R_IDLE = 1'b0, R_BUSY = 1'b1;
    reg R_state, R_next_state;
    reg R_master_sel, R_master_sel_next; // 0: M1, 1: M2
    always @(posedge clock) begin
        if(reset) begin
            R_state<=R_IDLE;
            R_master_sel<=0;
        end else    begin
            R_state<=R_next_state;
            R_master_sel<=R_master_sel_next;
        end
    end

    always @(*)begin
        R_next_state=R_state;
        R_master_sel_next=R_master_sel;
        case(R_state)
            R_IDLE:begin
                if(M1_arvalid & S_arready) begin
                    R_next_state = R_BUSY;
                    R_master_sel_next = 0;
                end else if(M2_arvalid & S_arready) begin
                    R_next_state = R_BUSY;
                    R_master_sel_next = 1;
                end else begin
                    R_next_state = R_IDLE;
                    R_master_sel_next = R_master_sel;
                end
            end
            R_BUSY:begin
                case(R_master_sel)
                    1'b0:begin
                        if(S_rvalid & M1_rready & S_rlast) R_next_state=R_IDLE;
                    end
                    1'b1:begin
                        if(S_rvalid & M2_rready & S_rlast) R_next_state=R_IDLE;
                    end
                endcase
            end
            default:
                R_next_state=R_IDLE;
        endcase
    end

    //AR
    always @(*)begin
        case(R_state)
            R_IDLE:begin
                if(M1_arvalid) begin
                    M1_arready = S_arready;
                    M2_arready = 0;
                    S_arvalid = 1;
                    S_araddr = M1_araddr;
                    S_arid   = M1_arid; S_arlen = M1_arlen; S_arsize = M1_arsize; S_arbureset = M1_arbureset;
                end else if(M2_arvalid) begin
                    M1_arready = 0;
                    M2_arready = S_arready;
                    S_arvalid = 1;
                    S_araddr = M2_araddr;
                    S_arid   = M2_arid; S_arlen = M2_arlen; S_arsize = M2_arsize; S_arbureset = M2_arbureset;
                end else begin
                    M1_arready = 0;
                    M2_arready = 0;
                    S_arvalid = 0;
                    S_araddr = 0;
                    S_arid   = 0; S_arlen = 0; S_arsize = 0; S_arbureset = 0;
                end
            end
            R_BUSY:begin
                M1_arready = R_master_sel?0:S_arready;
                M2_arready = R_master_sel?S_arready:0;
                S_arvalid = R_master_sel?M2_arvalid:M1_arvalid;
                S_araddr = R_master_sel?M2_araddr:M1_araddr;
                S_arid   = R_master_sel?M2_arid:M1_arid;
                S_arlen  = R_master_sel?M2_arlen:M1_arlen;
                S_arsize = R_master_sel?M2_arsize:M1_arsize;
                S_arbureset = R_master_sel?M2_arbureset:M1_arbureset;
            end
        endcase
    end
    //R
    always @(*)begin
        case(R_state)
            R_IDLE:begin
                M1_rvalid = 0; M1_rdata = 0; M1_rresp = 0; M1_rlast = 0; M1_rid = 0;
                M2_rvalid = 0; M2_rdata = 0; M2_rresp = 0; M2_rlast = 0; M2_rid = 0;
                S_rready = 0;
            end
            R_BUSY:begin
                M1_rdata = R_master_sel?0:S_rdata;
                M1_rresp = R_master_sel?0:S_rresp;
                M1_rvalid = R_master_sel?0:S_rvalid;
                M1_rlast  = R_master_sel?0:S_rlast;
                M1_rid    = R_master_sel?0:S_rid;
                M2_rdata = R_master_sel?S_rdata:0;
                M2_rresp = R_master_sel?S_rresp:0;
                M2_rvalid = R_master_sel?S_rvalid:0;
                M2_rlast  = R_master_sel?S_rlast:0;
                M2_rid    = R_master_sel?S_rid:0;
                S_rready = R_master_sel?M2_rready:M1_rready;
            end
        endcase
    end
    



    /////////////////////////////////////////////////////////////////////W - Arbiter
    parameter W_IDLE = 1'b0, W_BUSY = 1'b1;
    reg W_state, W_next_state;
    reg W_master_sel, W_master_sel_next; // 0: M1, 1: M2
    always @(posedge clock) begin
        if(reset) begin
            W_state<=W_IDLE;
            W_master_sel<=0;
        end else    begin
            W_state<=W_next_state;
            W_master_sel<=W_master_sel_next;
        end
    end

    always @(*)begin
        W_next_state=W_state;
        W_master_sel_next=W_master_sel;
        case(W_state)
            W_IDLE:begin
                if(M1_awvalid) begin
                    W_next_state = W_BUSY;
                    W_master_sel_next = 0;
                end else if(M2_awvalid) begin
                    W_next_state = W_BUSY;
                    W_master_sel_next = 1;
                end else begin
                    W_next_state = W_IDLE;
                    W_master_sel_next = W_master_sel;
                end
            end
            W_BUSY:begin
                case(W_master_sel)
                    1'b0:begin
                        if(S_bvalid & M1_bready) W_next_state=W_IDLE;
                    end
                    1'b1:begin
                        if(S_bvalid & M2_bready) W_next_state=W_IDLE;
                    end
                endcase
            end
            default:
                W_next_state=W_IDLE;
        endcase
    end

    //AW
    always @(*)begin
        case(W_state)
            W_IDLE:begin
                if(M1_awvalid) begin
                    M1_awready = S_awready;
                    M2_awready = 0;
                    S_awvalid = 1;
                    S_awaddr = M1_awaddr;
                    S_awid   = M1_awid; S_awlen = M1_awlen; S_awsize = M1_awsize; S_awburst = M1_awburst;
                end else if(M2_awvalid) begin
                    M1_awready = 0;
                    M2_awready = S_awready;
                    S_awvalid = 1;
                    S_awaddr = M2_awaddr;
                    S_awid   = M2_awid; S_awlen = M2_awlen; S_awsize = M2_awsize; S_awburst = M2_awburst;
                end else begin
                    M1_awready = 0;
                    M2_awready = 0;
                    S_awvalid = 0;
                    S_awaddr = 0;
                    S_awid   = 0; S_awlen = 0; S_awsize = 0; S_awburst = 0;
                end
            end
            W_BUSY:begin
                M1_awready = W_master_sel?0:S_awready;
                M2_awready = W_master_sel?S_awready:0;
                S_awvalid = W_master_sel?M2_awvalid:M1_awvalid;
                S_awaddr = W_master_sel?M2_awaddr:M1_awaddr;
                S_awid   = W_master_sel?M2_awid:M1_awid;
                S_awlen  = W_master_sel?M2_awlen:M1_awlen;
                S_awsize = W_master_sel?M2_awsize:M1_awsize;
                S_awburst = W_master_sel?M2_awburst:M1_awburst;
            end
        endcase
    end

    //W
    always @(*)begin
        case(W_state)
            W_IDLE:begin


                if(M1_wvalid) begin
                    S_wvalid = 1;
                    S_wdata = M1_wdata;
                    S_wstrb = M1_wstrb;
                    S_wlast = M1_wlast;
                    M1_wready = S_wready;
                    M2_wready = 0;
                end else if(M2_wvalid) begin
                    S_wvalid = 1;
                    S_wdata = M2_wdata;
                    S_wstrb = M2_wstrb;
                    S_wlast = M2_wlast;
                    M1_wready = 0;
                    M2_wready = S_wready;
                end else begin
                    S_wvalid = 0;
                    S_wdata = 0;
                    S_wstrb = 0;
                    S_wlast = 0;
                end
            end
            W_BUSY:begin
                M1_wready = W_master_sel?0:S_wready;
                M2_wready = W_master_sel?S_wready:0;
                S_wvalid = W_master_sel?M2_wvalid:M1_wvalid;
                S_wdata = W_master_sel?M2_wdata:M1_wdata;
                S_wstrb = W_master_sel?M2_wstrb:M1_wstrb;
                S_wlast = W_master_sel?M2_wlast:M1_wlast;
            end
        endcase
    end


    //B
    always @(*)begin
        case(W_state)
            W_IDLE:begin
                M1_bresp = 0; M1_bvalid = 0; M1_bid = 0;
                M2_bresp = 0; M2_bvalid = 0; M2_bid = 0;
                S_bready = 0;
            end
            W_BUSY:begin
                M1_bresp = W_master_sel?0:S_bresp;
                M1_bvalid = W_master_sel?0:S_bvalid;
                M1_bid    = W_master_sel?0:S_bid;
                M2_bresp = W_master_sel?S_bresp:0;
                M2_bvalid = W_master_sel?S_bvalid:0;
                M2_bid    = W_master_sel?S_bid:0;
                S_bready = W_master_sel?M2_bready:M1_bready;
            end
        endcase
    end

endmodule


// ██████╗  ██╗  ██╗ ██╗ ██╗  ██╗
// ██╔══██╗ ╚██╗██╔╝ ██║ ██║  ██║
// ███████║  ╚███╔╝  ██║ ███████║
// ██╔══██║  ██╔██╗  ██║ ╚════██║
// ██║  ██║ ██╔╝ ██╗ ██║      ██║
// ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝      ╚═╝
module ysyx_26010011_AXI4Arbiter(
    input     clock,
    input     reset,

    // //MASTER1 AW
    // input      [31:0] M1_awaddr,  input             M1_awvalid, output reg        M1_awready,
    // input      [3:0]  M1_awid,    input      [7:0]  M1_awlen,   input      [2:0]  M1_awsize,  input      [1:0]  M1_awburst,
    // //MASTER1 W
    // input      [31:0] M1_wdata,   input      [3:0]  M1_wstrb,   input             M1_wvalid,  output reg        M1_wready,
    // input             M1_wlast,
    // //MASTER1 B
    // output reg [1:0]  M1_bresp,   output reg        M1_bvalid,  input             M1_bready,
    // output reg [3:0]  M1_bid,
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
                if(M1_arvalid) begin
                    R_next_state = R_BUSY;
                    R_master_sel_next = 0;
                end else if(M2_arvalid) begin
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
            default:begin
                M1_arready = 0;
                M2_arready = 0;
                S_arvalid = 0;
                S_araddr = 0;
                S_arid   = 0; S_arlen = 0; S_arsize = 0; S_arbureset = 0;
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
                M1_rdata = S_rdata;
                M1_rresp = S_rresp;
                M1_rvalid = R_master_sel?0:S_rvalid;
                M1_rlast  = S_rlast;
                M1_rid    = S_rid;
                M2_rdata = S_rdata;
                M2_rresp = S_rresp;
                M2_rvalid = R_master_sel?S_rvalid:0;
                M2_rlast  = S_rlast;
                M2_rid    = S_rid;
                S_rready = R_master_sel?M2_rready:M1_rready;
            end
            default:begin
                M1_rvalid = 0; M1_rdata = 0; M1_rresp = 0; M1_rlast = 0; M1_rid = 0;
                M2_rvalid = 0; M2_rdata = 0; M2_rresp = 0; M2_rlast = 0; M2_rid = 0;
                S_rready = 0;
            end
        endcase
    end
    



    //////

    //AW
    assign M2_awready = S_awready;
    assign S_awvalid = M2_awvalid;
    assign S_awaddr = M2_awaddr;
    assign S_awid   = M2_awid;
    assign S_awlen  = M2_awlen;
    assign S_awsize = M2_awsize;
    assign S_awburst = M2_awburst;

    //W
    assign M2_wready = S_wready;
    assign S_wvalid = M2_wvalid;
    assign S_wdata = M2_wdata;
    assign S_wstrb = M2_wstrb;
    assign S_wlast = M2_wlast;


    //B
    assign M2_bresp = S_bresp;
    assign M2_bvalid = S_bvalid;
    assign M2_bid    = S_bid;
    assign S_bready = M2_bready;
endmodule

module AXI4LiteArbiter(
    input     clk,
    input     rst,

    //MASTER1
    input      [31:0] M1_araddr,  input             M1_arvalid, output reg        M1_arready,
    output reg [31:0] M1_rdata,   output reg [1:0]  M1_rresp,   output reg        M1_rvalid,  input             M1_rready,
    input      [31:0] M1_awaddr,  input             M1_awvalid, output reg        M1_awready,
    input      [31:0] M1_wdata,   input      [3:0]  M1_wstrb,   input             M1_wvalid,  output reg        M1_wready,
    output reg [1:0]  M1_bresp,   output reg        M1_bvalid,  input             M1_bready,

    //MASTER2
    input      [31:0] M2_araddr,  input             M2_arvalid, output reg        M2_arready,
    output reg [31:0] M2_rdata,   output reg [1:0]  M2_rresp,   output reg        M2_rvalid,  input             M2_rready,
    input      [31:0] M2_awaddr,  input             M2_awvalid, output reg        M2_awready,
    input      [31:0] M2_wdata,   input      [3:0]  M2_wstrb,   input             M2_wvalid,  output reg        M2_wready,
    output reg [1:0]  M2_bresp,   output reg        M2_bvalid,  input             M2_bready,

    //SLAVE
    output reg [31:0] S_araddr,   output reg        S_arvalid,  input             S_arready,
    input      [31:0] S_rdata,    input      [1:0]  S_rresp,    input             S_rvalid,   output reg        S_rready,
    output reg [31:0] S_awaddr,   output reg        S_awvalid,  input             S_awready,
    output reg [31:0] S_wdata,    output reg [3:0]  S_wstrb,    output reg        S_wvalid,   input             S_wready,
    input      [1:0]  S_bresp,    input             S_bvalid,   output reg        S_bready
);
    /////////////////////////////////////////////////////////////////////R - Arbiter
    parameter R_IDLE = 1'b0, R_BUSY = 1'b1;
    reg R_state, R_next_state;
    reg R_master_sel, R_master_sel_next; // 0: M1, 1: M2
    always @(posedge clk) begin
        if(rst) begin
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
                        if(S_rvalid & M1_rready) R_next_state=R_IDLE;
                    end
                    1'b1:begin
                        if(S_rvalid & M2_rready) R_next_state=R_IDLE;
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
                end else if(M2_arvalid) begin
                    M1_arready = 0;
                    M2_arready = S_arready;
                    S_arvalid = 1;
                    S_araddr = M2_araddr;
                end else begin
                    M1_arready = 0;
                    M2_arready = 0;
                    S_arvalid = 0;
                    S_araddr = 0;
                end
            end
            R_BUSY:begin
                M1_arready = R_master_sel?0:S_arready;
                M2_arready = R_master_sel?S_arready:0;
                S_arvalid = R_master_sel?M2_arvalid:M1_arvalid;
                S_araddr = R_master_sel?M2_araddr:M1_araddr;
            end
        endcase
    end
    //R
    always @(*)begin
        case(R_state)
            R_IDLE:begin
                M1_rvalid = 0;
                M1_rdata = 0;
                M1_rresp = 0;
                M2_rvalid = 0;
                M2_rdata = 0;
                M2_rresp = 0;
                S_rready = 0;
            end
            R_BUSY:begin
                M1_rdata = R_master_sel?0:S_rdata;
                M1_rresp = R_master_sel?0:S_rresp;
                M1_rvalid = R_master_sel?0:S_rvalid;
                M2_rdata = R_master_sel?S_rdata:0;
                M2_rresp = R_master_sel?S_rresp:0;
                M2_rvalid = R_master_sel?S_rvalid:0;
                S_rready = R_master_sel?M2_rready:M1_rready;
            end
        endcase
    end
    



    /////////////////////////////////////////////////////////////////////W - Arbiter
    parameter W_IDLE = 1'b0, W_BUSY = 1'b1;
    reg W_state, W_next_state;
    reg W_master_sel, W_master_sel_next; // 0: M1, 1: M2
    always @(posedge clk) begin
        if(rst) begin
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
                end else if(M2_awvalid) begin
                    M1_awready = 0;
                    M2_awready = S_awready;
                    S_awvalid = 1;
                    S_awaddr = M2_awaddr;
                end else begin
                    M1_awready = 0;
                    M2_awready = 0;
                    S_awvalid = 0;
                    S_awaddr = 0;
                end
            end
            W_BUSY:begin
                M1_awready = W_master_sel?0:S_awready;
                M2_awready = W_master_sel?S_awready:0;
                S_awvalid = W_master_sel?M2_awvalid:M1_awvalid;
                S_awaddr = W_master_sel?M2_awaddr:M1_awaddr;
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
                    M1_wready = S_wready;
                    M2_wready = 0;
                end else if(M2_wvalid) begin
                    S_wvalid = 1;
                    S_wdata = M2_wdata;
                    S_wstrb = M2_wstrb;
                    M1_wready = 0;
                    M2_wready = S_wready;
                end else begin
                    S_wvalid = 0;
                    S_wdata = 0;
                    S_wstrb = 0;
                end
            end
            W_BUSY:begin
                M1_wready = W_master_sel?0:S_wready;
                M2_wready = W_master_sel?S_wready:0;
                S_wvalid = W_master_sel?M2_wvalid:M1_wvalid;
                S_wdata = W_master_sel?M2_wdata:M1_wdata;
                S_wstrb = W_master_sel?M2_wstrb:M1_wstrb;
                
            end
        endcase
    end


    //B
    always @(*)begin
        case(W_state)
            W_IDLE:begin
                M1_bresp = 0;
                M1_bvalid = 0;
                M2_bresp = 0;
                M2_bvalid = 0;
                S_bready = 0;
            end
            W_BUSY:begin
                M1_bresp = W_master_sel?0:S_bresp;
                M1_bvalid = W_master_sel?0:S_bvalid;
                M2_bresp = W_master_sel?S_bresp:0;
                M2_bvalid = W_master_sel?S_bvalid:0;
                S_bready = W_master_sel?M2_bready:M1_bready;
            end
        endcase
    end

endmodule
module AXI4LiteArbiter(///////这里使用ai进行代码格式美化
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

    // =======================================================================
    // R Channel Arbiter (Read)
    // =======================================================================
    localparam R_IDLE = 1'b0, R_BUSY = 1'b1;
    reg R_state, R_state_next;
    reg r_priority, r_pass, r_pass_next;

    always @(posedge clk) begin
        if(rst) begin
             R_state <= R_IDLE; r_priority <= 0; r_pass <= 0;
        end else begin
            R_state <= R_state_next; r_priority <= ~r_priority; r_pass <= r_pass_next;
        end
    end

    // 1. R Channel: 状态转移逻辑 (隔离)
    always @(*) begin
        R_state_next = R_state;
        r_pass_next  = r_pass;
        case(R_state)
            R_IDLE: begin
                if(M1_arvalid & M2_arvalid) begin
                    R_state_next = R_BUSY; r_pass_next = r_priority;
                end else if(M2_arvalid) begin
                    R_state_next = R_BUSY; r_pass_next = 1;
                end else if(M1_arvalid) begin
                    R_state_next = R_BUSY; r_pass_next = 0;
                end
            end
            R_BUSY: begin
                if ( (r_pass == 1 && M2_rready && S_rvalid) || 
                     (r_pass == 0 && M1_rready && S_rvalid) ) begin
                    if (M1_arvalid) begin
                        R_state_next = R_BUSY; r_pass_next = 0;
                    end else if (M2_arvalid) begin
                        R_state_next = R_BUSY; r_pass_next = 1;
                    end else begin
                        R_state_next = R_IDLE;
                    end
                end
            end
        endcase
    end

    // 2. AR Channel (地址通道): 严格组合逻辑
    always @(*) begin
        S_araddr = 0; S_arvalid = 0; M1_arready = 0; M2_arready = 0;
        if (R_state == R_IDLE) begin
            if (M1_arvalid & M2_arvalid) begin
                S_arvalid = 1; S_araddr = r_priority ? M2_araddr : M1_araddr;
                M1_arready = ~r_priority & S_arready; M2_arready = r_priority & S_arready;
            end else if (M2_arvalid) begin
                S_arvalid = 1; S_araddr = M2_araddr; M2_arready = S_arready;
            end else if (M1_arvalid) begin
                S_arvalid = 1; S_araddr = M1_araddr; M1_arready = S_arready;
            end
        end else begin // R_BUSY
            if (r_pass == 0) begin
                S_arvalid = M1_arvalid; S_araddr = M1_araddr; M1_arready = S_arready;
            end else begin
                S_arvalid = M2_arvalid; S_araddr = M2_araddr; M2_arready = S_arready;
            end
        end
    end

    // 3. R Channel (数据响应通道): 严格组合逻辑
    always @(*) begin
        S_rready = 0;
        M1_rvalid = 0; M1_rdata = 0; M1_rresp = 0;
        M2_rvalid = 0; M2_rdata = 0; M2_rresp = 0;
        if (R_state == R_BUSY) begin
            if (r_pass == 0) begin // M1
                M1_rvalid = S_rvalid; M1_rdata = S_rdata; M1_rresp = S_rresp; S_rready = M1_rready;
            end else begin         // M2
                M2_rvalid = S_rvalid; M2_rdata = S_rdata; M2_rresp = S_rresp; S_rready = M2_rready;
            end
        end
    end


    // =======================================================================
    // W Channel Arbiter (Write)
    // =======================================================================
    localparam W_IDLE = 1'b0, W_BUSY = 1'b1;
    reg W_state, W_state_next;
    reg w_priority, w_pass, w_pass_next;

    always @(posedge clk) begin
        if(rst) begin
             W_state <= W_IDLE; w_priority <= 0; w_pass <= 0;
        end else begin
            W_state <= W_state_next; w_priority <= ~w_priority; w_pass <= w_pass_next;
        end
    end

    // 1. W Channel: 状态转移逻辑
    always @(*) begin
        W_state_next = W_state;
        w_pass_next  = w_pass;
        case(W_state)
            W_IDLE: begin
                if ((M1_awvalid | M1_wvalid) & (M2_awvalid | M2_wvalid)) begin
                    W_state_next = W_BUSY; w_pass_next = w_priority;
                end else if (M2_awvalid | M2_wvalid) begin
                    W_state_next = W_BUSY; w_pass_next = 1;
                end else if (M1_awvalid | M1_wvalid) begin
                    W_state_next = W_BUSY; w_pass_next = 0;
                end
            end
            W_BUSY: begin
                if ( (w_pass == 1 && M2_bready && S_bvalid) || 
                     (w_pass == 0 && M1_bready && S_bvalid) ) begin
                    if (M1_awvalid | M1_wvalid) begin
                        W_state_next = W_BUSY; w_pass_next = 0;
                    end else if (M2_awvalid | M2_wvalid) begin
                        W_state_next = W_BUSY; w_pass_next = 1;
                    end else begin
                        W_state_next = W_IDLE;
                    end
                end
            end
        endcase
    end

    // 2. AW / W Channel (写地址与写数据): 严格组合逻辑
    always @(*) begin
        S_awaddr = 0; S_awvalid = 0; M1_awready = 0; M2_awready = 0;
        S_wdata  = 0; S_wstrb   = 0; S_wvalid   = 0; M1_wready  = 0; M2_wready  = 0;
        if (W_state == W_IDLE) begin
            if ((M1_awvalid | M1_wvalid) & (M2_awvalid | M2_wvalid)) begin
                S_awaddr   = w_priority ? M2_awaddr : M1_awaddr;
                S_awvalid  = w_priority ? M2_awvalid : M1_awvalid;
                M1_awready = ~w_priority & S_awready;
                M2_awready = w_priority & S_awready;
                S_wdata    = w_priority ? M2_wdata : M1_wdata;
                S_wstrb    = w_priority ? M2_wstrb : M1_wstrb;
                S_wvalid   = w_priority ? M2_wvalid : M1_wvalid;
                M1_wready  = ~w_priority & S_wready;
                M2_wready  = w_priority & S_wready;
            end else if (M2_awvalid | M2_wvalid) begin
                S_awaddr = M2_awaddr; S_awvalid = M2_awvalid; M2_awready = S_awready;
                S_wdata  = M2_wdata;  S_wstrb   = M2_wstrb;   S_wvalid   = M2_wvalid; M2_wready = S_wready;
            end else if (M1_awvalid | M1_wvalid) begin
                S_awaddr = M1_awaddr; S_awvalid = M1_awvalid; M1_awready = S_awready;
                S_wdata  = M1_wdata;  S_wstrb   = M1_wstrb;   S_wvalid   = M1_wvalid; M1_wready = S_wready;
            end
        end else begin // W_BUSY
            if (w_pass == 0) begin
                S_awaddr = M1_awaddr; S_awvalid = M1_awvalid; M1_awready = S_awready;
                S_wdata  = M1_wdata;  S_wstrb   = M1_wstrb;   S_wvalid   = M1_wvalid; M1_wready = S_wready;
            end else begin
                S_awaddr = M2_awaddr; S_awvalid = M2_awvalid; M2_awready = S_awready;
                S_wdata  = M2_wdata;  S_wstrb   = M2_wstrb;   S_wvalid   = M2_wvalid; M2_wready = S_wready;
            end
        end
    end

    // 3. B Channel (写响应): 严格组合逻辑
    always @(*) begin
        S_bready  = 0;
        M1_bvalid = 0; M1_bresp = 0;
        M2_bvalid = 0; M2_bresp = 0;
        if (W_state == W_BUSY) begin
            if (w_pass == 0) begin // M1
                M1_bvalid = S_bvalid; M1_bresp = S_bresp; S_bready = M1_bready;
            end else begin         // M2
                M2_bvalid = S_bvalid; M2_bresp = S_bresp; S_bready = M2_bready;
            end
        end
    end

endmodule
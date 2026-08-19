module CPUTop_tb;
`ifdef __ICARUS__
  reg clock;
  reg reset;
  wire io_interrupt;

  wire io_master_awready;
  wire io_master_awvalid;
  wire [31:0] io_master_awaddr;
  wire [3:0]  io_master_awid;
  wire [7:0]  io_master_awlen;
  wire [2:0]  io_master_awsize;
  wire [1:0]  io_master_awburst;

  wire io_master_wready;
  wire io_master_wvalid;
  wire [31:0] io_master_wdata;
  wire [3:0]  io_master_wstrb;
  wire io_master_wlast;

  wire io_master_bready;
  wire io_master_bvalid;
  wire [1:0] io_master_bresp;
  wire [3:0] io_master_bid;

  wire io_master_arready;
  wire io_master_arvalid;
  wire [31:0] io_master_araddr;
  wire [3:0]  io_master_arid;
  wire [7:0]  io_master_arlen;
  wire [2:0]  io_master_arsize;
  wire [1:0]  io_master_arburst;

  wire io_master_rready;
  wire io_master_rvalid;
  wire [1:0] io_master_rresp;
  wire [31:0] io_master_rdata;
  wire io_master_rlast;
  wire [3:0] io_master_rid;

  initial begin
    clock = 0;
  end
  always #5 clock = !clock;

  initial begin
    reset = 1;
    #100;
    reset = 0;
  end

  assign io_interrupt = 1'b0;

  ysyx_26010011 cpu(
    .clock              (clock),
    .reset              (reset),
    .io_interrupt       (io_interrupt),

    .io_master_awready  (io_master_awready),
    .io_master_awvalid  (io_master_awvalid),
    .io_master_awaddr   (io_master_awaddr),
    .io_master_awid     (io_master_awid),
    .io_master_awlen    (io_master_awlen),
    .io_master_awsize   (io_master_awsize),
    .io_master_awburst  (io_master_awburst),

    .io_master_wready   (io_master_wready),
    .io_master_wvalid   (io_master_wvalid),
    .io_master_wdata    (io_master_wdata),
    .io_master_wstrb    (io_master_wstrb),
    .io_master_wlast    (io_master_wlast),

    .io_master_bready   (io_master_bready),
    .io_master_bvalid   (io_master_bvalid),
    .io_master_bresp    (io_master_bresp),
    .io_master_bid      (io_master_bid),

    .io_master_arready  (io_master_arready),
    .io_master_arvalid  (io_master_arvalid),
    .io_master_araddr   (io_master_araddr),
    .io_master_arid     (io_master_arid),
    .io_master_arlen    (io_master_arlen),
    .io_master_arsize   (io_master_arsize),
    .io_master_arburst  (io_master_arburst),

    .io_master_rready   (io_master_rready),
    .io_master_rvalid   (io_master_rvalid),
    .io_master_rresp    (io_master_rresp),
    .io_master_rdata    (io_master_rdata),
    .io_master_rlast    (io_master_rlast),
    .io_master_rid      (io_master_rid)
  );

  axi4_memory mem(
    .clock   (clock),
    .reset   (reset),

    .awready (io_master_awready),
    .awvalid (io_master_awvalid),
    .awaddr  (io_master_awaddr),
    .awid    (io_master_awid),
    .awlen   (io_master_awlen),
    .awsize  (io_master_awsize),
    .awburst (io_master_awburst),

    .wready  (io_master_wready),
    .wvalid  (io_master_wvalid),
    .wdata   (io_master_wdata),
    .wstrb   (io_master_wstrb),
    .wlast   (io_master_wlast),

    .bvalid  (io_master_bvalid),
    .bresp   (io_master_bresp),
    .bid     (io_master_bid),
    .bready  (io_master_bready),

    .arready (io_master_arready),
    .arvalid (io_master_arvalid),
    .araddr  (io_master_araddr),
    .arid    (io_master_arid),
    .arlen   (io_master_arlen),
    .arsize  (io_master_arsize),
    .arburst (io_master_arburst),

    .rvalid  (io_master_rvalid),
    .rresp   (io_master_rresp),
    .rdata   (io_master_rdata),
    .rlast   (io_master_rlast),
    .rid     (io_master_rid),
    .rready  (io_master_rready)
  );

endmodule


module axi4_memory (
  input         clock,
  input         reset,

  // AW 通道
  output reg    awready,
  input         awvalid,
  input  [31:0] awaddr,
  input  [3:0]  awid,
  input  [7:0]  awlen,
  input  [2:0]  awsize,
  input  [1:0]  awburst,

  // W 通道
  output reg    wready,
  input         wvalid,
  input  [31:0] wdata,
  input  [3:0]  wstrb,
  input         wlast,

  // B 通道
  output reg      bvalid,
  output [1:0]  bresp,
  output [3:0]  bid,
  input         bready,

  // AR 通道
  output reg    arready,
  input         arvalid,
  input  [31:0] araddr,
  input  [3:0]  arid,
  input  [7:0]  arlen,
  input  [2:0]  arsize,
  input  [1:0]  arburst,

  // R 通道
  output reg    rvalid,
  output [1:0]  rresp,
  output [31:0] rdata,
  output reg    rlast,
  output [3:0]  rid,
  input         rready
);

  reg [3:0] wstate,wnext_state;

  always @(posedge clock) begin
    if(reset) begin
      wstate <= 4'b0;
    end else begin
      wstate <= wnext_state;
    end
  end
  always @(*) begin
    wnext_state = wstate;
    case(wstate)
      4'b0000: begin
        if(awvalid & wvalid) wnext_state = 4'b0010;
      end
      4'b0001: begin
        wnext_state = 4'b0010;
      end
      4'b0010: begin
        if(bready)  wnext_state = 4'b0000;
        else wnext_state = 4'b0010;
      end
    endcase
  end
  always @(*) begin
    case(wstate)
      4'b0000: begin
        awready = 1;
        wready = 1;
        bvalid = 0;
      end
      4'b0001: begin
        awready = 0;
        wready = 0;
        bvalid = 0;
      end
      4'b0010: begin
        awready = 0;
        wready = 0;
        bvalid = 1;
      end
    endcase
  end
//////////////////////////////
  reg [3:0] rstate,rnext_state;
  reg [31:0] raddr_reg;

  always @(posedge clock) begin
    if(reset) begin
      rstate   <= 4'b0;
      raddr_reg <= 32'b0;
    end else begin
      rstate <= rnext_state;
      if (rstate == 4'b0000 && arvalid && arready)
        raddr_reg <= araddr;
    end
  end
  always @(*) begin
    rnext_state = rstate;
    case(rstate)
      4'b0000: begin
        if(arvalid) rnext_state = 4'b0010;
      end
      4'b0001: begin
        rnext_state = 4'b0010;
      end
      4'b0010: begin
        if(rready)  rnext_state = 4'b0000;
        else rnext_state = 4'b0010;
      end
    endcase
  end
  always @(*) begin
    case(rstate)
      4'b0000: begin
        arready = 1;
        rvalid = 0;
        // rdata = 32'h0;
        rlast = 0;
      end
      4'b0001: begin
        arready = 0;
        rvalid = 0;
        // rdata = 32'h0;
        rlast = 0;
      end
      4'b0010: begin
        arready = 0;
        rvalid = 1;
        // rdata = 32'h0;
        rlast = 1;
      end
    endcase
  end
  localparam [31:0] MEM_BASE = 32'h80000000;
  localparam [31:0] MEM_END  = 32'h80800000; // 8 MiB

  reg [31:0] Memory [0:2097151]; // 2^21 words = 8 MiB

  wire mem_write_valid =
      awaddr >= MEM_BASE && awaddr < MEM_END;
  wire mem_read_valid =
      raddr_reg >= MEM_BASE && raddr_reg < MEM_END;

  always @(posedge clock) begin
    if(wstate == 4'b0000 && wnext_state == 4'b0010) begin
      if (mem_write_valid) begin
        if(wstrb[0]) Memory[(awaddr - MEM_BASE) >> 2][7:0]   <= wdata[7:0];
        if(wstrb[1]) Memory[(awaddr - MEM_BASE) >> 2][15:8]  <= wdata[15:8];
        if(wstrb[2]) Memory[(awaddr - MEM_BASE) >> 2][23:16] <= wdata[23:16];
        if(wstrb[3]) Memory[(awaddr - MEM_BASE) >> 2][31:24] <= wdata[31:24];
      end else if (awaddr == 32'h10000000) begin
        $write("%c", wdata[7:0]);
        $fflush;
      end
    end
  end

  assign rresp = 2'b0;
  assign bresp = 2'b0;
  assign rdata = mem_read_valid
               ? Memory[(raddr_reg - MEM_BASE) >> 2]
               : 32'b0;

  integer i;
  initial begin
    for (i = 0; i < 2097152; i = i + 1)
      Memory[i] = 32'b0;

    $display("Loading RT-Thread image");
    $readmemh(
      // "/home/seaber/ysyx-workbench/rt-thread-am/bsp/abstract-machine/build/rtthread-riscv32e-iv",
      "/home/seaber/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-riscv32e-iv",
      Memory
    );
  end
  // initial
  // begin
  //   $dumpfile("test.vcd");
  //   $dumpvars(0,cpu);
  // end
`endif
endmodule
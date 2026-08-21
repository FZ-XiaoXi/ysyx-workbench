

// ██████╗  ██╗      ██╗ ███╗   ██╗ ████████╗
// ██╔════╝ ██║      ██║ ████╗  ██║ ╚══██╔══╝
// ██║      ██║      ██║ ██╔██╗ ██║    ██║
// ██║      ██║      ██║ ██║╚██╗██║    ██║
// ╚██████╗ ███████╗ ██║ ██║ ╚████║    ██║
//  ╚═════╝ ╚══════╝ ╚═╝ ╚═╝  ╚═══╝    ╚═╝
// `ifdef USE_VERILATOR
// import "DPI-C" function void difftest_skip_ref(int reason);
// `endif
module ysyx_26010011_CLINT(
	input clock,
	input reset,

	//AR
	input  [31:0] araddr,
	input         arvalid,
	output reg    arready,

	//R
	output reg [31:0] rdata,
	output [1:0]  rresp,
	output reg    rvalid,
	output reg    rlast,
	input         rready,

	//AW
	input  [31:0] awaddr,
	input         awvalid,
	output reg    awready,

	//W
	input  [31:0] wdata,
	input  [3:0]  wstrb,
	input         wvalid,
	output reg    wready,
	
	//B
	output [1:0]  bresp,
	output reg    bvalid,
	input         bready
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
		if(awvalid) wnext_state = 4'b0001;
	  end
	  4'b0001: begin
		wnext_state = 4'b0010;
	  end
	  4'b0010: begin
		if(bready)  wnext_state = 4'b0000;
		else wnext_state = 4'b0010;
	  end
	  default: begin
		wnext_state = 4'b0000;
	  end
	endcase
  end
  always @(*) begin
	awready = 0;
	wready = 0;
	bvalid = 0;
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
	  default: begin
		awready = 0;
		wready = 0;
		bvalid = 0;
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
	  if (rstate == 4'b0000 && arvalid && arready) begin
        `ifdef USE_VERILATOR
            difftest_skip_ref(32'h78787878);
        `endif
        raddr_reg <= araddr;
      end
		
	end
  end
  always @(*) begin
	rnext_state = rstate;
	case(rstate)
	  4'b0000: begin
		if(arvalid) rnext_state = 4'b0001;
	  end
	  4'b0001: begin
		rnext_state = 4'b0010;
	  end
	  4'b0010: begin
		if(rready)  rnext_state = 4'b0000;
		else rnext_state = 4'b0010;
	  end
      default:
        rnext_state = 4'b0000;
	endcase
  end
  always @(*) begin
	arready = 0;
	rvalid = 0;
	rlast = 0;
	case(rstate)
	  4'b0000: begin
		arready = 1;
		rvalid = 0;
		rlast = 0;
	  end
	  4'b0001: begin
		arready = 0;
		rvalid = 0;
		rlast = 0;
	  end
	  4'b0010: begin
		arready = 0;
		rvalid = 1;
		rlast = 1;
	  end
	  default: begin
		arready = 0;
		rvalid = 0;
		rlast = 0;
	  end
	endcase
  end
  localparam [31:0] CLINT_BASE = 32'h02000000;
//   localparam [31:0] CLINT_END  = 32'h02010000;

  always @(posedge clock) begin
	if(wstate == 4'b0000 && wnext_state == 4'b0001) begin
		$display("CLINT ONLY READ!");
	end
  end

  assign rresp = 2'b0;
  assign bresp = 2'b0;

  always @(*) begin
	if(raddr_reg == CLINT_BASE) begin
	  rdata = mtime_L;
	end else if(raddr_reg == CLINT_BASE + 4) begin
	  rdata = mtime_H;
	end else begin
	//   $display("CLINT Read from invalid address: 0x%08x", raddr_reg);
	  rdata = 32'h00000000;
	end
  end


	
	reg [31:0]mtime_L,mtime_H;
	always @(posedge clock) begin
		if(reset) begin
			mtime_L <= 32'd0;
			mtime_H <= 32'd0;
		end
		else begin
			{mtime_H,mtime_L} <= {mtime_H,mtime_L} + 1;
		end
	end

endmodule

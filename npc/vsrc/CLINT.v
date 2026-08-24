

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
	output [31:0]mcycle,
	output [31:0]mcycleh,
	//AR
	input  [31:0] araddr,
	input         arvalid,
	output reg    arready,

	//R
	output [31:0] rdata,
	output [1:0]  rresp,
	output reg    rvalid,
	output reg    rlast,
	input         rready

	// //AW
	// input  [31:0] awaddr,
	// input         awvalid,
	// output reg    awready,

	// //W
	// input  [31:0] wdata,
	// input  [3:0]  wstrb,
	// input         wvalid,
	// output reg    wready,
	
	// //B
	// output [1:0]  bresp,
	// output reg    bvalid,
	// input         bready
);
	reg [31:0]mtime_L;
	reg [15:0]mtime_H;
	// reg [1:0] wstate,wnext_state;

	// always @(posedge clock) begin
	// 	if(reset) begin
	// 		wstate <= 2'b0;
	// 	end else begin
	// 		wstate <= wnext_state;
	// 	end
	// end
	// always @(*) begin
	// 	wnext_state = wstate;
	// 	case(wstate)
	// 		2'b00: begin
	// 			if(awvalid) wnext_state = 2'b01;
	// 		end
	// 		2'b01: begin
	// 			wnext_state = 2'b10;
	// 		end
	// 		2'b10: begin
	// 			if(bready)  wnext_state = 2'b00;
	// 			else wnext_state = 2'b10;
	// 		end
	// 		default: begin
	// 			wnext_state = 2'b00;
	// 		end
	// 	endcase
	// end
	// always @(*) begin
	// 	awready = 0;
	// 	wready = 0;
	// 	bvalid = 0;
	// 	case(wstate)
	// 	2'b00: begin
	// 		awready = 1;
	// 		wready = 1;
	// 		bvalid = 0;
	// 	end
	// 	2'b01: begin
	// 		awready = 0;
	// 		wready = 0;
	// 		bvalid = 0;
	// 	end
	// 	2'b10: begin
	// 		awready = 0;
	// 		wready = 0;
	// 		bvalid = 1;
	// 	end
	// 	default: begin
	// 		awready = 0;
	// 		wready = 0;
	// 		bvalid = 0;
	// 	end
	// 	endcase
	// end
	//////////////////////////////
	reg [1:0] rstate,rnext_state;
	reg raddr_reg;

	always @(posedge clock) begin
		if(reset) begin
			rstate   <= 2'b0;
			raddr_reg <= 1'b0;
		end else begin
			rstate <= rnext_state;
			if (rstate == 2'b00 && arvalid && arready) begin
				`ifdef USE_VERILATOR
					difftest_skip_ref(32'h78787878);
				`endif
				raddr_reg <= araddr[2];
				// $display("CLINT Read from address: 0x%08x", araddr);
			end
		end
	end
	always @(*) begin
		rnext_state = rstate;
		case(rstate)
			2'b00: begin
				if(arvalid) rnext_state = 2'b01;
			end
			2'b01: begin
				rnext_state = 2'b10;
			end
			2'b10: begin
				if(rready)  rnext_state = 2'b00;
				else rnext_state = 2'b10;
			end
			default:
				rnext_state = 2'b00;
		endcase
	end
	always @(*) begin
		arready = 0;
		rvalid = 0;
		rlast = 0;
		case(rstate)
			2'b00: begin
				arready = 1;
				rvalid = 0;
				rlast = 0;
			end
			2'b01: begin
				arready = 0;
				rvalid = 0;
				rlast = 0;
			end
			2'b10: begin
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

	

// `ifndef YOSYS
// 	always @(posedge clock) begin
// 		if(wstate == 2'b00 && wnext_state == 2'b01) begin
// 			$display("CLINT ONLY READ!");
// 		end
// 	end
// `endif

	assign rresp = 2'b0;
	// assign bresp = 2'b0;

	assign rdata = (raddr_reg) ? mcycleh : mcycle;

	always @(posedge clock) begin
		if(reset) begin
			mtime_L <= 32'd0;
			mtime_H <= 16'd0;
		end
		else begin
			{mtime_H,mtime_L} <= {mtime_H,mtime_L} + 1;
		end
	end
	assign mcycle = mtime_L;
	assign mcycleh = {16'b0,mtime_H};
endmodule



// ██╗ ███████╗ ██╗   ██╗
// ██║ ██╔════╝ ██║   ██║
// ██║ █████╗   ██║   ██║
// ██║ ██╔══╝   ██║   ██║
// ██║ ██║      ╚██████╔╝
// ╚═╝ ╚═╝       ╚═════╝
`include "csr_defines.v"
module ysyx_26010011_IFU(
	input clock,
	input reset,
	
	// input flush_icache,
	input [31:0]    dnpc,
	input           flush_valid,
	input           dnpc_valid,

	output reg          ifu_out_valid/*verilator public*/,
	input               ifu_out_ready/*verilator public*/,
	
	output     [31:0]   ifu_out_bus_instruction,
	output     [31:0]   ifu_out_bus_pc/*verilator public*/,
	output     [31:0]   ifu_out_bus_fetching/*verilator public*/,
	output     [31:0]   ifu_out_bus_snpc,
	output reg [ 4:0]   ifu_out_bus_exception,


	output [31:0]     araddr,
	output            arvalid,
	input             arready,
	output [3:0]      arid,
	output [7:0]      arlen,
	output [2:0]      arsize,
	output [1:0]      arburst,
	input  [31:0]     rdata/*verilator public*/,
	input  [1:0]      rresp,
	input             rvalid,
	output            rready,
	input             rlast,
	input  [3:0]      rid,

	// output [31:0]     r_pc,
	// input  [31:0]     r_tar,
	// input		      r_valid,
	// input		      r_type,
	input 		   fencei_flush
);
////////////////////////////////TARGET PRE
	// assign r_pc = PC;
	// wire pre_branch = ((r_tar < r_pc) | r_type) & r_valid;


////////////////////////////////
	reg ifu_out_valid_r;
	reg [31:0]ifu_out_bus_instruction_r;
	reg [31:0]ifu_out_bus_pc_r;
	reg [31:0] PC/*verilator public*/;

	reg in_reqValid;
	wire in_respValid;
	wire [31:0]in_rdata;

	wire debug_IFU_is_hit/*verilator public*/;
	wire debug_IFU_is_hit_inst/*verilator public*/;
	wire debug_IFU_get_inst/*verilator public*/;
	assign debug_IFU_is_hit_inst = ifu_out_valid & ifu_out_ready & debug_IFU_is_hit;
	assign debug_IFU_get_inst = ifu_out_valid & ifu_out_ready;

	always @(posedge clock) begin
		if(reset) begin
			ifu_out_valid_r <= 0;
			// ifu_out_bus_pc_r <= 32'h80000000;
			// ifu_out_bus_instruction_r <= 0;
		end else begin
			if(flush_valid) begin
				ifu_out_valid_r <= 0;
				// ifu_out_bus_pc_r <= 0;
			end else if(in_reqValid & in_respValid & ~ifu_out_ready) begin
				ifu_out_valid_r <= 1;
				ifu_out_bus_instruction_r <= in_rdata;
				ifu_out_bus_pc_r <= PC;
			end else if(ifu_out_valid & ifu_out_ready)begin
				ifu_out_valid_r <= 0;
			end
		end
	
	end

	assign ifu_out_bus_fetching = PC;
	assign ifu_out_valid = (((in_reqValid & in_respValid)?1:ifu_out_valid_r) | ifu_out_bus_exception[4]);
	assign ifu_out_bus_instruction = (ifu_out_bus_exception[4])?(`ysyx_26010011_INST_NOP):((in_reqValid & in_respValid)?in_rdata:ifu_out_bus_instruction_r);
	assign ifu_out_bus_snpc = ifu_out_bus_pc + 32'd4;
	assign ifu_out_bus_pc = (in_reqValid & (in_respValid | ifu_out_bus_exception[4]))?PC:ifu_out_bus_pc_r;

	
	always @(posedge clock) begin
		if(reset) begin
			`ifdef __ICARUS__
			PC <= 32'h80000000;
			`else
				`ifdef USE_VERILATOR
				// $display("Verilator simulation, setting PC to 0x30000000");
				PC <= 32'h30000000;
				`else
				PC <= 32'h80000000;
				`endif
			`endif
			
		end else if(flush_valid) begin
			PC <= (dnpc_valid)?{dnpc[31:1],1'b0}:{ifu_out_bus_snpc[31:1],1'b0};
		end else begin
			if(ifu_out_ready & ifu_out_valid) begin
				// PC <= (dnpc_valid)?({dnpc[31:1],1'b0}):((pre_branch)?({r_tar[31:1],1'b0}):({ifu_out_bus_snpc[31:1],1'b0}));
				PC <= (dnpc_valid)?({dnpc[31:1],1'b0}):(({ifu_out_bus_snpc[31:1],1'b0}));
			end
		end
	end
	
	always @(posedge clock) begin
		if(reset) begin
			in_reqValid <= 1'b0;
		end else if(flush_valid | dnpc_valid) begin
			in_reqValid <= 1'b1;
		end else begin
			if(ifu_out_valid) begin
				if(~ifu_out_ready) begin
					in_reqValid <= 1'b0;
				end else begin
					in_reqValid <= 1'b1;
				end
			end else begin
				in_reqValid <= 1'b1;
			end
		end
	end;

	ysyx_26010011_IFU_icache #(.CACHE_BLOCK_SIZE(16), .CACHE_SIZE(4)) icache_u0(
		.clock(clock),
		.reset(reset),

		.flush(fencei_flush),
		.pc_flush(flush_valid),

		.in_addr({PC[31:1],1'b0}),
		.in_reqValid(in_reqValid & ~flush_valid & ~ifu_out_bus_exception[4]),
		.in_respValid(in_respValid),
		.in_rdata(in_rdata),

		.out_araddr(araddr),
		.out_arvalid(arvalid),
		.out_arready(arready),
		.out_arid(arid),
		.out_arlen(arlen),
		.out_arsize(arsize),
		.out_arburst(arburst),
		.out_rdata(rdata),
		.out_rresp(rresp),
		.out_rvalid(rvalid),
		.out_rready(rready),
		.out_rlast(rlast),
		.out_rid(rid),

		.debug_is_hit(debug_IFU_is_hit)
	);
	

	always @(*) begin
		if(|PC[1:0]) begin
			ifu_out_bus_exception = {1'b1,`ysyx_26010011_EXCEPTION_MISALIGNED_FETCH};
		end else begin
			ifu_out_bus_exception = 5'b0;
		end
	end

endmodule


// module ysyx_26010011_IFU_icache #(
// 	parameter CACHE_SIZE = 16
// )(
// 	input	clock,
// 	input	reset,

// 	input	flush,
// 	input	pc_flush/*verilator public*/,

// 	input	[31:0] 		in_addr,
// 	input				in_reqValid,
// 	output reg			in_respValid,
// 	output reg [31:0] 	in_rdata,


// 	output [31:0]     out_araddr, output            out_arvalid,input             out_arready,output [3:0]      out_arid,
// 	output [7:0]      out_arlen,  output [2:0]      out_arsize, output [1:0]      out_arburst,

// 	input  [31:0]     out_rdata,  input  [1:0]      out_rresp,  input             out_rvalid, output            out_rready,
// 	input             out_rlast,  input  [3:0]      out_rid,

// 	output           debug_is_hit
// );
// 	localparam CACHE_BLOCK_SIZE = 4;
// 	localparam BLOCK_W = CACHE_BLOCK_SIZE * 8;
// 	localparam INDEX_W = $clog2(CACHE_SIZE);
// 	localparam OFFSET_W = $clog2(CACHE_BLOCK_SIZE);
// 	localparam TAG_W   = 32 - OFFSET_W - INDEX_W;

// 	localparam S_IDLE       = 3'd0;
// 	localparam S_WAIT_READY = 3'd1; // 等待地址通道接受地址
// 	localparam S_WAIT_DATA  = 3'd2; // 等待数据返回
// 	localparam S_WAIT_READY_FLUSH = 3'd3;
// 	localparam S_WAIT_DATA_FLUSH  = 3'd4;
	
// 	wire [INDEX_W-1:0] now_index;
// 	wire [TAG_W-1:0]   now_tag;
// 	wire is_hit;
// 	reg [BLOCK_W-1:0] cache_mem   [0:CACHE_SIZE-1];
// 	reg               cache_valid [0:CACHE_SIZE-1];
// 	reg [TAG_W-1:0]   cache_tag   [0:CACHE_SIZE-1];
// 	reg pc_flushed/*verilator public*/;

// 	reg [2:0] state, next_state;
// 	wire ar_fire;
// 	wire r_fire;

// 	assign now_index = {in_addr[INDEX_W-1+OFFSET_W:0 + OFFSET_W]} ;
// 	assign now_tag   = {in_addr[INDEX_W + TAG_W - 1 + OFFSET_W: INDEX_W + OFFSET_W]};
// 	assign is_hit = in_reqValid & cache_valid[now_index] && (cache_tag[now_index] == now_tag);
	
// 	assign debug_is_hit = is_hit;

// 	always @(posedge clock) begin
// 		if (reset | flush) begin
// 			integer i;
// 			for (i = 0; i < CACHE_SIZE; i = i + 1) begin
// 				cache_valid[i] <= 1'b0;
// 				cache_tag[i]   <= 0;
// 				cache_mem[i]   <= 0;
// 			end
// 		end else begin
// 			if((r_fire & (state == S_WAIT_DATA) & ~pc_flush)) begin
// 				cache_valid[now_index] <= r_fire & out_rlast;
// 				cache_tag[now_index]   <= now_tag;
// 				cache_mem[now_index][31:0]   <= out_rdata;
// 			end else if((r_fire & (state == S_WAIT_DATA) & pc_flush)) begin
// 				cache_valid[now_index] <= 0;
// 			end
// 		end
// 	end

// 	// 握手成功标志
// 	assign ar_fire = out_arvalid && out_arready;
// 	assign r_fire  = out_rvalid && out_rready;

// 	assign out_araddr  = in_addr & {{(32-OFFSET_W){1'b1}}, {OFFSET_W{1'b0}}};
// 	assign out_arid    = 4'b0;
// 	assign out_arlen   = 8'b0;
// 	assign out_arsize  = 3'b010;
// 	assign out_arburst = 2'b01;
// 	assign out_arvalid = ((!is_hit & ((state == S_IDLE) && in_reqValid)) || ((state == S_WAIT_READY) || (state == S_WAIT_READY_FLUSH)))&!reset;
// 	assign out_rready  = !reset;

// 	always @(posedge clock) begin
// 		if(reset) begin
// 			pc_flushed <= 0;
// 		end else if(pc_flush) begin
// 			pc_flushed <= 1;
// 		end else if(in_respValid) begin
// 			pc_flushed <= 0;
// 		end
// 	end

// 	always @(*) begin
// 		if(is_hit) begin
// 			in_rdata = cache_mem[now_index][31:0];
// 		end else begin
// 			in_rdata = out_rdata;
// 		end
// 	end

// 	always @(*) begin
// 		if(in_reqValid) begin
// 			case (state) 
// 				S_IDLE: begin
// 					if(is_hit) begin
// 						in_respValid = 1;
// 					end else begin
// 						in_respValid = 0;
// 					end
// 				end
// 				S_WAIT_READY: begin
// 					if(is_hit & pc_flushed) in_respValid = 1;
// 					else in_respValid = 0;
// 				end
// 				S_WAIT_DATA: begin
// 					if(r_fire & out_rlast & ~(pc_flush & ~pc_flushed)) begin
// 						in_respValid = 1;
// 					end else begin
// 						in_respValid = 0;
// 					end
// 				end
// 				S_WAIT_READY_FLUSH: begin
// 					in_respValid = 0;
// 				end
// 				S_WAIT_DATA_FLUSH: begin
// 					in_respValid = 0;
// 				end
// 				default: in_respValid = 0;
// 			endcase
// 		end else begin
// 			in_respValid = 0;
// 		end
// 	end

// 	always @(*) begin
// 		case(state)
// 			S_IDLE: begin
// 				if(in_reqValid & is_hit) begin
// 					next_state = S_IDLE;
// 				end else if(in_reqValid & ~is_hit) begin
// 					if (ar_fire) begin
// 						if((pc_flush & ~pc_flushed))begin
// 							next_state = S_WAIT_DATA_FLUSH;
// 						end else begin
// 							next_state = S_WAIT_DATA;
// 						end
// 					end else begin
// 						next_state = S_WAIT_READY;
// 					end
// 				end else begin
// 					next_state = S_IDLE;
// 				end
// 			end
// 			S_WAIT_READY: begin
// 				if (ar_fire) begin
// 					if((pc_flush & ~pc_flushed)) begin
// 						next_state = S_WAIT_DATA_FLUSH;
// 					end else begin
// 						next_state = S_WAIT_DATA;
// 					end
// 				end else begin
// 					if((pc_flush & ~pc_flushed)) begin
// 						next_state = S_WAIT_READY_FLUSH;
// 					end else begin
// 						next_state = S_WAIT_READY;
// 					end
// 				end
// 			end
// 			S_WAIT_DATA: begin
// 				if(r_fire & out_rlast)begin
// 					next_state = S_IDLE;
// 				end else begin
// 					if((pc_flush & ~pc_flushed)) begin
// 						next_state = S_WAIT_DATA_FLUSH;
// 					end else begin
// 						next_state = S_WAIT_DATA;
// 					end
// 				end
// 			end
// 			S_WAIT_READY_FLUSH: begin
// 				if (ar_fire) begin
// 					next_state = S_WAIT_DATA_FLUSH;
// 				end else begin
// 					next_state = S_WAIT_READY_FLUSH;
// 				end
// 			end
// 			S_WAIT_DATA_FLUSH: begin
// 				if(r_fire & out_rlast)begin
// 					next_state = S_IDLE;
// 				end else begin
// 					next_state = S_WAIT_DATA_FLUSH;
// 				end
// 			end
// 			default: next_state = S_IDLE;
// 		endcase
// 	end

// 	always @(posedge clock) begin
// 		if (reset) state <= S_IDLE;
// 		else       state <= next_state;
// 	end

// endmodule




module ysyx_26010011_IFU_icache #(
	parameter CACHE_BLOCK_SIZE = 16,
	parameter CACHE_SIZE = 4
)(
	input	clock,
	input	reset,

	input	flush,
	input	pc_flush/*verilator public*/,

	input	[31:0] 		in_addr,
	input				in_reqValid,
	output reg			in_respValid,
	output reg [31:0] 	in_rdata,


	output [31:0]     out_araddr, output            out_arvalid,input             out_arready,output [3:0]      out_arid,
	output [7:0]      out_arlen,  output [2:0]      out_arsize, output [1:0]      out_arburst,

	input  [31:0]     out_rdata,  input  [1:0]      out_rresp,  input             out_rvalid, output            out_rready,
	input             out_rlast,  input  [3:0]      out_rid,

	output           debug_is_hit
);

// `ifdef FORMAL
// 	always @(*) begin

// 		c_assert: assert(1 == 1);
// 	end
// `endif  // FORMAL

	localparam BLOCK_W = CACHE_BLOCK_SIZE * 8;
	localparam INDEX_W = $clog2(CACHE_SIZE);
	localparam OFFSET_W = $clog2(CACHE_BLOCK_SIZE);
	localparam TAG_W   = 32 - OFFSET_W - INDEX_W;
	localparam BURST_LEN = CACHE_BLOCK_SIZE>>2;
	localparam BURST_W = (|($clog2(BURST_LEN)))?($clog2(BURST_LEN)):1;
	localparam [BURST_W-1:0] BURST_LAST = BURST_W'(BURST_LEN - 1);

	localparam S_IDLE       = 3'd0;
	localparam S_WAIT_READY = 3'd1; // 等待地址通道接受地址
	localparam S_WAIT_DATA  = 3'd2; // 等待数据返回
	localparam S_WAIT_READY_FLUSH = 3'd3;
	localparam S_WAIT_DATA_FLUSH  = 3'd4;
	
	wire [INDEX_W-1:0] now_index;
	wire [TAG_W-1:0]   now_tag;
	wire [OFFSET_W:0]now_offset;
	wire is_hit;
	reg [BLOCK_W-1:0] cache_mem   [0:CACHE_SIZE-1];
	reg               cache_valid [0:CACHE_SIZE-1];
	reg [TAG_W-1:0]   cache_tag   [0:CACHE_SIZE-1];
	reg pc_flushed/*verilator public*/;

	reg [2:0] state, next_state;
	wire ar_fire;
	wire r_fire;

	reg [BURST_W-1:0] burst_cnt;

	assign now_index = {in_addr[INDEX_W-1+OFFSET_W:0 + OFFSET_W]} ;
	assign now_tag   = {in_addr[INDEX_W + TAG_W - 1 + OFFSET_W: INDEX_W + OFFSET_W]};
	assign now_offset = {1'b0, in_addr[OFFSET_W-1:0]};
	assign is_hit = in_reqValid & cache_valid[now_index] && (cache_tag[now_index] == now_tag);
	
	assign debug_is_hit = is_hit;

	always @(posedge clock) begin
		if (reset | flush) begin
			integer i;
			for (i = 0; i < CACHE_SIZE; i = i + 1) begin
				cache_valid[i] <= 1'b0;
				cache_tag[i]   <= 0;
				cache_mem[i]   <= 0;
			end
		end else begin
			if((r_fire & (state == S_WAIT_DATA) & ~pc_flush)) begin
				cache_valid[now_index] <= r_fire & out_rlast;
				cache_tag[now_index]   <= now_tag;
				cache_mem[now_index][burst_cnt*32 +: 32]   <= out_rdata;
			end else if((r_fire & (state == S_WAIT_DATA) & pc_flush)) begin
				cache_valid[now_index] <= 0;
			end
		end
	end

	// 握手成功标志
	assign ar_fire = out_arvalid && out_arready;
	assign r_fire  = out_rvalid && out_rready;

	assign out_araddr  = in_addr & {{(32-OFFSET_W){1'b1}}, {OFFSET_W{1'b0}}};
	assign out_arid    = 4'b0;
	assign out_arlen   = BURST_LEN - 1;
	assign out_arsize  = 3'b010;
	assign out_arburst = 2'b01;
	assign out_arvalid = ((!is_hit & ((state == S_IDLE) && in_reqValid)) || ((state == S_WAIT_READY) || (state == S_WAIT_READY_FLUSH)))&!reset;
	assign out_rready  = !reset;

	always @(posedge clock) begin
		if(reset) begin
			pc_flushed <= 0;
		end else if(pc_flush) begin
			pc_flushed <= 1;
		end else if(in_respValid) begin
			pc_flushed <= 0;
		end
	end

	always @(posedge clock) begin
		if (reset) begin
			burst_cnt <= 0;
		end else if((pc_flush & ~pc_flushed)) begin
			burst_cnt <= 0;
		end else if (r_fire) begin
			if (burst_cnt == BURST_LAST && out_rlast && r_fire) begin
				burst_cnt <= 0;
			end else begin
				burst_cnt <= burst_cnt + {{(BURST_W-1){1'b0}}, 1'b1};
			end
		end else if(ar_fire) begin
			burst_cnt <= 0;
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
		if(in_reqValid) begin
			case (state) 
				S_IDLE: begin
					if(is_hit) begin
						in_respValid = 1;
					end else begin
						in_respValid = 0;
					end
				end
				S_WAIT_READY: begin
					if(is_hit & pc_flushed) in_respValid = 1;
					else in_respValid = 0;
				end
				S_WAIT_DATA: begin
					if(r_fire & out_rlast & ~(pc_flush & ~pc_flushed)) begin
						in_respValid = 1;
					end else begin
						in_respValid = 0;
					end
				end
				S_WAIT_READY_FLUSH: begin
					in_respValid = 0;
				end
				S_WAIT_DATA_FLUSH: begin
					in_respValid = 0;
				end
				default: in_respValid = 0;
			endcase
		end else begin
			in_respValid = 0;
		end
	end

	always @(*) begin
		case(state)
			S_IDLE: begin
				if(in_reqValid & is_hit) begin
					next_state = S_IDLE;
				end else if(in_reqValid & ~is_hit) begin
					if (ar_fire) begin
						if((pc_flush & ~pc_flushed))begin
							next_state = S_WAIT_DATA_FLUSH;
						end else begin
							next_state = S_WAIT_DATA;
						end
					end else begin
						next_state = S_WAIT_READY;
					end
				end else begin
					next_state = S_IDLE;
				end
			end
			S_WAIT_READY: begin
				if (ar_fire) begin
					if((pc_flush & ~pc_flushed)) begin
						next_state = S_WAIT_DATA_FLUSH;
					end else begin
						next_state = S_WAIT_DATA;
					end
				end else begin
					if((pc_flush & ~pc_flushed)) begin
						next_state = S_WAIT_READY_FLUSH;
					end else begin
						next_state = S_WAIT_READY;
					end
				end
			end
			S_WAIT_DATA: begin
				if(r_fire & out_rlast)begin
					next_state = S_IDLE;
				end else begin
					if((pc_flush & ~pc_flushed)) begin
						next_state = S_WAIT_DATA_FLUSH;
					end else begin
						next_state = S_WAIT_DATA;
					end
				end
			end
			S_WAIT_READY_FLUSH: begin
				if (ar_fire) begin
					next_state = S_WAIT_DATA_FLUSH;
				end else begin
					next_state = S_WAIT_READY_FLUSH;
				end
			end
			S_WAIT_DATA_FLUSH: begin
				if(r_fire & out_rlast)begin
					next_state = S_IDLE;
				end else begin
					next_state = S_WAIT_DATA_FLUSH;
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

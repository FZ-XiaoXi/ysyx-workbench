

// ██████╗  ███████╗ ███████╗ ██╗ ███╗   ██╗ ███████╗
// ██╔══██╗ ██╔════╝ ██╔════╝ ██║ ████╗  ██║ ██╔════╝
// ██║  ██║ █████╗   █████╗   ██║ ██╔██╗ ██║ █████╗
// ██║  ██║ ██╔══╝   ██╔══╝   ██║ ██║╚██╗██║ ██╔══╝
// ██████╔╝ ███████╗ ██║      ██║ ██║ ╚████║ ███████╗
// ╚═════╝  ╚══════╝ ╚═╝      ╚═╝ ╚═╝  ╚═══╝ ╚══════╝
`ifndef CSR_DEFINES_VH
`define CSR_DEFINES_VH

`define ysyx_26010011_ADD_MCYCLE    12'hb00
`define ysyx_26010011_ADD_MCYCLEH   12'hb80
`define ysyx_26010011_ADD_MISA      12'h301
`define ysyx_26010011_ADD_MTVEC     12'h305
`define ysyx_26010011_ADD_MSCRATCH  12'h340
`define ysyx_26010011_ADD_MEPC      12'h341
`define ysyx_26010011_ADD_MCAUSE    12'h342
`define ysyx_26010011_ADD_MTVAL     12'h343
`define ysyx_26010011_ADD_MSTATUS   12'h300
`define ysyx_26010011_ADD_MVENDORID 12'hf11
`define ysyx_26010011_ADD_MARCHID   12'hf12

`define ysyx_26010011_EXCEPTION_MISALIGNED_FETCH 4'd0
`define ysyx_26010011_EXCEPTION_FETCH_ACCESS 4'd1
`define ysyx_26010011_EXCEPTION_ILLEGAL_INSTRUCTION 4'd2
`define ysyx_26010011_EXCEPTION_BREAKPOINT 4'd3
`define ysyx_26010011_EXCEPTION_MISALIGNED_LOAD 4'd4
`define ysyx_26010011_EXCEPTION_LOAD_ACCESS 4'd5
`define ysyx_26010011_EXCEPTION_MISALIGNED_STORE 4'd6
`define ysyx_26010011_EXCEPTION_STORE_ACCESS 4'd7
`define ysyx_26010011_EXCEPTION_ECALL_UMODE 4'd8
`define ysyx_26010011_EXCEPTION_ECALL_SMODE 4'd9
`define ysyx_26010011_EXCEPTION_FENCEI 4'd14                //RESERVED but used to indicate FENCE.I instruction, not a real exception
`define ysyx_26010011_EXCEPTION_ECALL_MMODE 4'd11
`define ysyx_26010011_EXCEPTION_FETCH_PAGE_FAULT 4'd12
`define ysyx_26010011_EXCEPTION_LOAD_PAGE_FAULT 4'd13
`define ysyx_26010011_EXCEPTION_MRET 4'd14                //RESERVED but used to indicate MRET instruction, not a real exception
`define ysyx_26010011_EXCEPTION_STORE_PAGE_FAULT 4'd15
`define ysyx_26010011_INST_NOP 32'h00000013


`endif



// ██╗ ███████╗ ██╗   ██╗
// ██║ ██╔════╝ ██║   ██║
// ██║ █████╗   ██║   ██║
// ██║ ██╔══╝   ██║   ██║
// ██║ ██║      ╚██████╔╝
// ╚═╝ ╚═╝       ╚═════╝
//`include "csr_defines.v"
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
	output [1:0]      arbureset,
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
	assign ifu_out_bus_fetching = PC;
	reg ifu_out_valid_r;
	reg [31:0]ifu_out_bus_instruction_r;
	reg [31:0]ifu_out_bus_pc_r;
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
	assign ifu_out_valid = (((in_reqValid & in_respValid)?1:ifu_out_valid_r) | ifu_out_bus_exception[4]);
	assign ifu_out_bus_instruction = (ifu_out_bus_exception[4])?(`ysyx_26010011_INST_NOP):((in_reqValid & in_respValid)?in_rdata:ifu_out_bus_instruction_r);
	assign ifu_out_bus_snpc = ifu_out_bus_pc + 4;
	assign ifu_out_bus_pc = (in_reqValid & (in_respValid | ifu_out_bus_exception[4]))?PC:ifu_out_bus_pc_r;

	reg [31:0] PC/*verilator public*/;
	always @(posedge clock) begin
		if(reset) begin
			`ifdef __ICARUS__
			PC <= 32'h80000000;
			`else
			PC <= 32'h80000000;
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
	reg in_reqValid;
	wire in_respValid;
	wire [31:0]in_rdata;
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

`ifdef __ICARUS__
	ysyx_26010011_IFU_icache #(.CACHE_BLOCK_SIZE(4), .CACHE_SIZE(16)) icache_u0(
`else
	ysyx_26010011_IFU_icache #(.CACHE_BLOCK_SIZE(16), .CACHE_SIZE(4)) icache_u0(
`endif
	
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
		.out_arburst(arbureset),
		.out_rdata(rdata),
		.out_rresp(rresp),
		.out_rvalid(rvalid),
		.out_rready(rready),
		.out_rlast(rlast),
		.out_rid(rid),

		.debug_is_hit(debug_IFU_is_hit)
	);
	wire debug_IFU_is_hit/*verilator public*/;
	wire debug_IFU_is_hit_inst/*verilator public*/ = ifu_out_valid & ifu_out_ready & debug_IFU_is_hit;
	wire debug_IFU_get_inst/*verilator public*/ = ifu_out_valid & ifu_out_ready;

	always @(*) begin
		if(|PC[1:0]) begin
			ifu_out_bus_exception = {1'b1,`ysyx_26010011_EXCEPTION_MISALIGNED_FETCH};
		end else begin
			ifu_out_bus_exception = 5'b0;
		end
	end

endmodule

module ysyx_26010011_IFU_icache #(
	parameter CACHE_BLOCK_SIZE = 4,
	parameter CACHE_SIZE = 16
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

`ifdef FORMAL
	always @(*) begin

		c_assert: assert(1 == 1);
	end
`endif  // FORMAL

	parameter BLOCK_W = CACHE_BLOCK_SIZE * 8;
	parameter INDEX_W = $clog2(CACHE_SIZE);
	parameter OFFSET_W = $clog2(CACHE_BLOCK_SIZE);
	parameter TAG_W   = 32 - OFFSET_W - INDEX_W;
	parameter BURST_LEN = CACHE_BLOCK_SIZE>>2;
	parameter BURST_W = (|($clog2(BURST_LEN)))?($clog2(BURST_LEN)):1;
	localparam [BURST_W-1:0] BURST_LAST = BURST_W'(BURST_LEN - 1);



	wire [INDEX_W-1:0] now_index = {in_addr[INDEX_W-1+OFFSET_W:0 + OFFSET_W]} ;
	wire [TAG_W-1:0]   now_tag   = {in_addr[INDEX_W + TAG_W - 1 + OFFSET_W: INDEX_W + OFFSET_W]};
	wire [OFFSET_W:0]now_offset = {1'b0, in_addr[OFFSET_W-1:0]};
	wire is_hit = in_reqValid & cache_valid[now_index] && (cache_tag[now_index] == now_tag);
	assign debug_is_hit = is_hit;
	reg [BLOCK_W-1:0] cache_mem   [0:CACHE_SIZE-1];
	reg               cache_valid [0:CACHE_SIZE-1];
	reg [TAG_W-1:0]   cache_tag   [0:CACHE_SIZE-1];
	//IDLE -> 
	// reg 
	reg pc_flushed/*verilator public*/;
	always @(posedge clock) begin
		if (reset | flush) begin
			integer i;
			for (i = 0; i < CACHE_SIZE; i = i + 1) begin
				cache_valid[i] <= 1'b0;
				// cache_tag[i]   <= 0;
				// cache_mem[i]   <= 0;
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

	localparam S_IDLE       = 3'd0;
	localparam S_WAIT_READY = 3'd1; // 等待地址通道接受地址
	localparam S_WAIT_DATA  = 3'd2; // 等待数据返回
	localparam S_WAIT_READY_FLUSH = 3'd3;
	localparam S_WAIT_DATA_FLUSH  = 3'd4;

	reg [2:0] state, next_state;

	// 握手成功标志
	wire ar_fire = out_arvalid && out_arready;
	wire r_fire  = out_rvalid && out_rready;

	assign out_araddr  = in_addr & {{(32-OFFSET_W){1'b1}}, {OFFSET_W{1'b0}}};
	assign out_arid    = 4'b0;
	assign out_arlen   = BURST_LEN - 1;
	assign out_arsize  = 3'b010;
	assign out_arburst = 2'b01;
	assign out_arvalid = ((!is_hit & ((state == S_IDLE) && in_reqValid)) || ((state == S_WAIT_READY) || (state == S_WAIT_READY_FLUSH)))&!reset;
	assign out_rready  = !reset;

	reg [BURST_W-1:0] burst_cnt;

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

// ██╗ ██████╗  ██╗   ██╗
// ██║ ██╔══██╗ ██║   ██║
// ██║ ██║  ██║ ██║   ██║
// ██║ ██║  ██║ ██║   ██║
// ██║ ██████╔╝ ╚██████╔╝
// ╚═╝ ╚═════╝   ╚═════╝
//`include "csr_defines.v"
module ysyx_26010011_IDU(
    input clock,
    input reset,
    input flush_valid,
    input fencei_pass,
    output fencei_flush,
    input idu_isRAW,
    //IFU->IDU
    input        [31:0]idu_in_bus_instruction,
    input        [31:0]idu_in_bus_pc,
    input        [ 4:0]idu_in_bus_exception,
    input              idu_in_valid,
    output             idu_in_ready,
    //IDU->EXU
    output             idu_out_valid,
    input              idu_out_ready,
    output       [ 4:0]idu_out_bus_rd,
    output reg   [ 4:0]idu_out_bus_exception,
    output       [11:0]idu_out_bus_csrrd,
    output       [ 4:0]idu_out_bus_rs1,
    output       [ 4:0]idu_out_bus_rs2,
    output logic [31:0]idu_out_bus_imm,
    output             idu_out_bus_isLOAD,
    output             idu_out_bus_isSTORE,
    output             idu_out_bus_isWGPR,
    output             idu_out_bus_isJUMP,
    output             idu_out_bus_isWCOMP,
    output             idu_out_bus_isBRANCH,
    output logic [ 2:0]idu_out_bus_opCSR,
    output             idu_out_bus_isUnSigned,
    output             idu_out_bus_isUsePC,
    output             idu_out_bus_alu_isUseImm,
    output             idu_out_bus_comp_isUseImm,
    output logic [ 9:0]idu_out_bus_alu_op,
    output logic [ 1:0]idu_out_bus_comp_op,
    output       [ 1:0]idu_out_bus_perip_mask

    // output [31:0] w_pc,
    // output [31:0] w_tar,
    // output w_valid,
    // output w_type

);

    reg state, next_state;
    parameter S_WORKING = 1'b0, S_WAITING = 1'b1;
    always @(posedge clock) begin
        if(reset | flush_valid) state <= S_WORKING;
        else      state <= next_state;
    end

    always @(*) begin
        if(state == S_WORKING) begin
            if(idu_in_valid && isFENCEI) begin
                next_state = S_WAITING;
            end else begin
                next_state = S_WORKING;
            end
        end else if(state == S_WAITING) begin
            if(fencei_pass) begin
                next_state = S_WORKING;
            end else begin
                next_state = S_WAITING;
            end
        end else begin
            next_state = S_WORKING;
        end
    end

    assign idu_in_ready = idu_out_ready & (~idu_isRAW | idu_out_bus_exception[4]) & (state == S_WORKING && next_state == S_WORKING);
    assign idu_out_valid = idu_in_valid & (~idu_isRAW | idu_out_bus_exception[4]) & (state == S_WORKING);
    assign fencei_flush = idu_in_valid & isFENCEI & (state == S_WORKING) & ~idu_out_bus_exception[4];

    logic [ 6: 0]opcode;
    logic [11: 0]immI;
    logic [11: 0]immS;
    logic [12: 1]immB;
    logic [31:12]immU;
    logic [20: 1]immJ;
    logic [ 2: 0]funct3;
    logic [ 6: 0]funct7;

    logic isECALL, isEBREAK, isMRET,isFENCEI;
    logic isLUI, isAUIPC, isJAL, isJALR, isBEQ, isBNE, isBLT, isBGE, isBLTU, isBGEU;
    logic isLB, isLH, isLW, isLBU, isLHU, isSB, isSH, isSW, isADDI, isSLTI, isSLTIU;
    logic isXORI, isORI, isANDI, isSLLI, isSRLI, isSRAI, isADD, isSUB, isSLL, isSLT;
    logic isSLTU, isXOR, isSRL, isSRA, isOR, isAND;
    // logic isMULHU, isDIV, isDIVU, isREM, isREMU;

    logic isCSRRW,isCSRRS,isCSRRC,isCSRRWI,isCSRRSI,isCSRRCI;

    logic isR,isI,isS,isB,isU,isJ;

    wire all_inst;
    assign all_inst = (isLUI|isAUIPC|isJAL|isJALR|isBEQ|isBNE|isBLT|isBGE|isBLTU|isBGEU
                    |isLB|isLH|isLW|isLBU|isLHU|isSB|isSH|isSW
                    |isADDI|isSLTI|isSLTIU|isXORI|isORI|isANDI
                    |isSLLI|isSRLI|isSRAI
                    |isADD|isSUB|isSLL|isSLT|isSLTU
                    |isXOR|isSRL|isSRA|isOR|isAND
                    |(|idu_out_bus_opCSR)
                    |isECALL|isEBREAK|isMRET|isFENCEI);//////////////////////////

    assign opcode=  idu_in_bus_instruction[ 6: 0];
    assign idu_out_bus_rd=      idu_in_bus_instruction[11: 7];
    assign idu_out_bus_csrrd=   idu_in_bus_instruction[31:20];
    assign idu_out_bus_rs1=     idu_in_bus_instruction[19:15];
    assign idu_out_bus_rs2=     idu_in_bus_instruction[24:20];
    assign funct3=  idu_in_bus_instruction[14:12];
    assign funct7=  idu_in_bus_instruction[31:25];
    
    assign immI = {idu_in_bus_instruction[31:20]                                             };
    assign immS = {idu_in_bus_instruction[31:25],idu_in_bus_instruction[11: 7]                              };
    assign immB = {idu_in_bus_instruction[31:31],idu_in_bus_instruction[ 7: 7],idu_in_bus_instruction[30:25],idu_in_bus_instruction[11: 8]};
    assign immU = {idu_in_bus_instruction[31:12]                                             };
    assign immJ = {idu_in_bus_instruction[31:31],idu_in_bus_instruction[19:12],idu_in_bus_instruction[20:20],idu_in_bus_instruction[30:21]};
    assign idu_out_bus_alu_isUseImm = (isI|isS|isB|isU|isJ)?1:0;
    assign idu_out_bus_comp_isUseImm = (isSLTI|isSLTIU)?1:0;
/////////////////////////
    assign isLUI    = (opcode == 7'b0110111                                             ) ? 1 : 0;
    assign isAUIPC  = (opcode == 7'b0010111                                             ) ? 1 : 0;
    assign isJAL    = (opcode == 7'b1101111                                             ) ? 1 : 0;
    assign isJALR   = (opcode == 7'b1100111 && funct3 == 3'b000                         ) ? 1 : 0;
    assign isBEQ    = (opcode == 7'b1100011 && funct3 == 3'b000                         ) ? 1 : 0;
    assign isBNE    = (opcode == 7'b1100011 && funct3 == 3'b001                         ) ? 1 : 0;
    assign isBLT    = (opcode == 7'b1100011 && funct3 == 3'b100                         ) ? 1 : 0;
    assign isBGE    = (opcode == 7'b1100011 && funct3 == 3'b101                         ) ? 1 : 0;
    assign isBLTU   = (opcode == 7'b1100011 && funct3 == 3'b110                         ) ? 1 : 0;
    assign isBGEU   = (opcode == 7'b1100011 && funct3 == 3'b111                         ) ? 1 : 0;
    assign isLB     = (opcode == 7'b0000011 && funct3 == 3'b000                         ) ? 1 : 0;
    assign isLH     = (opcode == 7'b0000011 && funct3 == 3'b001                         ) ? 1 : 0;
    assign isLW     = (opcode == 7'b0000011 && funct3 == 3'b010                         ) ? 1 : 0;
    assign isLBU    = (opcode == 7'b0000011 && funct3 == 3'b100                         ) ? 1 : 0;
    assign isLHU    = (opcode == 7'b0000011 && funct3 == 3'b101                         ) ? 1 : 0;
    assign isSB     = (opcode == 7'b0100011 && funct3 == 3'b000                         ) ? 1 : 0;
    assign isSH     = (opcode == 7'b0100011 && funct3 == 3'b001                         ) ? 1 : 0;
    assign isSW     = (opcode == 7'b0100011 && funct3 == 3'b010                         ) ? 1 : 0;
    assign isADDI   = (opcode == 7'b0010011 && funct3 == 3'b000                         ) ? 1 : 0;
    assign isSLTI   = (opcode == 7'b0010011 && funct3 == 3'b010                         ) ? 1 : 0;
    assign isSLTIU  = (opcode == 7'b0010011 && funct3 == 3'b011                         ) ? 1 : 0;
    assign isXORI   = (opcode == 7'b0010011 && funct3 == 3'b100                         ) ? 1 : 0;
    assign isORI    = (opcode == 7'b0010011 && funct3 == 3'b110                         ) ? 1 : 0;
    assign isANDI   = (opcode == 7'b0010011 && funct3 == 3'b111                         ) ? 1 : 0;
    assign isSLLI   = (opcode == 7'b0010011 && funct3 == 3'b001 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isSRLI   = (opcode == 7'b0010011 && funct3 == 3'b101 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isSRAI   = (opcode == 7'b0010011 && funct3 == 3'b101 && funct7 == 7'b0100000 ) ? 1 : 0;
    assign isADD    = (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isSUB    = (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0100000 ) ? 1 : 0;
    assign isSLL    = (opcode == 7'b0110011 && funct3 == 3'b001 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isSLT    = (opcode == 7'b0110011 && funct3 == 3'b010 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isSLTU   = (opcode == 7'b0110011 && funct3 == 3'b011 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isXOR    = (opcode == 7'b0110011 && funct3 == 3'b100 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isSRL    = (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isSRA    = (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0100000 ) ? 1 : 0;
    assign isOR     = (opcode == 7'b0110011 && funct3 == 3'b110 && funct7 == 7'b0000000 ) ? 1 : 0;
    assign isAND    = (opcode == 7'b0110011 && funct3 == 3'b111 && funct7 == 7'b0000000 ) ? 1 : 0;

    assign isCSRRC  = (opcode == 7'b1110011 && funct3 == 3'b011                         ) ? 1 : 0;
    assign isCSRRCI = (opcode == 7'b1110011 && funct3 == 3'b111                         ) ? 1 : 0;
    assign isCSRRS  = (opcode == 7'b1110011 && funct3 == 3'b010                         ) ? 1 : 0;
    assign isCSRRSI = (opcode == 7'b1110011 && funct3 == 3'b110                         ) ? 1 : 0;
    assign isCSRRW  = (opcode == 7'b1110011 && funct3 == 3'b001                         ) ? 1 : 0;
    assign isCSRRWI = (opcode == 7'b1110011 && funct3 == 3'b101                         ) ? 1 : 0;

    assign isECALL  = (idu_in_bus_instruction==32'b00000000000000000000000001110011                    ) ? 1 : 0;
    assign isEBREAK = (idu_in_bus_instruction==32'b00000000000100000000000001110011                    ) ? 1 : 0;
    assign isMRET   = (idu_in_bus_instruction==32'b00110000001000000000000001110011                    ) ? 1 : 0;
    assign isFENCEI = (idu_in_bus_instruction==32'b00000000000000000001000000001111                    ) ? 1 : 0;

    // //M-ext R-ty
    // assign isMUL    = (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000001 ) ? 1 : 0;
    // assign isMULH   = (opcode == 7'b0110011 && funct3 == 3'b001 && funct7 == 7'b0000001 ) ? 1 : 0;
    // assign isMULHSU = (opcode == 7'b0110011 && funct3 == 3'b010 && funct7 == 7'b0000001 ) ? 1 : 0;
    // assign isMULHU  = (opcode == 7'b0110011 && funct3 == 3'b011 && funct7 == 7'b0000001 ) ? 1 : 0;
    // assign isDIV    = (opcode == 7'b0110011 && funct3 == 3'b100 && funct7 == 7'b0000001 ) ? 1 : 0;
    // assign isDIVU   = (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0000001 ) ? 1 : 0;
    // assign isREM    = (opcode == 7'b0110011 && funct3 == 3'b110 && funct7 == 7'b0000001 ) ? 1 : 0;
    // assign isREMU   = (opcode == 7'b0110011 && funct3 == 3'b111 && funct7 == 7'b0000001 ) ? 1 : 0;


/////////////////////////

    assign idu_out_bus_isLOAD = (isLW|isLBU|isLB|isLH|isLHU)?1:0;
    assign idu_out_bus_isSTORE= (isSW|isSB|isSH)?1:0;
    assign idu_out_bus_isWGPR = (isLUI|isAUIPC|isJAL|isJALR|isADDI|isSLTI|isSLTIU|isXORI|isORI|isANDI|isSLLI|isSRLI|isSRAI|isADD|isSUB|isSLL|isSLT|isSLTU|isXOR|isSRL|isSRA|isOR|isAND|idu_out_bus_isLOAD|(|idu_out_bus_opCSR))?1:0;
    assign idu_out_bus_isJUMP= (isJAL|isJALR)?1:0;
    assign idu_out_bus_isUsePC = (isAUIPC|isJAL|isBEQ|isBNE|isBLT|isBGE|isBLTU|isBGEU)?1:0;
    assign idu_out_bus_isWCOMP=(isSLTI|isSLTIU|isSLT|isSLTU)?1:0;
/////////////////////////
    assign isI=(isADDI|isSLTI|isSLTIU|isXORI|isORI|isANDI|isSLLI|isSRLI|isSRAI|isJALR|isLW|isLBU|isLB|isLH|isLHU|(|idu_out_bus_opCSR))?1:0;
    assign isR=(isADD|isSUB|isSLL|isSLT|isSLTU|isXOR|isSRL|isSRA|isOR|isAND)?1:0;
    assign isS=(isSW|isSB|isSH)?1:0;
    assign isB=(isBEQ|isBNE|isBLT|isBGE|isBLTU|isBGEU)?1:0;
    assign isU=(isLUI|isAUIPC)?1:0;
    assign isJ=(isJAL)?1:0;
    always @(*) begin
        if(isCSRRS)       idu_out_bus_opCSR=3'b001;
        else if(isCSRRSI) idu_out_bus_opCSR=3'b101;
        else if(isCSRRC)  idu_out_bus_opCSR=3'b010;
        else if(isCSRRCI) idu_out_bus_opCSR=3'b110;
        else if(isCSRRW)  idu_out_bus_opCSR=3'b011;
        else if(isCSRRWI) idu_out_bus_opCSR=3'b111;
        else              idu_out_bus_opCSR=3'b000;
    end

    always @(*) begin
        if     (isI)    idu_out_bus_imm={{20{immI[11:11]}},immI[11:0]};
        else if(isJ)    idu_out_bus_imm={{11{immJ[20:20]}},immJ[20:1],1'b0};
        else if(isS)    idu_out_bus_imm={{20{immS[11:11]}},immS[11:0]};
        else if(isU)    idu_out_bus_imm={   {immU[31:12]} ,{12{1'b0}}};
        else if(isB)    idu_out_bus_imm={{19{immB[12:12]}},immB[12:1],1'b0};
        else            idu_out_bus_imm=0;
    end
    //9-add sub xxx xxx LL LR AR AND OR XOR-0
    /////////////////////////
    // always @(*)begin
    //     if(isMUL)
    //         idu_out_bus_alu_op[12:10] = 3'b111;
    //     else if(isMULH)
    //         idu_out_bus_alu_op[12:10] = 3'b001;
    //     else if(isMULHSU)
    //         idu_out_bus_alu_op[12:10] = 3'b010;
    //     else if(isMULHU)
    //         idu_out_bus_alu_op[12:10] = 3'b011;
    //     else if(isDIV | isDIVU)
    //         idu_out_bus_alu_op[12:10] = 3'b100;
    //     else if(isREM | isREMU)
    //         idu_out_bus_alu_op[12:10] = 3'b101;
    //     else
    //         idu_out_bus_alu_op[12:10] = 3'b000;
    // end
    assign idu_out_bus_alu_op[9]=(isAUIPC|isJAL|isJALR|isADD|isLW|isLBU|isLB|isLH|isSW|isSH|isSB|isADDI|isLHU|isBEQ|isBNE|isBLT|isBGE|isBLTU|isBGEU)?1:0;
    assign idu_out_bus_alu_op[8]=(isSUB)?1:0;
    // Zbc: alu_op[7]=1, comp_op encodes: 00=clmul, 01=clmulh, 10=clmulr
    assign idu_out_bus_alu_op[7]=0;
    assign idu_out_bus_alu_op[6]=0;
    assign idu_out_bus_alu_op[5]=(isSLLI|isSLL)?1:0;
    assign idu_out_bus_alu_op[4]=(isSRLI|isSRL)?1:0;
    assign idu_out_bus_alu_op[3]=(isSRAI|isSRA)?1:0;
    assign idu_out_bus_alu_op[2]=(isANDI|isAND)?1:0;
    assign idu_out_bus_alu_op[1]=(isORI|isOR)?1:0;
    assign idu_out_bus_alu_op[0]=(isXORI|isXOR)?1:0;

    always @(*) begin
        if     (isBGE|isBGEU)                               idu_out_bus_comp_op=2'b00;
        else if(isBLTU|isBLT|isSLT|isSLTI|isSLTIU|isSLTU)   idu_out_bus_comp_op=2'b01;
        else if(isBNE)                                      idu_out_bus_comp_op=2'b10;
        else if(isBEQ)                                      idu_out_bus_comp_op=2'b11;
        else                                                idu_out_bus_comp_op=0;
    end

    /////////////////////////
    assign idu_out_bus_perip_mask=(isLW|isSW)?2'b10:((isLBU|isLB|isSB)?2'b00:((isLH|isLHU|isSH)?2'b01:2'b11));
    /////////////////////////
    assign idu_out_bus_isUnSigned=(isLBU|isLHU|isBLTU|isBGEU|isSLTIU|isSLTU)?1:0;


    //BRANCH
    assign idu_out_bus_isBRANCH = (isBEQ | isBNE | isBLT | isBGE | isBLTU | isBGEU)?1:0;

    always @(*) begin
        if(idu_in_bus_exception[4]) begin
            idu_out_bus_exception = idu_in_bus_exception;
        end else begin
            if(~all_inst) begin
                idu_out_bus_exception = {1'b1,`ysyx_26010011_EXCEPTION_ILLEGAL_INSTRUCTION};
            end else if(isEBREAK)begin
                idu_out_bus_exception = {1'b1,`ysyx_26010011_EXCEPTION_BREAKPOINT};
            end else if(isECALL)begin
                idu_out_bus_exception = {1'b1,`ysyx_26010011_EXCEPTION_ECALL_MMODE};
            end else if(isMRET)begin
                idu_out_bus_exception = {1'b1,`ysyx_26010011_EXCEPTION_MRET};
            end else if(isFENCEI)begin
                idu_out_bus_exception = {1'b0,`ysyx_26010011_EXCEPTION_FENCEI};
            end else begin
                idu_out_bus_exception = idu_in_bus_exception;
            end
        end

    end
endmodule



// ███████╗ ██╗  ██╗ ██╗   ██╗
// ██╔════╝ ╚██╗██╔╝ ██║   ██║
// █████╗    ╚███╔╝  ██║   ██║
// ██╔══╝    ██╔██╗  ██║   ██║
// ███████╗ ██╔╝ ██╗ ╚██████╔╝
// ╚══════╝ ╚═╝  ╚═╝  ╚═════╝
//`include "csr_defines.v"
module ysyx_26010011_EXU(
	input            clock,
	input            reset,
	input            flush_valid,

	input            exu_in_valid,
	input      [ 4:0]exu_in_bus_exception,
	output           exu_in_ready,
	input      [31:0]exu_in_bus_a,
	input      [31:0]exu_in_bus_b,
	input      [31:0]exu_in_bus_pc,
	input      [31:0]exu_in_bus_imm,
	input      [ 9:0]exu_in_bus_alu_op,
	input      [ 1:0]exu_in_bus_comp_op,
	input            exu_in_bus_isJUMP,
	input            exu_in_bus_isBRANCH,
	input      [ 2:0]exu_in_bus_opCSR,
	input            exu_in_bus_isUnSigned,
	input            exu_in_bus_isUsePC,//PC+imm
	input            exu_in_bus_alu_isUseImm,//imm
	input            exu_in_bus_comp_isUseImm,//imm


	output           exu_out_valid,
	output reg [ 4:0]exu_out_bus_exception,
	input            exu_out_ready,
	output reg [31:0]exu_out_bus_alu_result,
	output reg [31:0]exu_out_bus_csr_result,
	output reg       exu_out_bus_comp_result,

	output reg       exu_out_bus_dnpc_valid
);
	wire [31:0] a,b,comp_a,comp_b;
	assign a=(exu_in_bus_alu_isUseImm)?(exu_in_bus_isUsePC?exu_in_bus_pc:exu_in_bus_a):exu_in_bus_a;
	assign b=(exu_in_bus_alu_isUseImm)?exu_in_bus_imm:exu_in_bus_b;
	assign comp_a=exu_in_bus_a;
	assign comp_b=(exu_in_bus_comp_isUseImm)?exu_in_bus_imm:exu_in_bus_b;


	assign exu_in_ready = exu_out_ready;
	assign exu_out_valid = exu_in_valid;
	wire [31:0]op_xor;
	wire [31:0]op_or;
	wire [31:0]op_and;
	wire [31:0]op_ar;
	wire [31:0]op_lr;
	wire [31:0]op_ll;


	
	
	assign op_xor=a^b;
	assign op_or=a|b;
	assign op_and=a&b;
	assign op_ar=$signed(a) >>> (b & 32'h1f);
	assign op_lr=a >> (b & 32'h1f);
	assign op_ll=a << (b & 32'h1f);

	wire [31:0]op_adder;
	assign op_adder = (exu_in_bus_alu_op[8])?(a-b):(a+b);
	
	always @(*) begin
		if(exu_in_bus_alu_op[9] | exu_in_bus_alu_op[8]) exu_out_bus_alu_result=op_adder;
		else if(exu_in_bus_alu_op[5]) exu_out_bus_alu_result=op_ll;
		else if(exu_in_bus_alu_op[4]) exu_out_bus_alu_result=op_lr;
		else if(exu_in_bus_alu_op[3]) exu_out_bus_alu_result=op_ar;
		else if(exu_in_bus_alu_op[2]) exu_out_bus_alu_result=op_and;
		else if(exu_in_bus_alu_op[1]) exu_out_bus_alu_result=op_or;
		else if(exu_in_bus_alu_op[0]) exu_out_bus_alu_result=op_xor;
		else                          exu_out_bus_alu_result=b;
	end
	always @(*) begin
		if     ( exu_in_bus_opCSR[1]&~exu_in_bus_opCSR[0]) exu_out_bus_csr_result=op_and;
		else if(~exu_in_bus_opCSR[1]& exu_in_bus_opCSR[0]) exu_out_bus_csr_result=op_or;
		else                                               exu_out_bus_csr_result=exu_in_bus_a;
	end
	wire comp_isEQUAL,comp_isGREATER,comp_suber_carry;
	wire [31:0]comp_suber_out;
	assign {comp_suber_carry,comp_suber_out} = {1'b0,comp_a} + (~{1'b0,comp_b}) + 1;
	assign comp_isEQUAL = &(comp_a ~^ comp_b);
	assign comp_isGREATER = (exu_in_bus_isUnSigned)?((|comp_suber_out) & ~comp_suber_carry):((~comp_a[31] & comp_b[31]) | ((comp_a[31] ~^ comp_b[31])  & ~comp_suber_out[31]));
	always @(*) begin
		case (exu_in_bus_comp_op)
			2'b00: exu_out_bus_comp_result=comp_isEQUAL | comp_isGREATER;
			2'b01: exu_out_bus_comp_result=~(comp_isEQUAL | comp_isGREATER);
			2'b10: exu_out_bus_comp_result=~comp_isEQUAL;
			2'b11: exu_out_bus_comp_result=comp_isEQUAL;
		endcase
	end

	always @(*) begin
		if(exu_in_bus_exception[4]) begin
			exu_out_bus_dnpc_valid = 0;
			exu_out_bus_exception = exu_in_bus_exception;
		end else if(exu_in_valid & exu_in_ready) begin
			if( exu_in_bus_isJUMP | (exu_in_bus_isBRANCH & exu_out_bus_comp_result) ) begin
				if(|exu_out_bus_alu_result[1:0]) begin
					exu_out_bus_dnpc_valid = 0;
					exu_out_bus_exception = {1'b1,`ysyx_26010011_EXCEPTION_MISALIGNED_FETCH};
				end else begin
					exu_out_bus_dnpc_valid = 1;
					exu_out_bus_exception = exu_in_bus_exception;
				end
			end else begin
				exu_out_bus_dnpc_valid = 0;
				exu_out_bus_exception = exu_in_bus_exception;
			end
		end else begin
			exu_out_bus_dnpc_valid = 0;
			exu_out_bus_exception = exu_in_bus_exception;
		end
	end
endmodule


// module ysyx_26010011_M_ADDER(
// 	input [32:0] inA,
// 	input [32:0] inB,
// 	input cin,
// 	output [31:0] out,
// 	output carry
// );
// 	assign {carry,out} = inA + inB + {32'b0,cin};
// endmodule


// ██╗      ███████╗ ██╗   ██╗
// ██║      ██╔════╝ ██║   ██║
// ██║      ███████╗ ██║   ██║
// ██║      ╚════██║ ██║   ██║
// ███████╗ ███████║ ╚██████╔╝
// ╚══════╝ ╚══════╝  ╚═════╝
//IN_SYN// import "DPI-C" function void difftest_mem_set(int addr);
//`include "csr_defines.v"
module ysyx_26010011_LSU(
    input             clock,
    input             reset,
    input             flush_valid,
    // CPU 流水线接口
    input            lsu_in_valid,
    input      [ 4:0]lsu_in_bus_exception,/////////////////////TODO 异常冲刷还未实现！不可中断进行中的axi4
    output           lsu_in_ready,
    input      [31:0]lsu_in_bus_addr,
    input      [31:0]lsu_in_bus_wdata,
    input      [ 1:0]lsu_in_bus_perip_mask,
    input            lsu_in_bus_isUnSigned,
    input            lsu_in_bus_isLOAD,
    input            lsu_in_bus_isSTORE,

    output           lsu_out_valid/*verilator public*/,
    output reg [ 4:0]lsu_out_bus_exception,
    input            lsu_out_ready,
    output reg [31:0]lsu_out_bus_rdata,
    
    // AXI4 写地址通道
    output [31:0]     awaddr,
    output            awvalid,
    input             awready,
    output [3:0]      awid,
    output [7:0]      awlen,
    output [2:0]      awsize,
    output [1:0]      awburst,
    // AXI4 写数据通道
    output [31:0]     wdata,
    output [3:0]      wstrb,
    output            wvalid,
    input             wready,
    output            wlast,
    // AXI4 写响应通道
    input  [1:0]      bresp,
    input             bvalid,
    output            bready,
    input  [3:0]      bid,

    // AXI4 读地址通道
    output [31:0]     araddr,
    output            arvalid,
    input             arready,
    output [3:0]      arid,
    output [7:0]      arlen,
    output [2:0]      arsize,
    output [1:0]      arbureset,
    // AXI4 读数据通道
    input  [31:0]     rdata,
    input  [1:0]      rresp,
    input             rvalid,
    output            rready,
    input             rlast,
    input  [3:0]      rid
);

    // assign lsu_access_fault = (rvalid && (rresp==2'b10 || rresp==2'b11)) || (bvalid && (bresp==2'b10 || bresp==2'b11));

    localparam S_IDLE        = 3'd0;
    localparam S_WAIT_AW_W   = 3'd1; // 等待写地址与写数据握手
    localparam S_WAIT_BRESP  = 3'd2; // 等待写响应(B通道)
    localparam S_WAIT_AR     = 3'd3; // 等待读地址握手
    localparam S_WAIT_RDATA  = 3'd4; // 等待读数据返回(R通道)

    reg [2:0] state/*verilator public*/, next_state;

    // 握手信号
    wire aw_fire = awvalid && awready;
    wire w_fire  = wvalid && wready;
    wire b_fire/*verilator public*/  = bvalid && bready;
    wire ar_fire = arvalid && arready;
    wire r_fire/*verilator public*/  = rvalid && rready;

    assign awaddr  = {awaddr_q};
    assign awid    = 4'b0;
    assign awlen   = 8'b0;
    
    assign awsize  = awsize_q;
    assign awburst = 2'b01;   // INCR
    // 对于 awsize=0(byte), wdata 只取 [7:0]，靠 wstrb 选 lane
    // 对于 awsize=1(half), wdata 只取 [15:0]
    // Fragmenter 对齐地址后 UART APB 用 paddr[1:0] 选字节，故数据必须放在对应 lane
    assign wdata   = wdata_q;
    assign wstrb   = wstrb_q;
    assign wlast   = 1'b1;    // single beat

    reg [31:0]  awaddr_q;
    reg [31:0]  wdata_q;
    reg [2:0]   awsize_q;
    reg [3:0]   wstrb_q;
    always @(posedge clock) begin
        if(reset) begin
            // awaddr_q <= 32'b0;
            // wdata_q  <= 32'b0;
            // awsize_q <= 3'b0;
            // wstrb_q  <= 4'b0;
        end else begin
            if(next_state == S_WAIT_BRESP || next_state == S_WAIT_AW_W) begin
                awaddr_q <= lsu_in_bus_addr;
                wdata_q  <= lsu_in_bus_wdata << (lsu_in_bus_addr[1:0] << 3);
                awsize_q <= (lsu_in_bus_perip_mask == 2'b00) ? 3'b000 :
                            (lsu_in_bus_perip_mask == 2'b01) ? 3'b001 : 3'b010;
                wstrb_q  <= (
                            (lsu_in_bus_perip_mask == 2'b00) ? 4'b0001 :
                            (lsu_in_bus_perip_mask == 2'b01) ? 4'b0011 : 
                                                               4'b1111 ) << lsu_in_bus_addr[1:0];
            end
        end
    end

    assign araddr  = lsu_in_bus_addr;
    assign arid    = 4'b0;
    assign arlen   = 8'b0;
    assign arsize  = (lsu_in_bus_perip_mask == 2'b00) ? 3'b000 :
                     (lsu_in_bus_perip_mask == 2'b01) ? 3'b001 : 3'b010;
    assign arbureset = 2'b01;   // INCR

    assign awvalid = ((state == S_WAIT_AW_W)) & !reset & ~lsu_out_bus_exception[4];
    assign wvalid  = awvalid;
    assign arvalid = ((state == S_IDLE && lsu_in_valid && lsu_in_bus_isLOAD) || (state == S_WAIT_AR)) & !reset & ~lsu_out_bus_exception[4];

    assign bready  = ((state == S_WAIT_BRESP) || (state == S_IDLE)) & lsu_out_ready & !reset;
    assign rready  = ((state == S_WAIT_RDATA) || (state == S_IDLE)) & lsu_out_ready & !reset;

    always @(*) begin
        if(lsu_in_bus_isSTORE && awvalid && awready) begin
            if((
                (lsu_in_bus_addr >= 32'h30000000 && lsu_in_bus_addr < 32'h31000000)
                ||(lsu_in_bus_addr >= 32'h0f000000 && lsu_in_bus_addr < 32'h0f002000)
                ||(lsu_in_bus_addr >= 32'h80000000 && lsu_in_bus_addr < 32'h80400000)
                ||(lsu_in_bus_addr >= 32'ha0000000 && lsu_in_bus_addr < 32'ha8000000)
                ||(lsu_in_bus_addr >= 32'h20000000 && lsu_in_bus_addr < 32'h20001000)
            ))
            begin
//IN_SYN//                 difftest_mem_set(lsu_in_bus_addr);
            end
        end
        if(((lsu_in_bus_isSTORE && lsu_in_valid)||(lsu_in_bus_isLOAD && lsu_in_valid)) && !(
                (lsu_in_bus_addr >= 32'h30000000 && lsu_in_bus_addr < 32'h31000000)
              ||(lsu_in_bus_addr >= 32'h0f000000 && lsu_in_bus_addr < 32'h0f002000)
              ||(lsu_in_bus_addr >= 32'h80000000 && lsu_in_bus_addr < 32'h80400000)
              ||(lsu_in_bus_addr >= 32'ha0000000 && lsu_in_bus_addr < 32'ha8000000)
              ||(lsu_in_bus_addr >= 32'h20000000 && lsu_in_bus_addr < 32'h20001000)
        )) begin
            if((lsu_in_bus_addr >= 32'h10000000) && (lsu_in_bus_addr <= 32'h10000005)) begin
//IN_SYN//                 difftest_skip_ref(lsu_in_bus_addr);
            end
        end


    end

    always @(*) begin
        next_state = state;
        case(state)
            S_IDLE: begin
                if (lsu_in_valid) begin
                    if (lsu_in_bus_isSTORE) begin
                        if (aw_fire && w_fire) next_state = S_WAIT_BRESP;
                        else                   next_state = S_WAIT_AW_W;
                    end else if(lsu_in_bus_isLOAD)begin
                        if (ar_fire) next_state = S_WAIT_RDATA;
                        else         next_state = S_WAIT_AR;
                    end else begin
                        next_state = S_IDLE;
                    end
                end
            end
            
            S_WAIT_AW_W: begin
                if (aw_fire && w_fire) begin
                    next_state = S_WAIT_BRESP;
                end
            end
            
            S_WAIT_BRESP: begin
                if (b_fire) next_state = S_IDLE;
            end
            
            S_WAIT_AR: begin
                if (ar_fire) begin
                    next_state = S_WAIT_RDATA;
                end
            end
            
            S_WAIT_RDATA: begin
                if (r_fire) next_state = S_IDLE;
            end
            
            default: next_state = S_IDLE;
        endcase
    end

    always @(posedge clock) begin
        if (reset) state <= S_IDLE;
        else     state <= (lsu_in_valid&lsu_out_bus_exception[4])?S_IDLE:next_state;
    end

    assign lsu_out_valid =  lsu_in_valid &
                            ((state == S_WAIT_RDATA && r_fire) ||
                             (state == S_WAIT_BRESP && b_fire) || !(lsu_in_bus_isLOAD || lsu_in_bus_isSTORE) || lsu_out_bus_exception[4]);
    assign lsu_in_ready = (lsu_in_valid & (lsu_in_bus_isLOAD | lsu_in_bus_isSTORE)) ? ((lsu_out_ready & (r_fire | b_fire)) | lsu_out_bus_exception[4]):(1);

    wire [31:0] val0 = rdata; 
    wire [31:0] val1 = {{8{val0[31]}}, val0[31:8]};
    wire [31:0] val2 = {{8{val1[31]}}, val1[31:8]};
    wire [31:0] val3 = {{8{val2[31]}}, val2[31:8]};
    
    reg[31:0]val;
    // assign val = val0;
    always @(*) begin
        case(lsu_in_bus_addr[1:0])
            2'b00: val = val0;
            2'b01: val = val1;
            2'b10: val = val2;
            2'b11: val = val3;
            default: val = val0;
        endcase
    end

    wire [31:0] lsu_rdata1 = (!lsu_in_bus_isUnSigned) ? {{24{val[7]}},  val[7:0]}  : {{24{1'b0}}, val[7:0]};
    wire [31:0] lsu_rdata2 = (!lsu_in_bus_isUnSigned) ? {{16{val[15]}}, val[15:0]} : {{16{1'b0}}, val[15:0]};
    wire [31:0] lsu_rdata4 = val[31:0];
    
    always @(*) begin
        case(lsu_in_bus_perip_mask)
            2'b00: lsu_out_bus_rdata = lsu_rdata1;
            2'b01: lsu_out_bus_rdata = lsu_rdata2;
            2'b10: lsu_out_bus_rdata = lsu_rdata4;
            default: lsu_out_bus_rdata = lsu_rdata1;
            // default: lsu_out_bus_rdata = 32'hffffffff;
        endcase
    end
    wire debug_LSU_LOADING/*verilator public*/ = (state!=S_IDLE)&lsu_in_bus_isLOAD&lsu_in_valid;
    wire debug_LSU_WRITING/*verilator public*/ = (state!=S_IDLE)&lsu_in_bus_isSTORE&lsu_in_valid;
    wire debug_LSU_WRITE_FINAL/*verilator public*/ = lsu_out_ready&lsu_out_valid&lsu_in_bus_isSTORE&lsu_in_valid;
    wire debug_LSU_LOAD_FINAL/*verilator public*/ = lsu_out_ready&lsu_out_valid&lsu_in_bus_isLOAD&lsu_in_valid;

    always @(*) begin
        if(lsu_in_bus_exception[4]) begin
            lsu_out_bus_exception = lsu_in_bus_exception;
        end else begin
            if(lsu_in_valid & (lsu_in_bus_isLOAD | lsu_in_bus_isSTORE)) begin
                case (lsu_in_bus_perip_mask)
                    2'b00: begin
                        lsu_out_bus_exception = lsu_in_bus_exception;
                    end
                    2'b01: begin
                        if(lsu_in_bus_addr[0]) lsu_out_bus_exception = {1'b1,(lsu_in_bus_isLOAD)?`ysyx_26010011_EXCEPTION_MISALIGNED_LOAD:`ysyx_26010011_EXCEPTION_MISALIGNED_STORE};
                        else                   lsu_out_bus_exception = lsu_in_bus_exception;
                    end
                    2'b10: begin
                        if(lsu_in_bus_addr[1:0]!=2'b00) lsu_out_bus_exception = {1'b1,(lsu_in_bus_isLOAD)?`ysyx_26010011_EXCEPTION_MISALIGNED_LOAD:`ysyx_26010011_EXCEPTION_MISALIGNED_STORE};
                        else                           lsu_out_bus_exception = lsu_in_bus_exception;
                    end
                    default: begin
                        lsu_out_bus_exception = {1'b1,(lsu_in_bus_isLOAD)?`ysyx_26010011_EXCEPTION_MISALIGNED_LOAD:`ysyx_26010011_EXCEPTION_MISALIGNED_STORE};
                    end
                endcase
            end else begin
                lsu_out_bus_exception = lsu_in_bus_exception;
            end
        end
    end

endmodule


// ██╗    ██╗ ██████╗  ██╗   ██╗
// ██║    ██║ ██╔══██╗ ██║   ██║
// ██║ █╗ ██║ ██████╔╝ ██║   ██║
// ██║███╗██║ ██╔══██╗ ██║   ██║
// ╚███╔███╔╝ ██████╔╝ ╚██████╔╝
//  ╚══╝╚══╝  ╚═════╝   ╚═════╝
module ysyx_26010011_WBU(
    input clock,
    input reset,
    input flush_valid,

    input wbu_in_valid,
    output wbu_in_ready,
    input [31:0]wbu_in_bus_pc,
    input [31:0]wbu_in_bus_instruction,
    input [31:0]wbu_in_bus_lsu_result,
    input [31:0]wbu_in_bus_alu_result,
    input [31:0]wbu_in_bus_csr_result,
    input wbu_in_bus_comp_result,
    input [31:0]wbu_in_bus_snpc,
    input [4:0]wbu_in_bus_rd,
    input [11:0]wbu_in_bus_csrrd,
    input wbu_in_bus_isLOAD,
    input wbu_in_bus_isSTORE,
    input wbu_in_bus_isWGPR,
    input wbu_in_bus_isJUMP,
    input wbu_in_bus_isWCOMP,
    input [2:0]wbu_in_bus_opCSR,
    input [4:0]wbu_in_bus_exception,

    output gpr_we,
    output reg [31:0]gpr_wdata,
    output [4:0]gpr_address,

    output csr_we,
    output [31:0]csr_wdata,
    output [11:0]csr_address,
    output [4:0]wbu_out_bus_exception,
    output fencei_pass
);  
    assign wbu_in_ready=1;
    always @(*) begin
        if(wbu_in_bus_isLOAD) begin
                                    gpr_wdata = wbu_in_bus_lsu_result;
        end else if(wbu_in_bus_isJUMP) begin
                                    gpr_wdata = wbu_in_bus_snpc;
        // end else if(wbu_in_bus_isWGPR) begin
        end else begin
            if(wbu_in_bus_isWCOMP)           gpr_wdata = {31'b0,wbu_in_bus_comp_result};
            else                    gpr_wdata = wbu_in_bus_alu_result;
        end
    end

    assign gpr_address=wbu_in_bus_rd;
    assign gpr_we=(wbu_in_bus_isWGPR & wbu_in_valid & ~wbu_in_bus_exception[4])?1:0;
    
    assign wbu_out_bus_exception=(wbu_in_valid)?wbu_in_bus_exception:5'b0;
    assign fencei_pass = (wbu_in_valid & ~wbu_in_bus_exception[4] & (wbu_in_bus_exception[3:0]==`ysyx_26010011_EXCEPTION_FENCEI))?1:0;

    assign csr_address=wbu_in_bus_csrrd;
    assign csr_we=((|wbu_in_bus_opCSR) & wbu_in_valid & ~wbu_in_bus_exception[4])?1:0;
    assign csr_wdata=wbu_in_bus_csr_result;
endmodule
//////////反压优化
module ysyx_26010011_IF_ID_pipeline(
    input            clock,
    input            reset,
    input            flush_valid,

    input            ifu_out_valid,
    output           ifu_out_ready,
    input      [31:0]ifu_out_bus_instruction,
    input      [31:0]ifu_out_bus_pc,
    input      [31:0]ifu_out_bus_snpc,
    input      [ 4:0]ifu_out_bus_exception,

    output reg       idu_in_valid/*verilator public*/,
    input            idu_in_ready,
    output reg [31:0]idu_in_bus_instruction,
    output reg [31:0]idu_in_bus_pc/*verilator public*/,
    output reg [31:0]idu_in_bus_snpc,
    output reg [ 4:0]idu_in_bus_exception
);
    assign ifu_out_ready = idu_in_ready | !idu_in_valid;
    always @(posedge clock)begin
        if(reset | flush_valid) begin
            idu_in_valid <= 0;
        end else if(idu_in_ready | !idu_in_valid)begin
            idu_in_valid <= ifu_out_valid;
            idu_in_bus_instruction <= ifu_out_bus_instruction;
            idu_in_bus_pc <= ifu_out_bus_pc;
            idu_in_bus_snpc <= ifu_out_bus_snpc;
            idu_in_bus_exception <= ifu_out_bus_exception;
        end
    end
endmodule

module ysyx_26010011_ID_EX_pipeline(
    input            clock,
    input            reset,
    input            flush_valid,

    input            idu_out_valid,
    output           idu_out_ready,
    input      [ 4:0]idu_out_bus_rd,
    input      [ 4:0]idu_out_bus_exception,
    input      [11:0]idu_out_bus_csrrd,
    input      [ 4:0]idu_out_bus_rs1,
    input      [ 4:0]idu_out_bus_rs2,
    input      [31:0]idu_out_bus_rs1_val,
    input      [31:0]idu_out_bus_rs2_val,
    input      [31:0]idu_out_bus_imm,
    input      [31:0]idu_out_bus_instruction,
    input            idu_out_bus_isLOAD,
    input            idu_out_bus_isSTORE,
    input            idu_out_bus_isWGPR,
    input            idu_out_bus_isJUMP,
    input            idu_out_bus_isWCOMP,
    input            idu_out_bus_isBRANCH,
    input      [ 2:0]idu_out_bus_opCSR,
    input            idu_out_bus_isUnSigned,
    input            idu_out_bus_isUsePC,
    input            idu_out_bus_alu_isUseImm,
    input            idu_out_bus_comp_isUseImm,
    input      [ 9:0]idu_out_bus_alu_op,
    input      [ 1:0]idu_out_bus_comp_op,
    input      [ 1:0]idu_out_bus_perip_mask,
    input      [31:0]idu_out_bus_pc,
    input      [31:0]idu_out_bus_snpc,

    output reg       exu_in_valid/*verilator public*/,
    input            exu_in_ready,
    output reg [ 4:0]exu_in_bus_rd,
    output reg [ 4:0]exu_in_bus_exception,
    output reg [11:0]exu_in_bus_csrrd,
    output reg [ 4:0]exu_in_bus_rs1,
    output reg [ 4:0]exu_in_bus_rs2,
    output reg [31:0]exu_in_bus_rs1_val,
    output reg [31:0]exu_in_bus_rs2_val,
    output reg [31:0]exu_in_bus_imm,
    output reg [31:0]exu_in_bus_instruction,
    output reg       exu_in_bus_isLOAD,
    output reg       exu_in_bus_isSTORE,
    output reg       exu_in_bus_isWGPR,
    output reg       exu_in_bus_isJUMP,
    output reg       exu_in_bus_isWCOMP,
    output reg       exu_in_bus_isBRANCH,
    output reg [ 2:0]exu_in_bus_opCSR,
    output reg       exu_in_bus_isUnSigned,
    output reg       exu_in_bus_isUsePC,
    output reg       exu_in_bus_alu_isUseImm,
    output reg       exu_in_bus_comp_isUseImm,
    output reg [ 9:0]exu_in_bus_alu_op,
    output reg [ 1:0]exu_in_bus_comp_op,
    output reg [ 1:0]exu_in_bus_perip_mask,
    output reg [31:0]exu_in_bus_pc/*verilator public*/,
    output reg [31:0]exu_in_bus_snpc
);
    assign idu_out_ready = exu_in_ready | !exu_in_valid;
    always @(posedge clock)begin
        if(reset | flush_valid) begin
            exu_in_valid<=0;
        end else if(exu_in_ready | !exu_in_valid) begin
            exu_in_valid<=idu_out_valid;
            exu_in_bus_rd<=idu_out_bus_rd;
            exu_in_bus_exception<=idu_out_bus_exception;
            exu_in_bus_csrrd<=idu_out_bus_csrrd;
            exu_in_bus_rs1<=idu_out_bus_rs1;
            exu_in_bus_rs2<=idu_out_bus_rs2;
            exu_in_bus_rs1_val<=idu_out_bus_rs1_val;
            exu_in_bus_rs2_val<=idu_out_bus_rs2_val;
            exu_in_bus_imm<=idu_out_bus_imm;
            exu_in_bus_instruction<=idu_out_bus_instruction;
            exu_in_bus_isLOAD<=idu_out_bus_isLOAD;
            exu_in_bus_isSTORE<=idu_out_bus_isSTORE;
            exu_in_bus_isWGPR<=idu_out_bus_isWGPR;
            exu_in_bus_isJUMP<=idu_out_bus_isJUMP;
            exu_in_bus_isWCOMP<=idu_out_bus_isWCOMP;
            exu_in_bus_isBRANCH<=idu_out_bus_isBRANCH;
            exu_in_bus_opCSR<=idu_out_bus_opCSR;
            exu_in_bus_isUnSigned<=idu_out_bus_isUnSigned;
            exu_in_bus_isUsePC<=idu_out_bus_isUsePC;
            exu_in_bus_comp_isUseImm<=idu_out_bus_comp_isUseImm;
            exu_in_bus_alu_isUseImm<=idu_out_bus_alu_isUseImm;
            exu_in_bus_alu_op<=idu_out_bus_alu_op;
            exu_in_bus_comp_op<=idu_out_bus_comp_op;
            exu_in_bus_perip_mask<=idu_out_bus_perip_mask;
            exu_in_bus_pc<=idu_out_bus_pc;
            exu_in_bus_snpc<=idu_out_bus_snpc;
        end
    end
endmodule

module ysyx_26010011_EX_LS_pipeline(
    input            clock,
    input            reset,
    input            flush_valid,

    input            exu_out_valid,
    output           exu_out_ready,
    input      [31:0]exu_out_bus_alu_result,
    input      [31:0]exu_out_bus_csr_result,
    input            exu_out_bus_comp_result,
    input      [31:0]exu_out_bus_lsu_val,
    input      [ 4:0]exu_out_bus_rd,
    input      [ 4:0]exu_out_bus_exception,
    input      [11:0]exu_out_bus_csrrd,
    input      [31:0]exu_out_bus_instruction,
    input            exu_out_bus_isLOAD,
    input            exu_out_bus_isSTORE,
    input            exu_out_bus_isWGPR,
    input            exu_out_bus_isJUMP,
    input            exu_out_bus_isWCOMP,
    input            exu_out_bus_isBRANCH,
    input      [ 2:0]exu_out_bus_opCSR,
    input            exu_out_bus_isUnSigned,
    input      [ 1:0]exu_out_bus_perip_mask,
    input      [31:0]exu_out_bus_pc,
    input      [31:0]exu_out_bus_snpc,

    output reg       lsu_in_valid/*verilator public*/,
    input            lsu_in_ready,
    output reg [31:0]lsu_in_bus_alu_result,
    output reg [31:0]lsu_in_bus_csr_result,
    output reg       lsu_in_bus_comp_result,
    output reg [31:0]lsu_in_bus_lsu_val,
    output reg [ 4:0]lsu_in_bus_rd,
    output reg [ 4:0]lsu_in_bus_exception,
    output reg [11:0]lsu_in_bus_csrrd,
    output reg [31:0]lsu_in_bus_instruction,
    output reg       lsu_in_bus_isLOAD,
    output reg       lsu_in_bus_isSTORE,
    output reg       lsu_in_bus_isWGPR,
    output reg       lsu_in_bus_isJUMP,
    output reg       lsu_in_bus_isWCOMP,
    output reg       lsu_in_bus_isBRANCH,
    output reg [ 2:0]lsu_in_bus_opCSR,
    output reg       lsu_in_bus_isUnSigned,
    output reg [ 1:0]lsu_in_bus_perip_mask,
    output reg [31:0]lsu_in_bus_pc/*verilator public*/,
    output reg [31:0]lsu_in_bus_snpc
);
    assign exu_out_ready = lsu_in_ready | !lsu_in_valid;
    always @(posedge clock)begin
        if(reset | flush_valid) begin
            lsu_in_valid<=0;
        end else if(lsu_in_ready | !lsu_in_valid)begin
            lsu_in_valid<=exu_out_valid;
            lsu_in_bus_alu_result<=exu_out_bus_alu_result;
            lsu_in_bus_csr_result<=exu_out_bus_csr_result;
            lsu_in_bus_comp_result<=exu_out_bus_comp_result;
            lsu_in_bus_lsu_val<=exu_out_bus_lsu_val;
            lsu_in_bus_rd<=exu_out_bus_rd;
            lsu_in_bus_exception<=exu_out_bus_exception;
            lsu_in_bus_csrrd<=exu_out_bus_csrrd;
            lsu_in_bus_instruction<=exu_out_bus_instruction;
            lsu_in_bus_isLOAD<=exu_out_bus_isLOAD;
            lsu_in_bus_isSTORE<=exu_out_bus_isSTORE;
            lsu_in_bus_isWGPR<=exu_out_bus_isWGPR;
            lsu_in_bus_isJUMP<=exu_out_bus_isJUMP;
            lsu_in_bus_isWCOMP<=exu_out_bus_isWCOMP;
            lsu_in_bus_isBRANCH<=exu_out_bus_isBRANCH;
            lsu_in_bus_opCSR<=exu_out_bus_opCSR;
            lsu_in_bus_isUnSigned<=exu_out_bus_isUnSigned;
            lsu_in_bus_perip_mask<=exu_out_bus_perip_mask;
            lsu_in_bus_pc<=exu_out_bus_pc;
            lsu_in_bus_snpc<=exu_out_bus_snpc;
        end
    end
endmodule

module ysyx_26010011_LS_WB_pipeline(
    input            clock,
    input            reset,
    input            flush_valid,

    input            lsu_out_valid,
    output           lsu_out_ready,

    input      [31:0]lsu_out_bus_alu_result,
    input      [31:0]lsu_out_bus_csr_result,
    input            lsu_out_bus_comp_result,
    input      [31:0]lsu_out_bus_lsu_result,
    input      [ 4:0]lsu_out_bus_rd,
    input      [ 4:0]lsu_out_bus_exception,
    input      [11:0]lsu_out_bus_csrrd,
    input      [31:0]lsu_out_bus_instruction,
    input            lsu_out_bus_isLOAD,
    input            lsu_out_bus_isSTORE,
    input            lsu_out_bus_isWGPR,
    input            lsu_out_bus_isJUMP,
    input            lsu_out_bus_isWCOMP,
    input            lsu_out_bus_isBRANCH,
    input      [ 2:0]lsu_out_bus_opCSR,
    input      [31:0]lsu_out_bus_pc,
    input      [31:0]lsu_out_bus_snpc,


    output reg       wbu_in_valid/*verilator public*/,
    input            wbu_in_ready,
    output reg [31:0]wbu_in_bus_lsu_result,
    output reg [31:0]wbu_in_bus_alu_result,
    output reg [31:0]wbu_in_bus_csr_result,
    output reg       wbu_in_bus_comp_result,
    output reg [ 4:0]wbu_in_bus_rd,
    output reg [ 4:0]wbu_in_bus_exception,
    output reg [11:0]wbu_in_bus_csrrd,
    output reg [31:0]wbu_in_bus_instruction,
    output reg       wbu_in_bus_isLOAD,
    output reg       wbu_in_bus_isSTORE,
    output reg       wbu_in_bus_isWGPR,
    output reg       wbu_in_bus_isJUMP,
    output reg       wbu_in_bus_isWCOMP,
    output reg       wbu_in_bus_isBRANCH,
    output reg [ 2:0]wbu_in_bus_opCSR,
    output reg [31:0]wbu_in_bus_pc/*verilator public*/,
    output reg [31:0]wbu_in_bus_snpc
);
    assign lsu_out_ready = wbu_in_ready | !wbu_in_valid;
    always @(posedge clock)begin
        if(reset | flush_valid) begin
            wbu_in_valid<=0; 
        end else if(wbu_in_ready | !wbu_in_valid)begin
            wbu_in_valid<=lsu_out_valid; 
            wbu_in_bus_pc<=lsu_out_bus_pc;
            wbu_in_bus_instruction<=lsu_out_bus_instruction;
            wbu_in_bus_lsu_result<=lsu_out_bus_lsu_result;
            wbu_in_bus_alu_result<=lsu_out_bus_alu_result;
            wbu_in_bus_csr_result<=lsu_out_bus_csr_result;
            wbu_in_bus_comp_result<=lsu_out_bus_comp_result;
            wbu_in_bus_snpc<=lsu_out_bus_snpc;
            wbu_in_bus_rd<=lsu_out_bus_rd;
            wbu_in_bus_exception<=lsu_out_bus_exception;
            wbu_in_bus_csrrd<=lsu_out_bus_csrrd;
            wbu_in_bus_isLOAD<=lsu_out_bus_isLOAD;
            wbu_in_bus_isSTORE<=lsu_out_bus_isSTORE;
            wbu_in_bus_isWGPR<=lsu_out_bus_isWGPR;
            wbu_in_bus_isJUMP<=lsu_out_bus_isJUMP;
            wbu_in_bus_isWCOMP<=lsu_out_bus_isWCOMP;
            wbu_in_bus_isBRANCH<=lsu_out_bus_isBRANCH;
            wbu_in_bus_opCSR<=lsu_out_bus_opCSR;
        end
    end
endmodule

//  ██████╗  ██████╗  ██████╗
// ██╔════╝  ██╔══██╗ ██╔══██╗
// ██║  ███╗ ██████╔╝ ██████╔╝
// ██║   ██║ ██╔═══╝  ██╔══██╗
// ╚██████╔╝ ██║      ██║  ██║
//  ╚═════╝  ╚═╝      ╚═╝  ╚═╝
//IN_SYN// import "DPI-C" function void difftest_skip_ref(int reason);
//`include "csr_defines.v"
module ysyx_26010011_GPRs(
  input        clock,
  input        reset,
  input  [ 4:0]gpr_in_addra,
  input  [ 4:0]gpr_in_addrb,
  output [31:0]gpr_out_a,
  output [31:0]gpr_out_b,
  input  [ 4:0]gpr_in_addw,
  input  [31:0]gpr_in_data,
  input        gpr_in_wen
); 
  

  reg [31:0]GPR[31:0]/* verilator public */;

  

  assign gpr_out_a=(gpr_in_addra==0)?{32{1'b0}}:GPR[gpr_in_addra];
  assign gpr_out_b=(gpr_in_addrb==0)?{32{1'b0}}:GPR[gpr_in_addrb];

  
  integer i;
  always @(posedge clock) begin
    if(reset) begin
      // for(i=0;i<32;i=i+1) begin
      //   // GPR[i]<={32{1'b0}};
      // end
    end else begin
      if(gpr_in_wen) begin
        GPR[gpr_in_addw]<=(gpr_in_addw==5'b00000)?{32{1'b0}}:(gpr_in_data);
      end
    end
  end



endmodule


// ██████╗  ███████╗ ██████╗
// ██╔════╝ ██╔════╝ ██╔══██╗
// ██║      ███████╗ ██████╔╝
// ██║      ╚════██║ ██╔══██╗
// ╚██████╗ ███████║ ██║  ██║
//  ╚═════╝ ╚══════╝ ╚═╝  ╚═╝
module ysyx_26010011_CSRs(
  input            clock,
  input            reset,

  input      [11:0]csr_in_addr,
  output reg [31:0]csr_out_data,

  input      [31:0]csr_pc,
  input      [31:0]csr_in_data,
  input            csr_in_wen,
  input      [11:0]csr_in_addw,

  output     [31:0]csr_mtvec,
  output     [31:0]csr_mepc,
  
  input [4:0]csr_in_bus_exception
);


  reg [31:0]CSR_MCYCLE/* verilator public */;
  reg [31:0]CSR_MCYCLEH/* verilator public */;
  reg [31:0]CSR_MISA/* verilator public */;
  reg [31:0]CSR_MTVEC/* verilator public */;
  reg [31:0]CSR_MSCRATCH/* verilator public */;
  reg [31:0]CSR_MEPC/* verilator public */;
  reg [31:0]CSR_MCAUSE/* verilator public */;
  reg [31:0]CSR_MSTATUS/* verilator public */;
  reg [31:0]CSR_MVENDORID/* verilator public */;
  reg [31:0]CSR_MARCHID/* verilator public */;
  reg [31:0]CSR_MTVAL/* verilator public */;

  always @(*) begin
    case(csr_in_addr)
      `ysyx_26010011_ADD_MCYCLE:   csr_out_data = CSR_MCYCLE;
      `ysyx_26010011_ADD_MCYCLEH:   csr_out_data = CSR_MCYCLEH;
      `ysyx_26010011_ADD_MISA:   csr_out_data = CSR_MISA;
      `ysyx_26010011_ADD_MTVEC:   csr_out_data = CSR_MTVEC;
      `ysyx_26010011_ADD_MSCRATCH:   csr_out_data = CSR_MSCRATCH;
      `ysyx_26010011_ADD_MEPC:   csr_out_data = CSR_MEPC;
      `ysyx_26010011_ADD_MCAUSE:   csr_out_data = CSR_MCAUSE;
      `ysyx_26010011_ADD_MSTATUS:   csr_out_data = CSR_MSTATUS;
      `ysyx_26010011_ADD_MVENDORID:   csr_out_data = CSR_MVENDORID;
      `ysyx_26010011_ADD_MARCHID:   csr_out_data = CSR_MARCHID;
      `ysyx_26010011_ADD_MTVAL:      csr_out_data = CSR_MTVAL;
      
      default:      csr_out_data = 32'h0;
    endcase
  end

  always @(posedge clock) begin
    if(reset) begin
      CSR_MCYCLE <= 0;
      CSR_MCYCLEH <= 0;
      CSR_MISA <= 32'h40000100;
      CSR_MTVEC <= 32'h0;
      CSR_MSCRATCH <= 0;
      // CSR_MEPC <= 0;
      // CSR_MCAUSE <= 0;
      CSR_MSTATUS <= 32'h1800;
      CSR_MVENDORID <= 32'h79737978;
      CSR_MARCHID <= 32'h018ce19b;
      CSR_MTVAL <= 32'h00;
    end else begin
      if(csr_in_bus_exception[4]) begin
        if(csr_in_bus_exception[3:0] != `ysyx_26010011_EXCEPTION_MRET) begin
          CSR_MEPC    <= csr_pc;
          CSR_MCAUSE  <= {1'b0, 27'b0, csr_in_bus_exception[3:0]};
        end
      end else if(csr_in_wen) begin
        case (csr_in_addw)
            `ysyx_26010011_ADD_MTVEC:      CSR_MTVEC   <= csr_in_data;
            `ysyx_26010011_ADD_MSCRATCH: begin
                 CSR_MSCRATCH <= csr_in_data;
                 $display("Write CSR_MSCRATCH: %08x", csr_in_data);
            end
            `ysyx_26010011_ADD_MEPC:       CSR_MEPC    <= csr_in_data;
            `ysyx_26010011_ADD_MCAUSE:     CSR_MCAUSE  <= csr_in_data;
            `ysyx_26010011_ADD_MSTATUS:    CSR_MSTATUS <= csr_in_data;
            `ysyx_26010011_ADD_MTVAL:      CSR_MTVAL   <= csr_in_data;
            default:;
        endcase
      end
      {CSR_MCYCLEH, CSR_MCYCLE} <= {CSR_MCYCLEH, CSR_MCYCLE} + 1;
    end
  end

  assign csr_mepc  = CSR_MEPC;
  assign csr_mtvec = CSR_MTVEC;



  always @(*) begin
      if (csr_in_wen & ((csr_in_addw==`ysyx_26010011_ADD_MCYCLE) | (csr_in_addw==`ysyx_26010011_ADD_MCYCLEH))) begin
//IN_SYN//          difftest_skip_ref(4);
      end
  end
endmodule


// ████████╗  ██████╗  ██████╗
// ╚══██╔══╝ ██╔═══██╗ ██╔══██╗
//    ██║    ██║   ██║ ██████╔╝
//    ██║    ██║   ██║ ██╔═══╝
//    ██║    ╚██████╔╝ ██║
//    ╚═╝     ╚═════╝  ╚═╝
//IN_SYN// import "DPI-C" function int pmem_read(input int raddr);
//IN_SYN// import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
//`include "csr_defines.v"
module ysyx_26010011(
  input clock,
  input reset/*verilator public*/,
  input io_interrupt,

  input		io_master_awready,
  output		io_master_awvalid,
  output	[31:0]	io_master_awaddr,
  output	[3:0]	io_master_awid,
  output	[7:0]	io_master_awlen,
  output	[2:0]	io_master_awsize,
  output	[1:0]	io_master_awburst,
  input		io_master_wready,
  output		io_master_wvalid,
  output	[31:0]	io_master_wdata,
  output	[3:0]	io_master_wstrb,
  output		io_master_wlast,
  output		io_master_bready,
  input		io_master_bvalid,
  input	[1:0]	io_master_bresp,
  input	[3:0]	io_master_bid,
  input		io_master_arready,
  output		io_master_arvalid,
  output	[31:0]	io_master_araddr,
  output	[3:0]	io_master_arid,
  output	[7:0]	io_master_arlen,
  output	[2:0]	io_master_arsize,
  output	[1:0]	io_master_arburst,
  output		io_master_rready,
  input		io_master_rvalid,
  input	[1:0]	io_master_rresp,
  input	[31:0]	io_master_rdata,
  input		io_master_rlast,
  input	[3:0]	io_master_rid,

  output		io_slave_awready,
  input		io_slave_awvalid,
  input	[31:0]	io_slave_awaddr,
  input	[3:0]	io_slave_awid,
  input	[7:0]	io_slave_awlen,
  input	[2:0]	io_slave_awsize,
  input	[1:0]	io_slave_awburst,
  output		io_slave_wready,
  input		io_slave_wvalid,
  input	[31:0]	io_slave_wdata,
  input	[3:0]	io_slave_wstrb,
  input		io_slave_wlast,
  input		io_slave_bready,
  output		io_slave_bvalid,
  output	[1:0]	io_slave_bresp,
  output	[3:0]	io_slave_bid,
  output		io_slave_arready,
  input		io_slave_arvalid,
  input	[31:0]	io_slave_araddr,
  input	[3:0]	io_slave_arid,
  input	[7:0]	io_slave_arlen,
  input	[2:0]	io_slave_arsize,
  input	[1:0]	io_slave_arburst,
  input		io_slave_rready,
  output		io_slave_rvalid,
  output	[1:0]	io_slave_rresp,
  output	[31:0]	io_slave_rdata,
  output		io_slave_rlast,
  output	[3:0]	io_slave_rid
);

  assign io_slave_awready = 0;
  assign io_slave_wready=0;
  assign io_slave_bvalid=0;
  assign io_slave_bresp=0;
  assign io_slave_bid=0;
  assign io_slave_arready=0;
  assign io_slave_rvalid=0;
  assign io_slave_rresp=0;
  assign io_slave_rdata=0;
  assign io_slave_rlast=0;
  assign io_slave_rid=0;

  reg idu_ra_isRAW,idu_rb_isRAW,idu_csr_isRAW;
  reg [31:0] idu_ra_bypass,idu_rb_bypass;
  wire idu_isRAW/*verilator public*/;
  assign idu_isRAW=(idu_ra_isRAW | idu_rb_isRAW | idu_csr_isRAW);
  always @(*) begin
	  if(|gpr_raddra)begin
		if((gpr_raddra==exu_in_bus_rd)&exu_in_valid&exu_in_bus_isWGPR)begin
		  if(exu_out_valid & ~exu_in_bus_isLOAD) begin
			if(exu_in_bus_isWCOMP) begin
			  idu_ra_isRAW = 0;
			  idu_ra_bypass = {31'b0,exu_out_bus_comp_result};
			end else if(exu_in_bus_isJUMP) begin
			  idu_ra_isRAW = 0;
			  idu_ra_bypass = exu_in_bus_snpc;
			end else begin
			  idu_ra_isRAW = 0;
			  idu_ra_bypass = exu_out_bus_alu_result;
			end
		  end else begin
			idu_ra_isRAW = 1;
			idu_ra_bypass = 32'b0;
		  end
		end else if((gpr_raddra==lsu_in_bus_rd)&lsu_in_valid&lsu_in_bus_isWGPR)begin
		  if(lsu_out_valid & ~lsu_in_bus_isLOAD) begin
			if(lsu_in_bus_isWCOMP) begin
			  idu_ra_isRAW = 0;
			  idu_ra_bypass = {31'b0,lsu_out_bus_comp_result};
			end else if(lsu_in_bus_isJUMP) begin
			  idu_ra_isRAW = 0;
			  idu_ra_bypass = lsu_in_bus_snpc;
			end else begin
			  idu_ra_isRAW = 0;
			  idu_ra_bypass = lsu_out_bus_alu_result;
			end
		  end else if(lsu_out_valid & lsu_in_bus_isLOAD)begin
			  idu_ra_isRAW = 0;
			  idu_ra_bypass = lsu_out_bus_lsu_result;
		  end else begin
			  idu_ra_isRAW = 1;
			  idu_ra_bypass = 32'b0;
		  end
		end else if((gpr_raddra==wbu_in_bus_rd)&wbu_in_valid&wbu_in_bus_isWGPR)begin
			if(wbu_in_valid & ~wbu_in_bus_isLOAD) begin
				if(wbu_in_bus_isWCOMP) begin
					idu_ra_isRAW = 0;
					idu_ra_bypass = {31'b0,wbu_in_bus_comp_result};
				end else if(wbu_in_bus_isJUMP) begin
					idu_ra_isRAW = 0;
					idu_ra_bypass = wbu_in_bus_snpc;
				end else begin
					idu_ra_isRAW = 0;
					idu_ra_bypass = wbu_in_bus_alu_result;
				end
			end else if(wbu_in_valid & wbu_in_bus_isLOAD)begin
				idu_ra_isRAW = 0;
				idu_ra_bypass = wbu_in_bus_lsu_result;
			end else begin
				idu_ra_isRAW = 1;
				idu_ra_bypass = 32'b0;
			end
		end else begin
		  idu_ra_isRAW = 0;
		  idu_ra_bypass = gpr_rdataa;
		end
	  end else begin
	  	idu_ra_isRAW = 0;
		idu_ra_bypass= gpr_rdataa;
	  end

	  if(|gpr_raddrb)begin
		if((gpr_raddrb==exu_in_bus_rd)&exu_in_valid&exu_in_bus_isWGPR)begin
		  if(exu_out_valid & ~exu_in_bus_isLOAD) begin
			if(exu_in_bus_isWCOMP) begin
			  idu_rb_isRAW = 0;
			  idu_rb_bypass = {31'b0,exu_out_bus_comp_result};
			end else if(exu_in_bus_isJUMP) begin
			  idu_rb_isRAW = 0;
			  idu_rb_bypass = exu_in_bus_snpc;
			end else begin
			  idu_rb_isRAW = 0;
			  idu_rb_bypass = exu_out_bus_alu_result;
			end
		  end else begin
			idu_rb_isRAW = 1;
			idu_rb_bypass = 32'b0;
		  end
		end else if((gpr_raddrb==lsu_in_bus_rd)&lsu_in_valid&lsu_in_bus_isWGPR)begin
		  if(lsu_out_valid & ~lsu_in_bus_isLOAD) begin
			if(lsu_in_bus_isWCOMP) begin
			  idu_rb_isRAW = 0;
			  idu_rb_bypass = {31'b0,lsu_out_bus_comp_result};
			end else if(lsu_in_bus_isJUMP) begin
			  idu_rb_isRAW = 0;
			  idu_rb_bypass = lsu_in_bus_snpc;
			end else begin
			  idu_rb_isRAW = 0;
			  idu_rb_bypass = lsu_out_bus_alu_result;
			end
		  end else if(lsu_out_valid & lsu_in_bus_isLOAD)begin
			  idu_rb_isRAW = 0;
			  idu_rb_bypass = lsu_out_bus_lsu_result;
		  end else begin
			  idu_rb_isRAW = 1;
			  idu_rb_bypass = 32'b0;
		  end
		end else if((gpr_raddrb==wbu_in_bus_rd)&wbu_in_valid&wbu_in_bus_isWGPR)begin
			if(wbu_in_valid & ~wbu_in_bus_isLOAD) begin
				if(wbu_in_bus_isWCOMP) begin
					idu_rb_isRAW = 0;
					idu_rb_bypass = {31'b0,wbu_in_bus_comp_result};
				end else if(wbu_in_bus_isJUMP) begin
					idu_rb_isRAW = 0;
					idu_rb_bypass = wbu_in_bus_snpc;
				end else begin
					idu_rb_isRAW = 0;
					idu_rb_bypass = wbu_in_bus_alu_result;
				end
			end else if(wbu_in_valid & wbu_in_bus_isLOAD)begin
				idu_rb_isRAW = 0;
				idu_rb_bypass = wbu_in_bus_lsu_result;
			end else begin
				idu_rb_isRAW = 1;
				idu_rb_bypass = 32'b0;
			end
		end else begin
		  idu_rb_isRAW = 0;
		  idu_rb_bypass = gpr_rdatab;
		end
	  end else begin
	  	idu_rb_isRAW = 0;
		idu_rb_bypass=gpr_rdatab;
	  end

	  if((|idu_out_bus_csrrd) & (|idu_out_bus_opCSR) )begin
		if(idu_out_bus_csrrd == `ysyx_26010011_ADD_MCYCLE) begin		//TODO 偷懒了 MCYCLE应该在提交时写回/读取
		  idu_csr_isRAW = 0;
		end else if((idu_out_bus_csrrd==exu_in_bus_csrrd)&exu_in_valid&(|exu_in_bus_opCSR))begin
		  idu_csr_isRAW = 1;
		end else if((idu_out_bus_csrrd==lsu_in_bus_csrrd)&lsu_in_valid&(|lsu_in_bus_opCSR))begin
		  idu_csr_isRAW = 1;
		end else if((idu_out_bus_csrrd==wbu_in_bus_csrrd)&wbu_in_valid&(|wbu_in_bus_opCSR))begin
		  idu_csr_isRAW = 1;
		end else begin
		  idu_csr_isRAW = 0;
		end
	  end else begin
		idu_csr_isRAW=0;
	  end
  end

  //dnpc
  wire [31:0]dnpc;
  reg dnpc_valid;
  assign dnpc=(wbu_out_bus_exception[4])?
			(
			  (wbu_out_bus_exception[3:0]==`ysyx_26010011_EXCEPTION_MRET)?(csr_mepc):(csr_mtvec)
			):(
			  (exu_in_bus_isBRANCH & ~exu_out_bus_dnpc_valid)?(exu_in_bus_snpc):(exu_out_bus_alu_result)
			);

  always @(*) begin
	if(flush_exception_valid) begin
		dnpc_valid = 1;
	end else begin
		if(exu_in_bus_isJUMP & exu_out_valid & exu_out_ready) begin
			if(idu_out_valid) begin
				dnpc_valid = (idu_in_bus_pc != exu_out_bus_alu_result);
			end else begin
				dnpc_valid = 1;
			end
		end else if(exu_in_bus_isBRANCH & exu_out_valid & exu_out_ready) begin
			if(exu_out_bus_dnpc_valid) begin
				if(idu_out_valid) begin
					dnpc_valid = (idu_in_bus_pc != exu_out_bus_alu_result);
				end else begin
					dnpc_valid = 1;
				end
			end else begin
				if(idu_out_valid) begin
					dnpc_valid = (idu_in_bus_pc != exu_in_bus_snpc);
				end else begin
					dnpc_valid = 1;
				end
			end
		end else begin
			dnpc_valid = 0;
		end
	end
  end
  //flush_valid
  wire flush_valid/*verilator public*/,ifu_flush_valid,idu_flush_valid,exu_flush_valid,lsu_flush_valid,wbu_flush_valid;
  wire flush_exception_valid/*verilator public*/ = wbu_out_bus_exception[4];

  assign flush_valid=dnpc_valid;

  assign ifu_flush_valid=flush_valid;
  assign idu_flush_valid=flush_valid | fencei_pass;
  assign exu_flush_valid=flush_valid;
  assign lsu_flush_valid=flush_exception_valid;
  assign wbu_flush_valid=flush_exception_valid;

  ysyx_26010011_IFU IFU_0(
	.clock(clock),
	.reset(reset),
	
	// input flush_icache,
	.dnpc(dnpc),
	.flush_valid(ifu_flush_valid),
	.dnpc_valid(dnpc_valid),

	.ifu_out_valid(ifu_out_valid),
	.ifu_out_ready(ifu_out_ready),
	
	.ifu_out_bus_instruction(ifu_out_bus_instruction),
	.ifu_out_bus_fetching(ifu_out_bus_fetching),
	.ifu_out_bus_pc(ifu_out_bus_pc),
	.ifu_out_bus_snpc(ifu_out_bus_snpc),
	.ifu_out_bus_exception(ifu_out_bus_exception),

	.araddr(IROM_araddr),
	.arvalid(IROM_arvalid),
	.arready(IROM_arready),
	.arid(IROM_arid),
	.arlen(IROM_arlen),
	.arsize(IROM_arsize),
	.arbureset(IROM_arbureset),
	.rdata(IROM_rdata),
	.rresp(IROM_rresp),
	.rvalid(IROM_rvalid),
	.rready(IROM_rready),
	.rlast(IROM_rlast),
	.rid(IROM_rid),

	// .r_pc(r_pc),
	// .r_tar(r_tar),
	// .r_valid(r_valid),
	// .r_type(r_type),
	.fencei_flush(fencei_pass)
	
  );/*verilator public_module*/
  wire [31:0] IROM_araddr,IROM_rdata;
  wire IROM_arvalid,IROM_arready,IROM_rvalid,IROM_rready;
  wire [1:0] IROM_rresp;
  wire [3:0] IROM_arid;
  wire [7:0] IROM_arlen;
  wire [2:0] IROM_arsize;
  wire [1:0] IROM_arbureset;
  wire IROM_rlast;
  wire [3:0] IROM_rid;

  wire ifu_out_valid,ifu_out_ready;
  wire [31:0]ifu_out_bus_instruction,ifu_out_bus_pc,ifu_out_bus_snpc,ifu_out_bus_fetching;
  wire [4:0]ifu_out_bus_exception;

  ysyx_26010011_IF_ID_pipeline IF_ID_inst(
	.clock(clock),
	.reset(reset),
	.flush_valid(idu_flush_valid),

	.ifu_out_valid(ifu_out_valid),
	.ifu_out_ready(ifu_out_ready),
	.ifu_out_bus_instruction(ifu_out_bus_instruction),
	.ifu_out_bus_pc(ifu_out_bus_pc),
	.ifu_out_bus_snpc(ifu_out_bus_snpc),
	.ifu_out_bus_exception(ifu_out_bus_exception),

	.idu_in_valid(idu_in_valid),
	.idu_in_ready(idu_in_ready),
	.idu_in_bus_instruction(idu_in_bus_instruction),
	.idu_in_bus_exception(idu_in_bus_exception),
	.idu_in_bus_pc(idu_in_bus_pc),
	.idu_in_bus_snpc(idu_in_bus_snpc)
  );/*verilator public_module*/
  //
  wire idu_in_valid,idu_in_ready;
  wire [31:0]idu_in_bus_instruction,idu_in_bus_pc,idu_in_bus_snpc;
  wire [4:0]idu_in_bus_exception;

  ysyx_26010011_IDU IDU_0(
	.clock(clock),
	.reset(reset),
	.fencei_pass(fencei_pass),
	.flush_valid(idu_flush_valid),
	.idu_isRAW(idu_isRAW),
	.idu_in_bus_instruction(idu_in_bus_instruction),
	.idu_in_bus_pc(idu_in_bus_pc),
	.idu_in_bus_exception(idu_in_bus_exception),
	.idu_in_valid(idu_in_valid),
	.idu_in_ready(idu_in_ready),

	.idu_out_valid(idu_out_valid),
	.idu_out_ready(idu_out_ready),
	.idu_out_bus_rd(idu_out_bus_rd),
	.idu_out_bus_exception(idu_out_bus_exception),
	.idu_out_bus_csrrd(idu_out_bus_csrrd),  //CSR地址
	.idu_out_bus_rs1(gpr_raddra),
	.idu_out_bus_rs2(gpr_raddrb),
	// .idu_out_bus_rcsr(idu_out_bus_rcsr),
	.idu_out_bus_imm(idu_out_bus_imm),
	.idu_out_bus_isLOAD(idu_out_bus_isLOAD),
	.idu_out_bus_isSTORE(idu_out_bus_isSTORE),
	.idu_out_bus_isWGPR(idu_out_bus_isWGPR),
	.idu_out_bus_isJUMP(idu_out_bus_isJUMP),
	.idu_out_bus_isWCOMP(idu_out_bus_isWCOMP),
	.idu_out_bus_isBRANCH(idu_out_bus_isBRANCH),
	.idu_out_bus_opCSR(idu_out_bus_opCSR),
	.idu_out_bus_isUnSigned(idu_out_bus_isUnSigned),
	.idu_out_bus_isUsePC(idu_out_bus_isUsePC),
	.idu_out_bus_alu_isUseImm(idu_out_bus_alu_isUseImm),
	.idu_out_bus_comp_isUseImm(idu_out_bus_comp_isUseImm),
	.idu_out_bus_alu_op(idu_out_bus_alu_op),
	.idu_out_bus_comp_op(idu_out_bus_comp_op),
	.idu_out_bus_perip_mask(idu_out_bus_perip_mask),

	// .w_pc(w_pc),
	// .w_tar(w_tar),
	// .w_valid(w_valid),
	// .w_type(w_type),
	// .fencei_pass(fencei_pass),
	.fencei_flush(fencei_flush)

  );/*verilator public_module*/

  wire idu_out_valid,idu_out_ready,fencei_flush;
  wire [11:0]idu_out_bus_csrrd;
  wire [31:0]idu_out_bus_imm,idu_out_bus_csr;   //idu_out_bus_imm 可作CSR地址
  wire [12:0]idu_out_bus_signals;
  wire idu_out_bus_isLOAD,idu_out_bus_isSTORE,idu_out_bus_isWGPR,idu_out_bus_isJUMP,idu_out_bus_isWCOMP,idu_out_bus_isBRANCH,idu_out_bus_isUnSigned,idu_out_bus_isUsePC,idu_out_bus_alu_isUseImm,idu_out_bus_comp_isUseImm;
  wire [ 9:0]idu_out_bus_alu_op;
  wire [ 1:0]idu_out_bus_comp_op,idu_out_bus_perip_mask;
  wire [ 2:0]idu_out_bus_opCSR;
  wire [4:0]idu_out_bus_rd,idu_out_bus_exception;


  ysyx_26010011_ID_EX_pipeline ID_EX_inst(
	.clock(clock),
	.reset(reset),
	.flush_valid(exu_flush_valid),
	.idu_out_bus_exception(idu_out_bus_exception),
	.idu_out_valid(idu_out_valid),
	.idu_out_ready(idu_out_ready),
	.idu_out_bus_rd(idu_out_bus_rd),
	.idu_out_bus_csrrd(idu_out_bus_csrrd),  //CSR地址
	.idu_out_bus_rs1(gpr_raddra),
	.idu_out_bus_rs2(gpr_raddrb),
	.idu_out_bus_rs1_val(
	  ((|idu_out_bus_opCSR)?
		(
		  ((idu_out_bus_opCSR[2])?
			(
			  ((idu_out_bus_opCSR[1]&~idu_out_bus_opCSR[0])?
				(~{{27{1'b0}},gpr_raddra})
				:{{27{1'b0}},gpr_raddra}
			  )
			)
			:(
			  (idu_out_bus_opCSR[1]&~idu_out_bus_opCSR[0])?
			  (~idu_ra_bypass)
			  :idu_ra_bypass
			)
		  )
		)
		:idu_ra_bypass
	  )
	), //[~]zimm or rs1_val
	.idu_out_bus_rs2_val(idu_rb_bypass),
	.idu_out_bus_imm((|idu_out_bus_opCSR)?csr_rdata:idu_out_bus_imm),     //CSR值
	.idu_out_bus_instruction(idu_in_bus_instruction),
	.idu_out_bus_isLOAD(idu_out_bus_isLOAD),
	.idu_out_bus_isSTORE(idu_out_bus_isSTORE),
	.idu_out_bus_isWGPR(idu_out_bus_isWGPR),
	.idu_out_bus_isJUMP(idu_out_bus_isJUMP),
	.idu_out_bus_isWCOMP(idu_out_bus_isWCOMP),
	.idu_out_bus_isBRANCH(idu_out_bus_isBRANCH),
	.idu_out_bus_opCSR(idu_out_bus_opCSR),
	.idu_out_bus_isUnSigned(idu_out_bus_isUnSigned),
	.idu_out_bus_isUsePC(idu_out_bus_isUsePC),
	.idu_out_bus_alu_isUseImm(idu_out_bus_alu_isUseImm),
	.idu_out_bus_comp_isUseImm(idu_out_bus_comp_isUseImm),
	.idu_out_bus_alu_op(idu_out_bus_alu_op),
	.idu_out_bus_comp_op(idu_out_bus_comp_op),
	.idu_out_bus_perip_mask(idu_out_bus_perip_mask),
	.idu_out_bus_pc(idu_in_bus_pc),
	.idu_out_bus_snpc(idu_in_bus_snpc),

	.exu_in_valid(exu_in_valid),
	.exu_in_bus_exception(exu_in_bus_exception),
	.exu_in_ready(exu_in_ready),
	.exu_in_bus_rd(exu_in_bus_rd),
	.exu_in_bus_csrrd(exu_in_bus_csrrd),
	.exu_in_bus_rs1(exu_in_bus_rs1),
	.exu_in_bus_rs2(exu_in_bus_rs2),
	.exu_in_bus_rs1_val(exu_in_bus_rs1_val),
	.exu_in_bus_rs2_val(exu_in_bus_rs2_val),
	// .exu_in_bus_rcsr(),
	.exu_in_bus_imm(exu_in_bus_imm),
	.exu_in_bus_instruction(exu_in_bus_instruction),
	.exu_in_bus_isLOAD(exu_in_bus_isLOAD),
	.exu_in_bus_isSTORE(exu_in_bus_isSTORE),
	.exu_in_bus_isWGPR(exu_in_bus_isWGPR),
	.exu_in_bus_isJUMP(exu_in_bus_isJUMP),
	.exu_in_bus_isWCOMP(exu_in_bus_isWCOMP),
	.exu_in_bus_isBRANCH(exu_in_bus_isBRANCH),
	.exu_in_bus_opCSR(exu_in_bus_opCSR),
	.exu_in_bus_isUnSigned(exu_in_bus_isUnSigned),
	.exu_in_bus_isUsePC(exu_in_bus_isUsePC),
	.exu_in_bus_alu_isUseImm(exu_in_bus_alu_isUseImm),
	.exu_in_bus_comp_isUseImm(exu_in_bus_comp_isUseImm),
	.exu_in_bus_alu_op(exu_in_bus_alu_op),
	.exu_in_bus_comp_op(exu_in_bus_comp_op),
	.exu_in_bus_perip_mask(exu_in_bus_perip_mask),
	.exu_in_bus_pc(exu_in_bus_pc),
	.exu_in_bus_snpc(exu_in_bus_snpc)
  );/*verilator public_module*/

  wire exu_in_valid,exu_in_ready,exu_in_bus_isLOAD,exu_in_bus_isSTORE,exu_in_bus_isWGPR,exu_in_bus_isJUMP,exu_in_bus_isWCOMP,exu_in_bus_isBRANCH,exu_in_bus_isUnSigned,exu_in_bus_isUsePC,exu_in_bus_alu_isUseImm,exu_in_bus_comp_isUseImm;
  wire [4:0]exu_in_bus_rd,exu_in_bus_rs1,exu_in_bus_rs2;
  wire [4:0]exu_in_bus_exception;
  wire [31:0]exu_in_bus_rs1_val,exu_in_bus_rs2_val,exu_in_bus_imm,exu_in_bus_instruction,exu_in_bus_pc,exu_in_bus_snpc;
  wire [9:0]exu_in_bus_alu_op;
  wire [1:0]exu_in_bus_comp_op,exu_in_bus_perip_mask;
  wire [2:0]exu_in_bus_opCSR;
  wire [12:0]exu_in_bus_signals;
  wire [11:0]exu_in_bus_csrrd;

  ysyx_26010011_EXU EXU_0(
	.clock(clock),
	.reset(reset),
	.flush_valid(exu_flush_valid),

	.exu_in_valid(exu_in_valid),
	.exu_in_ready(exu_in_ready),
	.exu_in_bus_exception(exu_in_bus_exception),
	.exu_in_bus_a(exu_in_bus_rs1_val),
	.exu_in_bus_b(exu_in_bus_rs2_val),
	.exu_in_bus_pc(exu_in_bus_pc),
	.exu_in_bus_imm(exu_in_bus_imm),
	.exu_in_bus_alu_op(exu_in_bus_alu_op),
	.exu_in_bus_comp_op(exu_in_bus_comp_op),
	.exu_in_bus_isJUMP(exu_in_bus_isJUMP),
	.exu_in_bus_isBRANCH(exu_in_bus_isBRANCH),
	.exu_in_bus_opCSR(exu_in_bus_opCSR),
	.exu_in_bus_isUnSigned(exu_in_bus_isUnSigned),
	.exu_in_bus_isUsePC(exu_in_bus_isUsePC),//PC+imm
	.exu_in_bus_alu_isUseImm(exu_in_bus_alu_isUseImm),//imm
	.exu_in_bus_comp_isUseImm(exu_in_bus_comp_isUseImm),//imm

	.exu_out_valid(exu_out_valid),
	.exu_out_bus_exception(exu_out_bus_exception),
	.exu_out_ready(exu_out_ready),
	.exu_out_bus_alu_result(exu_out_bus_alu_result),
	.exu_out_bus_csr_result(exu_out_bus_csr_result),
	.exu_out_bus_comp_result(exu_out_bus_comp_result),       //暂存CSR目的地址
	.exu_out_bus_dnpc_valid(exu_out_bus_dnpc_valid)
);/*verilator public_module*/
  
  wire exu_out_valid,exu_out_ready,exu_out_bus_comp_result,exu_out_bus_dnpc_valid;
  wire [4:0]exu_out_bus_exception;
  wire [31:0]exu_out_bus_alu_result,exu_out_bus_csr_result;

  ysyx_26010011_EX_LS_pipeline EX_LS_inst(
	.clock(clock),
	.reset(reset),
	.flush_valid(lsu_flush_valid),

	.exu_out_valid(exu_out_valid),
	.exu_out_ready(exu_out_ready),
	.exu_out_bus_alu_result(exu_out_bus_alu_result),
	.exu_out_bus_csr_result(exu_out_bus_csr_result),
	.exu_out_bus_comp_result(exu_out_bus_comp_result),
	.exu_out_bus_lsu_val(exu_in_bus_rs2_val),
	.exu_out_bus_rd(exu_in_bus_rd),
	.exu_out_bus_exception(exu_out_bus_exception),
	.exu_out_bus_csrrd(exu_in_bus_csrrd),
	.exu_out_bus_instruction(exu_in_bus_instruction),
	.exu_out_bus_isLOAD(exu_in_bus_isLOAD),
	.exu_out_bus_isSTORE(exu_in_bus_isSTORE),
	.exu_out_bus_isWGPR(exu_in_bus_isWGPR),
	.exu_out_bus_isJUMP(exu_in_bus_isJUMP),
	.exu_out_bus_isWCOMP(exu_in_bus_isWCOMP),
	.exu_out_bus_isBRANCH(exu_in_bus_isBRANCH),
	.exu_out_bus_opCSR(exu_in_bus_opCSR),
	.exu_out_bus_isUnSigned(exu_in_bus_isUnSigned),
	.exu_out_bus_perip_mask(exu_in_bus_perip_mask),
	.exu_out_bus_pc(exu_in_bus_pc),
	.exu_out_bus_snpc(exu_in_bus_snpc),

	.lsu_in_valid(lsu_in_valid),
	.lsu_in_bus_exception(lsu_in_bus_exception),
	.lsu_in_ready(lsu_in_ready),
	.lsu_in_bus_alu_result(lsu_in_bus_alu_result),
	.lsu_in_bus_csr_result(lsu_in_bus_csr_result),
	.lsu_in_bus_comp_result(lsu_in_bus_comp_result),
	.lsu_in_bus_lsu_val(lsu_in_bus_wdata),
	.lsu_in_bus_rd(lsu_in_bus_rd),
	.lsu_in_bus_csrrd(lsu_in_bus_csrrd),
	.lsu_in_bus_instruction(lsu_in_bus_instruction),
	.lsu_in_bus_isLOAD(lsu_in_bus_isLOAD),
	.lsu_in_bus_isSTORE(lsu_in_bus_isSTORE),
	.lsu_in_bus_isWGPR(lsu_in_bus_isWGPR),
	.lsu_in_bus_isJUMP(lsu_in_bus_isJUMP),
	.lsu_in_bus_isWCOMP(lsu_in_bus_isWCOMP),
	.lsu_in_bus_isBRANCH(lsu_in_bus_isBRANCH),
	.lsu_in_bus_opCSR(lsu_in_bus_opCSR),
	.lsu_in_bus_isUnSigned(lsu_in_bus_isUnSigned),
	.lsu_in_bus_perip_mask(lsu_in_bus_perip_mask),
	.lsu_in_bus_pc(lsu_in_bus_pc),
	.lsu_in_bus_snpc(lsu_in_bus_snpc)
  );/*verilator public_module*/
  wire lsu_in_valid,lsu_in_ready,lsu_in_bus_comp_result,lsu_in_bus_isLOAD,lsu_in_bus_isSTORE,lsu_in_bus_isWGPR,lsu_in_bus_isJUMP,lsu_in_bus_isWCOMP,lsu_in_bus_isBRANCH,lsu_in_bus_isUnSigned;
  wire [31:0]lsu_in_bus_alu_result,lsu_in_bus_wdata,lsu_in_bus_instruction,lsu_in_bus_pc,lsu_in_bus_snpc,lsu_in_bus_csr_result;
  wire [1:0]lsu_in_bus_perip_mask;
  wire [4:0]lsu_in_bus_rd;
  wire [4:0]lsu_in_bus_exception;
  wire [11:0]lsu_in_bus_csrrd;
  wire [2:0]lsu_in_bus_opCSR;

  ysyx_26010011_LSU LSU_0(
	.clock(clock),
	.reset(reset),
	.flush_valid(lsu_flush_valid),
	.lsu_in_valid(lsu_in_valid),
	.lsu_in_ready(lsu_in_ready),
	.lsu_in_bus_exception(lsu_in_bus_exception),
	.lsu_in_bus_addr(lsu_in_bus_alu_result),
	.lsu_in_bus_wdata(lsu_in_bus_wdata),
	.lsu_in_bus_perip_mask(lsu_in_bus_perip_mask),
	.lsu_in_bus_isUnSigned(lsu_in_bus_isUnSigned),
	.lsu_in_bus_isLOAD(lsu_in_bus_isLOAD),
	.lsu_in_bus_isSTORE(lsu_in_bus_isSTORE),

	.lsu_out_valid(lsu_out_valid),
	.lsu_out_bus_exception(lsu_out_bus_exception),
	.lsu_out_ready(lsu_out_ready),
	.lsu_out_bus_rdata(lsu_out_bus_lsu_result),

	.awaddr(DRAM_awaddr),
	.awvalid(DRAM_awvalid),
	.awready(DRAM_awready),
	.awid(DRAM_awid),
	.awlen(DRAM_awlen),
	.awsize(DRAM_awsize),
	.awburst(DRAM_awburst),
	.wdata(DRAM_wdata),
	.wstrb(DRAM_wstrb),
	.wvalid(DRAM_wvalid),
	.wready(DRAM_wready),
	.wlast(DRAM_wlast),
	.bresp(DRAM_bresp),
	.bvalid(DRAM_bvalid),
	.bready(DRAM_bready),
	.bid(DRAM_bid),

	.araddr(DRAM_araddr),
	.arvalid(DRAM_arvalid),
	.arready(DRAM_arready),
	.arid(DRAM_arid),
	.arlen(DRAM_arlen),
	.arsize(DRAM_arsize),
	.arbureset(DRAM_arbureset),
	.rdata(DRAM_rdata),
	.rresp(DRAM_rresp),
	.rvalid(DRAM_rvalid),
	.rready(DRAM_rready),
	.rlast(DRAM_rlast),
	.rid(DRAM_rid)
  );/*verilator public_module*/
  wire [31:0] DRAM_awaddr,DRAM_wdata,DRAM_araddr,DRAM_rdata;
  wire [3:0] DRAM_wstrb;
  wire DRAM_awvalid,DRAM_wvalid,DRAM_arvalid,DRAM_rvalid,DRAM_bvalid;
  wire DRAM_awready,DRAM_wready,DRAM_arready,DRAM_rready,DRAM_bready;
  wire [1:0] DRAM_bresp,DRAM_rresp;
  wire [3:0] DRAM_awid;  wire [7:0] DRAM_awlen;  wire [2:0] DRAM_awsize;  wire [1:0] DRAM_awburst;
  wire DRAM_wlast;
  wire [3:0] DRAM_bid;
  wire [3:0] DRAM_arid;  wire [7:0] DRAM_arlen;  wire [2:0] DRAM_arsize;  wire [1:0] DRAM_arbureset;
  wire DRAM_rlast;
  wire [3:0] DRAM_rid;

  wire lsu_out_valid,lsu_out_ready,lsu_out_bus_comp_result;
  wire [4:0]lsu_out_bus_exception;
  wire [31:0]lsu_out_bus_alu_result,lsu_out_bus_lsu_result;
  assign lsu_out_bus_alu_result=lsu_in_bus_alu_result;
  assign lsu_out_bus_comp_result=lsu_in_bus_comp_result;
  ysyx_26010011_LS_WB_pipeline LS_WB_inst(
	.clock(clock),
	.reset(reset),
	.flush_valid(wbu_flush_valid),

	.lsu_out_valid(lsu_out_valid),
	.lsu_out_ready(lsu_out_ready),
	.lsu_out_bus_alu_result(lsu_out_bus_alu_result),
	.lsu_out_bus_csr_result(lsu_in_bus_csr_result),
	.lsu_out_bus_comp_result(lsu_in_bus_comp_result),
	.lsu_out_bus_lsu_result(lsu_out_bus_lsu_result),
	.lsu_out_bus_rd(lsu_in_bus_rd),
	.lsu_out_bus_exception(lsu_out_bus_exception),
	.lsu_out_bus_csrrd(lsu_in_bus_csrrd),
	.lsu_out_bus_instruction(lsu_in_bus_instruction),
	.lsu_out_bus_isLOAD(lsu_in_bus_isLOAD),
	.lsu_out_bus_isSTORE(lsu_in_bus_isSTORE),
	.lsu_out_bus_isWGPR(lsu_in_bus_isWGPR),
	.lsu_out_bus_isJUMP(lsu_in_bus_isJUMP),
	.lsu_out_bus_isWCOMP(lsu_in_bus_isWCOMP),
	.lsu_out_bus_isBRANCH(lsu_in_bus_isBRANCH),
	.lsu_out_bus_opCSR(lsu_in_bus_opCSR),
	.lsu_out_bus_pc(lsu_in_bus_pc),
	.lsu_out_bus_snpc(lsu_in_bus_snpc),


	.wbu_in_valid(wbu_in_valid),
	.wbu_in_ready(wbu_in_ready),
	.wbu_in_bus_lsu_result(wbu_in_bus_lsu_result),
	.wbu_in_bus_alu_result(wbu_in_bus_alu_result),
	.wbu_in_bus_csr_result(wbu_in_bus_csr_result),
	.wbu_in_bus_comp_result(wbu_in_bus_comp_result),
	.wbu_in_bus_rd(wbu_in_bus_rd),
	.wbu_in_bus_exception(wbu_in_bus_exception),
	.wbu_in_bus_csrrd(wbu_in_bus_csrrd),
	.wbu_in_bus_instruction(wbu_in_bus_instruction),
	.wbu_in_bus_isLOAD(wbu_in_bus_isLOAD),
	.wbu_in_bus_isSTORE(wbu_in_bus_isSTORE),
	.wbu_in_bus_isWGPR(wbu_in_bus_isWGPR),
	.wbu_in_bus_isJUMP(wbu_in_bus_isJUMP),
	.wbu_in_bus_isWCOMP(wbu_in_bus_isWCOMP),
	.wbu_in_bus_isBRANCH(wbu_in_bus_isBRANCH),
	.wbu_in_bus_opCSR(wbu_in_bus_opCSR),
	.wbu_in_bus_pc(wbu_in_bus_pc),
	.wbu_in_bus_snpc(wbu_in_bus_snpc)
  );/*verilator public_module*/

  wire wbu_in_valid,wbu_in_ready,wbu_in_bus_isLOAD,wbu_in_bus_isSTORE,wbu_in_bus_isWGPR,wbu_in_bus_isJUMP,wbu_in_bus_isWCOMP,wbu_in_bus_isBRANCH;
  wire [31:0]wbu_in_bus_pc,wbu_in_bus_snpc,wbu_in_bus_instruction;
  wire [31:0]wbu_in_bus_lsu_result,wbu_in_bus_alu_result,wbu_in_bus_csr_result;
  wire wbu_in_bus_comp_result;
  wire [11:0]wbu_in_bus_csrrd;
  wire [2:0]wbu_in_bus_opCSR;
  wire [4:0]wbu_in_bus_rd;
  wire [4:0]wbu_in_bus_exception;
  wire fencei_pass;
  ysyx_26010011_WBU WBU_0(
	.clock(clock),
	.reset(reset),
	.flush_valid(wbu_flush_valid),

	.wbu_in_valid(wbu_in_valid),
	.wbu_in_ready(wbu_in_ready),
	.wbu_in_bus_pc(wbu_in_bus_pc),
	.wbu_in_bus_instruction(wbu_in_bus_instruction),
	.wbu_in_bus_lsu_result(wbu_in_bus_lsu_result),
	.wbu_in_bus_alu_result(wbu_in_bus_alu_result),
	.wbu_in_bus_csr_result(wbu_in_bus_csr_result),
	.wbu_in_bus_comp_result(wbu_in_bus_comp_result),
	.wbu_in_bus_snpc(wbu_in_bus_snpc),
	.wbu_in_bus_rd(wbu_in_bus_rd),
	.wbu_in_bus_csrrd(wbu_in_bus_csrrd),
	.wbu_in_bus_isLOAD(wbu_in_bus_isLOAD),
	.wbu_in_bus_isSTORE(wbu_in_bus_isSTORE),
	.wbu_in_bus_isWGPR(wbu_in_bus_isWGPR),
	.wbu_in_bus_isJUMP(wbu_in_bus_isJUMP),
	.wbu_in_bus_isWCOMP(wbu_in_bus_isWCOMP),
	.wbu_in_bus_opCSR(wbu_in_bus_opCSR),
	.wbu_in_bus_exception(wbu_in_bus_exception),
	.wbu_out_bus_exception(wbu_out_bus_exception),
	.gpr_we(gpr_we),
	.gpr_wdata(gpr_wdata),
	.gpr_address(gpr_waddr),
	.csr_we(csr_we),
	.csr_wdata(csr_wdata),
	.csr_address(csr_waddr),
	.fencei_pass(fencei_pass)
  );/*verilator public_module*/
  wire [4:0]wbu_out_bus_exception;
  //WBU FINAL
  reg tb_isFINAL/*verilator public*/,tb_dnpc_valid/*verilator public*/,tb_isMEM/*verilator public*/;
  reg [31:0]tb_FINAL_pc/*verilator public*/,tb_FINAL_npc/*verilator public*/,tb_alu_result/*verilator public*/,tb_FINAL_inst/*verilator public*/;
  always @(posedge clock) begin
	if(reset) begin
	  tb_isFINAL<=0;
	  tb_FINAL_pc<=0;
	  tb_FINAL_npc<=0;
	  tb_dnpc_valid<=0;
	  tb_isMEM<=0;
	  tb_FINAL_inst<=0;
	end else if(wbu_in_valid) begin
	  tb_isFINAL<=1;
	  tb_FINAL_pc<=wbu_in_bus_pc;
	  tb_FINAL_npc<=(wbu_in_bus_isJUMP | (wbu_in_bus_isBRANCH&wbu_in_bus_comp_result)) ? wbu_in_bus_alu_result : ((wbu_in_bus_exception[4])?csr_mtvec:wbu_in_bus_snpc);//TODO MTVEC
	  tb_FINAL_npc<=(wbu_in_bus_exception[4])?((wbu_out_bus_exception[3:0]==`ysyx_26010011_EXCEPTION_MRET)?csr_mepc:csr_mtvec):((wbu_in_bus_isJUMP | (wbu_in_bus_isBRANCH&wbu_in_bus_comp_result)) ? wbu_in_bus_alu_result : wbu_in_bus_snpc);//TODO MTVEC
	  tb_dnpc_valid<=(wbu_in_bus_isJUMP | (wbu_in_bus_isBRANCH&wbu_in_bus_comp_result) | (wbu_in_bus_exception[4]));
	  tb_isMEM<=(wbu_in_bus_isLOAD | wbu_in_bus_isSTORE)&wbu_in_valid;
	  tb_FINAL_inst<=wbu_in_bus_instruction;
	end else begin
	  tb_isFINAL<=0;
	  tb_FINAL_pc<=tb_FINAL_pc;
	  tb_FINAL_npc<=tb_FINAL_npc;
	  tb_dnpc_valid<=0;
	  tb_isMEM<=0;
	  tb_FINAL_inst<=tb_FINAL_inst;
	end

  end
  

  ysyx_26010011_AXI4Arbiter RAM_AXI4Arbiter(
	.clock(clock),
	.reset(reset),

	// //MASTER1 AW
	// .M1_awaddr(0),            .M1_awvalid(0),             .M1_awready(),
	// .M1_awid(0),              .M1_awlen(0),               .M1_awsize(0),             .M1_awburst(0),
	// //MASTER1 W
	// .M1_wdata(0),             .M1_wstrb(0),               .M1_wvalid(0),              .M1_wready(),
	// .M1_wlast(0),
	// //MASTER1 B
	// .M1_bresp(),              .M1_bvalid(),               .M1_bready(0),
	// .M1_bid(),
	//MASTER1 AR
	.M1_araddr(IROM_araddr),  .M1_arvalid(IROM_arvalid),  .M1_arready(IROM_arready),
	.M1_arid(IROM_arid),      .M1_arlen(IROM_arlen),      .M1_arsize(IROM_arsize),    .M1_arbureset(IROM_arbureset),
	//MASTER1 R
	.M1_rdata(IROM_rdata),    .M1_rresp(IROM_rresp),      .M1_rvalid(IROM_rvalid),    .M1_rready(IROM_rready),
	.M1_rlast(IROM_rlast),    .M1_rid(IROM_rid),

	//MASTER2 AW
	.M2_awaddr(DRAM_awaddr),  .M2_awvalid(DRAM_awvalid),  .M2_awready(DRAM_awready),
	.M2_awid(DRAM_awid),      .M2_awlen(DRAM_awlen),      .M2_awsize(DRAM_awsize),    .M2_awburst(DRAM_awburst),
	//MASTER2 W
	.M2_wdata(DRAM_wdata),    .M2_wstrb(DRAM_wstrb),      .M2_wvalid(DRAM_wvalid),    .M2_wready(DRAM_wready),
	.M2_wlast(DRAM_wlast),
	//MASTER2 B
	.M2_bresp(DRAM_bresp),    .M2_bvalid(DRAM_bvalid),    .M2_bready(DRAM_bready),
	.M2_bid(DRAM_bid),
	//MASTER2 AR
	.M2_araddr(DRAM_araddr),  .M2_arvalid(DRAM_arvalid),  .M2_arready(DRAM_arready),
	.M2_arid(DRAM_arid),      .M2_arlen(DRAM_arlen),      .M2_arsize(DRAM_arsize),    .M2_arbureset(DRAM_arbureset),
	//MASTER2 R
	.M2_rdata(DRAM_rdata),    .M2_rresp(DRAM_rresp),      .M2_rvalid(DRAM_rvalid),    .M2_rready(DRAM_rready),
	.M2_rlast(DRAM_rlast),    .M2_rid(DRAM_rid),

	//SLAVE AW
	.S_awaddr(S_awaddr),  .S_awvalid(S_awvalid),  .S_awready(S_awready),
	.S_awid(S_awid),      .S_awlen(S_awlen),      .S_awsize(S_awsize),    .S_awburst(S_awburst),
	//SLAVE W
	.S_wdata(S_wdata),    .S_wstrb(S_wstrb),      .S_wvalid(S_wvalid),    .S_wready(S_wready),
	.S_wlast(S_wlast),
	//SLAVE B
	.S_bresp(S_bresp),    .S_bvalid(S_bvalid),    .S_bready(S_bready),
	.S_bid(S_bid),
	//SLAVE AR
	.S_araddr(S_araddr),  .S_arvalid(S_arvalid),  .S_arready(S_arready),
	.S_arid(S_arid),      .S_arlen(S_arlen),      .S_arsize(S_arsize),    .S_arburst(S_arburst),
	//SLAVE R
	.S_rdata(S_rdata),    .S_rresp(S_rresp),      .S_rvalid(S_rvalid),    .S_rready(S_rready),
	.S_rlast(S_rlast),    .S_rid(S_rid)
  );
	wire [31:0] S_araddr,S_rdata,S_awaddr,S_wdata;
	wire S_arvalid,S_rvalid,S_awvalid,S_wvalid,S_bvalid,S_rlast,S_wlast;
	wire S_arready,S_rready,S_awready,S_wready,S_bready;
	wire [1:0] S_rresp,S_bresp;
	wire [3:0] S_wstrb;
	wire [3:0] S_arid,S_awid,S_bid,S_bid,S_rid;
	wire [1:0] S_arburst,S_awburst;
  	wire [2:0] S_arsize,S_awsize;
  	wire [7:0] S_arlen,S_awlen;
	wire [31:0] CLINT_araddr,CLINT_rdata,CLINT_awaddr,CLINT_wdata;
	wire CLINT_arvalid,CLINT_rvalid,CLINT_awvalid,CLINT_wvalid,CLINT_bvalid,CLINT_rlast,CLINT_wlast;
	wire CLINT_arready,CLINT_rready,CLINT_awready,CLINT_wready,CLINT_bready;
	wire [1:0] CLINT_rresp,CLINT_bresp;
	wire [3:0] CLINT_wstrb;
	wire CLINT_rlast;
	ysyx_26010011_bridge u_bridge(
		.clock(clock),
		.reset(reset),
		
		.S_araddr(S_araddr),  .S_arvalid(S_arvalid), .S_arready(S_arready), .S_arid(S_arid), .S_arlen(S_arlen), .S_arsize(S_arsize), .S_arburst(S_arburst),
		.S_rdata(S_rdata),   .S_rresp(S_rresp),   .S_rvalid(S_rvalid),  .S_rready(S_rready), .S_rlast(S_rlast), .S_rid(S_rid),
		.S_awaddr(S_awaddr),  .S_awvalid(S_awvalid), .S_awready(S_awready), .S_awid(S_awid), .S_awlen(S_awlen), .S_awsize(S_awsize), .S_awburst(S_awburst),
		.S_wdata(S_wdata),   .S_wstrb(S_wstrb),   .S_wvalid(S_wvalid),  .S_wready(S_wready), .S_wlast(S_wlast),
		.S_bresp(S_bresp),   .S_bvalid(S_bvalid),  .S_bready(S_bready), .S_bid(S_bid),

		///////////////////////////////////////////////////////
		//MEM
		.MEM_araddr(io_master_araddr),   .MEM_arvalid(io_master_arvalid),  .MEM_arready(io_master_arready), .MEM_arid(io_master_arid), .MEM_arlen(io_master_arlen), .MEM_arsize(io_master_arsize), .MEM_arbureset(io_master_arbureset),
		.MEM_rdata(io_master_rdata),    .MEM_rresp(io_master_rresp),    .MEM_rvalid(io_master_rvalid),   .MEM_rready(io_master_rready), .MEM_rlast(io_master_rlast), .MEM_rid(io_master_rid),
		.MEM_awaddr(io_master_awaddr),   .MEM_awvalid(io_master_awvalid),  .MEM_awready(io_master_awready), .MEM_awid(io_master_awid), .MEM_awlen(io_master_awlen), .MEM_awsize(io_master_awsize), .MEM_awburst(io_master_awburst),
		.MEM_wdata(io_master_wdata),    .MEM_wstrb(io_master_wstrb),    .MEM_wvalid(io_master_wvalid),   .MEM_wready(io_master_wready), .MEM_wlast(io_master_wlast),
		.MEM_bresp(io_master_bresp),    .MEM_bvalid(io_master_bvalid),   .MEM_bready(io_master_bready), .MEM_bid(io_master_bid),

		//CLINT
		.CLINT_araddr(CLINT_araddr),   .CLINT_arvalid(CLINT_arvalid),  .CLINT_arready(CLINT_arready), .CLINT_arid(), .CLINT_arlen(), .CLINT_arsize(CLINT_arsize), .CLINT_arbureset(),
		.CLINT_rdata(CLINT_rdata),    .CLINT_rresp(CLINT_rresp),    .CLINT_rvalid(CLINT_rvalid),   .CLINT_rready(CLINT_rready), .CLINT_rlast(CLINT_rlast), .CLINT_rid(),
		.CLINT_awaddr(CLINT_awaddr),   .CLINT_awvalid(CLINT_awvalid),  .CLINT_awready(CLINT_awready), .CLINT_awid(), .CLINT_awlen(), .CLINT_awsize(CLINT_awsize), .CLINT_awburst(),
		.CLINT_wdata(CLINT_wdata),    .CLINT_wstrb(CLINT_wstrb),    .CLINT_wvalid(CLINT_wvalid),   .CLINT_wready(CLINT_wready), .CLINT_wlast(),
		.CLINT_bresp(CLINT_bresp),    .CLINT_bvalid(CLINT_bvalid),   .CLINT_bready(CLINT_bready), .CLINT_bid()
	);	

	ysyx_26010011_CLINT u_clint(
		.clock(clock),
		.reset(reset),

		//AR
		.araddr(CLINT_araddr),
		.arvalid(CLINT_arvalid),
		.arready(CLINT_arready),

		//R
		.rdata(CLINT_rdata),
		.rresp(CLINT_rresp),
		.rvalid(CLINT_rvalid),
		.rlast(CLINT_rlast),
		.rready(CLINT_rready),

		//AW
		.awaddr(CLINT_awaddr),
		.awvalid(CLINT_awvalid),
		.awready(CLINT_awready),

		//W
		.wdata(CLINT_wdata),
		.wstrb(CLINT_wstrb),
		.wvalid(CLINT_wvalid),
		.wready(CLINT_wready),

		//B
		.bresp(CLINT_bresp),
		.bvalid(CLINT_bvalid),
		.bready(CLINT_bready)
	);


  wire [4:0] gpr_raddra,gpr_raddrb,gpr_waddr;
  wire [31:0]gpr_rdataa,gpr_rdatab,gpr_wdata,csr_mtvec,csr_mepc,csr_pc;
  wire gpr_we;
  ysyx_26010011_GPRs GPR_0(
	.clock(clock),
	.reset(reset),
	.gpr_in_addra(gpr_raddra),
	.gpr_in_addrb(gpr_raddrb),
	.gpr_out_a(gpr_rdataa),
	.gpr_out_b(gpr_rdatab),
	.gpr_in_addw(gpr_waddr),
	.gpr_in_data(gpr_wdata),
	.gpr_in_wen(gpr_we)
  );/*verilator public_module*/

  wire [11:0]csr_waddr;
  wire [31:0]csr_wdata,csr_rdata;
  wire csr_we;
  assign csr_pc = wbu_in_bus_pc;
  ysyx_26010011_CSRs CSR_0(
	.clock(clock),
	.reset(reset),
	.csr_in_addr(idu_out_bus_csrrd),
	.csr_out_data(csr_rdata),

	.csr_in_data(csr_wdata),
	.csr_in_wen(csr_we),
	.csr_in_addw(csr_waddr),
	
	.csr_pc(csr_pc),
	.csr_mtvec(csr_mtvec),
	.csr_mepc(csr_mepc),
	.csr_in_bus_exception(wbu_out_bus_exception)
  );/*verilator public_module*/

//   ysyx_26010011_BCache #(.CACHE_SIZE(16)) bcache_u0(
// 	.clock(clock),
// 	.reset(reset),
// 	.r_pc(r_pc),
// 	.r_tar(r_tar),
// 	.r_valid(r_valid),
// 	.r_type(r_type),
// 	.w_pc(w_pc),
// 	.w_tar(w_tar),
// 	.w_valid(w_valid),
// 	.w_type(w_type)
//   );

//   wire [31:0] r_pc,r_tar,w_pc,w_tar;
//   wire r_valid,w_valid,w_type,r_type;
endmodule

// module ysyx_26010011_BCache #(
// 	parameter CACHE_SIZE = 16
// )(
// 	input	clock,
// 	input	reset,

// 	input  [31:0] r_pc,
// 	output [31:0] r_tar,
// 	output        r_valid,
// 	output        r_type,

// 	input  [31:0] w_pc,
// 	input  [31:0] w_tar,
// 	input         w_type,
// 	input         w_valid
// );
// 	parameter BLOCK_W = 32;
// 	parameter INDEX_W = $clog2(CACHE_SIZE);
// 	parameter OFFSET_W = 2;
// 	parameter TAG_W   = 32 - OFFSET_W - INDEX_W;

// 	wire [INDEX_W-1:0] R_index = {r_pc[INDEX_W-1+OFFSET_W:0+OFFSET_W]} ;
// 	wire [TAG_W-1:0]   R_tag   = {r_pc[INDEX_W + TAG_W - 1+OFFSET_W: INDEX_W+OFFSET_W]};

// 	wire [INDEX_W-1:0] W_index = {w_pc[INDEX_W-1+OFFSET_W:0+OFFSET_W]} ;
// 	wire [TAG_W-1:0]   W_tag   = {w_pc[INDEX_W + TAG_W - 1+OFFSET_W: INDEX_W+OFFSET_W]};
	
// 	// assign debug_is_hit = is_hit;

// 	reg [BLOCK_W-1:0] cache_mem   [0:CACHE_SIZE-1];
// 	reg               cache_valid [0:CACHE_SIZE-1];
// 	reg [TAG_W-1:0]   cache_tag   [0:CACHE_SIZE-1];
// 	reg               cache_type  [0:CACHE_SIZE-1];
// 	always @(posedge clock) begin
// 		if (reset) begin
// 			integer i;
// 			for (i = 0; i < CACHE_SIZE; i = i + 1) begin
// 				cache_valid[i] <= 1'b0;
// 			end
// 		end else begin
// 			if(w_valid) begin
// 				cache_valid[W_index] <= 1;
// 				cache_type[W_index] <= w_type;
// 				cache_tag[W_index]   <= W_tag;
// 				cache_mem[W_index]   <= w_tar;
// 			end
// 		end
// 	end

// 	assign r_valid = (cache_tag[R_index] == R_tag) & (cache_valid[R_index]);
// 	assign r_tar = cache_mem[R_index];
// 	assign r_type = cache_type[R_index];

// endmodule


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
    input      [31:0] M2_awaddr,  input             M2_awvalid, output            M2_awready,
    input      [3:0]  M2_awid,    input      [7:0]  M2_awlen,   input      [2:0]  M2_awsize,  input      [1:0]  M2_awburst,
    //MASTER2 W
    input      [31:0] M2_wdata,   input      [3:0]  M2_wstrb,   input             M2_wvalid,  output            M2_wready,
    input             M2_wlast,
    //MASTER2 B
    output     [1:0]  M2_bresp,   output            M2_bvalid,  input             M2_bready,
    output     [3:0]  M2_bid,
    //MASTER2 AR
    input      [31:0] M2_araddr,  input             M2_arvalid, output reg        M2_arready,
    input      [3:0]  M2_arid,    input      [7:0]  M2_arlen,   input      [2:0]  M2_arsize,  input      [1:0]  M2_arbureset,
    //MASTER2 R
    output reg [31:0] M2_rdata,   output reg [1:0]  M2_rresp,   output reg        M2_rvalid,  input             M2_rready,
    output reg        M2_rlast,   output reg [3:0]  M2_rid,

    //SLAVE AW
    output     [31:0] S_awaddr,   output            S_awvalid,  input             S_awready,
    output     [3:0]  S_awid,     output     [7:0]  S_awlen,    output     [2:0]  S_awsize,   output     [1:0]  S_awburst,
    //SLAVE W
    output     [31:0] S_wdata,    output     [3:0]  S_wstrb,    output            S_wvalid,   input             S_wready,
    output            S_wlast,
    //SLAVE B
    input      [1:0]  S_bresp,    input             S_bvalid,   output            S_bready,
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
            default: begin
                M1_rvalid = 0; M1_rdata = 0; M1_rresp = 0; M1_rlast = 0; M1_rid = 0;
                M2_rvalid = 0; M2_rdata = 0; M2_rresp = 0; M2_rlast = 0; M2_rid = 0;
                S_rready = 0;
            end

        endcase
    end
    



    /////////////////////////////////////////////////////////////////////W - Arbiter
    assign S_awaddr = M2_awaddr;
    assign S_awvalid = M2_awvalid;
    assign S_awid = M2_awid;
    assign S_awlen = M2_awlen;
    assign S_awsize = M2_awsize;
    assign S_awburst = M2_awburst;
    assign S_wdata = M2_wdata;
    assign S_wstrb = M2_wstrb;
    assign S_wvalid = M2_wvalid;
    assign S_wlast = M2_wlast;
    assign M2_awready = S_awready;
    assign M2_wready = S_wready;
    assign M2_bresp = S_bresp;
    assign M2_bvalid = S_bvalid;
    assign M2_bid = S_bid;
    assign S_bready = M2_bready;
endmodule

module ysyx_26010011_CLINT(
	input clock,
	input reset,

	//AR
	input  [31:0] araddr,
	input         arvalid,
	output        arready,

	//R
	output [31:0] rdata,
	output [1:0]  rresp,
	output        rvalid,
	output        rlast,
	input         rready,

	//AW
	input  [31:0] awaddr,
	input         awvalid,
	output        awready,

	//W
	input  [31:0] wdata,
	input  [3:0]  wstrb,
	input         wvalid,
	output        wready,
	
	//B
	output [1:0]  bresp,
	output        bvalid,
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
	  if (rstate == 4'b0000 && arvalid && arready)
		raddr_reg <= araddr;
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
  localparam [31:0] CLINT_END  = 32'h02010000;

  wire mem_write_valid =
	  awaddr >= CLINT_BASE && awaddr < CLINT_END;

  always @(posedge clock) begin
	if(wstate == 4'b0000 && wnext_state == 4'b0001) begin
		$display("CLINT ONLY READ!");
	end
  end

  assign rresp = 2'b0;
  assign bresp = 2'b0;
  wire [31:0] tmp_r;
  assign tmp_r = Memory[(raddr_reg - CLINT_BASE) >> 2];
  always @(*) begin
	if(raddr_reg == 32'h02000000) begin
	  rdata = mtime_L;
	end else if(raddr_reg == 32'h02000004) begin
	  rdata = mtime_H;
	end else begin
	  $display("CLINT Read from invalid address: 0x%08x", raddr_reg);
	  rdata = 32'h00000000;
	end
  end


	
	reg [31:0]mtime_L,mtime_H;
	always @(posedge clk) begin
		if(rst) begin
			mtime_L <= 32'd0;
			mtime_H <= 32'd0;
		end
		else begin
			{mtime_H,mtime_L} <= {mtime_H,mtime_L} + 1;
		end
	end

endmodule

module ysyx_26010011_bridge(
    input clock,
    input reset,
    //////////////////////////////////////////////////////////
    input      [31:0] S_awaddr,  input             S_awvalid, output            S_awready,
    input      [3:0]  S_awid,    input      [7:0]  S_awlen,   input      [2:0]  S_awsize,  input      [1:0]  S_awburst,
    input      [31:0] S_wdata,   input      [3:0]  S_wstrb,   input             S_wvalid,  output            S_wready,
    input             S_wlast,
    output     [1:0]  S_bresp,   output            S_bvalid,  input             S_bready,
    output     [3:0]  S_bid,
    input      [31:0] S_araddr,  input             S_arvalid, output reg        S_arready,
    input      [3:0]  S_arid,    input      [7:0]  S_arlen,   input      [2:0]  S_arsize,  input      [1:0]  S_arbureset,
    output reg [31:0] S_rdata,   output reg [1:0]  S_rresp,   output reg        S_rvalid,  input             S_rready,
    output reg        S_rlast,   output reg [3:0]  S_rid,
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
    output reg [3:0]  MEM_arid,     output reg [7:0]  MEM_arlen,    output reg [2:0]  MEM_arsize,   output reg [1:0]  MEM_arbureset,
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
    output reg [3:0]  CLINT_arid,     output reg [7:0]  CLINT_arlen,    output reg [2:0]  CLINT_arsize,   output reg [1:0]  CLINT_arbureset,
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
    assign MEM_arbureset = S_arbureset;
    assign MEM_rready = S_arready;
    assign MEM_araddr = S_araddr;
    assign CLINT_arid = S_arid;
    assign CLINT_arlen = S_arlen;
    assign CLINT_arsize = S_arsize;
    assign CLINT_arbureset = S_arbureset;
    assign CLINT_rready = S_arready;
    assign CLINT_araddr = S_araddr;
    always @(*) begin
        //READ
        if(ar_sel_reg == 1'b0) begin
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
        if(aw_sel_reg == 1'b0) begin
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
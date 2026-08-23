

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
	
	input [31:0]wbu_in_bus_csr_result,
	input [31:0]wbu_in_bus_gpr_wdata,
	
	input [4:0]wbu_in_bus_rd,
	input [11:0]wbu_in_bus_csrrd,
	input wbu_in_bus_isWGPR,
	input [2:0]wbu_in_bus_opCSR,
	input [4:0]wbu_in_bus_exception,

// `ifdef USE_VERILATOR
// 	input [31:0]wbu_in_bus_pc,
// 	input [31:0]wbu_in_bus_instruction,
// 	input [31:0]wbu_in_bus_lsu_result,
// 	input [31:0]wbu_in_bus_alu_result,
// 	input wbu_in_bus_comp_result,
// 	input [31:0]wbu_in_bus_snpc,
// 	input wbu_in_bus_isLOAD,
// 	input wbu_in_bus_isSTORE,
// 	input wbu_in_bus_isJUMP,
// 	input wbu_in_bus_isWCOMP,
// `endif
	output wbu_out_bus_rd_valid,
	output wbu_out_bus_bypass_valid,
	output wbu_out_bus_csr_valid,
	output wbu_out_bus_csr_bypass_valid,
	output [4:0]wbu_out_bus_rd,
	output [11:0]wbu_out_bus_csrrd,
	output reg [31:0]wbu_out_bus_gpr_wdata,

	output gpr_we,
	output [31:0]gpr_wdata,
	output [4:0]gpr_address,

	output csr_we,
	output [31:0]csr_wdata,
	output [11:0]csr_address,
	output [4:0]wbu_out_bus_exception,
	output fencei_pass
);  
	assign wbu_out_bus_gpr_wdata  = wbu_in_bus_gpr_wdata;
	// wire [31:0] wbu_in_bus_snpc;
	// assign wbu_in_bus_snpc = wbu_in_bus_pc + 32'd4;
	assign wbu_in_ready=1;
	// always @(*) begin
	// 	if(wbu_in_bus_isLOAD) begin
	// 								gpr_wdata = wbu_in_bus_lsu_result;
	// 	end else if(wbu_in_bus_isJUMP) begin
	// 								gpr_wdata = wbu_in_bus_snpc;
	// 	// end else if(wbu_in_bus_isWGPR) begin
	// 	end else begin
	// 		if(wbu_in_bus_isWCOMP)           gpr_wdata = {31'b0,wbu_in_bus_comp_result};
	// 		else                    gpr_wdata = wbu_in_bus_alu_result;
	// 	end
	// end

	assign wbu_out_bus_rd_valid = wbu_in_valid & ~wbu_out_bus_exception[4] & wbu_in_bus_isWGPR;
	assign wbu_out_bus_bypass_valid = wbu_in_valid & ~wbu_out_bus_exception[4] & wbu_in_bus_isWGPR ;
	assign wbu_out_bus_csr_valid = wbu_in_valid & ~wbu_out_bus_exception[4] & |wbu_in_bus_opCSR;
	assign wbu_out_bus_csr_bypass_valid = wbu_in_valid & ~wbu_out_bus_exception[4] & |wbu_in_bus_opCSR;
	assign wbu_out_bus_rd = wbu_in_bus_rd;
	assign wbu_out_bus_csrrd = wbu_in_bus_csrrd;

	assign gpr_wdata = wbu_in_bus_gpr_wdata;

	assign gpr_address=wbu_in_bus_rd;
	assign gpr_we=(wbu_in_bus_isWGPR & wbu_in_valid & ~wbu_in_bus_exception[4])?1:0;
	
	assign wbu_out_bus_exception=(wbu_in_valid)?wbu_in_bus_exception:5'b0;
	assign fencei_pass = (wbu_in_valid & ~wbu_in_bus_exception[4] & (wbu_in_bus_exception[3:0]==`ysyx_26010011_EXCEPTION_FENCEI))?1:0;

	assign csr_address=wbu_in_bus_csrrd;
	assign csr_we=((|wbu_in_bus_opCSR) & wbu_in_valid & ~wbu_in_bus_exception[4])?1:0;
	assign csr_wdata=wbu_in_bus_csr_result;
endmodule

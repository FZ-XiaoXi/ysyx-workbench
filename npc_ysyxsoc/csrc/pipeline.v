module IF_ID_pipeline(
    input            clk,
    input            rst,
    input            flush_valid,

    input            ifu_out_valid,
    output           ifu_out_ready,
    input      [31:0]ifu_out_bus_instruction,
    input      [31:0]ifu_out_bus_pc,
    input      [31:0]ifu_out_bus_snpc,
    input            ifu_out_btb_predicted,

    output reg       idu_in_valid/*verilator public*/,
    input            idu_in_ready,
    output reg [31:0]idu_in_bus_instruction,
    output reg [31:0]idu_in_bus_pc/*verilator public*/,
    output reg [31:0]idu_in_bus_snpc,
    output reg       idu_in_btb_predicted
);
    assign ifu_out_ready = idu_in_ready | !idu_in_valid;
    always @(posedge clk, posedge rst)begin
        if(rst) begin
            idu_in_valid <= 0;
            idu_in_bus_instruction <= 0;
            idu_in_bus_pc <= 0;
            idu_in_bus_snpc <= 0;
            idu_in_btb_predicted <= 0;
        end else if(flush_valid)begin
            idu_in_valid <= 0;///////////////////////
            idu_in_bus_instruction <= 0;
            idu_in_bus_pc <= 0;
            idu_in_bus_snpc <= 0;
            idu_in_btb_predicted <= 0;
        end else if(idu_in_ready | !idu_in_valid)begin
            idu_in_valid <= ifu_out_valid;
            idu_in_bus_instruction <= ifu_out_bus_instruction;
            idu_in_bus_pc <= ifu_out_bus_pc;
            idu_in_bus_snpc <= ifu_out_bus_snpc;
            idu_in_btb_predicted <= ifu_out_btb_predicted;
        end else begin
            idu_in_valid <= idu_in_valid;
            idu_in_bus_instruction <= idu_in_bus_instruction;
            idu_in_bus_pc <= idu_in_bus_pc;
            idu_in_bus_snpc <= idu_in_bus_snpc;
            idu_in_btb_predicted <= idu_in_btb_predicted;
        end
    end
endmodule

module ID_EX_pipeline(
    input            clk,
    input            rst,
    input            flush_valid,

    input            idu_out_valid,
    output           idu_out_ready,
    input      [ 4:0]idu_out_bus_rd,
    input      [11:0]idu_out_bus_csrrd,
    input      [ 4:0]idu_out_bus_rs1,
    input      [ 4:0]idu_out_bus_rs2,
    input      [31:0]idu_out_bus_rs1_val,
    input      [31:0]idu_out_bus_rs2_val,
    input      [31:0]idu_out_bus_imm,
    input      [31:0]idu_out_bus_instruction,
    input            idu_out_bus_isEBREAK,
    input            idu_out_bus_isECALL,
    input            idu_out_bus_isMRET,
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
    input      [12:0]idu_out_bus_alu_op,
    input      [ 1:0]idu_out_bus_comp_op,
    input      [ 1:0]idu_out_bus_perip_mask,
    input      [31:0]idu_out_bus_pc,
    input      [31:0]idu_out_bus_snpc,
    input            idu_in_btb_predicted,

    output reg       exu_in_valid/*verilator public*/,
    input            exu_in_ready,
    output reg [ 4:0]exu_in_bus_rd,
    output reg [11:0]exu_in_bus_csrrd,
    output reg [ 4:0]exu_in_bus_rs1,
    output reg [ 4:0]exu_in_bus_rs2,
    output reg [31:0]exu_in_bus_rs1_val,
    output reg [31:0]exu_in_bus_rs2_val,
    output reg [31:0]exu_in_bus_imm,
    output reg [31:0]exu_in_bus_instruction,
    output reg       exu_in_bus_isEBREAK,
    output reg       exu_in_bus_isECALL,
    output reg       exu_in_bus_isMRET,
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
    output reg [12:0]exu_in_bus_alu_op,
    output reg [ 1:0]exu_in_bus_comp_op,
    output reg [ 1:0]exu_in_bus_perip_mask,
    output reg [31:0]exu_in_bus_pc/*verilator public*/,
    output reg [31:0]exu_in_bus_snpc,
    output reg       exu_in_btb_predicted
);
    assign idu_out_ready = exu_in_ready | !exu_in_valid;
    always @(posedge clk, posedge rst)begin
        if(rst) begin
            exu_in_valid<=0;
            exu_in_bus_rd<=0;
            exu_in_bus_csrrd<=0;
            exu_in_bus_rs1<=0;
            exu_in_bus_rs2<=0;
            exu_in_bus_rs1_val<=0;
            exu_in_bus_rs2_val<=0;
            exu_in_bus_imm<=0;
            exu_in_bus_instruction<=0;
            exu_in_bus_isEBREAK<=0;
            exu_in_bus_isECALL<=0;
            exu_in_bus_isMRET<=0;
            exu_in_bus_isLOAD<=0;
            exu_in_bus_isSTORE<=0;
            exu_in_bus_isWGPR<=0;
            exu_in_bus_isJUMP<=0;
            exu_in_bus_isWCOMP<=0;
            exu_in_bus_isBRANCH<=0;
            exu_in_bus_opCSR<=0;
            exu_in_bus_isUnSigned<=0;
            exu_in_bus_isUsePC<=0;
            exu_in_bus_alu_isUseImm<=0;
            exu_in_bus_comp_isUseImm<=0;
            exu_in_bus_alu_op<=0;
            exu_in_bus_comp_op<=0;
            exu_in_bus_perip_mask<=0;
            exu_in_bus_pc<=0;
            exu_in_bus_snpc<=0;
            exu_in_btb_predicted<=0;
        end else if(flush_valid) begin
            exu_in_valid<=0;
            exu_in_bus_rd<=0;
            exu_in_bus_csrrd<=0;
            exu_in_bus_rs1<=0;
            exu_in_bus_rs2<=0;
            exu_in_bus_rs1_val<=0;
            exu_in_bus_rs2_val<=0;
            exu_in_bus_imm<=0;
            exu_in_bus_instruction<=0;
            exu_in_bus_isEBREAK<=0;
            exu_in_bus_isECALL<=0;
            exu_in_bus_isMRET<=0;
            exu_in_bus_isLOAD<=0;
            exu_in_bus_isSTORE<=0;
            exu_in_bus_isWGPR<=0;
            exu_in_bus_isJUMP<=0;
            exu_in_bus_isWCOMP<=0;
            exu_in_bus_isBRANCH<=0;
            exu_in_bus_opCSR<=0;
            exu_in_bus_isUnSigned<=0;
            exu_in_bus_isUsePC<=0;
            exu_in_bus_alu_isUseImm<=0;
            exu_in_bus_comp_isUseImm<=0;
            exu_in_bus_alu_op<=0;
            exu_in_bus_comp_op<=0;
            exu_in_bus_perip_mask<=0;
            exu_in_bus_pc<=0;
            exu_in_bus_snpc<=0;
            exu_in_btb_predicted<=0;
        end else if(exu_in_ready | !exu_in_valid) begin
            exu_in_valid<=idu_out_valid;
            exu_in_bus_rd<=idu_out_bus_rd;
            exu_in_bus_csrrd<=idu_out_bus_csrrd;
            exu_in_bus_rs1<=idu_out_bus_rs1;
            exu_in_bus_rs2<=idu_out_bus_rs2;
            exu_in_bus_rs1_val<=idu_out_bus_rs1_val;
            exu_in_bus_rs2_val<=idu_out_bus_rs2_val;
            exu_in_bus_imm<=idu_out_bus_imm;
            exu_in_bus_instruction<=idu_out_bus_instruction;
            exu_in_bus_isEBREAK<=idu_out_bus_isEBREAK;
            exu_in_bus_isECALL<=idu_out_bus_isECALL;
            exu_in_bus_isMRET<=idu_out_bus_isMRET;
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
            exu_in_btb_predicted<=idu_in_btb_predicted;
        end else begin
            exu_in_valid<=exu_in_valid;
            exu_in_bus_rd<=exu_in_bus_rd;
            exu_in_bus_csrrd<=exu_in_bus_csrrd;
            exu_in_bus_rs1<=exu_in_bus_rs1;
            exu_in_bus_rs2<=exu_in_bus_rs2;
            exu_in_bus_rs1_val<=exu_in_bus_rs1_val;
            exu_in_bus_rs2_val<=exu_in_bus_rs2_val;
            exu_in_bus_imm<=exu_in_bus_imm;
            exu_in_bus_instruction<=exu_in_bus_instruction;
            exu_in_bus_isEBREAK<=exu_in_bus_isEBREAK;
            exu_in_bus_isECALL<=exu_in_bus_isECALL;
            exu_in_bus_isMRET<=exu_in_bus_isMRET;
            exu_in_bus_isLOAD<=exu_in_bus_isLOAD;
            exu_in_bus_isSTORE<=exu_in_bus_isSTORE;
            exu_in_bus_isWGPR<=exu_in_bus_isWGPR;
            exu_in_bus_isJUMP<=exu_in_bus_isJUMP;
            exu_in_bus_isWCOMP<=exu_in_bus_isWCOMP;
            exu_in_bus_isBRANCH<=exu_in_bus_isBRANCH;
            exu_in_bus_opCSR<=exu_in_bus_opCSR;
            exu_in_bus_isUnSigned<=exu_in_bus_isUnSigned;
            exu_in_bus_isUsePC<=exu_in_bus_isUsePC;
            exu_in_bus_alu_isUseImm<=exu_in_bus_alu_isUseImm;
            exu_in_bus_comp_isUseImm<=exu_in_bus_comp_isUseImm;
            exu_in_bus_alu_op<=exu_in_bus_alu_op;
            exu_in_bus_comp_op<=exu_in_bus_comp_op;
            exu_in_bus_perip_mask<=exu_in_bus_perip_mask;
            exu_in_bus_pc<=exu_in_bus_pc;
            exu_in_bus_snpc<=exu_in_bus_snpc;
            exu_in_btb_predicted<=exu_in_btb_predicted;
        end
    end
endmodule

module EX_LS_pipeline(
    input            clk,
    input            rst,
    input            flush_valid,

    input            exu_out_valid,
    output           exu_out_ready,
    input      [31:0]exu_out_bus_alu_result,
    input      [31:0]exu_out_bus_csr_result,
    input            exu_out_bus_comp_result,
    input      [31:0]exu_out_bus_lsu_val,
    input      [ 4:0]exu_out_bus_rd,
    input      [11:0]exu_out_bus_csrrd,
    input      [31:0]exu_out_bus_instruction,
    input            exu_out_bus_isEBREAK,
    input            exu_out_bus_isECALL,
    input            exu_out_bus_isMRET,
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
    output reg [11:0]lsu_in_bus_csrrd,
    output reg [31:0]lsu_in_bus_instruction,
    output reg       lsu_in_bus_isEBREAK,
    output reg       lsu_in_bus_isECALL,
    output reg       lsu_in_bus_isMRET,
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
    always @(posedge clk, posedge rst)begin
        if(rst) begin
            lsu_in_valid<=0;
            lsu_in_bus_alu_result<=0;
            lsu_in_bus_csr_result<=0;
            lsu_in_bus_comp_result<=0;
            lsu_in_bus_lsu_val<=0;
            lsu_in_bus_rd<=0;
            lsu_in_bus_csrrd<=0;
            lsu_in_bus_instruction<=0;
            lsu_in_bus_isEBREAK<=0;
            lsu_in_bus_isECALL<=0;
            lsu_in_bus_isMRET<=0;
            lsu_in_bus_isLOAD<=0;
            lsu_in_bus_isSTORE<=0;
            lsu_in_bus_isWGPR<=0;
            lsu_in_bus_isJUMP<=0;
            lsu_in_bus_isWCOMP<=0;
            lsu_in_bus_isBRANCH<=0;
            lsu_in_bus_opCSR<=0;
            lsu_in_bus_isUnSigned<=0;
            lsu_in_bus_perip_mask<=0;
            lsu_in_bus_pc<=0;
            lsu_in_bus_snpc<=0;
        end else if(flush_valid)begin
            lsu_in_valid<=0;
            lsu_in_bus_alu_result<=0;
            lsu_in_bus_csr_result<=0;
            lsu_in_bus_comp_result<=0;
            lsu_in_bus_lsu_val<=0;
            lsu_in_bus_rd<=0;
            lsu_in_bus_csrrd<=0;
            lsu_in_bus_instruction<=0;
            lsu_in_bus_isEBREAK<=0;
            lsu_in_bus_isECALL<=0;
            lsu_in_bus_isMRET<=0;
            lsu_in_bus_isLOAD<=0;
            lsu_in_bus_isSTORE<=0;
            lsu_in_bus_isWGPR<=0;
            lsu_in_bus_isJUMP<=0;
            lsu_in_bus_isWCOMP<=0;
            lsu_in_bus_isBRANCH<=0;
            lsu_in_bus_opCSR<=0;
            lsu_in_bus_isUnSigned<=0;
            lsu_in_bus_perip_mask<=0;
            lsu_in_bus_pc<=0;
            lsu_in_bus_snpc<=0;
        end else if(lsu_in_ready | !lsu_in_valid)begin
            lsu_in_valid<=exu_out_valid;
            lsu_in_bus_alu_result<=exu_out_bus_alu_result;
            lsu_in_bus_csr_result<=exu_out_bus_csr_result;
            lsu_in_bus_comp_result<=exu_out_bus_comp_result;
            lsu_in_bus_lsu_val<=exu_out_bus_lsu_val;
            lsu_in_bus_rd<=exu_out_bus_rd;
            lsu_in_bus_csrrd<=exu_out_bus_csrrd;
            lsu_in_bus_instruction<=exu_out_bus_instruction;
            lsu_in_bus_isEBREAK<=exu_out_bus_isEBREAK;
            lsu_in_bus_isECALL<=exu_out_bus_isECALL;
            lsu_in_bus_isMRET<=exu_out_bus_isMRET;
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
        end else begin
            lsu_in_valid<=lsu_in_valid;
            lsu_in_bus_alu_result<=lsu_in_bus_alu_result;
            lsu_in_bus_csr_result<=lsu_in_bus_csr_result;
            lsu_in_bus_comp_result<=lsu_in_bus_comp_result;
            lsu_in_bus_lsu_val<=lsu_in_bus_lsu_val;
            lsu_in_bus_rd<=lsu_in_bus_rd;
            lsu_in_bus_csrrd<=lsu_in_bus_csrrd;
            lsu_in_bus_instruction<=lsu_in_bus_instruction;
            lsu_in_bus_isEBREAK<=lsu_in_bus_isEBREAK;
            lsu_in_bus_isECALL<=lsu_in_bus_isECALL;
            lsu_in_bus_isMRET<=lsu_in_bus_isMRET;
            lsu_in_bus_isLOAD<=lsu_in_bus_isLOAD;
            lsu_in_bus_isSTORE<=lsu_in_bus_isSTORE;
            lsu_in_bus_isWGPR<=lsu_in_bus_isWGPR;
            lsu_in_bus_isJUMP<=lsu_in_bus_isJUMP;
            lsu_in_bus_isWCOMP<=lsu_in_bus_isWCOMP;
            lsu_in_bus_isBRANCH<=lsu_in_bus_isBRANCH;
            lsu_in_bus_opCSR<=lsu_in_bus_opCSR;
            lsu_in_bus_isUnSigned<=lsu_in_bus_isUnSigned;
            lsu_in_bus_perip_mask<=lsu_in_bus_perip_mask;
            lsu_in_bus_pc<=lsu_in_bus_pc;
            lsu_in_bus_snpc<=lsu_in_bus_snpc;
        end
    end
endmodule

module LS_WB_pipeline(
    input            clk,
    input            rst,
    input            flush_valid,

    input            lsu_out_valid,
    output           lsu_out_ready,

    input      [31:0]lsu_out_bus_alu_result,
    input      [31:0]lsu_out_bus_csr_result,
    input            lsu_out_bus_comp_result,
    input      [31:0]lsu_out_bus_lsu_result,
    input      [ 4:0]lsu_out_bus_rd,
    input      [11:0]lsu_out_bus_csrrd,
    input      [31:0]lsu_out_bus_instruction,
    input            lsu_out_bus_isEBREAK,
    input            lsu_out_bus_isECALL,
    input            lsu_out_bus_isMRET,
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
    output reg [11:0]wbu_in_bus_csrrd,
    output reg [31:0]wbu_in_bus_instruction,
    output reg       wbu_in_bus_isEBREAK,
    output reg       wbu_in_bus_isECALL,
    output reg       wbu_in_bus_isMRET,
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
    always @(posedge clk, posedge rst)begin
        if(rst) begin
            wbu_in_valid<=0; 
            wbu_in_bus_pc<=0;
            wbu_in_bus_instruction<=0;
            wbu_in_bus_lsu_result<=0;
            wbu_in_bus_alu_result<=0;
            wbu_in_bus_csr_result<=0;
            wbu_in_bus_comp_result<=0;
            wbu_in_bus_snpc<=0;
            wbu_in_bus_rd<=0;
            wbu_in_bus_csrrd<=0;
            wbu_in_bus_isEBREAK<=0;
            wbu_in_bus_isECALL<=0;
            wbu_in_bus_isMRET<=0;
            wbu_in_bus_isLOAD<=1'b0;
            wbu_in_bus_isSTORE<=1'b0;
            wbu_in_bus_isWGPR<=1'b0;
            wbu_in_bus_isJUMP<=1'b0;
            wbu_in_bus_isWCOMP<=1'b0;
            wbu_in_bus_isBRANCH<=1'b0;
            wbu_in_bus_opCSR<=0;
        end else if(flush_valid)begin
            wbu_in_valid<=0; 
            wbu_in_bus_pc<=0;
            wbu_in_bus_instruction<=0;
            wbu_in_bus_lsu_result<=0;
            wbu_in_bus_alu_result<=0;
            wbu_in_bus_csr_result<=0;
            wbu_in_bus_comp_result<=0;
            wbu_in_bus_snpc<=0;
            wbu_in_bus_rd<=0;
            wbu_in_bus_csrrd<=0;
            wbu_in_bus_isEBREAK<=0;
            wbu_in_bus_isECALL<=0;
            wbu_in_bus_isMRET<=0;
            wbu_in_bus_isLOAD<=1'b0;
            wbu_in_bus_isSTORE<=1'b0;
            wbu_in_bus_isWGPR<=1'b0;
            wbu_in_bus_isJUMP<=1'b0;
            wbu_in_bus_isWCOMP<=1'b0;
            wbu_in_bus_isBRANCH<=1'b0;
            wbu_in_bus_opCSR<=0;
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
            wbu_in_bus_csrrd<=lsu_out_bus_csrrd;
            wbu_in_bus_isEBREAK<=lsu_out_bus_isEBREAK;
            wbu_in_bus_isECALL<=lsu_out_bus_isECALL;
            wbu_in_bus_isMRET<=lsu_out_bus_isMRET;
            wbu_in_bus_isLOAD<=lsu_out_bus_isLOAD;
            wbu_in_bus_isSTORE<=lsu_out_bus_isSTORE;
            wbu_in_bus_isWGPR<=lsu_out_bus_isWGPR;
            wbu_in_bus_isJUMP<=lsu_out_bus_isJUMP;
            wbu_in_bus_isWCOMP<=lsu_out_bus_isWCOMP;
            wbu_in_bus_isBRANCH<=lsu_out_bus_isBRANCH;
            wbu_in_bus_opCSR<=lsu_out_bus_opCSR;
        end else begin
            wbu_in_valid<=wbu_in_valid; 
            wbu_in_bus_pc<=wbu_in_bus_pc;
            wbu_in_bus_instruction<=wbu_in_bus_instruction;
            wbu_in_bus_lsu_result<=wbu_in_bus_lsu_result;
            wbu_in_bus_alu_result<=wbu_in_bus_alu_result;
            wbu_in_bus_csr_result<=wbu_in_bus_csr_result;
            wbu_in_bus_comp_result<=wbu_in_bus_comp_result;
            wbu_in_bus_snpc<=wbu_in_bus_snpc;
            wbu_in_bus_rd<=wbu_in_bus_rd;
            wbu_in_bus_csrrd<=wbu_in_bus_csrrd;
            wbu_in_bus_isEBREAK<=wbu_in_bus_isEBREAK;
            wbu_in_bus_isECALL<=wbu_in_bus_isECALL;
            wbu_in_bus_isMRET<=wbu_in_bus_isMRET;
            wbu_in_bus_isLOAD<=wbu_in_bus_isLOAD;
            wbu_in_bus_isSTORE<=wbu_in_bus_isSTORE;
            wbu_in_bus_isWGPR<=wbu_in_bus_isWGPR;
            wbu_in_bus_isJUMP<=wbu_in_bus_isJUMP;
            wbu_in_bus_isWCOMP<=wbu_in_bus_isWCOMP;
            wbu_in_bus_isBRANCH<=wbu_in_bus_isBRANCH;
            wbu_in_bus_opCSR<=wbu_in_bus_opCSR;
        end
    end
endmodule
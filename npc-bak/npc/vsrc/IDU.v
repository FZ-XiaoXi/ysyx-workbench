
module IDU(
    input [31:0]command,
    input isGREATER,
    input isEQUAL,
    input clk,
    input rst,
    input bus_valid,
    input wbu_final,

    output [ 6: 0]opcode,
    output [ 4: 0]rd,
    output [ 4: 0]rs1,
    output [ 4: 0]rs2,
    output [ 11: 0]rcsr,
    output [ 2: 0]funct3,
    output [ 6: 0]funct7,
    output [11: 0]immI,
    output [11: 0]immS,
    output [12: 1]immB,
    output [31:12]immU,
    output [20: 1]immJ,
    output reg [31: 0]imm,

    output isEBREAK,
    output isECALL,
    output isMRET,
    output isLOAD,
    output isSTORE,
    output isWRITE,
    output isJUMP,
    output isCOMPARE,
    output reg isBRANCH,
    output [1:0]isCSR,
    output COMP_data,
    output isSigned,
    output isPC,
    output LSU_WEN,
    output reg lsu_reqEN,
    output [9:0]op,
    output [3:0]LSU_rmask,
    output [3:0]lsu_wmask,
    output [6:0]ctype
);
    reg state/*verilator public*/,next_state;
    parameter state_idle=0,state_wait=1;
    always @(*)begin
        case(state)
            state_idle: begin
                if(bus_valid) begin
                    if(isLOAD | isSTORE) begin
                        next_state=state_wait;
                        lsu_reqEN=1;
                    end else begin
                        next_state=state_idle;
                        lsu_reqEN=0;
                    end
                end else begin
                    next_state=state_idle;
                    lsu_reqEN=0;
                end
            end
            state_wait: begin
                lsu_reqEN=0;
                if(wbu_final) begin
                    next_state=state_idle;
                end else begin
                    next_state=state_wait;
                end
            end
        endcase
    end
    always @(posedge clk) begin
        if(rst) begin
            state<=state_idle;
        end else begin
            state<=next_state;
        end
    end

    wire isLUI, isAUIPC, isJAL, isJALR, isBEQ, isBNE, isBLT, isBGE, isBLTU, isBGEU;
    wire isLB, isLH, isLW, isLBU, isLHU, isSB, isSH, isSW, isADDI, isSLTI, isSLTIU;
    wire isXORI, isORI, isANDI, isSLLI, isSRLI, isSRAI, isADD, isSUB, isSLL, isSLT;
    wire isSLTU, isXOR, isSRL, isSRA, isOR, isAND, isMUL, isMULH, isMULHSU;
    wire isMULHU, isDIV, isDIVU, isREM, isREMU;

    wire isCSRRW,isCSRRS,isCSRRC,isCSRRWI,isCSRRSI,isCSRRCI;

    wire isR,isI,isS,isB,isU,isJ,isCR;
    assign ctype={isR,isI,isS,isB,isU,isJ,isCR};
    assign opcode=  command[ 6: 0];
    assign rd=      command[11: 7];
    assign rs1=     command[19:15];
    assign rs2=     command[24:20];
    assign rcsr=    command[31:20];
    assign funct3=  command[14:12];
    assign funct7=  command[31:25];
    
    assign immI = {command[31:20]                                             };
    assign immS = {command[31:25],command[11: 7]                              };
    assign immB = {command[31:31],command[ 7: 7],command[30:25],command[11: 8]};
    assign immU = {command[31:12]                                             };
    assign immJ = {command[31:31],command[19:12],command[20:20],command[30:21]};
    //assign immCR= {command[31:20]}

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

    assign isECALL  = (command==32'b00000000000000000000000001110011                    ) ? 1 : 0;
    assign isEBREAK = (command==32'b00000000000100000000000001110011                    ) ? 1 : 0;
    assign isMRET   = (command==32'b00110000001000000000000001110011                    ) ? 1 : 0;

    assign isCSRRW  = (opcode == 7'b1110011 && funct3 == 3'b001                         ) ? 1 : 0;
    assign isCSRRS  = (opcode == 7'b1110011 && funct3 == 3'b010                         ) ? 1 : 0;
    assign isCSRRC  = (opcode == 7'b1110011 && funct3 == 3'b011                         ) ? 1 : 0;

/////////////////////////
    assign isLOAD = (isLW|isLBU|isLB|isLH|isLHU)?1:0;
    assign isSTORE= (isSW|isSB|isSH)?1:0;
    assign isWRITE = (isLUI|isAUIPC|isJAL|isJALR|isADDI|isSLTI|isSLTIU|isXORI|isORI|isANDI|isSLLI|isSRLI|isSRAI|isADD|isSUB|isSLL|isSLT|isSLTU|isXOR|isSRL|isSRA|isOR|isAND)?1:0;
    assign isJUMP= (isJAL|isJALR)?1:0;
    assign isPC = (isAUIPC|isJAL|isBEQ|isBNE|isBLT|isBGE|isBLTU|isBGEU)?1:0;
    assign isCOMPARE=(isSLTI|isSLTIU|isSLT|isSLTU)?1:0;
    assign isCSR = (isCSRRS?2'b01:(isCSRRW?(2'b11):(isCSRRC?2'b10:2'b00)));
/////////////////////////
    assign isI=(isADDI|isSLTI|isSLTIU|isXORI|isORI|isANDI|isSLLI|isSRLI|isSRAI|isJALR|isLW|isLBU|isLB|isLH|isLHU)?1:0;
    assign isR=(isADD|isSUB|isSLL|isSLT|isSLTU|isXOR|isSRL|isSRA|isOR|isAND)?1:0;
    assign isS=(isSW|isSB|isSH)?1:0;
    assign isB=(isBEQ|isBNE|isBLT|isBGE|isBLTU|isBGEU)?1:0;
    assign isU=(isLUI|isAUIPC)?1:0;
    assign isJ=(isJAL)?1:0;
    assign isCR=(isCSRRW|isCSRRS|isCSRRC)?1:0;

    always @(*) begin
        if     (isI)    imm={{20{immI[11:11]}},immI[11:0]};
        else if(isJ)    imm={{11{immJ[20:20]}},immJ[20:1],1'b0};
        else if(isS)    imm={{20{immS[11:11]}},immS[11:0]};
        else if(isU)    imm={   {immU[31:12]} ,{12{1'b0}}};
        else if(isB)    imm={{19{immB[12:12]}},immB[12:1],1'b0};
        else imm=0;

    end
    //9-add sub mul div LL LR AR AND OR XOR-0
    /////////////////////////
    assign op[9]=(isAUIPC|isJAL|isJALR|isADD|isLW|isLBU|isLB|isLH|isSW|isSH|isSB|isADDI|isLHU|isBEQ|isBNE|isBLT|isBGE|isBLTU|isBGEU)?1:0;
    assign op[8]=(isSUB)?1:0;
    assign op[7]=(0)?1:0;
    assign op[6]=(0)?1:0;
    assign op[5]=(isSLLI|isSLL)?1:0;
    assign op[4]=(isSRLI|isSRL)?1:0;
    assign op[3]=(isSRAI|isSRA)?1:0;
    assign op[2]=(isANDI|isAND)?1:0;
    assign op[1]=(isORI|isOR)?1:0;
    assign op[0]=(isXORI|isXOR)?1:0;

    /////////////////////////
    assign LSU_rmask=(isLW)?4'b1111:((isLBU|isLB)?4'b0001:((isLH|isLHU)?4'b0011:0));
    assign lsu_wmask=(isSW)?4'b1111:((isSB)?4'b0001:((isSH)?4'b0011:0));
    assign LSU_WEN=(isSW|isSH|isSB)?1:0;
    /////////////////////////
    assign isSigned=(isLBU|isLHU|isBLTU|isBGEU|isSLTIU|isSLTU)?0:1;

    //COMP
    assign COMP_data = (isEQUAL|isGREATER)?0:1;

    //BRANCH
    always @(*) begin
        if(isBEQ) begin
            if(isEQUAL) isBRANCH = 1;
            else isBRANCH = 0;
        end
        else if (isBNE) begin
            if(!isEQUAL) isBRANCH = 1;
            else isBRANCH = 0;
        end
        else if (isBLT | isBLTU) begin
            if(!(isGREATER|isEQUAL)) isBRANCH = 1;
            else isBRANCH = 0;
        end
        else if(isBGE | isBGEU) begin
            if(isGREATER|isEQUAL) isBRANCH = 1;
            else isBRANCH = 0;
        end
        else begin
            isBRANCH = 0;
        end
    end
endmodule
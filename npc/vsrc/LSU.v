import "DPI-C" function void difftest_mem_set(int addr);

module LSU(
    input [31:0]lsu_addr,
    output reg [31:0]lsu_rdata,

    input [31:0]lsu_wdata,
    input [3:0]rmask,
    input [3:0]lsu_wmask,
    input isSigned,
    input clk,
    input lsu_wen,
    input bus_valid,
    input lsu_reqEN,
    input rst,
    output lsu_respValid
);
    reg lsu_reqValid;
    wire lsu_reqReady,lsu_respReady;
    parameter state_idle=0,state_wait_ready=1,state_wait_data=2;
    reg [1:0]state/*verilator public*/,next_state;
    always @(*) begin
        case(state)
            state_idle:begin
                if(lsu_reqEN) begin
                    lsu_reqValid=1;
                    if(lsu_reqReady) begin
                        next_state=state_wait_data;
                    end else begin
                        next_state=state_wait_ready;
                    end
                end else begin
                    lsu_reqValid=0;
                    next_state=state_idle;
                end
            end
            state_wait_ready:begin
                lsu_reqValid=1;
                if(lsu_reqReady) begin
                    next_state=state_wait_data;
                end else begin
                    next_state=state_wait_ready;
                end
            end 
            state_wait_data:begin
                lsu_reqValid=0;
                if(lsu_respValid) begin
                    next_state=state_idle;
                end else begin
                    next_state=state_wait_data;
                end
            end 
        endcase
    end
    always@(posedge clk) begin
        if(rst) begin
            state<=state_idle;
        end else begin
            state<=next_state;
        end
    end
    reg [31:0] rdata;
    wire [31:0]val0,val1,val2,val3,lsu_rdata1,lsu_rdata2,lsu_rdata4;
    reg [31:0]val;

    
    assign val0=rdata;
    assign val1={{8{val0[31]}},val0[31:8]};
    assign val2={{8{val1[31]}},val1[31:8]};
    assign val3={{8{val2[31]}},val2[31:8]};
    always @(*) begin
        case(lsu_addr[1:0])
            2'b00:val=val0;
            2'b01:val=val1;
            2'b10:val=val2;
            2'b11:val=val3;
        endcase
    end
    //assign val=lsu_rdata;

    assign lsu_rdata1=(isSigned)?{{24{val[7:7]}},val[7:0]}:{{24{1'b0}},val[7:0]};
    assign lsu_rdata2=(isSigned)?{{16{val[15:15]}},val[15:0]}:{{16{1'b0}},val[15:0]};
    assign lsu_rdata4=val[31:0];
    
    always @(*) begin
        case(rmask)
            4'b0001:lsu_rdata=lsu_rdata1;
            4'b0011:lsu_rdata=lsu_rdata2;
            4'b0111:lsu_rdata=32'hffffffff;
            4'b1111:lsu_rdata=lsu_rdata4;
            default:lsu_rdata=32'hffffffff;
        endcase
    end

    MEM RAM_0(.clk(clk),.rst(rst),.wen(lsu_wen),.addr(lsu_addr),.wdata(lsu_wdata),.rdata(rdata),.wmask(lsu_wmask),.reqValid(lsu_reqValid),.respValid(lsu_respValid),.respReady(lsu_respReady),.reqReady(lsu_reqReady));

endmodule
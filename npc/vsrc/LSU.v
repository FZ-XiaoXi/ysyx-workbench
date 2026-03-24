import "DPI-C" function void difftest_mem_set(int addr);

module LSU(
    input [31:0]address,
    output reg [31:0]rdata,

    input [31:0]wdata,
    input [3:0]rmask,
    input [3:0]wmask,
    input isSigned,
    input clk,
    input writeEN,
    input bus_valid,
    input LSU_REN,
    input rst,
    output reg LSU_final
);
    parameter state_idle=0,state_wait=1;
    reg state/*verilator public*/,next_state;
    always @(*) begin
        case(state)
            state_idle:begin
                if(LSU_REN) begin
                    next_state=state_wait;
                    LSU_final=0;
                end else begin
                    next_state=state_idle;
                    LSU_final=bus_valid?1:0;
                end
            end
            state_wait:begin
                next_state=state_idle;
                LSU_final=bus_valid?1:0;
            end 
        endcase
    end
    always@(posedge clk) begin
        if(rst) begin
            state<=state_idle;
        end else if(bus_valid) begin
            state<=next_state;
        end else begin
            state<=state;
        end
    end
    reg [31:0] LSU_rdata;
    wire [31:0]val0,val1,val2,val3,rdata1,rdata2,rdata4;
    reg [31:0]val;
    always @(posedge clk) begin
        LSU_rdata <= (writeEN | ~LSU_REN)?32'h4f4f4f4f:pmem_read(address);
        if(writeEN) begin
            difftest_mem_set(address);
            pmem_write(address,wdata,{4'h0,wmask});
        end
    end
    
    assign val0=LSU_rdata;
    assign val1={{8{val0[31]}},val0[31:8]};
    assign val2={{8{val1[31]}},val1[31:8]};
    assign val3={{8{val2[31]}},val2[31:8]};
    always @(*) begin
        case(address[1:0])
            2'b00:val=val0;
            2'b01:val=val1;
            2'b10:val=val2;
            2'b11:val=val3;
        endcase
    end
    //assign val=LSU_rdata;

    assign rdata1=(isSigned)?{{24{val[7:7]}},val[7:0]}:{{24{1'b0}},val[7:0]};
    assign rdata2=(isSigned)?{{16{val[15:15]}},val[15:0]}:{{16{1'b0}},val[15:0]};
    assign rdata4=val[31:0];
    
    always @(*) begin
        case(rmask)
            4'b0001:rdata=rdata1;
            4'b0011:rdata=rdata2;
            4'b0111:rdata=32'hffffffff;
            4'b1111:rdata=rdata4;
            default:rdata=32'hffffffff;
        endcase
    end
    wire [31:0]wdata0,wdata1,wdata2,wdata3;
    reg [31:0] w;
    assign wdata0=wdata;
    assign wdata1={wdata[23:0],{8{1'b0}}};
    assign wdata2={wdata[15:0],{16{1'b0}}};
    assign wdata3={wdata[ 7:0],{24{1'b0}}};
    always @(*) begin
        case(address[1:0])
            2'b00:w=wdata0;
            2'b01:w=wdata1;
            2'b10:w=wdata2;
            2'b11:w=wdata3;
        endcase
    end

endmodule


module LSU(
    input [31:0]address,
    output reg [31:0]rdata,

    input [31:0]wdata,
    input [3:0]rmask,
    input clk,
    input writeEN
);
    wire [31:0]val0,val1,val2,val3,rdata1,rdata2,rdata4;
    reg [31:0]val;
    assign val0=pmem_read(address);
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
    
    assign rdata1={{24{val[7:7]}},val[7:0]};
    assign rdata2={{16{val[15:15]}},val[15:0]};
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


    // assign LSU_address=address;
    // assign data=LSU_data;
    // assign LSU_PC_address=PC_address;
    // assign PC_data=LSU_PC_data;

endmodule
module AXI4LiteArbiter(
    input clk,
    input rst,

    //MASTER
    //AR
    input  [31:0] M_araddr,
    input         M_arvalid,
    output        M_arready,
    //R
    output [31:0] M_rdata,
    output [1:0]  M_rresp,
    output        M_rvalid,
    input         M_rready,
    //AW
    input  [31:0] M_awaddr,
    input         M_awvalid,
    output        M_awready,
    //W
    input  [31:0] M_wdata,
    input  [3:0]  M_wstrb,
    input         M_wvalid,
    output        M_wready,
    //B
    output [1:0]  M_bresp,
    output        M_bvalid,
    input         M_bready

    //SLAVE1
    //AR
    output [31:0] S1_araddr,
    output        S1_arvalid,
    input         S1_arready,
    //R
    input  [31:0] S1_rdata,
    input  [1:0]  S1_rresp,
    input         S1_rvalid,
    output        S1_rready,
    //AW
    output [31:0] S1_awaddr,
    output        S1_awvalid,
    input         S1_awready,
    //W
    output [31:0] S1_wdata,
    output [3:0]  S1_wstrb,
    output        S1_wvalid,
    input         S1_wready,
    //B
    input  [1:0]  S1_bresp,
    input         S1_bvalid,
    output        S1_bready,

    //SLAVE2
    //AR
    output [31:0] S2_araddr,
    output        S2_arvalid,
    input         S2_arready,
    //R
    input  [31:0] S2_rdata,
    input  [1:0]  S2_rresp,
    input         S2_rvalid,
    output        S2_rready,
    //AW
    output [31:0] S2_awaddr,
    output        S2_awvalid,
    input         S2_awready,
    //W
    output [31:0] S2_wdata,
    output [3:0]  S2_wstrb,
    output        S2_wvalid,
    input         S2_wready,
    //B
    input  [1:0]  S2_bresp,
    input         S2_bvalid,
    output        S2_bready
);


endmodule

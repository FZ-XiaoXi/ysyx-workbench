module top(
  input clk,
  input rst,
  output clk0,
  output clk1,
  output clk2,
  output [2:0] cnt
);
//wire clk0,clk1,clk2;
clkdiv clkdiv_0(clk,rst,clk0,clk1,clk2,cnt);
  
endmodule


module clkdiv(
  input clk,
  input rst,
  output clk0,
  output clk1,
  output clk2,
  output reg [2:0] cnt
);
  
  always @(posedge clk,posedge rst) begin
    if(rst) cnt<=3'b001;d
    else cnt<={cnt[1:0],cnt[2:2]};
  end
  assign clk0=cnt[0];
  assign clk1=cnt[1];
  assign clk2=cnt[2];
endmodule
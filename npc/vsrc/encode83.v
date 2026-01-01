module encode83(x,en,y,s,seg);
  input  [7:0] x;
  input  en;
  output reg [2:0]y;
  output s;
  output [6:0]seg;
  integer i;
  always @(x or en) begin
    if (en) begin
      y = 0;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)  y = i[2:0];
    end
    else  y = 0;
  end
  assign s=x||0;
endmodule

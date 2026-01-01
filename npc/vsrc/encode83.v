module encode83(x,en,y,s,seg);
  input  [7:0] x;
  input  en;
  output reg [2:0]y;
  output s;
  output reg [6:0]seg;
  integer i;
  always @(x or en) begin
    if (en) begin
      y = 0;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)  y = i[2:0];
    end
    else  y = 0;
  end
  assign s=(x==0||en==0)?0:1;
  always @(*)begin
	case (y)
		3'b000:seg=7'b1111110;
		3'b001:seg=7'b0110000;
		3'b010:seg=7'b1101101;
		3'b011:seg=7'b1111001;
		3'b100:seg=7'b0110011;
		3'b101:seg=7'b1011011;
		3'b110:seg=7'b1011111;
		3'b111:seg=7'b1110000;
		default:seg=7'b0000000;
	endcase	


  end
endmodule







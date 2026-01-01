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
	always @(*) begin
        case (y)
            3'b000: seg = 7'b0000001; // 0 (原1111110取反)
            3'b001: seg = 7'b1001111; // 1 (原0110000取反)
            3'b010: seg = 7'b0010010; // 2 (原1101101取反)
            3'b011: seg = 7'b0000110; // 3 (原1111001取反)
            3'b100: seg = 7'b1001100; // 4 (原0110011取反)
            3'b101: seg = 7'b0100100; // 5 (原1011011取反)
            3'b110: seg = 7'b0100000; // 6 (原1011111取反)
            3'b111: seg = 7'b0001111; // 7 (原1110000取反)
            default: seg = 7'b1111111; // 默认全灭 (原0000000取反)
        endcase
    end

endmodule







module ALU(
	input cin,
	input [3:0]inA,
	input [3:0]inB,
	input [2:0]mode,
	output [3:0]out,
	output CF,
	output ZF,
	output OF	
);

	assign CF=1;
	assign ZF=1;
	assign OF=1;
	assign out[3:0]=4'b4'b4'b4'b1;

endmodule

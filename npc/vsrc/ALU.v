module ALU(
	input cin,
	input reg [3:0]inA,
	input reg [3:0]inB,
	input reg [2:0]mode,
	output [3:0]out,
	output CF,
	output ZF,
	output OF	
);
	
	assign CF=cin;
	assign ZF= |inA;
	assign OF= |mode;
	assign out[3:0]=inB[3:0];

endmodule

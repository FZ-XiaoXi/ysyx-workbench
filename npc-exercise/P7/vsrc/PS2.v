module PS2(
	input CLK,
	input CLRN,
	output [7:0]seg0L,
	output [7:0]seg0H,
	output [7:0]seg1L,
	output [7:0]seg1H,
	output [7:0]seg2L,
	output [7:0]seg2H,
	output [7:0]seg3L,
	output [7:0]seg3H,
	output [7:0]data,
	input PS2_CLK,
	input PS2_DAT
);
wire [7:0]data;
wire ready,overflow,nextdata_n;
reg [23:0]receiveData;

assign seg0L[0]=1;
assign seg0R[0]=1;
assign seg1L[0]=1;
assign seg1R[0]=1;
assign seg2L[0]=1;
assign seg2R[0]=1;
SevenSegDecoder segdec0(receiveData[03:00],seg0L[7:1]);
SevenSegDecoder segdec1(receiveData[07:04],seg0R[7:1]);
SevenSegDecoder segdec2(receiveData[11:08],seg1L[7:1]);
SevenSegDecoder segdec3(receiveData[15:12],seg1R[7:1]);
SevenSegDecoder segdec4(receiveData[19:16],seg2L[7:1]);
SevenSegDecoder segdec5(receiveData[23:20],seg2R[7:1]);


ps2_keyboard inst(
			.clk(CLK),
			.clrn(CLRN),
			.ps2_clk(PS2_CLK),
			.ps2_data(PS2_DAT),
			.data(data),
			.ready(ready),
			.nextdata_n(nextdata_n),
			.overflow(overflow)
);

always @(posedge CLK)begin
	if(CLRN==0)begin
		receiveData[23:0]<=24'h000000;
		nextdata_n<=1;
		overflow<=0;
	end else begin
		if(nextdata_n==0)
			nextdata_n<=1;
		if(ready) begin
			receiveData[23:8]<=receiveData[15:0];
			reveiveData[7:0]<=data;
			nextdata_n<=0;
		end
	end
end
endmodule

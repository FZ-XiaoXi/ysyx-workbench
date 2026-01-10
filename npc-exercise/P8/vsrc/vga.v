module vga(
	input clk,
	input reset,
	output vsync,
	output hsync,
	output valid,
	output [7:0]vga_r,
	output [7:0]vga_g,
	output [7:0]vga_b
);
wire [9:0] v_addr;
wire [9:0] h_addr;
wire [23:0] vga_data;
assign vga_data=24'hF00FFF;
wire pclk;
clkgen #(25000000) my_vgaclk(clk,reset,1'b1,pclk);
vga_ctrl u_vga_ctrl (pclk,reset,vga_data,h_addr,v_addr,hsync,vsync,valid,vga_r,vga_g,vga_b);
endmodule

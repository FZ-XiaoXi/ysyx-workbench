module image_rom_640x480 (
    input wire clk,
    input wire rst,
    input wire [18:0] addr,
    output reg [23:0] rgb_data,
    output wire [7:0] r,
    output wire [7:0] g,
    output wire [7:0] b
);


localparam WIDTH = 640;
localparam HEIGHT = 480;
localparam TOTAL_PIXELS = WIDTH * HEIGHT;
localparam ADDR_WIDTH = 19;
localparam DATA_WIDTH = 24;

reg [DATA_WIDTH-1:0] rom [0:TOTAL_PIXELS-1];

assign r = rgb_data[23:16];
assign g = rgb_data[15:8];
assign b = rgb_data[7:0];

always @(posedge clk or posedge rst) begin
    if (rst) begin
        rgb_data <= 24'h000000; 
    end else begin
        if (addr < TOTAL_PIXELS) begin
            rgb_data <= rom[addr];
        end else begin
            rgb_data <= 24'h000000;
        end
    end
end


initial begin
    $readmemh("image_data.mif", rom);
end

endmodule

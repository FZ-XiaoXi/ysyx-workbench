import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
module LSU(
    input [31:0]address,
    output [31:0]data,
    input [31:0]PC_address,
    output [31:0]PC_data,

    input [31:0]wdata,
    input [3:0]range,
    input clk,
    input writeEN
);
    
    // assign LSU_address=address;
    // assign data=LSU_data;
    // assign LSU_PC_address=PC_address;
    // assign PC_data=LSU_PC_data;

endmodule
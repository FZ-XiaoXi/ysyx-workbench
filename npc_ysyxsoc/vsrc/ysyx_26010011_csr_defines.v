`ifndef CSR_DEFINES_VH
`define CSR_DEFINES_VH

`define ADD_MCYCLE    12'hb00
`define ADD_MCYCLEH   12'hb80
`define ADD_MISA      12'h301
`define ADD_MTVEC     12'h305
`define ADD_MSCRATCH  12'h340
`define ADD_MEPC      12'h341
`define ADD_MCAUSE    12'h342
`define ADD_MTVAL     12'h343
`define ADD_MSTATUS   12'h300
`define ADD_MVENDORID 12'hf11
`define ADD_MARCHID   12'hf12

`define EXCEPTION_MISALIGNED_FETCH 4'd0
`define EXCEPTION_FETCH_ACCESS 4'd1
`define EXCEPTION_ILLEGAL_INSTRUCTION 4'd2
`define EXCEPTION_BREAKPOINT 4'd3
`define EXCEPTION_MISALIGNED_LOAD 4'd4
`define EXCEPTION_LOAD_ACCESS 4'd5
`define EXCEPTION_MISALIGNED_STORE 4'd6
`define EXCEPTION_STORE_ACCESS 4'd7
`define EXCEPTION_ECALL_UMODE 4'd8
`define EXCEPTION_ECALL_SMODE 4'd9
`define EXCEPTION_FENCEI 4'd14                //RESERVED but used to indicate FENCE.I instruction, not a real exception
`define EXCEPTION_ECALL_MMODE 4'd11
`define EXCEPTION_FETCH_PAGE_FAULT 4'd12
`define EXCEPTION_LOAD_PAGE_FAULT 4'd13
`define EXCEPTION_MRET 4'd14                //RESERVED but used to indicate MRET instruction, not a real exception
`define EXCEPTION_STORE_PAGE_FAULT 4'd15
`define INST_NOP 32'h00000013


`endif

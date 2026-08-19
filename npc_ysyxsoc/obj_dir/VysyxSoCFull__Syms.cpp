// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_APBUart16550.h"
#include "VysyxSoCFull_AXI4RAM.h"
#include "VysyxSoCFull_ysyx_26010011.h"
#include "VysyxSoCFull_uart_top_apb.h"
#include "VysyxSoCFull_mem_2048x32.h"
#include "VysyxSoCFull_ysyx_26010011_LSU.h"
#include "VysyxSoCFull_ysyx_26010011_IFU.h"
#include "VysyxSoCFull_ysyx_26010011_GPRs.h"
#include "VysyxSoCFull_ysyx_26010011_CSRs.h"
#include "VysyxSoCFull_ysyx_26010011_IF_ID_pipeline.h"
#include "VysyxSoCFull_ysyx_26010011_ID_EX_pipeline.h"
#include "VysyxSoCFull_ysyx_26010011_EX_LS_pipeline.h"
#include "VysyxSoCFull_ysyx_26010011_LS_WB_pipeline.h"
#include "VysyxSoCFull_uart_regs.h"
#include "VysyxSoCFull_ysyx_26010011_IFU_icache__pi1.h"

// FUNCTIONS
VysyxSoCFull__Syms::~VysyxSoCFull__Syms()
{
}

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__ysyxSoCFull{this, Verilated::catName(namep, "ysyxSoCFull")}
    , TOP__ysyxSoCFull__asic{this, Verilated::catName(namep, "ysyxSoCFull.asic")}
    , TOP__ysyxSoCFull__asic__axi4ram{this, Verilated::catName(namep, "ysyxSoCFull.asic.axi4ram")}
    , TOP__ysyxSoCFull__asic__axi4ram__mem_ext{this, Verilated::catName(namep, "ysyxSoCFull.asic.axi4ram.mem_ext")}
    , TOP__ysyxSoCFull__asic__cpu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu")}
    , TOP__ysyxSoCFull__asic__cpu__cpu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.CSR_0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.EX_LS_inst")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.GPR_0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.ID_EX_inst")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.IFU_0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.IFU_0.icache_u0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.IF_ID_inst")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.LSU_0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.LS_WB_inst")}
    , TOP__ysyxSoCFull__asic__luart{this, Verilated::catName(namep, "ysyxSoCFull.asic.luart")}
    , TOP__ysyxSoCFull__asic__luart__muart{this, Verilated::catName(namep, "ysyxSoCFull.asic.luart.muart")}
    , TOP__ysyxSoCFull__asic__luart__muart__Uregs{this, Verilated::catName(namep, "ysyxSoCFull.asic.luart.muart.Uregs")}
{
    // Check resources
    Verilated::stackCheck(2320);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.ysyxSoCFull = &TOP__ysyxSoCFull;
    TOP__ysyxSoCFull.asic = &TOP__ysyxSoCFull__asic;
    TOP__ysyxSoCFull__asic.axi4ram = &TOP__ysyxSoCFull__asic__axi4ram;
    TOP__ysyxSoCFull__asic__axi4ram.mem_ext = &TOP__ysyxSoCFull__asic__axi4ram__mem_ext;
    TOP__ysyxSoCFull__asic.cpu = &TOP__ysyxSoCFull__asic__cpu;
    TOP__ysyxSoCFull__asic__cpu.cpu = &TOP__ysyxSoCFull__asic__cpu__cpu;
    TOP__ysyxSoCFull__asic__cpu__cpu.CSR_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0;
    TOP__ysyxSoCFull__asic__cpu__cpu.EX_LS_inst = &TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst;
    TOP__ysyxSoCFull__asic__cpu__cpu.GPR_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0;
    TOP__ysyxSoCFull__asic__cpu__cpu.ID_EX_inst = &TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst;
    TOP__ysyxSoCFull__asic__cpu__cpu.IFU_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0;
    TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.icache_u0 = &TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0;
    TOP__ysyxSoCFull__asic__cpu__cpu.IF_ID_inst = &TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst;
    TOP__ysyxSoCFull__asic__cpu__cpu.LSU_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0;
    TOP__ysyxSoCFull__asic__cpu__cpu.LS_WB_inst = &TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst;
    TOP__ysyxSoCFull__asic.luart = &TOP__ysyxSoCFull__asic__luart;
    TOP__ysyxSoCFull__asic__luart.muart = &TOP__ysyxSoCFull__asic__luart__muart;
    TOP__ysyxSoCFull__asic__luart__muart.Uregs = &TOP__ysyxSoCFull__asic__luart__muart__Uregs;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__ysyxSoCFull.__Vconfigure(true);
    TOP__ysyxSoCFull__asic.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__axi4ram.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__luart.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__luart__muart.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__luart__muart__Uregs.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4frag.configure(this, name(), "ysyxSoCFull.asic.axi4frag", "axi4frag", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4ram__mem_ext.configure(this, name(), "ysyxSoCFull.asic.axi4ram.mem_ext", "mem_ext", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar.configure(this, name(), "ysyxSoCFull.asic.axi4xbar", "axi4xbar", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar_1.configure(this, name(), "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank.configure(this, name(), "ysyxSoCFull.asic.axi4yank", "axi4yank", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu", "cpu", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.CSR_0", "CSR_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.EX_LS_inst", "EX_LS_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__GPR_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.GPR_0", "GPR_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.ID_EX_inst", "ID_EX_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.IFU_0", "IFU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.IFU_0.icache_u0", "icache_u0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.IF_ID_inst", "IF_ID_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.LSU_0", "LSU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.LS_WB_inst", "LS_WB_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lmrom.configure(this, name(), "ysyxSoCFull.asic.lmrom", "lmrom", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__luart__muart__Uregs.configure(this, name(), "ysyxSoCFull.asic.luart.muart.Uregs", "Uregs", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash.configure(this, name(), "ysyxSoCFull.flash", "flash", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash__flash_cmd_i.configure(this, name(), "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__psram.configure(this, name(), "ysyxSoCFull.psram", "psram", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__sdram__sdram_32_0__u_sdram_16_H.configure(this, name(), "ysyxSoCFull.sdram.sdram_32_0.u_sdram_16_H", "u_sdram_16_H", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__sdram__sdram_32_0__u_sdram_16_L.configure(this, name(), "ysyxSoCFull.sdram.sdram_32_0.u_sdram_16_L", "u_sdram_16_L", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__sdram__sdram_32_1__u_sdram_16_H.configure(this, name(), "ysyxSoCFull.sdram.sdram_32_1.u_sdram_16_H", "u_sdram_16_H", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__sdram__sdram_32_1__u_sdram_16_L.configure(this, name(), "ysyxSoCFull.sdram.sdram_32_1.u_sdram_16_L", "u_sdram_16_L", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyxSoCFull__asic__axi4ram__mem_ext.varInsert(__Vfinal,"Memory", &(TOP__ysyxSoCFull__asic__axi4ram__mem_ext.Memory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,2047 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"flush_exception_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu.flush_exception_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"flush_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu.flush_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"idu_isRAW", &(TOP__ysyxSoCFull__asic__cpu__cpu.idu_isRAW), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"reset", &(TOP__ysyxSoCFull__asic__cpu__cpu.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"tb_FINAL_inst", &(TOP__ysyxSoCFull__asic__cpu__cpu.tb_FINAL_inst), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"tb_FINAL_npc", &(TOP__ysyxSoCFull__asic__cpu__cpu.tb_FINAL_npc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"tb_FINAL_pc", &(TOP__ysyxSoCFull__asic__cpu__cpu.tb_FINAL_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"tb_alu_result", &(TOP__ysyxSoCFull__asic__cpu__cpu.tb_alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"tb_dnpc_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu.tb_dnpc_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"tb_isFINAL", &(TOP__ysyxSoCFull__asic__cpu__cpu.tb_isFINAL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"tb_isMEM", &(TOP__ysyxSoCFull__asic__cpu__cpu.tb_isMEM), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MARCHID", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MARCHID), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MCAUSE", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCAUSE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MCYCLE", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MCYCLEH", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MCYCLEH), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MEPC", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MEPC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MISA", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MISA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MSCRATCH", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSCRATCH), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MSTATUS", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MSTATUS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MTVAL", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVAL), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MTVEC", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MTVEC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0.varInsert(__Vfinal,"CSR_MVENDORID", &(TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0.CSR_MVENDORID), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.varInsert(__Vfinal,"lsu_in_bus_pc", &(TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_bus_pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.varInsert(__Vfinal,"lsu_in_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__GPR_0.varInsert(__Vfinal,"GPR", &(TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.GPR), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.varInsert(__Vfinal,"exu_in_bus_pc", &(TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.varInsert(__Vfinal,"exu_in_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"PC", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"debug_IFU_get_inst", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_get_inst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"debug_IFU_is_hit", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"debug_IFU_is_hit_inst", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_IFU_is_hit_inst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"ifu_out_bus_fetching", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_fetching), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"ifu_out_bus_pc", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_bus_pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"ifu_out_ready", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_ready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"ifu_out_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.ifu_out_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"rdata", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.varInsert(__Vfinal,"pc_flush", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.pc_flush), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.varInsert(__Vfinal,"pc_flushed", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0.pc_flushed), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.varInsert(__Vfinal,"idu_in_bus_pc", &(TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_bus_pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.varInsert(__Vfinal,"idu_in_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.idu_in_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"b_fire", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.b_fire), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"debug_LSU_LOADING", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_LOADING), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"debug_LSU_LOAD_FINAL", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_LOAD_FINAL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"debug_LSU_WRITE_FINAL", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_WRITE_FINAL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"debug_LSU_WRITING", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.debug_LSU_WRITING), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"lsu_out_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_out_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"r_fire", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.r_fire), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"state", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.varInsert(__Vfinal,"wbu_in_bus_pc", &(TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_bus_pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.varInsert(__Vfinal,"wbu_in_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__luart__muart__Uregs.varInsert(__Vfinal,"lcr", &(TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_ysyxSoCFull__asic__luart__muart__Uregs.varInsert(__Vfinal,"lsr", &(TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
    }
}

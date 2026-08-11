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
#include "VysyxSoCFull_ysyx_26010011.h"
#include "VysyxSoCFull_uart_top_apb.h"
#include "VysyxSoCFull_ysyx_26010011_IFU.h"
#include "VysyxSoCFull_ysyx_26010011_IDU.h"
#include "VysyxSoCFull_ysyx_26010011_LSU.h"
#include "VysyxSoCFull_ysyx_26010011_REG.h"
#include "VysyxSoCFull_uart_regs.h"

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
    , TOP__ysyxSoCFull__asic__cpu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu")}
    , TOP__ysyxSoCFull__asic__cpu__cpu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.IDU_0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.IFU_0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.LSU_0")}
    , TOP__ysyxSoCFull__asic__cpu__cpu__REG_0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.REG_0")}
    , TOP__ysyxSoCFull__asic__luart{this, Verilated::catName(namep, "ysyxSoCFull.asic.luart")}
    , TOP__ysyxSoCFull__asic__luart__muart{this, Verilated::catName(namep, "ysyxSoCFull.asic.luart.muart")}
    , TOP__ysyxSoCFull__asic__luart__muart__Uregs{this, Verilated::catName(namep, "ysyxSoCFull.asic.luart.muart.Uregs")}
{
    // Check resources
    Verilated::stackCheck(1392);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.ysyxSoCFull = &TOP__ysyxSoCFull;
    TOP__ysyxSoCFull.asic = &TOP__ysyxSoCFull__asic;
    TOP__ysyxSoCFull__asic.cpu = &TOP__ysyxSoCFull__asic__cpu;
    TOP__ysyxSoCFull__asic__cpu.cpu = &TOP__ysyxSoCFull__asic__cpu__cpu;
    TOP__ysyxSoCFull__asic__cpu__cpu.IDU_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0;
    TOP__ysyxSoCFull__asic__cpu__cpu.IFU_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0;
    TOP__ysyxSoCFull__asic__cpu__cpu.LSU_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0;
    TOP__ysyxSoCFull__asic__cpu__cpu.REG_0 = &TOP__ysyxSoCFull__asic__cpu__cpu__REG_0;
    TOP__ysyxSoCFull__asic.luart = &TOP__ysyxSoCFull__asic__luart;
    TOP__ysyxSoCFull__asic__luart.muart = &TOP__ysyxSoCFull__asic__luart__muart;
    TOP__ysyxSoCFull__asic__luart__muart.Uregs = &TOP__ysyxSoCFull__asic__luart__muart__Uregs;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__ysyxSoCFull.__Vconfigure(true);
    TOP__ysyxSoCFull__asic.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__luart.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__luart__muart.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__luart__muart__Uregs.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4frag.configure(this, name(), "ysyxSoCFull.asic.axi4frag", "axi4frag", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar_1.configure(this, name(), "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank.configure(this, name(), "ysyxSoCFull.asic.axi4yank", "axi4yank", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu", "cpu", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__IDU_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.IDU_0", "IDU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.IFU_0", "IFU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.LSU_0", "LSU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.REG_0", "REG_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lmrom.configure(this, name(), "ysyxSoCFull.asic.lmrom", "lmrom", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__luart__muart__Uregs.configure(this, name(), "ysyxSoCFull.asic.luart.muart.Uregs", "Uregs", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash.configure(this, name(), "ysyxSoCFull.flash", "flash", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash__flash_cmd_i.configure(this, name(), "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__psram.configure(this, name(), "ysyxSoCFull.psram", "psram", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__sdram.configure(this, name(), "ysyxSoCFull.sdram", "sdram", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"PC", &(TOP__ysyxSoCFull__asic__cpu__cpu.PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"dnpc", &(TOP__ysyxSoCFull__asic__cpu__cpu.dnpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"reset", &(TOP__ysyxSoCFull__asic__cpu__cpu.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"snpc", &(TOP__ysyxSoCFull__asic__cpu__cpu.snpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IDU_0.varInsert(__Vfinal,"state", &(TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"PC", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0.varInsert(__Vfinal,"state", &(TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"lsu_addr", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"lsu_reqEN", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_reqEN), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"lsu_wdata", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"lsu_wen", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"lsu_wmask", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0.varInsert(__Vfinal,"state", &(TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MARCHID", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MARCHID), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MCAUSE", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCAUSE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MCYCLE", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MCYCLEH", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLEH), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MEPC", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MSTATUS", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MSTATUS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MTVEC", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"CSR_MVENDORID", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MVENDORID), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0.varInsert(__Vfinal,"GPR", &(TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,31,0);
        __Vscope_ysyxSoCFull__asic__luart__muart__Uregs.varInsert(__Vfinal,"lcr", &(TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_ysyxSoCFull__asic__luart__muart__Uregs.varInsert(__Vfinal,"lsr", &(TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
    }
}

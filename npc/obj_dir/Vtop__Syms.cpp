// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop_IDU.h"
#include "Vtop_IFU.h"
#include "Vtop___024unit.h"
#include "Vtop_LSU.h"
#include "Vtop_REG.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__top{this, Verilated::catName(namep, "top")}
    , TOP__top__IDU_0{this, Verilated::catName(namep, "top.IDU_0")}
    , TOP__top__IFU_0{this, Verilated::catName(namep, "top.IFU_0")}
    , TOP__top__LSU_0{this, Verilated::catName(namep, "top.LSU_0")}
    , TOP__top__REG_0{this, Verilated::catName(namep, "top.REG_0")}
{
    // Check resources
    Verilated::stackCheck(478);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.top = &TOP__top;
    TOP__top.IDU_0 = &TOP__top__IDU_0;
    TOP__top.IFU_0 = &TOP__top__IFU_0;
    TOP__top.LSU_0 = &TOP__top__LSU_0;
    TOP__top.REG_0 = &TOP__top__REG_0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__top.__Vconfigure(true);
    TOP__top__IDU_0.__Vconfigure(true);
    TOP__top__IFU_0.__Vconfigure(true);
    TOP__top__LSU_0.__Vconfigure(true);
    TOP__top__REG_0.__Vconfigure(true);
    // Setup scopes
    __Vscope_top.configure(this, name(), "top", "top", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__IDU_0.configure(this, name(), "top.IDU_0", "IDU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__IFU_0.configure(this, name(), "top.IFU_0", "IFU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__LSU_0.configure(this, name(), "top.LSU_0", "LSU_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__REG_0.configure(this, name(), "top.REG_0", "REG_0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top.varInsert(__Vfinal,"PC", &(TOP__top.PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"dnpc", &(TOP__top.dnpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"snpc", &(TOP__top.snpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__IDU_0.varInsert(__Vfinal,"state", &(TOP__top__IDU_0.state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top__IFU_0.varInsert(__Vfinal,"state", &(TOP__top__IFU_0.state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top__LSU_0.varInsert(__Vfinal,"state", &(TOP__top__LSU_0.state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MARCHID", &(TOP__top__REG_0.CSR_MARCHID), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MCAUSE", &(TOP__top__REG_0.CSR_MCAUSE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MCYCLE", &(TOP__top__REG_0.CSR_MCYCLE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MCYCLEH", &(TOP__top__REG_0.CSR_MCYCLEH), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MEPC", &(TOP__top__REG_0.CSR_MEPC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MSTATUS", &(TOP__top__REG_0.CSR_MSTATUS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MTVEC", &(TOP__top__REG_0.CSR_MTVEC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"CSR_MVENDORID", &(TOP__top__REG_0.CSR_MVENDORID), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top__REG_0.varInsert(__Vfinal,"GPR", &(TOP__top__REG_0.GPR), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,31,0);
    }
}

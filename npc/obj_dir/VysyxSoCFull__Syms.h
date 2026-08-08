// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYXSOCFULL__SYMS_H_
#define VERILATED_VYSYXSOCFULL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VysyxSoCFull.h"

// INCLUDE MODULE CLASSES
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_AXI4RAM.h"
#include "VysyxSoCFull_ysyx_26010011.h"
#include "VysyxSoCFull_mem_2048x32.h"
#include "VysyxSoCFull_ysyx_26010011_IFU.h"
#include "VysyxSoCFull_ysyx_26010011_IDU.h"
#include "VysyxSoCFull_ysyx_26010011_LSU.h"
#include "VysyxSoCFull_ysyx_26010011_REG.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VysyxSoCFull* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VysyxSoCFull___024root         TOP;
    VysyxSoCFull___024unit         TOP____024unit;
    VysyxSoCFull_ysyxSoCFull       TOP__ysyxSoCFull;
    VysyxSoCFull_ysyxSoCASIC       TOP__ysyxSoCFull__asic;
    VysyxSoCFull_AXI4RAM           TOP__ysyxSoCFull__asic__axi4ram;
    VysyxSoCFull_mem_2048x32       TOP__ysyxSoCFull__asic__axi4ram__mem_ext;
    VysyxSoCFull_CPU               TOP__ysyxSoCFull__asic__cpu;
    VysyxSoCFull_ysyx_26010011     TOP__ysyxSoCFull__asic__cpu__cpu;
    VysyxSoCFull_ysyx_26010011_IDU TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0;
    VysyxSoCFull_ysyx_26010011_IFU TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0;
    VysyxSoCFull_ysyx_26010011_LSU TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0;
    VysyxSoCFull_ysyx_26010011_REG TOP__ysyxSoCFull__asic__cpu__cpu__REG_0;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi42apb;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4ram__mem_ext;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__IDU_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__REG_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__lmrom;
    VerilatedScope __Vscope_ysyxSoCFull__flash;
    VerilatedScope __Vscope_ysyxSoCFull__flash__flash_cmd_i;

    // CONSTRUCTORS
    VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp);
    ~VysyxSoCFull__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

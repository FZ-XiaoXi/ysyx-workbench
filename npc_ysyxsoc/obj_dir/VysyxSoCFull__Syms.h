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
#include "VysyxSoCFull_APBUart16550.h"
#include "VysyxSoCFull_ysyx_26010011.h"
#include "VysyxSoCFull_uart_top_apb.h"
#include "VysyxSoCFull_ysyx_26010011_IFU.h"
#include "VysyxSoCFull_ysyx_26010011_LSU.h"
#include "VysyxSoCFull_ysyx_26010011_GPRs.h"
#include "VysyxSoCFull_ysyx_26010011_CSRs.h"
#include "VysyxSoCFull_ysyx_26010011_IF_ID_pipeline.h"
#include "VysyxSoCFull_ysyx_26010011_ID_EX_pipeline.h"
#include "VysyxSoCFull_ysyx_26010011_EX_LS_pipeline.h"
#include "VysyxSoCFull_ysyx_26010011_LS_WB_pipeline.h"
#include "VysyxSoCFull_uart_regs.h"
#include "VysyxSoCFull_ysyx_26010011_IFU_icache.h"

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
    VysyxSoCFull_CPU               TOP__ysyxSoCFull__asic__cpu;
    VysyxSoCFull_ysyx_26010011     TOP__ysyxSoCFull__asic__cpu__cpu;
    VysyxSoCFull_ysyx_26010011_CSRs TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0;
    VysyxSoCFull_ysyx_26010011_EX_LS_pipeline TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst;
    VysyxSoCFull_ysyx_26010011_GPRs TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0;
    VysyxSoCFull_ysyx_26010011_ID_EX_pipeline TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst;
    VysyxSoCFull_ysyx_26010011_IFU TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0;
    VysyxSoCFull_ysyx_26010011_IFU_icache TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0;
    VysyxSoCFull_ysyx_26010011_IF_ID_pipeline TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst;
    VysyxSoCFull_ysyx_26010011_LSU TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0;
    VysyxSoCFull_ysyx_26010011_LS_WB_pipeline TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst;
    VysyxSoCFull_APBUart16550      TOP__ysyxSoCFull__asic__luart;
    VysyxSoCFull_uart_top_apb      TOP__ysyxSoCFull__asic__luart__muart;
    VysyxSoCFull_uart_regs         TOP__ysyxSoCFull__asic__luart__muart__Uregs;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi42apb;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__CSR_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__EX_LS_inst;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__GPR_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__ID_EX_inst;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU_0__icache_u0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__IF_ID_inst;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU_0;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__LS_WB_inst;
    VerilatedScope __Vscope_ysyxSoCFull__asic__lmrom;
    VerilatedScope __Vscope_ysyxSoCFull__asic__luart__muart__Uregs;
    VerilatedScope __Vscope_ysyxSoCFull__flash;
    VerilatedScope __Vscope_ysyxSoCFull__flash__flash_cmd_i;
    VerilatedScope __Vscope_ysyxSoCFull__psram;
    VerilatedScope __Vscope_ysyxSoCFull__sdram__sdram_32_0__u_sdram_16_H;
    VerilatedScope __Vscope_ysyxSoCFull__sdram__sdram_32_0__u_sdram_16_L;
    VerilatedScope __Vscope_ysyxSoCFull__sdram__sdram_32_1__u_sdram_16_H;
    VerilatedScope __Vscope_ysyxSoCFull__sdram__sdram_32_1__u_sdram_16_L;

    // CONSTRUCTORS
    VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp);
    ~VysyxSoCFull__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

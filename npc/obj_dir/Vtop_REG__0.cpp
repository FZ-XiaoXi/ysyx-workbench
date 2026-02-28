// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit();

void Vtop_REG___ico_sequent__TOP__top__REG_0__0(Vtop_REG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_REG___ico_sequent__TOP__top__REG_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__WCSREN = ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRS) 
                               | ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRW) 
                                  | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRC)));
    if (((IData)(vlSelfRef.__PVT__WCSREN) & ((0x0b00U 
                                              == (vlSymsp->TOP__top.PC_command 
                                                  >> 0x00000014U)) 
                                             | (0x0b80U 
                                                == 
                                                (vlSymsp->TOP__top.PC_command 
                                                 >> 0x00000014U))))) {
        Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit();
    }
}

void Vtop_REG___nba_sequent__TOP__top__REG_0__0(Vtop_REG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_REG___nba_sequent__TOP__top__REG_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__CSR_MCYCLE;
    __Vdly__CSR_MCYCLE = 0;
    IData/*31:0*/ __Vdly__CSR_MCYCLEH;
    __Vdly__CSR_MCYCLEH = 0;
    CData/*0:0*/ __VdlySet__GPR__v0;
    __VdlySet__GPR__v0 = 0;
    IData/*31:0*/ __VdlyVal__GPR__v32;
    __VdlyVal__GPR__v32 = 0;
    CData/*4:0*/ __VdlyDim0__GPR__v32;
    __VdlyDim0__GPR__v32 = 0;
    CData/*0:0*/ __VdlySet__GPR__v32;
    __VdlySet__GPR__v32 = 0;
    // Body
    __Vdly__CSR_MCYCLE = vlSelfRef.CSR_MCYCLE;
    __Vdly__CSR_MCYCLEH = vlSelfRef.CSR_MCYCLEH;
    __VdlySet__GPR__v0 = 0U;
    __VdlySet__GPR__v32 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x00000020U;
        __Vdly__CSR_MCYCLE = 0U;
        __Vdly__CSR_MCYCLEH = 0U;
        __VdlySet__GPR__v0 = 1U;
        vlSelfRef.CSR_MARCHID = 0x018ce19bU;
        vlSelfRef.CSR_MVENDORID = 0x79737978U;
        vlSelfRef.CSR_MSTATUS = 0x00001800U;
        vlSelfRef.CSR_MCAUSE = 0U;
        vlSelfRef.CSR_MTVEC = 0U;
        vlSelfRef.CSR_MEPC = 0U;
    } else {
        __Vdly__CSR_MCYCLE = ((IData)(1U) + vlSelfRef.CSR_MCYCLE);
        __Vdly__CSR_MCYCLEH = ((0xffffffffU == vlSelfRef.CSR_MCYCLE)
                                ? ((IData)(1U) + vlSelfRef.CSR_MCYCLEH)
                                : vlSelfRef.CSR_MCYCLEH);
        __VdlyVal__GPR__v32 = ((((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLOAD) 
                                 | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isWRITE)) 
                                | (IData)(vlSelfRef.__PVT__WCSREN))
                                ? ((0U == (0x0000001fU 
                                           & (vlSymsp->TOP__top.PC_command 
                                              >> 7U)))
                                    ? 0U : ((IData)(vlSelfRef.__PVT__WCSREN)
                                             ? vlSymsp->TOP.CSR_data
                                             : vlSymsp->TOP.reg_data))
                                : vlSelfRef.GPR[(0x0000001fU 
                                                 & (vlSymsp->TOP__top.PC_command 
                                                    >> 7U))]);
        __VdlyDim0__GPR__v32 = (0x0000001fU & (vlSymsp->TOP__top.PC_command 
                                               >> 7U));
        __VdlySet__GPR__v32 = 1U;
        if (vlSelfRef.__PVT__WCSREN) {
            if ((0x0305U != (vlSymsp->TOP__top.PC_command 
                             >> 0x00000014U))) {
                if ((0x0341U != (vlSymsp->TOP__top.PC_command 
                                 >> 0x00000014U))) {
                    if ((0x0342U != (vlSymsp->TOP__top.PC_command 
                                     >> 0x00000014U))) {
                        if ((0x0300U == (vlSymsp->TOP__top.PC_command 
                                         >> 0x00000014U))) {
                            vlSelfRef.CSR_MSTATUS = vlSymsp->TOP.reg_data;
                        }
                    }
                    if ((0x0342U == (vlSymsp->TOP__top.PC_command 
                                     >> 0x00000014U))) {
                        vlSelfRef.CSR_MCAUSE = vlSymsp->TOP.reg_data;
                    }
                }
                if ((0x0341U == (vlSymsp->TOP__top.PC_command 
                                 >> 0x00000014U))) {
                    vlSelfRef.CSR_MEPC = vlSymsp->TOP.reg_data;
                }
            }
            if ((0x0305U == (vlSymsp->TOP__top.PC_command 
                             >> 0x00000014U))) {
                vlSelfRef.CSR_MTVEC = vlSymsp->TOP.reg_data;
            }
        } else if ((0x00000073U == vlSymsp->TOP__top.PC_command)) {
            vlSelfRef.CSR_MCAUSE = 0x0000000bU;
            vlSelfRef.CSR_MEPC = vlSymsp->TOP__top.PC;
        }
    }
    vlSelfRef.CSR_MCYCLE = __Vdly__CSR_MCYCLE;
    vlSelfRef.CSR_MCYCLEH = __Vdly__CSR_MCYCLEH;
    if (__VdlySet__GPR__v0) {
        vlSelfRef.GPR[0U] = 0U;
        vlSelfRef.GPR[1U] = 0U;
        vlSelfRef.GPR[2U] = 0U;
        vlSelfRef.GPR[3U] = 0U;
        vlSelfRef.GPR[4U] = 0U;
        vlSelfRef.GPR[5U] = 0U;
        vlSelfRef.GPR[6U] = 0U;
        vlSelfRef.GPR[7U] = 0U;
        vlSelfRef.GPR[8U] = 0U;
        vlSelfRef.GPR[9U] = 0U;
        vlSelfRef.GPR[0x0aU] = 0U;
        vlSelfRef.GPR[0x0bU] = 0U;
        vlSelfRef.GPR[0x0cU] = 0U;
        vlSelfRef.GPR[0x0dU] = 0U;
        vlSelfRef.GPR[0x0eU] = 0U;
        vlSelfRef.GPR[0x0fU] = 0U;
        vlSelfRef.GPR[0x10U] = 0U;
        vlSelfRef.GPR[0x11U] = 0U;
        vlSelfRef.GPR[0x12U] = 0U;
        vlSelfRef.GPR[0x13U] = 0U;
        vlSelfRef.GPR[0x14U] = 0U;
        vlSelfRef.GPR[0x15U] = 0U;
        vlSelfRef.GPR[0x16U] = 0U;
        vlSelfRef.GPR[0x17U] = 0U;
        vlSelfRef.GPR[0x18U] = 0U;
        vlSelfRef.GPR[0x19U] = 0U;
        vlSelfRef.GPR[0x1aU] = 0U;
        vlSelfRef.GPR[0x1bU] = 0U;
        vlSelfRef.GPR[0x1cU] = 0U;
        vlSelfRef.GPR[0x1dU] = 0U;
        vlSelfRef.GPR[0x1eU] = 0U;
        vlSelfRef.GPR[0x1fU] = 0U;
    }
    if (__VdlySet__GPR__v32) {
        vlSelfRef.GPR[__VdlyDim0__GPR__v32] = __VdlyVal__GPR__v32;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0(VysyxSoCFull_ysyx_26010011_REG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__CSR_BUS = ((((0x0b00U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                               >> 0x00000014U)) 
                                  | (0x0b80U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U))) 
                                 | (((0x0305U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U)) 
                                     | (0x0341U == 
                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                         >> 0x00000014U))) 
                                    | ((0x0342U == 
                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                         >> 0x00000014U)) 
                                       | ((0x0300U 
                                           == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                               >> 0x00000014U)) 
                                          | ((0x0f11U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U)) 
                                             | (0x0f12U 
                                                == 
                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U)))))))
                                 ? ((0x0b00U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U))
                                     ? vlSelfRef.CSR_MCYCLE
                                     : ((0x0b80U == 
                                         (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                          >> 0x00000014U))
                                         ? vlSelfRef.CSR_MCYCLEH
                                         : ((0x0305U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U))
                                             ? vlSelfRef.CSR_MTVEC
                                             : ((0x0341U 
                                                 == 
                                                 (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U))
                                                 ? vlSelfRef.CSR_MEPC
                                                 : 
                                                ((0x0342U 
                                                  == 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 0x00000014U))
                                                  ? vlSelfRef.CSR_MCAUSE
                                                  : 
                                                 ((0x0300U 
                                                   == 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                    >> 0x00000014U))
                                                   ? vlSelfRef.CSR_MSTATUS
                                                   : 
                                                  ((0x0f11U 
                                                    == 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                     >> 0x00000014U))
                                                    ? vlSelfRef.CSR_MVENDORID
                                                    : vlSelfRef.CSR_MARCHID)))))))
                                 : 0x2b2b2b2bU);
}

void VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__1(VysyxSoCFull_ysyx_26010011_REG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gpr_WEN = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isLOAD)
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_final)
                                           ? 1U : 0U)
                                       : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isWRITE) 
                                           | (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR)))
                                           ? 1U : 0U)));
}

void VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__2(VysyxSoCFull_ysyx_26010011_REG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_REG___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__inData = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isLOAD)
                                ? ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                    ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                        ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val
                                                : 0xffffffffU)
                                            : 0xffffffffU)
                                        : 0xffffffffU)
                                    : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                        ? 0xffffffffU
                                        : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_15)
                                                    ? 
                                                   (0x0000ffffU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                    >> 0x0000000fU)))) 
                                                     << 0x00000010U) 
                                                    | (0x0000ffffU 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                                : 0xffffffffU)
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_15)
                                                    ? 
                                                   (0x000000ffU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0x000000ffU 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                                : 0xffffffffU))))
                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isJUMP)
                                    ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.snpc
                                    : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isWRITE)
                                        ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_20) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU)))
                                            ? (1U & 
                                               (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isGREATER))))
                                            : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr)
                                        : ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))
                                            ? ((1U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))
                                                ? (vlSelfRef.__PVT__CSR_BUS 
                                                   | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))
                                                    ? 
                                                   ((~ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr) 
                                                    & vlSelfRef.__PVT__CSR_BUS)
                                                    : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr))
                                            : 0xf0f0f0f0U))));
}

void VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(IData/*31:0*/ reason);

void VysyxSoCFull_ysyx_26010011_REG___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0(VysyxSoCFull_ysyx_26010011_REG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_REG___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid))) {
        if (((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR)) 
             & ((0x0b00U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                             >> 0x00000014U)) | (0x0b80U 
                                                 == 
                                                 (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U))))) {
            VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(3U);
        }
    }
    __VdlySet__GPR__v0 = 0U;
    __VdlySet__GPR__v32 = 0U;
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
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
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid) {
        __Vdly__CSR_MCYCLE = ((IData)(1U) + vlSelfRef.CSR_MCYCLE);
        __Vdly__CSR_MCYCLEH = ((0xffffffffU == vlSelfRef.CSR_MCYCLE)
                                ? ((IData)(1U) + vlSelfRef.CSR_MCYCLEH)
                                : vlSelfRef.CSR_MCYCLEH);
        if (((IData)(vlSelfRef.__PVT__gpr_WEN) | (0U 
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR)))) {
            __VdlyVal__GPR__v32 = ((0U == (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 7U)))
                                    ? 0U : ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))
                                             ? vlSelfRef.__PVT__CSR_BUS
                                             : vlSelfRef.__PVT__inData));
            __VdlyDim0__GPR__v32 = (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 7U));
            __VdlySet__GPR__v32 = 1U;
        }
        if ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))) {
            if ((0x0305U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                             >> 0x00000014U))) {
                if ((0x0341U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                 >> 0x00000014U))) {
                    if ((0x0342U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                     >> 0x00000014U))) {
                        if ((0x0300U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                         >> 0x00000014U))) {
                            vlSelfRef.CSR_MSTATUS = vlSelfRef.__PVT__inData;
                        }
                    }
                    if ((0x0342U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                     >> 0x00000014U))) {
                        vlSelfRef.CSR_MCAUSE = vlSelfRef.__PVT__inData;
                    }
                }
                if ((0x0341U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                 >> 0x00000014U))) {
                    vlSelfRef.CSR_MEPC = vlSelfRef.__PVT__inData;
                }
            }
            if ((0x0305U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                             >> 0x00000014U))) {
                vlSelfRef.CSR_MTVEC = vlSelfRef.__PVT__inData;
            }
        } else if ((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) {
            vlSelfRef.CSR_MCAUSE = 0x0000000bU;
            vlSelfRef.CSR_MEPC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.PC;
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

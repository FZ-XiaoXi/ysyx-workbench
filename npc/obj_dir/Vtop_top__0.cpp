// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP.imm
                                          : vlSymsp->TOP.lsu_wdata);
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)
                                     ? (~ (QData)((IData)(vlSymsp->TOP.EXU_inB)))
                                     : (QData)((IData)(vlSymsp->TOP.EXU_inB))));
    vlSelfRef.__PVT__COMP_0__DOT__isEQUAL = (0xffffffffU 
                                             == (~ 
                                                 (vlSymsp->TOP.rs1_val 
                                                  ^ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSymsp->TOP.rs1_val 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__isGREATER = (1U & 
                                               ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((~ (IData)(
                                                            (1ULL 
                                                             & ((1ULL 
                                                                 + 
                                                                 ((~ (QData)((IData)(vlSelfRef.__PVT__COMP_0__DOT__inB))) 
                                                                  + (QData)((IData)(vlSymsp->TOP.rs1_val)))) 
                                                                >> 0x00000020U)))) 
                                                 & (0U 
                                                    != vlSelfRef.__PVT__COMP_0__DOT__out))
                                                 : 
                                                ((~ 
                                                  (((vlSymsp->TOP.rs1_val 
                                                     ^ vlSelfRef.__PVT__COMP_0__DOT__inB) 
                                                    | vlSelfRef.__PVT__COMP_0__DOT__out) 
                                                   >> 0x0000001fU)) 
                                                 | ((~ 
                                                     (vlSymsp->TOP.rs1_val 
                                                      >> 0x0000001fU)) 
                                                    & (vlSelfRef.__PVT__COMP_0__DOT__inB 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.__PVT__COMP_0__DOT__isGREATER) 
                                                | (IData)(vlSelfRef.__PVT__COMP_0__DOT__isEQUAL));
}

void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dnpc = ((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)
                       ? vlSymsp->TOP__top__REG_0.CSR_MTVEC
                       : ((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)
                           ? vlSymsp->TOP__top__REG_0.CSR_MEPC
                           : vlSymsp->TOP.lsu_addr));
}

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
}

void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin 
        = ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_16) 
           & (0x20U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                        >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_he2b63832_0_0 = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI) 
                                                | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isU) 
                                                   | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB) 
                                                      | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))))));
}

void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP.imm
                                          : vlSymsp->TOP.lsu_wdata);
    vlSelfRef.__PVT__COMP_0__DOT__isEQUAL = (0xffffffffU 
                                             == (~ 
                                                 (vlSymsp->TOP.rs1_val 
                                                  ^ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSymsp->TOP.rs1_val 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__isGREATER = (1U & 
                                               ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((~ (IData)(
                                                            (1ULL 
                                                             & ((1ULL 
                                                                 + 
                                                                 ((~ (QData)((IData)(vlSelfRef.__PVT__COMP_0__DOT__inB))) 
                                                                  + (QData)((IData)(vlSymsp->TOP.rs1_val)))) 
                                                                >> 0x00000020U)))) 
                                                 & (0U 
                                                    != vlSelfRef.__PVT__COMP_0__DOT__out))
                                                 : 
                                                ((~ 
                                                  (((vlSymsp->TOP.rs1_val 
                                                     ^ vlSelfRef.__PVT__COMP_0__DOT__inB) 
                                                    | vlSelfRef.__PVT__COMP_0__DOT__out) 
                                                   >> 0x0000001fU)) 
                                                 | ((~ 
                                                     (vlSymsp->TOP.rs1_val 
                                                      >> 0x0000001fU)) 
                                                    & (vlSelfRef.__PVT__COMP_0__DOT__inB 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.__PVT__COMP_0__DOT__isGREATER) 
                                                | (IData)(vlSelfRef.__PVT__COMP_0__DOT__isEQUAL));
}

void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)
                                     ? (~ (QData)((IData)(vlSymsp->TOP.EXU_inB)))
                                     : (QData)((IData)(vlSymsp->TOP.EXU_inB))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isI)
                                          ? vlSymsp->TOP.imm
                                          : vlSymsp->TOP.LSU_writedata);
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
                                               ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_6)
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
                           : vlSymsp->TOP.LSU_address));
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
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_13;
    IDU_0__DOT____VdfgRegularize_h52656aab_0_13 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_16;
    IDU_0__DOT____VdfgRegularize_h52656aab_0_16 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_17;
    IDU_0__DOT____VdfgRegularize_h52656aab_0_17 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_24;
    IDU_0__DOT____VdfgRegularize_h52656aab_0_24 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_h52656aab_0_26;
    IDU_0__DOT____VdfgRegularize_h52656aab_0_26 = 0;
    // Body
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    vlSelfRef.__PVT__IDU_0__DOT__isSLT = (IData)((0x00002033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isXOR = (IData)((0x00004033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isOR = (IData)((0x00006033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isAND = (IData)((0x00007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTU = (IData)((0x00003033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_19 
        = ((0x17U == (0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRS = (IData)(
                                                   (0x00002073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRW = (IData)(
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRC = (IData)(
                                                   (0x00003073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    IDU_0__DOT____VdfgRegularize_h52656aab_0_17 = (IData)(
                                                          (0x00005033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    IDU_0__DOT____VdfgRegularize_h52656aab_0_16 = (IData)(
                                                          (0x00000033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isU = ((0x37U == (0x0000007fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                        | (0x17U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isSW = (IData)((0x00002023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isSB = (IData)((0x00000023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isSH = (IData)((0x00001023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isBEQ = (IData)((0x00000063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isBNE = (IData)((0x00001063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGE = (IData)((0x00005063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLT = (IData)((0x00004063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isXORI = (IData)((0x00004013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isORI = (IData)((0x00006013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isANDI = (IData)((0x00007013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTIU = (IData)(
                                                   (0x00003013U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isADDI = (IData)((0x00000013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGEU = (IData)((0x00007063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLTU = (IData)((0x00006063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isJALR = (IData)((0x00000067U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isLW = (IData)((0x00002003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isLB = (IData)((3U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isLH = (IData)((0x00001003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isLBU = (IData)((0x00004003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isLHU = (IData)((0x00005003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    IDU_0__DOT____VdfgRegularize_h52656aab_0_26 = (IData)(
                                                          (0x00001000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    IDU_0__DOT____VdfgRegularize_h52656aab_0_13 = (IData)(
                                                          (0x00005013U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSR = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS)
                                           ? 1U : ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC)
                                                     ? 2U
                                                     : 0U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRL = ((IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_17) 
                                          & (0U == 
                                             (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRA = ((IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_17) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isADD = ((IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_16) 
                                          & (0U == 
                                             (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin 
        = ((IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_16) 
           & (0x20U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                        >> 0x00000019U)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_25 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB));
    vlSelfRef.__PVT__IDU_0__DOT__isS = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB) 
                                           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH)));
    vlSelfRef.__VdfgRegularize_he2b63832_1_5 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isXOR));
    vlSelfRef.__VdfgRegularize_he2b63832_1_4 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isOR));
    vlSelfRef.__VdfgRegularize_he2b63832_1_3 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isAND));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_20 
        = ((IData)((0x00002013U == (0x0000707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU));
    IDU_0__DOT____VdfgRegularize_h52656aab_0_24 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLTU) 
                                                   | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGEU));
    vlSelfRef.__PVT__IDU_0__DOT__isJUMP = ((0x6fU == 
                                            (0x0000007fU 
                                             & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_21 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLBU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_22 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU));
    vlSelfRef.__PVT__IDU_0__DOT__isSLL = ((0x33U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                          & (IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_26));
    vlSelfRef.__PVT__IDU_0__DOT__isSLLI = ((0x13U == 
                                            (0x0000007fU 
                                             & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                           & (IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_26));
    vlSelfRef.__PVT__IDU_0__DOT__isSRLI = ((IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_13) 
                                           & (0U == 
                                              (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRAI = ((IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_13) 
                                           & (0x20U 
                                              == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_he2b63832_1_6 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLBU) 
                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                                   | ((IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_24) 
                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
                                                         | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU)))));
    vlSelfRef.__PVT__IDU_0__DOT__isB = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBEQ) 
                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBNE) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                                                 | (IData)(IDU_0__DOT____VdfgRegularize_h52656aab_0_24)))));
    vlSelfRef.__PVT__IDU_0__DOT__isLOAD = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLW) 
                                           | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_21) 
                                              | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_22)));
    vlSelfRef.__PVT__IDU_0__DOT__isR = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADD) 
                                        | ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLL) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLT) 
                                                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU) 
                                                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXOR) 
                                                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRL) 
                                                          | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRA) 
                                                             | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isOR) 
                                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isAND))))))))));
    vlSelfRef.__VdfgRegularize_he2b63832_1_0 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLL));
    vlSelfRef.__VdfgRegularize_he2b63832_1_1 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRL));
    vlSelfRef.__VdfgRegularize_he2b63832_1_2 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRA));
    vlSelfRef.__VdfgRegularize_he2b63832_1_7 = ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_19) 
                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR) 
                                                   | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADD) 
                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLW) 
                                                         | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_21) 
                                                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                                               | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
                                                                  | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_25) 
                                                                     | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                                                           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isB)))))))))));
    vlSelfRef.__PVT__IDU_0__DOT__isI = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                        | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_20) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                          | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                             | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR) 
                                                                | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLOAD))))))))));
    vlSelfRef.__PVT__IDU_0__DOT__isWRITE = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isU) 
                                            | ((0x6fU 
                                                == 
                                                (0x0000007fU 
                                                 & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                               | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR) 
                                                  | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                                     | ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_h52656aab_0_20) 
                                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                                          | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isR))))))))))));
    vlSelfRef.__VdfgRegularize_he2b63832_0_0 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isI) 
                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isU) 
                                                   | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isB) 
                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isS) 
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
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isI)
                                          ? vlSymsp->TOP.imm
                                          : vlSymsp->TOP.LSU_writedata);
    vlSelfRef.__PVT__COMP_0__DOT__isEQUAL = (0xffffffffU 
                                             == (~ 
                                                 (vlSymsp->TOP.rs1_val 
                                                  ^ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSymsp->TOP.rs1_val 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__isGREATER = (1U & 
                                               ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_6)
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

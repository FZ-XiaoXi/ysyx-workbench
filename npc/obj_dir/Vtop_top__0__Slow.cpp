// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
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
    vlSelfRef.__PVT__IDU_0__DOT__isSLT = (IData)((0x00002033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
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

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->LSU_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3446524407634464399ull);
    vlSelf->LSU_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15114391294081831391ull);
    vlSelf->LSU_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 66315869969167284ull);
    vlSelf->LSU_writedata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8621591918967330140ull);
    vlSelf->LSU_WEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4139174640315457831ull);
    vlSelf->LSU_REN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2923086650083657279ull);
    vlSelf->LSU_readdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5454595947310901637ull);
    vlSelf->PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    vlSelf->EXU_inA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9531828074647327223ull);
    vlSelf->EXU_inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9377487099893787553ull);
    vlSelf->EXU_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11529933568103740182ull);
    vlSelf->CSR_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5074626129175349301ull);
    vlSelf->rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 544071659820774754ull);
    vlSelf->rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12971079179806023922ull);
    vlSelf->reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2113356192903233237ull);
    vlSelf->imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17436245599429385641ull);
    vlSelf->COMP_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7391533942535881271ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
    vlSelf->__PVT__command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13453452394900071627ull);
    vlSelf->__VdfgRegularize_he2b63832_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15367874221688210060ull);
    vlSelf->__PVT__IDU_0__DOT__isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11233470253092472184ull);
    vlSelf->__PVT__IDU_0__DOT__isWRITE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3095463806045344290ull);
    vlSelf->__PVT__IDU_0__DOT__isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14356706483125983423ull);
    vlSelf->__PVT__IDU_0__DOT__isCSR = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9561066963446711555ull);
    vlSelf->__PVT__IDU_0__DOT__isJALR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5246149202446548276ull);
    vlSelf->__PVT__IDU_0__DOT__isBEQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16052159536828083514ull);
    vlSelf->__PVT__IDU_0__DOT__isBNE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7573166809711900707ull);
    vlSelf->__PVT__IDU_0__DOT__isBLT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1141464623126889649ull);
    vlSelf->__PVT__IDU_0__DOT__isBGE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7802581112442791722ull);
    vlSelf->__PVT__IDU_0__DOT__isBLTU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8219159764997172982ull);
    vlSelf->__PVT__IDU_0__DOT__isBGEU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10767002943737606556ull);
    vlSelf->__PVT__IDU_0__DOT__isLB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14686421087291650575ull);
    vlSelf->__PVT__IDU_0__DOT__isLH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15608676163218457916ull);
    vlSelf->__PVT__IDU_0__DOT__isLW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6035066000229272285ull);
    vlSelf->__PVT__IDU_0__DOT__isLBU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3618939125699111747ull);
    vlSelf->__PVT__IDU_0__DOT__isLHU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11265891556167448282ull);
    vlSelf->__PVT__IDU_0__DOT__isSB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10047481134680103685ull);
    vlSelf->__PVT__IDU_0__DOT__isSH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12813293913198865556ull);
    vlSelf->__PVT__IDU_0__DOT__isSW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548530652802062501ull);
    vlSelf->__PVT__IDU_0__DOT__isADDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 308264836148441354ull);
    vlSelf->__PVT__IDU_0__DOT__isSLTIU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11305976460291018845ull);
    vlSelf->__PVT__IDU_0__DOT__isXORI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12050086381736083045ull);
    vlSelf->__PVT__IDU_0__DOT__isORI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11989650033469134143ull);
    vlSelf->__PVT__IDU_0__DOT__isANDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14991955500157704385ull);
    vlSelf->__PVT__IDU_0__DOT__isSLLI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808129155818158052ull);
    vlSelf->__PVT__IDU_0__DOT__isSRLI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12708252932749187312ull);
    vlSelf->__PVT__IDU_0__DOT__isSRAI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 226138326744667389ull);
    vlSelf->__PVT__IDU_0__DOT__isADD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8334213873409465367ull);
    vlSelf->__PVT__IDU_0__DOT__isSLL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9989061493419673658ull);
    vlSelf->__PVT__IDU_0__DOT__isSLT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17978955048165802060ull);
    vlSelf->__PVT__IDU_0__DOT__isSLTU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2352758174237464652ull);
    vlSelf->__PVT__IDU_0__DOT__isXOR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12928640374879442140ull);
    vlSelf->__PVT__IDU_0__DOT__isSRL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15316912922987016519ull);
    vlSelf->__PVT__IDU_0__DOT__isSRA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5660971777432264299ull);
    vlSelf->__PVT__IDU_0__DOT__isOR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3838239279485465388ull);
    vlSelf->__PVT__IDU_0__DOT__isAND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14356565034287140481ull);
    vlSelf->__PVT__IDU_0__DOT__isMUL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18036492203445108247ull);
    vlSelf->__PVT__IDU_0__DOT__isMULH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14854889311158192348ull);
    vlSelf->__PVT__IDU_0__DOT__isMULHSU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7973178407309227113ull);
    vlSelf->__PVT__IDU_0__DOT__isMULHU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13925527503688309936ull);
    vlSelf->__PVT__IDU_0__DOT__isDIV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1375078672743788475ull);
    vlSelf->__PVT__IDU_0__DOT__isDIVU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12964295156948227219ull);
    vlSelf->__PVT__IDU_0__DOT__isREM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17734828331219909678ull);
    vlSelf->__PVT__IDU_0__DOT__isREMU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13938434389085550834ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812807253477557170ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10186486172149556751ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2600342929540430619ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRWI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16886644062605410102ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRSI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9009933350732455514ull);
    vlSelf->__PVT__IDU_0__DOT__isCSRRCI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17949476902630401196ull);
    vlSelf->__PVT__IDU_0__DOT__isR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6711819318875969728ull);
    vlSelf->__PVT__IDU_0__DOT__isI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17630841040017951095ull);
    vlSelf->__PVT__IDU_0__DOT__isS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11546022891529877817ull);
    vlSelf->__PVT__IDU_0__DOT__isB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 571079182297149072ull);
    vlSelf->__PVT__IDU_0__DOT__isU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18373776593487244617ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_h52656aab_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2042608175490979287ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_h52656aab_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 464384394208359244ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_h52656aab_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15139448762509135639ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_h52656aab_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11600007635572779728ull);
    vlSelf->IDU_0__DOT____VdfgRegularize_h52656aab_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13703792996427327003ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__inB = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 394028622014140529ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1352641279154428879ull);
    vlSelf->__PVT__COMP_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10216836910058307467ull);
    vlSelf->__PVT__COMP_0__DOT__isEQUAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285799449688399837ull);
    vlSelf->__PVT__COMP_0__DOT__isGREATER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17655933437007907191ull);
    vlSelf->__PVT__COMP_0__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917469842835743340ull);
    vlSelf->__VdfgRegularize_he2b63832_1_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6020619778944701572ull);
    vlSelf->__VdfgRegularize_he2b63832_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3045648182282020070ull);
    vlSelf->__VdfgRegularize_he2b63832_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6414229832309245669ull);
    vlSelf->__VdfgRegularize_he2b63832_1_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16732790862733730032ull);
    vlSelf->__VdfgRegularize_he2b63832_1_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5730980687264564274ull);
    vlSelf->__VdfgRegularize_he2b63832_1_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1139083887474313503ull);
    vlSelf->__VdfgRegularize_he2b63832_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5525338034946793190ull);
    vlSelf->__VdfgRegularize_he2b63832_1_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17978336516234933875ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5614032309088458142ull);
}

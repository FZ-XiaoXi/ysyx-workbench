// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0(VysyxSoCFull_ysyx_26010011_IDU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.isPC = ((IData)(vlSelfRef.__VdfgRegularize_hd1728725_0_19) 
                      | (IData)(vlSelfRef.isB));
    vlSelfRef.__VdfgExtracted_h790550e9__0 = ((IData)(vlSelfRef.isLOAD) 
                                              | (IData)(vlSelfRef.isSTORE));
    vlSelfRef.__PVT__isI = ((IData)(vlSelfRef.__PVT__isADDI) 
                            | ((IData)(vlSelfRef.__VdfgRegularize_hd1728725_0_20) 
                               | ((IData)(vlSelfRef.__PVT__isXORI) 
                                  | ((IData)(vlSelfRef.__PVT__isORI) 
                                     | ((IData)(vlSelfRef.__PVT__isANDI) 
                                        | ((IData)(vlSelfRef.__PVT__isSLLI) 
                                           | ((IData)(vlSelfRef.__PVT__isSRLI) 
                                              | ((IData)(vlSelfRef.__PVT__isSRAI) 
                                                 | ((IData)(vlSelfRef.__PVT__isJALR) 
                                                    | (IData)(vlSelfRef.isLOAD))))))))));
    vlSelfRef.__PVT__imm = ((IData)(vlSelfRef.__PVT__isI)
                             ? (((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x0000001fU))) 
                                 << 0x0000000cU) | 
                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                 >> 0x00000014U)) : 
                            ((0x6fU == (0x0000007fU 
                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))
                              ? ((((0x00000ffeU & (
                                                   (- (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                               >> 0x0000001fU))) 
                                                   << 1U)) 
                                   | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 0x0000001fU)) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 0x00000014U))))
                              : ((IData)(vlSelfRef.isSTORE)
                                  ? (((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x0000001fU))) 
                                      << 0x0000000cU) 
                                     | ((0x00000fe0U 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 7U))))
                                  : ((IData)(vlSelfRef.__PVT__isU)
                                      ? (0xfffff000U 
                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)
                                      : ((IData)(vlSelfRef.isB)
                                          ? (((- (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000dU) 
                                             | ((((2U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                      >> 0x0000001eU)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                        >> 7U))) 
                                                 << 0x0000000bU) 
                                                | ((0x000007e0U 
                                                    & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                         >> 7U)))))
                                          : 0U)))));
}

void VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1(VysyxSoCFull_ysyx_26010011_IDU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__isEQUAL = (0xffffffffU == (~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA 
                                                   ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__isGREATER = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                         ? ((~ (IData)(
                                                       (1ULL 
                                                        & ((1ULL 
                                                            + 
                                                            ((~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB))) 
                                                             + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA)))) 
                                                           >> 0x00000020U)))) 
                                            & (0U != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out))
                                         : ((~ (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA 
                                                  ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB) 
                                                 | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out) 
                                                >> 0x0000001fU)) 
                                            | ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA 
                                                   >> 0x0000001fU)) 
                                               & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB 
                                                  >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.__PVT__isGREATER) 
                                                | (IData)(vlSelfRef.__PVT__isEQUAL));
}

extern const VlUnpacked<CData/*0:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h5244400f_0;
extern const VlUnpacked<CData/*0:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h0c6117bb_0;

void VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__2(VysyxSoCFull_ysyx_26010011_IDU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.__VdfgExtracted_h790550e9__0) 
                      << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid) 
                                << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__lsu_reqEN = VysyxSoCFull__ConstPool__TABLE_h5244400f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__next_state = VysyxSoCFull__ConstPool__TABLE_h0c6117bb_0
        [__Vtableidx1];
}

void VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0(VysyxSoCFull_ysyx_26010011_IDU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset))) 
                       && (IData)(vlSelfRef.__PVT__next_state));
}

void VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1(VysyxSoCFull_ysyx_26010011_IDU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hd1728725_0_13;
    __VdfgRegularize_hd1728725_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hd1728725_0_16;
    __VdfgRegularize_hd1728725_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hd1728725_0_17;
    __VdfgRegularize_hd1728725_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hd1728725_0_22;
    __VdfgRegularize_hd1728725_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_hd1728725_0_24;
    __VdfgRegularize_hd1728725_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_hd1728725_0_26;
    __VdfgRegularize_hd1728725_0_26 = 0;
    // Body
    vlSelfRef.__PVT__isSLT = (IData)((0x00002033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSLTU = (IData)((0x00003033U 
                                       == (0xfe00707fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__VdfgRegularize_hd1728725_0_19 = ((0x17U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                                                 | (0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isXOR = (IData)((0x00004033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isOR = (IData)((0x00006033U == 
                                     (0xfe00707fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isAND = (IData)((0x00007033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.isCSR = ((IData)((0x00002073U == (0x0000707fU 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))
                        ? 1U : ((IData)((0x00001073U 
                                         == (0x0000707fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))
                                 ? 3U : ((IData)((0x00003073U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))
                                          ? 2U : 0U)));
    __VdfgRegularize_hd1728725_0_17 = (IData)((0x00005033U 
                                               == (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    __VdfgRegularize_hd1728725_0_16 = (IData)((0x00000033U 
                                               == (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isU = ((0x37U == (0x0000007fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                            | (0x17U == (0x0000007fU 
                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSLTIU = (IData)((0x00003013U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBEQ = (IData)((0x00000063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBNE = (IData)((0x00001063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBGE = (IData)((0x00005063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBLT = (IData)((0x00004063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBGEU = (IData)((0x00007063U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBLTU = (IData)((0x00006063U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isADDI = (IData)((0x00000013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isXORI = (IData)((0x00004013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isORI = (IData)((0x00006013U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isANDI = (IData)((0x00007013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isJALR = (IData)((0x00000067U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    __VdfgRegularize_hd1728725_0_26 = (IData)((0x00001000U 
                                               == (0xfe007000U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSW = (IData)((0x00002023U == 
                                     (0x0000707fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSB = (IData)((0x00000023U == 
                                     (0x0000707fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSH = (IData)((0x00001023U == 
                                     (0x0000707fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLW = (IData)((0x00002003U == 
                                     (0x0000707fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLH = (IData)((0x00001003U == 
                                     (0x0000707fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLBU = (IData)((0x00004003U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLHU = (IData)((0x00005003U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    __VdfgRegularize_hd1728725_0_13 = (IData)((0x00005013U 
                                               == (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSRL = ((IData)(__VdfgRegularize_hd1728725_0_17) 
                              & (0U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                        >> 0x00000019U)));
    vlSelfRef.__PVT__isSRA = ((IData)(__VdfgRegularize_hd1728725_0_17) 
                              & (0x20U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                           >> 0x00000019U)));
    vlSelfRef.__PVT__isADD = ((IData)(__VdfgRegularize_hd1728725_0_16) 
                              & (0U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                        >> 0x00000019U)));
    vlSelfRef.__PVT__isSUB = ((IData)(__VdfgRegularize_hd1728725_0_16) 
                              & (0x20U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                           >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_hd1728725_0_20 = ((IData)(
                                                         (0x00002013U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                                 | (IData)(vlSelfRef.__PVT__isSLTIU));
    __VdfgRegularize_hd1728725_0_24 = ((IData)(vlSelfRef.__PVT__isBLTU) 
                                       | (IData)(vlSelfRef.__PVT__isBGEU));
    vlSelfRef.isJUMP = ((0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                        | (IData)(vlSelfRef.__PVT__isJALR));
    vlSelfRef.__PVT__isSLL = ((0x33U == (0x0000007fU 
                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                              & (IData)(__VdfgRegularize_hd1728725_0_26));
    vlSelfRef.__PVT__isSLLI = ((0x13U == (0x0000007fU 
                                          & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                               & (IData)(__VdfgRegularize_hd1728725_0_26));
    vlSelfRef.__VdfgRegularize_hd1728725_0_25 = ((IData)(vlSelfRef.__PVT__isSH) 
                                                 | (IData)(vlSelfRef.__PVT__isSB));
    vlSelfRef.isSTORE = ((IData)(vlSelfRef.__PVT__isSW) 
                         | ((IData)(vlSelfRef.__PVT__isSB) 
                            | (IData)(vlSelfRef.__PVT__isSH)));
    vlSelfRef.__VdfgRegularize_hd1728725_0_21 = ((IData)(vlSelfRef.__PVT__isLBU) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
    __VdfgRegularize_hd1728725_0_22 = ((IData)(vlSelfRef.__PVT__isLH) 
                                       | (IData)(vlSelfRef.__PVT__isLHU));
    vlSelfRef.__PVT__isSRLI = ((IData)(__VdfgRegularize_hd1728725_0_13) 
                               & (0U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                         >> 0x00000019U)));
    vlSelfRef.__PVT__isSRAI = ((IData)(__VdfgRegularize_hd1728725_0_13) 
                               & (0x20U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                            >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = ((IData)(vlSelfRef.__PVT__isLBU) 
                                                 | ((IData)(vlSelfRef.__PVT__isLHU) 
                                                    | ((IData)(__VdfgRegularize_hd1728725_0_24) 
                                                       | ((IData)(vlSelfRef.__PVT__isSLTIU) 
                                                          | (IData)(vlSelfRef.__PVT__isSLTU)))));
    vlSelfRef.isB = ((IData)(vlSelfRef.__PVT__isBEQ) 
                     | ((IData)(vlSelfRef.__PVT__isBNE) 
                        | ((IData)(vlSelfRef.__PVT__isBLT) 
                           | ((IData)(vlSelfRef.__PVT__isBGE) 
                              | (IData)(__VdfgRegularize_hd1728725_0_24)))));
    vlSelfRef.__PVT__isR = ((IData)(vlSelfRef.__PVT__isADD) 
                            | ((IData)(vlSelfRef.__PVT__isSUB) 
                               | ((IData)(vlSelfRef.__PVT__isSLL) 
                                  | ((IData)(vlSelfRef.__PVT__isSLT) 
                                     | ((IData)(vlSelfRef.__PVT__isSLTU) 
                                        | ((IData)(vlSelfRef.__PVT__isXOR) 
                                           | ((IData)(vlSelfRef.__PVT__isSRL) 
                                              | ((IData)(vlSelfRef.__PVT__isSRA) 
                                                 | ((IData)(vlSelfRef.__PVT__isOR) 
                                                    | (IData)(vlSelfRef.__PVT__isAND))))))))));
    vlSelfRef.__PVT__LSU_rmask = ((IData)(vlSelfRef.__PVT__isLW)
                                   ? 0x0fU : ((IData)(vlSelfRef.__VdfgRegularize_hd1728725_0_21)
                                               ? 1U
                                               : ((IData)(__VdfgRegularize_hd1728725_0_22)
                                                   ? 3U
                                                   : 0U)));
    vlSelfRef.isLOAD = ((IData)(vlSelfRef.__PVT__isLW) 
                        | ((IData)(vlSelfRef.__VdfgRegularize_hd1728725_0_21) 
                           | (IData)(__VdfgRegularize_hd1728725_0_22)));
    vlSelfRef.isPC = ((IData)(vlSelfRef.__VdfgRegularize_hd1728725_0_19) 
                      | (IData)(vlSelfRef.isB));
    vlSelfRef.isWRITE = ((IData)(vlSelfRef.__PVT__isU) 
                         | ((0x6fU == (0x0000007fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                            | ((IData)(vlSelfRef.__PVT__isJALR) 
                               | ((IData)(vlSelfRef.__PVT__isADDI) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd1728725_0_20) 
                                     | ((IData)(vlSelfRef.__PVT__isXORI) 
                                        | ((IData)(vlSelfRef.__PVT__isORI) 
                                           | ((IData)(vlSelfRef.__PVT__isANDI) 
                                              | ((IData)(vlSelfRef.__PVT__isSLLI) 
                                                 | ((IData)(vlSelfRef.__PVT__isSRLI) 
                                                    | ((IData)(vlSelfRef.__PVT__isSRAI) 
                                                       | (IData)(vlSelfRef.__PVT__isR))))))))))));
    vlSelfRef.__VdfgExtracted_h790550e9__0 = ((IData)(vlSelfRef.isLOAD) 
                                              | (IData)(vlSelfRef.isSTORE));
    vlSelfRef.__PVT__isI = ((IData)(vlSelfRef.__PVT__isADDI) 
                            | ((IData)(vlSelfRef.__VdfgRegularize_hd1728725_0_20) 
                               | ((IData)(vlSelfRef.__PVT__isXORI) 
                                  | ((IData)(vlSelfRef.__PVT__isORI) 
                                     | ((IData)(vlSelfRef.__PVT__isANDI) 
                                        | ((IData)(vlSelfRef.__PVT__isSLLI) 
                                           | ((IData)(vlSelfRef.__PVT__isSRLI) 
                                              | ((IData)(vlSelfRef.__PVT__isSRAI) 
                                                 | ((IData)(vlSelfRef.__PVT__isJALR) 
                                                    | (IData)(vlSelfRef.isLOAD))))))))));
    vlSelfRef.__PVT__imm = ((IData)(vlSelfRef.__PVT__isI)
                             ? (((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x0000001fU))) 
                                 << 0x0000000cU) | 
                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                 >> 0x00000014U)) : 
                            ((0x6fU == (0x0000007fU 
                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))
                              ? ((((0x00000ffeU & (
                                                   (- (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                               >> 0x0000001fU))) 
                                                   << 1U)) 
                                   | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 0x0000001fU)) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                      >> 0x00000014U))))
                              : ((IData)(vlSelfRef.isSTORE)
                                  ? (((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 0x0000001fU))) 
                                      << 0x0000000cU) 
                                     | ((0x00000fe0U 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 7U))))
                                  : ((IData)(vlSelfRef.__PVT__isU)
                                      ? (0xfffff000U 
                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)
                                      : ((IData)(vlSelfRef.isB)
                                          ? (((- (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000dU) 
                                             | ((((2U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                      >> 0x0000001eU)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                        >> 7U))) 
                                                 << 0x0000000bU) 
                                                | ((0x000007e0U 
                                                    & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                         >> 7U)))))
                                          : 0U)))));
}

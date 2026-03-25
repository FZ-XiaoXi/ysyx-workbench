// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_IDU___stl_sequent__TOP__top__IDU_0__0(Vtop_IDU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IDU___stl_sequent__TOP__top__IDU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h52656aab_0_13;
    __VdfgRegularize_h52656aab_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h52656aab_0_17;
    __VdfgRegularize_h52656aab_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h52656aab_0_24;
    __VdfgRegularize_h52656aab_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_h52656aab_0_26;
    __VdfgRegularize_h52656aab_0_26 = 0;
    // Body
    vlSelfRef.__PVT__isSLT = (IData)((0x00002033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__VdfgRegularize_h52656aab_0_19 = ((0x17U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                                 | (0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isXOR = (IData)((0x00004033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isOR = (IData)((0x00006033U == 
                                     (0xfe00707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isAND = (IData)((0x00007033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSLTU = (IData)((0x00003033U 
                                       == (0xfe00707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isCSRRW = (IData)((0x00001073U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isCSRRS = (IData)((0x00002073U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isCSRRC = (IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    __VdfgRegularize_h52656aab_0_17 = (IData)((0x00005033U 
                                               == (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__VdfgRegularize_h52656aab_0_16 = (IData)(
                                                        (0x00000033U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isU = ((0x37U == (0x0000007fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                            | (0x17U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBEQ = (IData)((0x00000063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBNE = (IData)((0x00001063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBGE = (IData)((0x00005063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBLT = (IData)((0x00004063U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSW = (IData)((0x00002023U == 
                                     (0x0000707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSB = (IData)((0x00000023U == 
                                     (0x0000707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSH = (IData)((0x00001023U == 
                                     (0x0000707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBGEU = (IData)((0x00007063U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isBLTU = (IData)((0x00006063U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isXORI = (IData)((0x00004013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isORI = (IData)((0x00006013U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isANDI = (IData)((0x00007013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isSLTIU = (IData)((0x00003013U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isADDI = (IData)((0x00000013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isJALR = (IData)((0x00000067U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLW = (IData)((0x00002003U == 
                                     (0x0000707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLH = (IData)((0x00001003U == 
                                     (0x0000707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLBU = (IData)((0x00004003U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isLHU = (IData)((0x00005003U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    __VdfgRegularize_h52656aab_0_26 = (IData)((0x00001000U 
                                               == (0xfe007000U 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    __VdfgRegularize_h52656aab_0_13 = (IData)((0x00005013U 
                                               == (0x0000707fU 
                                                   & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    vlSelfRef.__PVT__isCSR = ((IData)(vlSelfRef.__PVT__isCSRRS)
                               ? 1U : ((IData)(vlSelfRef.__PVT__isCSRRW)
                                        ? 3U : ((IData)(vlSelfRef.__PVT__isCSRRC)
                                                 ? 2U
                                                 : 0U)));
    vlSelfRef.__PVT__isSRL = ((IData)(__VdfgRegularize_h52656aab_0_17) 
                              & (0U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                        >> 0x00000019U)));
    vlSelfRef.__PVT__isSRA = ((IData)(__VdfgRegularize_h52656aab_0_17) 
                              & (0x20U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                           >> 0x00000019U)));
    vlSelfRef.__PVT__isADD = ((IData)(vlSelfRef.__VdfgRegularize_h52656aab_0_16) 
                              & (0U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                        >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h52656aab_0_25 = ((IData)(vlSelfRef.__PVT__isSH) 
                                                 | (IData)(vlSelfRef.__PVT__isSB));
    vlSelfRef.__PVT__isSTORE = ((IData)(vlSelfRef.__PVT__isSW) 
                                | ((IData)(vlSelfRef.__PVT__isSB) 
                                   | (IData)(vlSelfRef.__PVT__isSH)));
    __VdfgRegularize_h52656aab_0_24 = ((IData)(vlSelfRef.__PVT__isBLTU) 
                                       | (IData)(vlSelfRef.__PVT__isBGEU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.__PVT__isXORI) 
                                                | (IData)(vlSelfRef.__PVT__isXOR));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.__PVT__isORI) 
                                                | (IData)(vlSelfRef.__PVT__isOR));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.__PVT__isANDI) 
                                                | (IData)(vlSelfRef.__PVT__isAND));
    vlSelfRef.__VdfgRegularize_h52656aab_0_20 = ((IData)(
                                                         (0x00002013U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))) 
                                                 | (IData)(vlSelfRef.__PVT__isSLTIU));
    vlSelfRef.__PVT__isJUMP = ((0x6fU == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                               | (IData)(vlSelfRef.__PVT__isJALR));
    vlSelfRef.__VdfgRegularize_h52656aab_0_21 = ((IData)(vlSelfRef.__PVT__isLBU) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
    vlSelfRef.__VdfgRegularize_h52656aab_0_22 = ((IData)(vlSelfRef.__PVT__isLH) 
                                                 | (IData)(vlSelfRef.__PVT__isLHU));
    vlSelfRef.__PVT__isSLL = ((0x33U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                              & (IData)(__VdfgRegularize_h52656aab_0_26));
    vlSelfRef.__PVT__isSLLI = ((0x13U == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                               & (IData)(__VdfgRegularize_h52656aab_0_26));
    vlSelfRef.__PVT__isSRLI = ((IData)(__VdfgRegularize_h52656aab_0_13) 
                               & (0U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                         >> 0x00000019U)));
    vlSelfRef.__PVT__isSRAI = ((IData)(__VdfgRegularize_h52656aab_0_13) 
                               & (0x20U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                            >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.__PVT__isLBU) 
                                                | ((IData)(vlSelfRef.__PVT__isLHU) 
                                                   | ((IData)(__VdfgRegularize_h52656aab_0_24) 
                                                      | ((IData)(vlSelfRef.__PVT__isSLTIU) 
                                                         | (IData)(vlSelfRef.__PVT__isSLTU)))));
    vlSelfRef.__PVT__isB = ((IData)(vlSelfRef.__PVT__isBEQ) 
                            | ((IData)(vlSelfRef.__PVT__isBNE) 
                               | ((IData)(vlSelfRef.__PVT__isBLT) 
                                  | ((IData)(vlSelfRef.__PVT__isBGE) 
                                     | (IData)(__VdfgRegularize_h52656aab_0_24)))));
    vlSelfRef.__PVT__isLOAD = ((IData)(vlSelfRef.__PVT__isLW) 
                               | ((IData)(vlSelfRef.__VdfgRegularize_h52656aab_0_21) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h52656aab_0_22)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.__PVT__isSLLI) 
                                                | (IData)(vlSelfRef.__PVT__isSLL));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.__PVT__isSRLI) 
                                                | (IData)(vlSelfRef.__PVT__isSRL));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.__PVT__isSRAI) 
                                                | (IData)(vlSelfRef.__PVT__isSRA));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.__VdfgRegularize_h52656aab_0_19) 
                                                | ((IData)(vlSelfRef.__PVT__isJALR) 
                                                   | ((IData)(vlSelfRef.__PVT__isADD) 
                                                      | ((IData)(vlSelfRef.__PVT__isLW) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_h52656aab_0_21) 
                                                            | ((IData)(vlSelfRef.__PVT__isLH) 
                                                               | ((IData)(vlSelfRef.__PVT__isSW) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h52656aab_0_25) 
                                                                     | ((IData)(vlSelfRef.__PVT__isADDI) 
                                                                        | ((IData)(vlSelfRef.__PVT__isLHU) 
                                                                           | (IData)(vlSelfRef.__PVT__isB)))))))))));
    vlSelfRef.__VdfgExtracted_h790550e9__0 = ((IData)(vlSelfRef.__PVT__isLOAD) 
                                              | (IData)(vlSelfRef.__PVT__isSTORE));
    vlSelfRef.__PVT__isI = ((IData)(vlSelfRef.__PVT__isADDI) 
                            | ((IData)(vlSelfRef.__VdfgRegularize_h52656aab_0_20) 
                               | ((IData)(vlSelfRef.__PVT__isXORI) 
                                  | ((IData)(vlSelfRef.__PVT__isORI) 
                                     | ((IData)(vlSelfRef.__PVT__isANDI) 
                                        | ((IData)(vlSelfRef.__PVT__isSLLI) 
                                           | ((IData)(vlSelfRef.__PVT__isSRLI) 
                                              | ((IData)(vlSelfRef.__PVT__isSRAI) 
                                                 | ((IData)(vlSelfRef.__PVT__isJALR) 
                                                    | (IData)(vlSelfRef.__PVT__isLOAD))))))))));
}

VL_ATTR_COLD void Vtop_IDU___ctor_var_reset(Vtop_IDU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IDU___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13453452394900071627ull);
    vlSelf->__PVT__isGREATER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17502570305187756131ull);
    vlSelf->__PVT__isEQUAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15942530012958164612ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    vlSelf->__PVT__wbu_final = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17405858545225522430ull);
    vlSelf->__PVT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409787017080135397ull);
    vlSelf->__PVT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->__PVT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__PVT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->__PVT__rcsr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17449179891787538094ull);
    vlSelf->__PVT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17679969967366941577ull);
    vlSelf->__PVT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6751744391700333915ull);
    vlSelf->__PVT__immI = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11599943384378877829ull);
    vlSelf->__PVT__immS = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 286317688144432681ull);
    vlSelf->__PVT__immB = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10397895094405243ull);
    vlSelf->__PVT__immU = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5843105774281398075ull);
    vlSelf->__PVT__immJ = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16107023852584429908ull);
    vlSelf->__PVT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17436245599429385641ull);
    vlSelf->__PVT__isEBREAK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6839703260753474825ull);
    vlSelf->__PVT__isECALL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184926532974597313ull);
    vlSelf->__PVT__isMRET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828884427583364781ull);
    vlSelf->__PVT__isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12374794229366285554ull);
    vlSelf->__PVT__isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18188382112590621576ull);
    vlSelf->__PVT__isWRITE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6837946082204981954ull);
    vlSelf->__PVT__isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812665700179750437ull);
    vlSelf->__PVT__isCOMPARE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15767581446099246657ull);
    vlSelf->__PVT__isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1884439264993369748ull);
    vlSelf->__PVT__isCSR = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4571104550179708431ull);
    vlSelf->__PVT__COMP_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7391533942535881271ull);
    vlSelf->__PVT__isSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721690139541285193ull);
    vlSelf->__PVT__isPC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15220313626966664195ull);
    vlSelf->__PVT__LSU_WEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4139174640315457831ull);
    vlSelf->__PVT__lsu_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11881322873208076425ull);
    vlSelf->__PVT__op = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3630531923276091163ull);
    vlSelf->__PVT__LSU_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15114391294081831391ull);
    vlSelf->__PVT__lsu_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13598643557825439274ull);
    vlSelf->__PVT__ctype = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7568302763210993604ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__isJALR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12610042504527720498ull);
    vlSelf->__PVT__isBEQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11868629224219510552ull);
    vlSelf->__PVT__isBNE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6805402524719397879ull);
    vlSelf->__PVT__isBLT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12674536475565372056ull);
    vlSelf->__PVT__isBGE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7828114076668127419ull);
    vlSelf->__PVT__isBLTU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8959468645638845026ull);
    vlSelf->__PVT__isBGEU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14473530434167518994ull);
    vlSelf->__PVT__isLH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12766173490442549505ull);
    vlSelf->__PVT__isLW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3849927066382474933ull);
    vlSelf->__PVT__isLBU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6907834084634739320ull);
    vlSelf->__PVT__isLHU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 330083392579771099ull);
    vlSelf->__PVT__isSB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16220157708572545397ull);
    vlSelf->__PVT__isSH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8201507864533686083ull);
    vlSelf->__PVT__isSW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11570839640640780765ull);
    vlSelf->__PVT__isADDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17051464017267516206ull);
    vlSelf->__PVT__isSLTIU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3730764629364144656ull);
    vlSelf->__PVT__isXORI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15613346004524003916ull);
    vlSelf->__PVT__isORI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12379658402340504157ull);
    vlSelf->__PVT__isANDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12539985750702930864ull);
    vlSelf->__PVT__isSLLI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17708504117324469787ull);
    vlSelf->__PVT__isSRLI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8822699580180887380ull);
    vlSelf->__PVT__isSRAI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7042707995651596733ull);
    vlSelf->__PVT__isADD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5133843110452666054ull);
    vlSelf->__PVT__isSLL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6015538411354294458ull);
    vlSelf->__PVT__isSLT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4559434050083473486ull);
    vlSelf->__PVT__isSLTU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8456624065704896762ull);
    vlSelf->__PVT__isXOR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13686231925313852741ull);
    vlSelf->__PVT__isSRL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4065368942828858943ull);
    vlSelf->__PVT__isSRA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6610098017043365728ull);
    vlSelf->__PVT__isOR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11245416253053281831ull);
    vlSelf->__PVT__isAND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14796057230312778416ull);
    vlSelf->__PVT__isMUL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5151150226848186354ull);
    vlSelf->__PVT__isMULH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11132737622467146816ull);
    vlSelf->__PVT__isMULHSU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12573577699572555978ull);
    vlSelf->__PVT__isMULHU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8969735966621061062ull);
    vlSelf->__PVT__isDIV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 223320520071377294ull);
    vlSelf->__PVT__isDIVU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341616179575188733ull);
    vlSelf->__PVT__isREM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14108022074210344655ull);
    vlSelf->__PVT__isREMU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10731832342462350195ull);
    vlSelf->__PVT__isCSRRW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7164341800463498174ull);
    vlSelf->__PVT__isCSRRS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5858103777774076679ull);
    vlSelf->__PVT__isCSRRC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3394300953292570186ull);
    vlSelf->__PVT__isCSRRWI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11450728938332020960ull);
    vlSelf->__PVT__isCSRRSI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12242692919191888111ull);
    vlSelf->__PVT__isCSRRCI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6761556521502932770ull);
    vlSelf->__PVT__isR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3801320826917965747ull);
    vlSelf->__PVT__isI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 437953394058935697ull);
    vlSelf->__PVT__isB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12584104892879979463ull);
    vlSelf->__PVT__isU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5770804195373403662ull);
    vlSelf->__VdfgExtracted_h790550e9__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6047237224052455305ull);
    vlSelf->__VdfgRegularize_h52656aab_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9219169235581403852ull);
    vlSelf->__VdfgRegularize_h52656aab_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15905581732703195511ull);
    vlSelf->__VdfgRegularize_h52656aab_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12722931557263456128ull);
    vlSelf->__VdfgRegularize_h52656aab_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17905214177712020799ull);
    vlSelf->__VdfgRegularize_h52656aab_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2977320743226437174ull);
    vlSelf->__VdfgRegularize_h52656aab_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13397214212516715927ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5905814147067497110ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12323489237842245601ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5436679966404447934ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3200168928706324905ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14592311612440514280ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6312025480341849823ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10964918262381253961ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14010890682781396190ull);
}

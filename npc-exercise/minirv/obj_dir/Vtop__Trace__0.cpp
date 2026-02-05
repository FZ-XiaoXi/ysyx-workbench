// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__IDU_0__DOT__isADDI));
        bufp->chgSData(oldp+1,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI) 
                                << 9U)),10);
        bufp->chgCData(oldp+2,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI) 
                                << 4U)),6);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,((1U & (IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt) 
                                    >> 1U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt) 
                                    >> 2U))));
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__command),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[0]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[1]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[2]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[3]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[4]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[5]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[6]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[7]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[8]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[9]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[10]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[11]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[12]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[13]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[14]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[15]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[16]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[17]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[18]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[19]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[20]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[21]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[22]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[23]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[24]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[25]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[26]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[27]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[28]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[29]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[30]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[31]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__GPR_0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+40,(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt),3);
    }
    bufp->chgBit(oldp+41,(vlSelfRef.clk));
    bufp->chgBit(oldp+42,(vlSelfRef.rst));
    bufp->chgIData(oldp+43,(vlSelfRef.LSU_address),32);
    bufp->chgCData(oldp+44,(vlSelfRef.LSU_range),4);
    bufp->chgIData(oldp+45,(vlSelfRef.LSU_writedata),32);
    bufp->chgBit(oldp+46,(vlSelfRef.LSU_WEN));
    bufp->chgIData(oldp+47,(vlSelfRef.LSU_readdata),32);
    bufp->chgIData(oldp+48,(vlSelfRef.PC),32);
    bufp->chgIData(oldp+49,(vlSelfRef.PC_command),32);
    bufp->chgIData(oldp+50,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI)
                              ? (((- (IData)((vlSelfRef.PC_command 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 (vlSelfRef.PC_command 
                                  >> 0x00000014U)) : 0U)),32);
    bufp->chgCData(oldp+51,((0x0000001fU & (vlSelfRef.PC_command 
                                            >> 7U))),5);
    bufp->chgCData(oldp+52,((0x0000001fU & (vlSelfRef.PC_command 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+53,((0x0000001fU & (vlSelfRef.PC_command 
                                            >> 0x00000014U))),5);
    bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__rs1_val),32);
    bufp->chgIData(oldp+55,(((0U == (0x0000001fU & 
                                     (vlSelfRef.PC_command 
                                      >> 0x00000014U)))
                              ? 0U : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                             [(0x0000001fU & (vlSelfRef.PC_command 
                                              >> 0x00000014U))])),32);
    bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__EXU_data),32);
    bufp->chgIData(oldp+57,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI)
                              ? (((- (IData)((vlSelfRef.PC_command 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 (vlSelfRef.PC_command 
                                  >> 0x00000014U)) : vlSelfRef.top__DOT__rs1_val)),32);
    bufp->chgIData(oldp+58,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI)
                              ? vlSelfRef.top__DOT__rs1_val
                              : ((0U == (0x0000001fU 
                                         & (vlSelfRef.PC_command 
                                            >> 0x00000014U)))
                                  ? 0U : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                                 [(0x0000001fU & (vlSelfRef.PC_command 
                                                  >> 0x00000014U))]))),32);
    bufp->chgIData(oldp+59,((((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI)
                               ? (((- (IData)((vlSelfRef.PC_command 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.PC_command 
                                     >> 0x00000014U))
                               : vlSelfRef.top__DOT__rs1_val) 
                             + ((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADDI)
                                 ? vlSelfRef.top__DOT__rs1_val
                                 : ((0U == (0x0000001fU 
                                            & (vlSelfRef.PC_command 
                                               >> 0x00000014U)))
                                     ? 0U : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                                    [(0x0000001fU & 
                                      (vlSelfRef.PC_command 
                                       >> 0x00000014U))])))),32);
    bufp->chgCData(oldp+60,((0x0000007fU & vlSelfRef.PC_command)),7);
    bufp->chgCData(oldp+61,((7U & (vlSelfRef.PC_command 
                                   >> 0x0000000cU))),3);
    bufp->chgCData(oldp+62,((vlSelfRef.PC_command >> 0x00000019U)),7);
    bufp->chgSData(oldp+63,((vlSelfRef.PC_command >> 0x00000014U)),12);
    bufp->chgSData(oldp+64,(((0x00000fe0U & (vlSelfRef.PC_command 
                                             >> 0x00000014U)) 
                             | (0x0000001fU & (vlSelfRef.PC_command 
                                               >> 7U)))),12);
    bufp->chgSData(oldp+65,(((((2U & (vlSelfRef.PC_command 
                                      >> 0x0000001eU)) 
                               | (1U & (vlSelfRef.PC_command 
                                        >> 7U))) << 0x0000000aU) 
                             | ((0x000003f0U & (vlSelfRef.PC_command 
                                                >> 0x00000015U)) 
                                | (0x0000000fU & (vlSelfRef.PC_command 
                                                  >> 8U))))),12);
    bufp->chgIData(oldp+66,((vlSelfRef.PC_command >> 0x0000000cU)),20);
    bufp->chgIData(oldp+67,(((0x00080000U & (vlSelfRef.PC_command 
                                             >> 0x0000000cU)) 
                             | ((0x0007f800U & (vlSelfRef.PC_command 
                                                >> 1U)) 
                                | ((0x00000400U & (vlSelfRef.PC_command 
                                                   >> 0x0000000aU)) 
                                   | (0x000003ffU & 
                                      (vlSelfRef.PC_command 
                                       >> 0x00000015U)))))),20);
    bufp->chgBit(oldp+68,((1U & vlSelfRef.PC)));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

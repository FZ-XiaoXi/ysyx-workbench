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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isGREATER));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBRANCH));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__out),32);
        bufp->chgQData(oldp+5,((0x00000001ffffffffULL 
                                & (~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))))),33);
        bufp->chgQData(oldp+7,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB),33);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top.__PVT__LSU_0__DOT__val0),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__top.__PVT__LSU_0__DOT__val1),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top.__PVT__LSU_0__DOT__val2),32);
        bufp->chgIData(oldp+12,((((- (IData)((vlSymsp->TOP__top.__PVT__LSU_0__DOT__val0 
                                              >> 0x0000001fU))) 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__LSU_0__DOT__val2 
                                  >> 8U))),32);
        bufp->chgIData(oldp+13,(((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_6)
                                  ? (0x000000ffU & vlSymsp->TOP__top.__PVT__LSU_0__DOT__rdata4)
                                  : (((- (IData)((1U 
                                                  & (vlSymsp->TOP__top.__PVT__LSU_0__DOT__rdata4 
                                                     >> 7U)))) 
                                      << 8U) | (0x000000ffU 
                                                & vlSymsp->TOP__top.__PVT__LSU_0__DOT__rdata4)))),32);
        bufp->chgIData(oldp+14,(((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_6)
                                  ? (0x0000ffffU & vlSymsp->TOP__top.__PVT__LSU_0__DOT__rdata4)
                                  : (((- (IData)((1U 
                                                  & (vlSymsp->TOP__top.__PVT__LSU_0__DOT__rdata4 
                                                     >> 0x0000000fU)))) 
                                      << 0x00000010U) 
                                     | (0x0000ffffU 
                                        & vlSymsp->TOP__top.__PVT__LSU_0__DOT__rdata4)))),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__top.__PVT__LSU_0__DOT__rdata4),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__top__IFU_0.__PVT__ifu_raddr),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+17,(vlSymsp->TOP__top__IFU_0.__PVT__PC_command),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isR));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isI));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isS));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isB));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isU));
        bufp->chgBit(oldp+23,((0x6fU == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+24,(((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRW) 
                               | ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRS) 
                                  | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRC)))));
        bufp->chgCData(oldp+25,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 7U))),5);
        bufp->chgCData(oldp+26,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+27,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 0x00000014U))),5);
        bufp->chgSData(oldp+28,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+29,(((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLOAD) 
                               | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isWRITE))));
        bufp->chgBit(oldp+30,((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+31,((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+32,((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLOAD));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isWRITE));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isJUMP));
        bufp->chgBit(oldp+36,((1U & (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_6)))));
        bufp->chgBit(oldp+37,(((IData)(vlSymsp->TOP__top.IDU_0__DOT____VdfgRegularize_h52656aab_0_19) 
                               | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isB))));
        bufp->chgCData(oldp+38,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSR),2);
        bufp->chgBit(oldp+39,(((IData)(vlSymsp->TOP__top.IDU_0__DOT____VdfgRegularize_h52656aab_0_20) 
                               | ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSLT) 
                                  | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSLTU)))));
        bufp->chgSData(oldp+40,((((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_7) 
                                  << 9U) | (((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin) 
                                             << 8U) 
                                            | ((((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_0) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_1) 
                                                    << 4U) 
                                                   | ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_2) 
                                                      << 3U))) 
                                               | (((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_5))))))),10);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin));
        bufp->chgCData(oldp+42,((0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)),7);
        bufp->chgCData(oldp+43,((7U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+44,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x00000019U)),7);
        bufp->chgSData(oldp+45,(((0x00000fe0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U)) 
                                 | (0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                   >> 7U)))),12);
        bufp->chgSData(oldp+46,(((((2U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                          >> 0x0000001eU)) 
                                   | (1U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                            >> 7U))) 
                                  << 0x0000000aU) | 
                                 ((0x000003f0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000015U)) 
                                  | (0x0000000fU & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 8U))))),12);
        bufp->chgIData(oldp+47,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x0000000cU)),20);
        bufp->chgIData(oldp+48,(((0x00080000U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x0000000cU)) 
                                 | ((0x0007f800U & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 1U)) | ((0x00000400U 
                                                  & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                     >> 0x0000000aU)) 
                                                 | (0x000003ffU 
                                                    & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                       >> 0x00000015U)))))),20);
        bufp->chgCData(oldp+49,(((((((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isR) 
                                     << 3U) | ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isI) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isS) 
                                       << 1U) | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isB))) 
                                  << 3U) | (((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isU) 
                                             << 2U) 
                                            | (((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRW) 
                                                  | ((IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRS) 
                                                     | (IData)(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRC))))))),7);
        bufp->chgBit(oldp+50,((0x37U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+51,((0x17U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isJALR));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBEQ));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBNE));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBLT));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBGE));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBLTU));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isBGEU));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLB));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLH));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLW));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLBU));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isLHU));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSB));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSH));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSW));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isADDI));
        bufp->chgBit(oldp+68,((IData)((0x00002013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSLTIU));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isXORI));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isORI));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isANDI));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSLLI));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSRLI));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSRAI));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isADD));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSLL));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSLT));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSLTU));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isXOR));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSRL));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isSRA));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isOR));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isAND));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRW));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRS));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top.__PVT__IDU_0__DOT__isCSRRC));
        bufp->chgIData(oldp+88,(vlSymsp->TOP__top__IFU_0.__PVT__PC),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__top__REG_0.__PVT__WCSREN));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__top__REG_0.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+91,(vlSelfRef.clk));
    bufp->chgBit(oldp+92,(vlSelfRef.rst));
    bufp->chgIData(oldp+93,(vlSelfRef.LSU_address),32);
    bufp->chgCData(oldp+94,(vlSelfRef.LSU_rmask),4);
    bufp->chgCData(oldp+95,(vlSelfRef.LSU_wmask),4);
    bufp->chgIData(oldp+96,(vlSelfRef.LSU_writedata),32);
    bufp->chgBit(oldp+97,(vlSelfRef.LSU_WEN));
    bufp->chgBit(oldp+98,(vlSelfRef.LSU_REN));
    bufp->chgIData(oldp+99,(vlSelfRef.LSU_readdata),32);
    bufp->chgIData(oldp+100,(vlSelfRef.PC_command),32);
    bufp->chgIData(oldp+101,(vlSelfRef.EXU_inA),32);
    bufp->chgIData(oldp+102,(vlSelfRef.EXU_inB),32);
    bufp->chgIData(oldp+103,(vlSelfRef.EXU_data),32);
    bufp->chgIData(oldp+104,(vlSelfRef.CSR_data),32);
    bufp->chgIData(oldp+105,(vlSelfRef.rs1_val),32);
    bufp->chgIData(oldp+106,(vlSelfRef.rs2_val),32);
    bufp->chgIData(oldp+107,(vlSelfRef.reg_data),32);
    bufp->chgIData(oldp+108,(vlSelfRef.imm),32);
    bufp->chgBit(oldp+109,(vlSelfRef.COMP_data));
    bufp->chgIData(oldp+110,(vlSymsp->TOP__top.PC),32);
    bufp->chgIData(oldp+111,(vlSymsp->TOP__top.dnpc),32);
    bufp->chgIData(oldp+112,(vlSymsp->TOP__top.snpc),32);
    bufp->chgIData(oldp+113,(vlSymsp->TOP__top__REG_0.CSR_MEPC),32);
    bufp->chgIData(oldp+114,(vlSymsp->TOP__top__REG_0.CSR_MTVEC),32);
    bufp->chgBit(oldp+115,(vlSymsp->TOP__top__IFU_0.state));
    bufp->chgBit(oldp+116,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                    + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+117,((1U & ((~ (((vlSelfRef.rs1_val 
                                        ^ vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB) 
                                       | vlSymsp->TOP__top.__PVT__COMP_0__DOT__out) 
                                      >> 0x0000001fU)) 
                                  | ((~ (vlSelfRef.rs1_val 
                                         >> 0x0000001fU)) 
                                     & (vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB 
                                        >> 0x0000001fU))))));
    bufp->chgBit(oldp+118,(((~ (IData)((1ULL & ((1ULL 
                                                 + 
                                                 ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                  + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                >> 0x00000020U)))) 
                            & (0U != vlSymsp->TOP__top.__PVT__COMP_0__DOT__out))));
    bufp->chgQData(oldp+119,((QData)((IData)(vlSelfRef.rs1_val))),33);
    bufp->chgIData(oldp+121,((vlSelfRef.EXU_inA ^ vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+122,((vlSelfRef.EXU_inA | vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+123,((vlSelfRef.EXU_inA & vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+124,(VL_SHIFTRS_III(32,32,32, vlSelfRef.EXU_inA, 
                                            (0x0000001fU 
                                             & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+125,(VL_SHIFTR_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+126,(VL_SHIFTL_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+127,((vlSelfRef.EXU_inA + ((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                   + (IData)((QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))))),32);
    bufp->chgQData(oldp+128,((QData)((IData)(vlSelfRef.EXU_inA))),33);
    bufp->chgBit(oldp+130,((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.EXU_inA)) 
                                                   + 
                                                   (vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                    + (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))) 
                                                  >> 0x00000020U))))));
    bufp->chgIData(oldp+131,(VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 8U)),32);
    bufp->chgIData(oldp+132,(VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000010U)),32);
    bufp->chgIData(oldp+133,(VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000018U)),32);
    bufp->chgIData(oldp+134,(((2U & vlSelfRef.LSU_address)
                               ? ((1U & vlSelfRef.LSU_address)
                                   ? VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000018U)
                                   : VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000010U))
                               : ((1U & vlSelfRef.LSU_address)
                                   ? VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 8U)
                                   : vlSelfRef.LSU_writedata))),32);
    bufp->chgBit(oldp+135,((1U & (~ (IData)(vlSymsp->TOP__top__IFU_0.state)))));
    bufp->chgIData(oldp+136,(vlSymsp->TOP__top__REG_0.GPR[0]),32);
    bufp->chgIData(oldp+137,(vlSymsp->TOP__top__REG_0.GPR[1]),32);
    bufp->chgIData(oldp+138,(vlSymsp->TOP__top__REG_0.GPR[2]),32);
    bufp->chgIData(oldp+139,(vlSymsp->TOP__top__REG_0.GPR[3]),32);
    bufp->chgIData(oldp+140,(vlSymsp->TOP__top__REG_0.GPR[4]),32);
    bufp->chgIData(oldp+141,(vlSymsp->TOP__top__REG_0.GPR[5]),32);
    bufp->chgIData(oldp+142,(vlSymsp->TOP__top__REG_0.GPR[6]),32);
    bufp->chgIData(oldp+143,(vlSymsp->TOP__top__REG_0.GPR[7]),32);
    bufp->chgIData(oldp+144,(vlSymsp->TOP__top__REG_0.GPR[8]),32);
    bufp->chgIData(oldp+145,(vlSymsp->TOP__top__REG_0.GPR[9]),32);
    bufp->chgIData(oldp+146,(vlSymsp->TOP__top__REG_0.GPR[10]),32);
    bufp->chgIData(oldp+147,(vlSymsp->TOP__top__REG_0.GPR[11]),32);
    bufp->chgIData(oldp+148,(vlSymsp->TOP__top__REG_0.GPR[12]),32);
    bufp->chgIData(oldp+149,(vlSymsp->TOP__top__REG_0.GPR[13]),32);
    bufp->chgIData(oldp+150,(vlSymsp->TOP__top__REG_0.GPR[14]),32);
    bufp->chgIData(oldp+151,(vlSymsp->TOP__top__REG_0.GPR[15]),32);
    bufp->chgIData(oldp+152,(vlSymsp->TOP__top__REG_0.GPR[16]),32);
    bufp->chgIData(oldp+153,(vlSymsp->TOP__top__REG_0.GPR[17]),32);
    bufp->chgIData(oldp+154,(vlSymsp->TOP__top__REG_0.GPR[18]),32);
    bufp->chgIData(oldp+155,(vlSymsp->TOP__top__REG_0.GPR[19]),32);
    bufp->chgIData(oldp+156,(vlSymsp->TOP__top__REG_0.GPR[20]),32);
    bufp->chgIData(oldp+157,(vlSymsp->TOP__top__REG_0.GPR[21]),32);
    bufp->chgIData(oldp+158,(vlSymsp->TOP__top__REG_0.GPR[22]),32);
    bufp->chgIData(oldp+159,(vlSymsp->TOP__top__REG_0.GPR[23]),32);
    bufp->chgIData(oldp+160,(vlSymsp->TOP__top__REG_0.GPR[24]),32);
    bufp->chgIData(oldp+161,(vlSymsp->TOP__top__REG_0.GPR[25]),32);
    bufp->chgIData(oldp+162,(vlSymsp->TOP__top__REG_0.GPR[26]),32);
    bufp->chgIData(oldp+163,(vlSymsp->TOP__top__REG_0.GPR[27]),32);
    bufp->chgIData(oldp+164,(vlSymsp->TOP__top__REG_0.GPR[28]),32);
    bufp->chgIData(oldp+165,(vlSymsp->TOP__top__REG_0.GPR[29]),32);
    bufp->chgIData(oldp+166,(vlSymsp->TOP__top__REG_0.GPR[30]),32);
    bufp->chgIData(oldp+167,(vlSymsp->TOP__top__REG_0.GPR[31]),32);
    bufp->chgIData(oldp+168,(vlSymsp->TOP__top__REG_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+169,(vlSymsp->TOP__top__REG_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+170,(vlSymsp->TOP__top__REG_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+171,(vlSymsp->TOP__top__REG_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+172,(vlSymsp->TOP__top__REG_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+173,(vlSymsp->TOP__top__REG_0.CSR_MARCHID),32);
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

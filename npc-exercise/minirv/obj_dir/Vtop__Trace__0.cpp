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
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__GPRTEST[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__GPRTEST[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__GPRTEST[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__GPRTEST[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__GPRTEST[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__GPRTEST[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__GPRTEST[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__GPRTEST[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__GPRTEST[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__GPRTEST[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__GPRTEST[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__GPRTEST[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__GPRTEST[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__GPRTEST[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__GPRTEST[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__GPRTEST[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__GPRTEST[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__GPRTEST[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__GPRTEST[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__GPRTEST[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__GPRTEST[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__GPRTEST[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__GPRTEST[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__GPRTEST[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__GPRTEST[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__GPRTEST[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__GPRTEST[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__GPRTEST[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__GPRTEST[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__GPRTEST[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__GPRTEST[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__GPRTEST[31]),32);
        bufp->chgBit(oldp+32,((1U & (IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt) 
                                     >> 1U))));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt) 
                                     >> 2U))));
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[1]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[2]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[3]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[4]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[5]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[6]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[7]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[8]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[9]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[10]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[11]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[12]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[13]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[14]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[15]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[16]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[17]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[18]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[19]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[20]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[21]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[22]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[23]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[24]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[25]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[26]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[27]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[28]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[29]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[30]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[31]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[0]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[1]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[2]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[3]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[4]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[5]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[6]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[7]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[8]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[9]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[10]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[11]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[12]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[13]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[14]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[15]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[16]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[17]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[18]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[19]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[20]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[21]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[22]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[23]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[24]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[25]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[26]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[27]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[28]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[29]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[30]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[31]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__GPR_0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+100,(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+101,(vlSelfRef.top__DOT__IDU_0__DOT__isADD));
        bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__IDU_0__DOT__isI));
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__rs1_val),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__EXU_0__DOT__inA),32);
        bufp->chgBit(oldp+105,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isLOAD) 
                                | (IData)(vlSelfRef.top__DOT__IDU_0__DOT__isWRITE))));
        bufp->chgBit(oldp+106,(vlSelfRef.top__DOT__IDU_0__DOT__isLOAD));
        bufp->chgBit(oldp+107,(vlSelfRef.top__DOT__IDU_0__DOT__isWRITE));
        bufp->chgBit(oldp+108,(vlSelfRef.top__DOT__IDU_0__DOT__isJALR));
        bufp->chgBit(oldp+109,((1U & (~ (IData)(vlSelfRef.top__DOT__IDU_0__DOT__isLBU)))));
        bufp->chgBit(oldp+110,(vlSelfRef.top__DOT__IDU_0__DOT__isLW));
        bufp->chgBit(oldp+111,(vlSelfRef.top__DOT__IDU_0__DOT__isLBU));
        bufp->chgBit(oldp+112,(vlSelfRef.top__DOT__IDU_0__DOT__isSW));
        bufp->chgBit(oldp+113,(vlSelfRef.top__DOT__IDU_0__DOT__isSB));
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__LSU_0__DOT__val0),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__LSU_0__DOT__val1),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__LSU_0__DOT__val2),32);
        bufp->chgIData(oldp+117,((((- (IData)((vlSelfRef.top__DOT__LSU_0__DOT__val0 
                                               >> 0x0000001fU))) 
                                   << 0x00000018U) 
                                  | (vlSelfRef.top__DOT__LSU_0__DOT__val2 
                                     >> 8U))),32);
        bufp->chgIData(oldp+118,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isLBU)
                                   ? (0x000000ffU & vlSelfRef.top__DOT__LSU_0__DOT__rdata4)
                                   : (((- (IData)((1U 
                                                   & (vlSelfRef.top__DOT__LSU_0__DOT__rdata4 
                                                      >> 7U)))) 
                                       << 8U) | (0x000000ffU 
                                                 & vlSelfRef.top__DOT__LSU_0__DOT__rdata4)))),32);
        bufp->chgIData(oldp+119,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isLBU)
                                   ? (0x0000ffffU & vlSelfRef.top__DOT__LSU_0__DOT__rdata4)
                                   : (((- (IData)((1U 
                                                   & (vlSelfRef.top__DOT__LSU_0__DOT__rdata4 
                                                      >> 0x0000000fU)))) 
                                       << 0x00000010U) 
                                      | (0x0000ffffU 
                                         & vlSelfRef.top__DOT__LSU_0__DOT__rdata4)))),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top__DOT__LSU_0__DOT__rdata4),32);
    }
    bufp->chgBit(oldp+121,(vlSelfRef.clk));
    bufp->chgBit(oldp+122,(vlSelfRef.rst));
    bufp->chgIData(oldp+123,(vlSelfRef.LSU_address),32);
    bufp->chgCData(oldp+124,(vlSelfRef.LSU_rmask),4);
    bufp->chgCData(oldp+125,(vlSelfRef.LSU_wmask),4);
    bufp->chgIData(oldp+126,(vlSelfRef.LSU_writedata),32);
    bufp->chgBit(oldp+127,(vlSelfRef.LSU_WEN));
    bufp->chgIData(oldp+128,(vlSelfRef.LSU_readdata),32);
    bufp->chgIData(oldp+129,(vlSelfRef.PC),32);
    bufp->chgIData(oldp+130,(vlSelfRef.PC_command),32);
    bufp->chgIData(oldp+131,(vlSelfRef.dnpc),32);
    bufp->chgIData(oldp+132,(vlSelfRef.snpc),32);
    bufp->chgIData(oldp+133,(vlSelfRef.GPRTEST[0]),32);
    bufp->chgIData(oldp+134,(vlSelfRef.GPRTEST[1]),32);
    bufp->chgIData(oldp+135,(vlSelfRef.GPRTEST[2]),32);
    bufp->chgIData(oldp+136,(vlSelfRef.GPRTEST[3]),32);
    bufp->chgIData(oldp+137,(vlSelfRef.GPRTEST[4]),32);
    bufp->chgIData(oldp+138,(vlSelfRef.GPRTEST[5]),32);
    bufp->chgIData(oldp+139,(vlSelfRef.GPRTEST[6]),32);
    bufp->chgIData(oldp+140,(vlSelfRef.GPRTEST[7]),32);
    bufp->chgIData(oldp+141,(vlSelfRef.GPRTEST[8]),32);
    bufp->chgIData(oldp+142,(vlSelfRef.GPRTEST[9]),32);
    bufp->chgIData(oldp+143,(vlSelfRef.GPRTEST[10]),32);
    bufp->chgIData(oldp+144,(vlSelfRef.GPRTEST[11]),32);
    bufp->chgIData(oldp+145,(vlSelfRef.GPRTEST[12]),32);
    bufp->chgIData(oldp+146,(vlSelfRef.GPRTEST[13]),32);
    bufp->chgIData(oldp+147,(vlSelfRef.GPRTEST[14]),32);
    bufp->chgIData(oldp+148,(vlSelfRef.GPRTEST[15]),32);
    bufp->chgIData(oldp+149,(vlSelfRef.GPRTEST[16]),32);
    bufp->chgIData(oldp+150,(vlSelfRef.GPRTEST[17]),32);
    bufp->chgIData(oldp+151,(vlSelfRef.GPRTEST[18]),32);
    bufp->chgIData(oldp+152,(vlSelfRef.GPRTEST[19]),32);
    bufp->chgIData(oldp+153,(vlSelfRef.GPRTEST[20]),32);
    bufp->chgIData(oldp+154,(vlSelfRef.GPRTEST[21]),32);
    bufp->chgIData(oldp+155,(vlSelfRef.GPRTEST[22]),32);
    bufp->chgIData(oldp+156,(vlSelfRef.GPRTEST[23]),32);
    bufp->chgIData(oldp+157,(vlSelfRef.GPRTEST[24]),32);
    bufp->chgIData(oldp+158,(vlSelfRef.GPRTEST[25]),32);
    bufp->chgIData(oldp+159,(vlSelfRef.GPRTEST[26]),32);
    bufp->chgIData(oldp+160,(vlSelfRef.GPRTEST[27]),32);
    bufp->chgIData(oldp+161,(vlSelfRef.GPRTEST[28]),32);
    bufp->chgIData(oldp+162,(vlSelfRef.GPRTEST[29]),32);
    bufp->chgIData(oldp+163,(vlSelfRef.GPRTEST[30]),32);
    bufp->chgIData(oldp+164,(vlSelfRef.GPRTEST[31]),32);
    bufp->chgIData(oldp+165,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isI)
                               ? (((- (IData)((vlSelfRef.PC_command 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.PC_command 
                                     >> 0x00000014U))
                               : ((IData)(vlSelfRef.LSU_WEN)
                                   ? (((- (IData)((vlSelfRef.PC_command 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000cU) 
                                      | ((0x00000fe0U 
                                          & (vlSelfRef.PC_command 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.PC_command 
                                               >> 7U))))
                                   : ((0x37U == (0x0000007fU 
                                                 & vlSelfRef.PC_command))
                                       ? (0xfffff000U 
                                          & vlSelfRef.PC_command)
                                       : 0U)))),32);
    bufp->chgBit(oldp+166,((0x37U == (0x0000007fU & vlSelfRef.PC_command))));
    bufp->chgCData(oldp+167,((0x0000001fU & (vlSelfRef.PC_command 
                                             >> 7U))),5);
    bufp->chgCData(oldp+168,((0x0000001fU & (vlSelfRef.PC_command 
                                             >> 0x0000000fU))),5);
    bufp->chgCData(oldp+169,((0x0000001fU & (vlSelfRef.PC_command 
                                             >> 0x00000014U))),5);
    bufp->chgIData(oldp+170,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isLOAD)
                               ? vlSelfRef.LSU_readdata
                               : ((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isJALR)
                                   ? vlSelfRef.snpc
                                   : ((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isWRITE)
                                       ? vlSelfRef.LSU_address
                                       : 0xffffffffU)))),32);
    bufp->chgIData(oldp+171,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_he2b63832_0_0)
                               ? vlSelfRef.top__DOT__rs1_val
                               : vlSelfRef.LSU_writedata)),32);
    bufp->chgBit(oldp+172,((0x00100073U == vlSelfRef.PC_command)));
    bufp->chgSData(oldp+173,((((IData)(vlSelfRef.top__DOT__IDU_0__DOT____VdfgRegularize_h52656aab_0_5) 
                               | ((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isLW) 
                                  | ((IData)(vlSelfRef.top__DOT__IDU_0__DOT____VdfgRegularize_h52656aab_0_6) 
                                     | (IData)(vlSelfRef.LSU_WEN)))) 
                              << 9U)),10);
    bufp->chgIData(oldp+174,((vlSelfRef.top__DOT__EXU_0__DOT__inA 
                              + ((IData)(vlSelfRef.top__DOT____VdfgRegularize_he2b63832_0_0)
                                  ? vlSelfRef.top__DOT__rs1_val
                                  : vlSelfRef.LSU_writedata))),32);
    bufp->chgCData(oldp+175,((0x0000007fU & vlSelfRef.PC_command)),7);
    bufp->chgCData(oldp+176,((7U & (vlSelfRef.PC_command 
                                    >> 0x0000000cU))),3);
    bufp->chgCData(oldp+177,((vlSelfRef.PC_command 
                              >> 0x00000019U)),7);
    bufp->chgSData(oldp+178,((vlSelfRef.PC_command 
                              >> 0x00000014U)),12);
    bufp->chgSData(oldp+179,(((0x00000fe0U & (vlSelfRef.PC_command 
                                              >> 0x00000014U)) 
                              | (0x0000001fU & (vlSelfRef.PC_command 
                                                >> 7U)))),12);
    bufp->chgSData(oldp+180,(((((2U & (vlSelfRef.PC_command 
                                       >> 0x0000001eU)) 
                                | (1U & (vlSelfRef.PC_command 
                                         >> 7U))) << 0x0000000aU) 
                              | ((0x000003f0U & (vlSelfRef.PC_command 
                                                 >> 0x00000015U)) 
                                 | (0x0000000fU & (vlSelfRef.PC_command 
                                                   >> 8U))))),12);
    bufp->chgIData(oldp+181,((vlSelfRef.PC_command 
                              >> 0x0000000cU)),20);
    bufp->chgIData(oldp+182,(((0x00080000U & (vlSelfRef.PC_command 
                                              >> 0x0000000cU)) 
                              | ((0x0007f800U & (vlSelfRef.PC_command 
                                                 >> 1U)) 
                                 | ((0x00000400U & 
                                     (vlSelfRef.PC_command 
                                      >> 0x0000000aU)) 
                                    | (0x000003ffU 
                                       & (vlSelfRef.PC_command 
                                          >> 0x00000015U)))))),20);
    bufp->chgBit(oldp+183,((IData)((0x00000013U == 
                                    (0x0000707fU & vlSelfRef.PC_command)))));
    bufp->chgBit(oldp+184,((IData)((3U == (0x0000707fU 
                                           & vlSelfRef.PC_command)))));
    bufp->chgCData(oldp+185,((((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADD) 
                               << 5U) | (((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isI) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.LSU_WEN) 
                                           << 3U) | 
                                          ((0x37U == 
                                            (0x0000007fU 
                                             & vlSelfRef.PC_command)) 
                                           << 1U))))),6);
    bufp->chgIData(oldp+186,(VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 8U)),32);
    bufp->chgIData(oldp+187,(VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000010U)),32);
    bufp->chgIData(oldp+188,(VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000018U)),32);
    bufp->chgIData(oldp+189,(((2U & vlSelfRef.LSU_address)
                               ? ((1U & vlSelfRef.LSU_address)
                                   ? VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000018U)
                                   : VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 0x00000010U))
                               : ((1U & vlSelfRef.LSU_address)
                                   ? VL_SHIFTL_III(32,32,32, vlSelfRef.LSU_writedata, 8U)
                                   : vlSelfRef.LSU_writedata))),32);
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

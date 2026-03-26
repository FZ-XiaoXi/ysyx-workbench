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
                      [3U])))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isGREATER));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ)
                                     ? (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL)
                                     : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBNE)
                                         ? (~ (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL))
                                         : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLT) 
                                             | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU))
                                             ? (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))
                                             : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGE) 
                                                 | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU)) 
                                                & (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))))))));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__out),32);
        bufp->chgQData(oldp+5,((0x00000001ffffffffULL 
                                & (~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))))),33);
        bufp->chgQData(oldp+7,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB),33);
        bufp->chgIData(oldp+9,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                 ? (0x000000ffU & vlSymsp->TOP__top__LSU_0.__PVT__lsu_rdata4)
                                 : (((- (IData)((1U 
                                                 & (vlSymsp->TOP__top__LSU_0.__PVT__lsu_rdata4 
                                                    >> 7U)))) 
                                     << 8U) | (0x000000ffU 
                                               & vlSymsp->TOP__top__LSU_0.__PVT__lsu_rdata4)))),32);
        bufp->chgIData(oldp+10,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                  ? (0x0000ffffU & vlSymsp->TOP__top__LSU_0.__PVT__lsu_rdata4)
                                  : (((- (IData)((1U 
                                                  & (vlSymsp->TOP__top__LSU_0.__PVT__lsu_rdata4 
                                                     >> 0x0000000fU)))) 
                                      << 0x00000010U) 
                                     | (0x0000ffffU 
                                        & vlSymsp->TOP__top__LSU_0.__PVT__lsu_rdata4)))),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_rdata4),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+12,(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__top__IFU_0.__PVT__bus_valid));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__top__IDU_0.__PVT__next_state));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__top__IFU_0.__PVT__next_state),2);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__top__IFU_0.__PVT__pmem_reqValid));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__top__IFU_0.ROM_0__DOT____Vcellinp__random_delay_pulse_0__start));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_reqValid));
        bufp->chgCData(oldp+19,(vlSymsp->TOP__top__LSU_0.__PVT__next_state),2);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__top__LSU_0.RAM_0__DOT____Vcellinp__random_delay_pulse_0__start));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+21,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_respValid));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__top__IFU_0.__PVT__pmem_respValid));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__top__IFU_0.__PVT__pmem_reqReady));
        bufp->chgCData(oldp+24,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+25,((1U & (IData)(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__lfsr_en));
        bufp->chgCData(oldp+27,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__delay_cnt),2);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__busy));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__start_d));
        bufp->chgBit(oldp+30,((1U & VL_REDXOR_2(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
        bufp->chgCData(oldp+31,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+32,((1U & (IData)(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__lfsr_en));
        bufp->chgCData(oldp+34,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__delay_cnt),2);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__busy));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__start_d));
        bufp->chgBit(oldp+37,((1U & VL_REDXOR_2(vlSymsp->TOP__top__IFU_0.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_reqReady));
        bufp->chgCData(oldp+39,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+40,((1U & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__lfsr_en));
        bufp->chgCData(oldp+42,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__delay_cnt),2);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__busy));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__start_d));
        bufp->chgBit(oldp+45,((1U & VL_REDXOR_2(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
        bufp->chgCData(oldp+46,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+47,((1U & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__lfsr_en));
        bufp->chgCData(oldp+49,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__delay_cnt),2);
        bufp->chgBit(oldp+50,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__busy));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__start_d));
        bufp->chgBit(oldp+52,((1U & VL_REDXOR_2(vlSymsp->TOP__top__LSU_0.__PVT__RAM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+53,(vlSymsp->TOP__top__IFU_0.__PVT__PC_command),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__top__IDU_0.__PVT__isR));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__top__IDU_0.__PVT__isI));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__top__IDU_0.__PVT__isB));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__top__IDU_0.__PVT__isU));
        bufp->chgBit(oldp+59,((0x6fU == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+60,(((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW) 
                               | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS) 
                                  | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC)))));
        bufp->chgCData(oldp+61,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 7U))),5);
        bufp->chgCData(oldp+62,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+63,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 0x00000014U))),5);
        bufp->chgSData(oldp+64,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+65,((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+66,((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+67,((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__top__IDU_0.__PVT__isLOAD));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__top__IDU_0.__PVT__isWRITE));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__top__IDU_0.__PVT__isJUMP));
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)))));
        bufp->chgBit(oldp+72,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_19) 
                               | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__top__IDU_0.__PVT__isCSR),2);
        bufp->chgBit(oldp+74,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_20) 
                               | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLT) 
                                  | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU)))));
        bufp->chgSData(oldp+75,((((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_1) 
                                  << 9U) | (((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin) 
                                             << 8U) 
                                            | ((((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_3) 
                                                    << 4U) 
                                                   | ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_4) 
                                                      << 3U))) 
                                               | (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_5) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_6) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_7))))))),10);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin));
        bufp->chgCData(oldp+77,((0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)),7);
        bufp->chgCData(oldp+78,((7U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+79,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x00000019U)),7);
        bufp->chgSData(oldp+80,(((0x00000fe0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U)) 
                                 | (0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                   >> 7U)))),12);
        bufp->chgSData(oldp+81,(((((2U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                          >> 0x0000001eU)) 
                                   | (1U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                            >> 7U))) 
                                  << 0x0000000aU) | 
                                 ((0x000003f0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000015U)) 
                                  | (0x0000000fU & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 8U))))),12);
        bufp->chgIData(oldp+82,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x0000000cU)),20);
        bufp->chgIData(oldp+83,(((0x00080000U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x0000000cU)) 
                                 | ((0x0007f800U & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 1U)) | ((0x00000400U 
                                                  & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                     >> 0x0000000aU)) 
                                                 | (0x000003ffU 
                                                    & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                       >> 0x00000015U)))))),20);
        bufp->chgCData(oldp+84,(((((((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isR) 
                                     << 3U) | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE) 
                                       << 1U) | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))) 
                                  << 3U) | (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isU) 
                                             << 2U) 
                                            | (((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW) 
                                                  | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS) 
                                                     | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC))))))),7);
        bufp->chgBit(oldp+85,((0x37U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+86,((0x17U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top__IDU_0.__PVT__isJALR));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__top__IDU_0.__PVT__isBNE));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__top__IDU_0.__PVT__isBLT));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__top__IDU_0.__PVT__isBGE));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU));
        bufp->chgBit(oldp+94,((IData)((3U == (0x0000707fU 
                                              & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__top__IDU_0.__PVT__isLH));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__top__IDU_0.__PVT__isLW));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__top__IDU_0.__PVT__isLBU));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__top__IDU_0.__PVT__isLHU));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__top__IDU_0.__PVT__isSB));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__top__IDU_0.__PVT__isSH));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__top__IDU_0.__PVT__isSW));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__top__IDU_0.__PVT__isADDI));
        bufp->chgBit(oldp+103,((IData)((0x00002013U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTIU));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__top__IDU_0.__PVT__isXORI));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__top__IDU_0.__PVT__isORI));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__top__IDU_0.__PVT__isANDI));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__top__IDU_0.__PVT__isSLLI));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__top__IDU_0.__PVT__isSRLI));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__top__IDU_0.__PVT__isSRAI));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__top__IDU_0.__PVT__isADD));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__top__IDU_0.__PVT__isSLL));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__top__IDU_0.__PVT__isSLT));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__top__IDU_0.__PVT__isXOR));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__top__IDU_0.__PVT__isSRL));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__top__IDU_0.__PVT__isSRA));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__top__IDU_0.__PVT__isOR));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__top__IDU_0.__PVT__isAND));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC));
        bufp->chgIData(oldp+123,(vlSymsp->TOP__top__IFU_0.__PVT__PC),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__top__IFU_0.__PVT__PC_command_t),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__top__LSU_0.__PVT__rdata),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__top__LSU_0.__PVT__val1),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__top__LSU_0.__PVT__val2),32);
        bufp->chgIData(oldp+128,((((- (IData)((vlSymsp->TOP__top__LSU_0.__PVT__rdata 
                                               >> 0x0000001fU))) 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__top__LSU_0.__PVT__val2 
                                     >> 8U))),32);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__top__REG_0.__PVT__WCSREN));
        bufp->chgIData(oldp+130,(vlSymsp->TOP__top__REG_0.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+131,(vlSelfRef.clk));
    bufp->chgBit(oldp+132,(vlSelfRef.rst));
    bufp->chgIData(oldp+133,(vlSelfRef.lsu_addr),32);
    bufp->chgCData(oldp+134,(vlSelfRef.LSU_rmask),4);
    bufp->chgCData(oldp+135,(vlSelfRef.lsu_wmask),4);
    bufp->chgIData(oldp+136,(vlSelfRef.lsu_wdata),32);
    bufp->chgBit(oldp+137,(vlSelfRef.LSU_WEN));
    bufp->chgIData(oldp+138,(vlSelfRef.lsu_rdata),32);
    bufp->chgIData(oldp+139,(vlSelfRef.PC_command),32);
    bufp->chgIData(oldp+140,(vlSelfRef.EXU_inA),32);
    bufp->chgIData(oldp+141,(vlSelfRef.EXU_inB),32);
    bufp->chgIData(oldp+142,(vlSelfRef.EXU_data),32);
    bufp->chgIData(oldp+143,(vlSelfRef.CSR_data),32);
    bufp->chgIData(oldp+144,(vlSelfRef.rs1_val),32);
    bufp->chgIData(oldp+145,(vlSelfRef.rs2_val),32);
    bufp->chgIData(oldp+146,(vlSelfRef.reg_data),32);
    bufp->chgIData(oldp+147,(vlSelfRef.imm),32);
    bufp->chgBit(oldp+148,(vlSelfRef.COMP_data));
    bufp->chgIData(oldp+149,(vlSymsp->TOP__top.PC),32);
    bufp->chgIData(oldp+150,(vlSymsp->TOP__top.dnpc),32);
    bufp->chgIData(oldp+151,(vlSymsp->TOP__top.snpc),32);
    bufp->chgBit(oldp+152,(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final));
    bufp->chgBit(oldp+153,(vlSymsp->TOP__top__REG_0.__PVT__gpr_WEN));
    bufp->chgIData(oldp+154,(vlSymsp->TOP__top__REG_0.CSR_MEPC),32);
    bufp->chgIData(oldp+155,(vlSymsp->TOP__top__REG_0.CSR_MTVEC),32);
    bufp->chgBit(oldp+156,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                    + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+157,((1U & ((~ (((vlSelfRef.rs1_val 
                                        ^ vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB) 
                                       | vlSymsp->TOP__top.__PVT__COMP_0__DOT__out) 
                                      >> 0x0000001fU)) 
                                  | ((~ (vlSelfRef.rs1_val 
                                         >> 0x0000001fU)) 
                                     & (vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB 
                                        >> 0x0000001fU))))));
    bufp->chgBit(oldp+158,(((~ (IData)((1ULL & ((1ULL 
                                                 + 
                                                 ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                  + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                >> 0x00000020U)))) 
                            & (0U != vlSymsp->TOP__top.__PVT__COMP_0__DOT__out))));
    bufp->chgQData(oldp+159,((QData)((IData)(vlSelfRef.rs1_val))),33);
    bufp->chgIData(oldp+161,((vlSelfRef.EXU_inA ^ vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+162,((vlSelfRef.EXU_inA | vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+163,((vlSelfRef.EXU_inA & vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+164,(VL_SHIFTRS_III(32,32,32, vlSelfRef.EXU_inA, 
                                            (0x0000001fU 
                                             & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+165,(VL_SHIFTR_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+166,(VL_SHIFTL_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+167,((vlSelfRef.EXU_inA + ((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                   + (IData)((QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))))),32);
    bufp->chgQData(oldp+168,((QData)((IData)(vlSelfRef.EXU_inA))),33);
    bufp->chgBit(oldp+170,((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.EXU_inA)) 
                                                   + 
                                                   (vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                    + (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+171,(vlSymsp->TOP__top__IDU_0.state));
    bufp->chgCData(oldp+172,(vlSymsp->TOP__top__IFU_0.state),2);
    bufp->chgBit(oldp+173,((1U & (~ (IData)(vlSelfRef.rst)))));
    bufp->chgCData(oldp+174,(vlSymsp->TOP__top__LSU_0.state),2);
    bufp->chgIData(oldp+175,(vlSymsp->TOP__top__REG_0.GPR[0]),32);
    bufp->chgIData(oldp+176,(vlSymsp->TOP__top__REG_0.GPR[1]),32);
    bufp->chgIData(oldp+177,(vlSymsp->TOP__top__REG_0.GPR[2]),32);
    bufp->chgIData(oldp+178,(vlSymsp->TOP__top__REG_0.GPR[3]),32);
    bufp->chgIData(oldp+179,(vlSymsp->TOP__top__REG_0.GPR[4]),32);
    bufp->chgIData(oldp+180,(vlSymsp->TOP__top__REG_0.GPR[5]),32);
    bufp->chgIData(oldp+181,(vlSymsp->TOP__top__REG_0.GPR[6]),32);
    bufp->chgIData(oldp+182,(vlSymsp->TOP__top__REG_0.GPR[7]),32);
    bufp->chgIData(oldp+183,(vlSymsp->TOP__top__REG_0.GPR[8]),32);
    bufp->chgIData(oldp+184,(vlSymsp->TOP__top__REG_0.GPR[9]),32);
    bufp->chgIData(oldp+185,(vlSymsp->TOP__top__REG_0.GPR[10]),32);
    bufp->chgIData(oldp+186,(vlSymsp->TOP__top__REG_0.GPR[11]),32);
    bufp->chgIData(oldp+187,(vlSymsp->TOP__top__REG_0.GPR[12]),32);
    bufp->chgIData(oldp+188,(vlSymsp->TOP__top__REG_0.GPR[13]),32);
    bufp->chgIData(oldp+189,(vlSymsp->TOP__top__REG_0.GPR[14]),32);
    bufp->chgIData(oldp+190,(vlSymsp->TOP__top__REG_0.GPR[15]),32);
    bufp->chgIData(oldp+191,(vlSymsp->TOP__top__REG_0.GPR[16]),32);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__top__REG_0.GPR[17]),32);
    bufp->chgIData(oldp+193,(vlSymsp->TOP__top__REG_0.GPR[18]),32);
    bufp->chgIData(oldp+194,(vlSymsp->TOP__top__REG_0.GPR[19]),32);
    bufp->chgIData(oldp+195,(vlSymsp->TOP__top__REG_0.GPR[20]),32);
    bufp->chgIData(oldp+196,(vlSymsp->TOP__top__REG_0.GPR[21]),32);
    bufp->chgIData(oldp+197,(vlSymsp->TOP__top__REG_0.GPR[22]),32);
    bufp->chgIData(oldp+198,(vlSymsp->TOP__top__REG_0.GPR[23]),32);
    bufp->chgIData(oldp+199,(vlSymsp->TOP__top__REG_0.GPR[24]),32);
    bufp->chgIData(oldp+200,(vlSymsp->TOP__top__REG_0.GPR[25]),32);
    bufp->chgIData(oldp+201,(vlSymsp->TOP__top__REG_0.GPR[26]),32);
    bufp->chgIData(oldp+202,(vlSymsp->TOP__top__REG_0.GPR[27]),32);
    bufp->chgIData(oldp+203,(vlSymsp->TOP__top__REG_0.GPR[28]),32);
    bufp->chgIData(oldp+204,(vlSymsp->TOP__top__REG_0.GPR[29]),32);
    bufp->chgIData(oldp+205,(vlSymsp->TOP__top__REG_0.GPR[30]),32);
    bufp->chgIData(oldp+206,(vlSymsp->TOP__top__REG_0.GPR[31]),32);
    bufp->chgIData(oldp+207,(vlSymsp->TOP__top__REG_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+208,(vlSymsp->TOP__top__REG_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+209,(vlSymsp->TOP__top__REG_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+210,(vlSymsp->TOP__top__REG_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+211,(vlSymsp->TOP__top__REG_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+212,(vlSymsp->TOP__top__REG_0.CSR_MARCHID),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

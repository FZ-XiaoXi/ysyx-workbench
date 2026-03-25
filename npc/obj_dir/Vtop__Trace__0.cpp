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
        bufp->chgBit(oldp+12,(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqValid));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__top__IFU_0.__PVT__bus_valid));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__top__IDU_0.__PVT__next_state));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__top__IFU_0.__PVT__next_state),2);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__top__IFU_0.__PVT__pmem_reqValid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+17,(vlSymsp->TOP__top__IFU_0.__PVT__PC_command),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__top__IDU_0.__PVT__isR));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__top__IDU_0.__PVT__isI));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__top__IDU_0.__PVT__isB));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__top__IDU_0.__PVT__isU));
        bufp->chgBit(oldp+23,((0x6fU == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+24,(((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW) 
                               | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS) 
                                  | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC)))));
        bufp->chgCData(oldp+25,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 7U))),5);
        bufp->chgCData(oldp+26,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+27,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                >> 0x00000014U))),5);
        bufp->chgSData(oldp+28,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+29,((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+30,((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+31,((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__top__IDU_0.__PVT__isLOAD));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__top__IDU_0.__PVT__isWRITE));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__top__IDU_0.__PVT__isJUMP));
        bufp->chgBit(oldp+35,((1U & (~ (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)))));
        bufp->chgBit(oldp+36,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_19) 
                               | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))));
        bufp->chgCData(oldp+37,(vlSymsp->TOP__top__IDU_0.__PVT__isCSR),2);
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_20) 
                               | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLT) 
                                  | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU)))));
        bufp->chgSData(oldp+39,((((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_1) 
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
        bufp->chgBit(oldp+40,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin));
        bufp->chgCData(oldp+41,((0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)),7);
        bufp->chgCData(oldp+42,((7U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+43,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x00000019U)),7);
        bufp->chgSData(oldp+44,(((0x00000fe0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U)) 
                                 | (0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                   >> 7U)))),12);
        bufp->chgSData(oldp+45,(((((2U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                          >> 0x0000001eU)) 
                                   | (1U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                            >> 7U))) 
                                  << 0x0000000aU) | 
                                 ((0x000003f0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000015U)) 
                                  | (0x0000000fU & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 8U))))),12);
        bufp->chgIData(oldp+46,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                 >> 0x0000000cU)),20);
        bufp->chgIData(oldp+47,(((0x00080000U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x0000000cU)) 
                                 | ((0x0007f800U & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 1U)) | ((0x00000400U 
                                                  & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                     >> 0x0000000aU)) 
                                                 | (0x000003ffU 
                                                    & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                       >> 0x00000015U)))))),20);
        bufp->chgCData(oldp+48,(((((((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isR) 
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
        bufp->chgBit(oldp+49,((0x37U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+50,((0x17U == (0x0000007fU 
                                         & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__top__IDU_0.__PVT__isJALR));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__top__IDU_0.__PVT__isBNE));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__top__IDU_0.__PVT__isBLT));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__top__IDU_0.__PVT__isBGE));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU));
        bufp->chgBit(oldp+58,((IData)((3U == (0x0000707fU 
                                              & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__top__IDU_0.__PVT__isLH));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__top__IDU_0.__PVT__isLW));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__top__IDU_0.__PVT__isLBU));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__top__IDU_0.__PVT__isLHU));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__top__IDU_0.__PVT__isSB));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__top__IDU_0.__PVT__isSH));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__top__IDU_0.__PVT__isSW));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__top__IDU_0.__PVT__isADDI));
        bufp->chgBit(oldp+67,((IData)((0x00002013U 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTIU));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__top__IDU_0.__PVT__isXORI));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__top__IDU_0.__PVT__isORI));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__top__IDU_0.__PVT__isANDI));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__top__IDU_0.__PVT__isSLLI));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__top__IDU_0.__PVT__isSRLI));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__top__IDU_0.__PVT__isSRAI));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__top__IDU_0.__PVT__isADD));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__top__IDU_0.__PVT__isSLL));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__top__IDU_0.__PVT__isSLT));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__top__IDU_0.__PVT__isXOR));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__top__IDU_0.__PVT__isSRL));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__top__IDU_0.__PVT__isSRA));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__top__IDU_0.__PVT__isOR));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__top__IDU_0.__PVT__isAND));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__top__IFU_0.__PVT__PC),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__top__LSU_0.__PVT__rdata),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__top__LSU_0.__PVT__val1),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__top__LSU_0.__PVT__val2),32);
        bufp->chgIData(oldp+91,((((- (IData)((vlSymsp->TOP__top__LSU_0.__PVT__rdata 
                                              >> 0x0000001fU))) 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top__LSU_0.__PVT__val2 
                                  >> 8U))),32);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__top__REG_0.__PVT__WCSREN));
        bufp->chgIData(oldp+93,(vlSymsp->TOP__top__REG_0.__PVT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+94,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_respValid));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__top__IFU_0.__PVT__pmem_respValid));
        bufp->chgCData(oldp+96,(vlSymsp->TOP__top__IFU_0.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state),3);
        bufp->chgBit(oldp+97,((1U & (IData)(vlSymsp->TOP__top__IFU_0.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__top__IFU_0.__PVT__random_delay_pulse_0__DOT__lfsr_en));
        bufp->chgCData(oldp+99,(vlSymsp->TOP__top__IFU_0.__PVT__random_delay_pulse_0__DOT__delay_cnt),3);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__top__IFU_0.__PVT__random_delay_pulse_0__DOT__busy));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__top__IFU_0.__PVT__random_delay_pulse_0__DOT__start_d));
        bufp->chgBit(oldp+102,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top__IFU_0.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))))));
        bufp->chgCData(oldp+103,(vlSymsp->TOP__top__LSU_0.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state),3);
        bufp->chgBit(oldp+104,((1U & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__top__LSU_0.__PVT__random_delay_pulse_0__DOT__lfsr_en));
        bufp->chgCData(oldp+106,(vlSymsp->TOP__top__LSU_0.__PVT__random_delay_pulse_0__DOT__delay_cnt),3);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__top__LSU_0.__PVT__random_delay_pulse_0__DOT__busy));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__top__LSU_0.__PVT__random_delay_pulse_0__DOT__start_d));
        bufp->chgBit(oldp+109,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__random_delay_pulse_0__DOT__u_lfsr__DOT__state))))));
    }
    bufp->chgBit(oldp+110,(vlSelfRef.clk));
    bufp->chgBit(oldp+111,(vlSelfRef.rst));
    bufp->chgIData(oldp+112,(vlSelfRef.lsu_addr),32);
    bufp->chgCData(oldp+113,(vlSelfRef.LSU_rmask),4);
    bufp->chgCData(oldp+114,(vlSelfRef.lsu_wmask),4);
    bufp->chgIData(oldp+115,(vlSelfRef.lsu_wdata),32);
    bufp->chgBit(oldp+116,(vlSelfRef.LSU_WEN));
    bufp->chgBit(oldp+117,(vlSelfRef.lsu_reqValid));
    bufp->chgIData(oldp+118,(vlSelfRef.lsu_rdata),32);
    bufp->chgIData(oldp+119,(vlSelfRef.PC_command),32);
    bufp->chgIData(oldp+120,(vlSelfRef.EXU_inA),32);
    bufp->chgIData(oldp+121,(vlSelfRef.EXU_inB),32);
    bufp->chgIData(oldp+122,(vlSelfRef.EXU_data),32);
    bufp->chgIData(oldp+123,(vlSelfRef.CSR_data),32);
    bufp->chgIData(oldp+124,(vlSelfRef.rs1_val),32);
    bufp->chgIData(oldp+125,(vlSelfRef.rs2_val),32);
    bufp->chgIData(oldp+126,(vlSelfRef.reg_data),32);
    bufp->chgIData(oldp+127,(vlSelfRef.imm),32);
    bufp->chgBit(oldp+128,(vlSelfRef.COMP_data));
    bufp->chgIData(oldp+129,(vlSymsp->TOP__top.PC),32);
    bufp->chgIData(oldp+130,(vlSymsp->TOP__top.dnpc),32);
    bufp->chgIData(oldp+131,(vlSymsp->TOP__top.snpc),32);
    bufp->chgBit(oldp+132,(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final));
    bufp->chgBit(oldp+133,(vlSymsp->TOP__top__REG_0.__PVT__gpr_WEN));
    bufp->chgIData(oldp+134,(vlSymsp->TOP__top__REG_0.CSR_MEPC),32);
    bufp->chgIData(oldp+135,(vlSymsp->TOP__top__REG_0.CSR_MTVEC),32);
    bufp->chgBit(oldp+136,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                    + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+137,((1U & ((~ (((vlSelfRef.rs1_val 
                                        ^ vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB) 
                                       | vlSymsp->TOP__top.__PVT__COMP_0__DOT__out) 
                                      >> 0x0000001fU)) 
                                  | ((~ (vlSelfRef.rs1_val 
                                         >> 0x0000001fU)) 
                                     & (vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB 
                                        >> 0x0000001fU))))));
    bufp->chgBit(oldp+138,(((~ (IData)((1ULL & ((1ULL 
                                                 + 
                                                 ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                  + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                >> 0x00000020U)))) 
                            & (0U != vlSymsp->TOP__top.__PVT__COMP_0__DOT__out))));
    bufp->chgQData(oldp+139,((QData)((IData)(vlSelfRef.rs1_val))),33);
    bufp->chgIData(oldp+141,((vlSelfRef.EXU_inA ^ vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+142,((vlSelfRef.EXU_inA | vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+143,((vlSelfRef.EXU_inA & vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+144,(VL_SHIFTRS_III(32,32,32, vlSelfRef.EXU_inA, 
                                            (0x0000001fU 
                                             & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+145,(VL_SHIFTR_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+146,(VL_SHIFTL_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+147,((vlSelfRef.EXU_inA + ((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                   + (IData)((QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))))),32);
    bufp->chgQData(oldp+148,((QData)((IData)(vlSelfRef.EXU_inA))),33);
    bufp->chgBit(oldp+150,((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.EXU_inA)) 
                                                   + 
                                                   (vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                    + (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+151,(vlSymsp->TOP__top__IDU_0.state));
    bufp->chgCData(oldp+152,(vlSymsp->TOP__top__IFU_0.state),2);
    bufp->chgBit(oldp+153,((1U & (~ (IData)(vlSelfRef.rst)))));
    bufp->chgBit(oldp+154,(vlSymsp->TOP__top__LSU_0.state));
    bufp->chgBit(oldp+155,((1U & ((IData)(vlSymsp->TOP__top__LSU_0.state)
                                   ? (~ (IData)(vlSymsp->TOP__top__LSU_0.__PVT__lsu_respValid))
                                   : (IData)(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqValid)))));
    bufp->chgIData(oldp+156,(vlSymsp->TOP__top__REG_0.GPR[0]),32);
    bufp->chgIData(oldp+157,(vlSymsp->TOP__top__REG_0.GPR[1]),32);
    bufp->chgIData(oldp+158,(vlSymsp->TOP__top__REG_0.GPR[2]),32);
    bufp->chgIData(oldp+159,(vlSymsp->TOP__top__REG_0.GPR[3]),32);
    bufp->chgIData(oldp+160,(vlSymsp->TOP__top__REG_0.GPR[4]),32);
    bufp->chgIData(oldp+161,(vlSymsp->TOP__top__REG_0.GPR[5]),32);
    bufp->chgIData(oldp+162,(vlSymsp->TOP__top__REG_0.GPR[6]),32);
    bufp->chgIData(oldp+163,(vlSymsp->TOP__top__REG_0.GPR[7]),32);
    bufp->chgIData(oldp+164,(vlSymsp->TOP__top__REG_0.GPR[8]),32);
    bufp->chgIData(oldp+165,(vlSymsp->TOP__top__REG_0.GPR[9]),32);
    bufp->chgIData(oldp+166,(vlSymsp->TOP__top__REG_0.GPR[10]),32);
    bufp->chgIData(oldp+167,(vlSymsp->TOP__top__REG_0.GPR[11]),32);
    bufp->chgIData(oldp+168,(vlSymsp->TOP__top__REG_0.GPR[12]),32);
    bufp->chgIData(oldp+169,(vlSymsp->TOP__top__REG_0.GPR[13]),32);
    bufp->chgIData(oldp+170,(vlSymsp->TOP__top__REG_0.GPR[14]),32);
    bufp->chgIData(oldp+171,(vlSymsp->TOP__top__REG_0.GPR[15]),32);
    bufp->chgIData(oldp+172,(vlSymsp->TOP__top__REG_0.GPR[16]),32);
    bufp->chgIData(oldp+173,(vlSymsp->TOP__top__REG_0.GPR[17]),32);
    bufp->chgIData(oldp+174,(vlSymsp->TOP__top__REG_0.GPR[18]),32);
    bufp->chgIData(oldp+175,(vlSymsp->TOP__top__REG_0.GPR[19]),32);
    bufp->chgIData(oldp+176,(vlSymsp->TOP__top__REG_0.GPR[20]),32);
    bufp->chgIData(oldp+177,(vlSymsp->TOP__top__REG_0.GPR[21]),32);
    bufp->chgIData(oldp+178,(vlSymsp->TOP__top__REG_0.GPR[22]),32);
    bufp->chgIData(oldp+179,(vlSymsp->TOP__top__REG_0.GPR[23]),32);
    bufp->chgIData(oldp+180,(vlSymsp->TOP__top__REG_0.GPR[24]),32);
    bufp->chgIData(oldp+181,(vlSymsp->TOP__top__REG_0.GPR[25]),32);
    bufp->chgIData(oldp+182,(vlSymsp->TOP__top__REG_0.GPR[26]),32);
    bufp->chgIData(oldp+183,(vlSymsp->TOP__top__REG_0.GPR[27]),32);
    bufp->chgIData(oldp+184,(vlSymsp->TOP__top__REG_0.GPR[28]),32);
    bufp->chgIData(oldp+185,(vlSymsp->TOP__top__REG_0.GPR[29]),32);
    bufp->chgIData(oldp+186,(vlSymsp->TOP__top__REG_0.GPR[30]),32);
    bufp->chgIData(oldp+187,(vlSymsp->TOP__top__REG_0.GPR[31]),32);
    bufp->chgIData(oldp+188,(vlSymsp->TOP__top__REG_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+189,(vlSymsp->TOP__top__REG_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+190,(vlSymsp->TOP__top__REG_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+191,(vlSymsp->TOP__top__REG_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__top__REG_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+193,(vlSymsp->TOP__top__REG_0.CSR_MARCHID),32);
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

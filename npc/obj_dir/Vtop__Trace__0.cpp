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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__top.__PVT__S_bresp),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+1,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isGREATER));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ)
                                     ? (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL)
                                     : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBNE)
                                         ? (~ (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL))
                                         : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLT) 
                                             | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU))
                                             ? (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))
                                             : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGE) 
                                                 | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU)) 
                                                & (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))))))));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid));
        bufp->chgIData(oldp+5,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB),32);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__out),32);
        bufp->chgQData(oldp+10,((0x00000001ffffffffULL 
                                 & (~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))))),33);
        bufp->chgQData(oldp+12,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB),33);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__top__LSU_0.__PVT__val),32);
        bufp->chgIData(oldp+15,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                  ? (0x000000ffU & vlSymsp->TOP__top__LSU_0.__PVT__val)
                                  : (((- (IData)((1U 
                                                  & (vlSymsp->TOP__top__LSU_0.__PVT__val 
                                                     >> 7U)))) 
                                      << 8U) | (0x000000ffU 
                                                & vlSymsp->TOP__top__LSU_0.__PVT__val)))),32);
        bufp->chgIData(oldp+16,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                  ? (0x0000ffffU & vlSymsp->TOP__top__LSU_0.__PVT__val)
                                  : (((- (IData)((1U 
                                                  & (vlSymsp->TOP__top__LSU_0.__PVT__val 
                                                     >> 0x0000000fU)))) 
                                      << 0x00000010U) 
                                     | (0x0000ffffU 
                                        & vlSymsp->TOP__top__LSU_0.__PVT__val)))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+17,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_final));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__top__REG_0.__PVT__gpr_WEN));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__top.__PVT__IROM_arready));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__top.__PVT__DRAM_bvalid));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__top.__PVT__DRAM_awready));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__top.__PVT__DRAM_wready));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__top.__PVT__DRAM_arready));
        bufp->chgCData(oldp+28,(vlSymsp->TOP__top.__PVT__DRAM_bresp),2);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__top.__PVT__S_araddr),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__top.__PVT__S_awaddr),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__top.__PVT__S_wdata),32);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__top.__PVT__S_arvalid));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__top.__PVT__S_awvalid));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__top.__PVT__S_awready));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__top.__PVT__S_wvalid));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__top.__PVT__S_wready));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__top.__PVT__S_bready));
        bufp->chgCData(oldp+39,(vlSymsp->TOP__top.__PVT__S_wstrb),4);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__top.__PVT__RAM_awaddr),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__top.__PVT__RAM_wdata),32);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__top.__PVT__RAM_wstrb),4);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__top.__PVT__RAM_awvalid));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__top.__PVT__RAM_wvalid));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_arvalid));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_arready));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_rready));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__top.__PVT__RAM_bready));
        bufp->chgIData(oldp+49,(vlSymsp->TOP__top.__PVT__UART_awaddr),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__top.__PVT__UART_wdata),32);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__top.__PVT__UART_wstrb),4);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__top.__PVT__UART_awvalid));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__top.__PVT__UART_wvalid));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_arvalid));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_arready));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_rready));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__top.__PVT__UART_bready));
        bufp->chgIData(oldp+58,(vlSymsp->TOP__top.__PVT__CLINT_awaddr),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__top.__PVT__CLINT_wdata),32);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__top.__PVT__CLINT_wstrb),4);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__top.__PVT__CLINT_awvalid));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__top.__PVT__CLINT_wvalid));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_arvalid));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_arready));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_rready));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__top.__PVT__CLINT_bready));
        bufp->chgCData(oldp+67,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_next),2);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_req_fire));
        bufp->chgCData(oldp+69,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_next),2);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_req_fire));
        bufp->chgCData(oldp+71,(vlSymsp->TOP__top.__PVT__RAM__DOT__r_next),2);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__start));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__top.__PVT__RAM__DOT__w_next),2);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__start));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready));
        bufp->chgCData(oldp+77,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bresp),2);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bvalid));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next));
        bufp->chgCData(oldp+83,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__r_next),2);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__start));
        bufp->chgCData(oldp+85,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_next),2);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__start));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__R_next_state));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__W_next_state));
        bufp->chgBit(oldp+89,(((IData)(vlSymsp->TOP__top.__PVT__S_awready) 
                               & (IData)(vlSymsp->TOP__top.__PVT__S_awvalid))));
        bufp->chgBit(oldp+90,(((IData)(vlSymsp->TOP__top.__PVT__S_arvalid) 
                               & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready))));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__top__IDU_0.__PVT__next_state));
        bufp->chgCData(oldp+92,(vlSymsp->TOP__top__IFU_0.__PVT__next_state),2);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__top__IFU_0.__PVT__r_fire));
        bufp->chgCData(oldp+94,(vlSymsp->TOP__top__LSU_0.__PVT__next_state),3);
        bufp->chgBit(oldp+95,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                               & (IData)(vlSymsp->TOP__top.__PVT__DRAM_awready))));
        bufp->chgBit(oldp+96,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                               & (IData)(vlSymsp->TOP__top.__PVT__DRAM_wready))));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__top__LSU_0.__PVT__b_fire));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__top__LSU_0.__PVT__ar_fire));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__top__LSU_0.__PVT__r_fire));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+100,(vlSymsp->TOP__top__IFU_0.__PVT__PC_command),32);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__top__IDU_0.__PVT__isR));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__top__IDU_0.__PVT__isI));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__top__IDU_0.__PVT__isB));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__top__IDU_0.__PVT__isU));
        bufp->chgBit(oldp+106,((0x6fU == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+107,(((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW) 
                                | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS) 
                                   | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC)))));
        bufp->chgCData(oldp+108,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+109,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+110,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U))),5);
        bufp->chgSData(oldp+111,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                  >> 0x00000014U)),12);
        bufp->chgBit(oldp+112,((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+113,((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+114,((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__top__IDU_0.__PVT__isLOAD));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__top__IDU_0.__PVT__isWRITE));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__top__IDU_0.__PVT__isJUMP));
        bufp->chgBit(oldp+118,((1U & (~ (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)))));
        bufp->chgBit(oldp+119,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_19) 
                                | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))));
        bufp->chgCData(oldp+120,(vlSymsp->TOP__top__IDU_0.__PVT__isCSR),2);
        bufp->chgBit(oldp+121,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_20) 
                                | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLT) 
                                   | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU)))));
        bufp->chgSData(oldp+122,((((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_1) 
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
        bufp->chgIData(oldp+123,(vlSymsp->TOP__top__IFU_0.__PVT__PC),32);
        bufp->chgIData(oldp+124,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? 0U : vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata)
                                   : 0U)),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata),32);
        bufp->chgBit(oldp+128,((0U == (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__w_state))));
        bufp->chgIData(oldp+129,(((2U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__r_state))
                                   ? vlSymsp->TOP__top.__PVT__UART_inst__DOT__rdata_hold
                                   : 0xdeadbeefU)),32);
        bufp->chgBit(oldp+130,((0U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state))));
        bufp->chgIData(oldp+131,(((2U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_state))
                                   ? vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__rdata_hold
                                   : vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__current_clint_rdata)),32);
        bufp->chgBit(oldp+132,((0U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state))));
        bufp->chgCData(oldp+133,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_state),2);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__raddr_reg),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__rdata_hold),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__current_clint_rdata),32);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state),2);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__mtime_L),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__mtime_H),32);
        bufp->chgBit(oldp+140,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin));
        bufp->chgCData(oldp+141,(vlSymsp->TOP__top.__PVT__RAM__DOT__r_state),2);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__top.__PVT__RAM__DOT__raddr_reg),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__top.__PVT__RAM__DOT__rdata_hold),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__top.__PVT__RAM__DOT__current_mem_rdata),32);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__top.__PVT__RAM__DOT__w_state),2);
        bufp->chgBit(oldp+146,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__r_state),2);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__raddr_reg),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__rdata_hold),32);
        bufp->chgCData(oldp+153,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state),2);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg),4);
        bufp->chgCData(oldp+155,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg),4);
        bufp->chgBit(oldp+156,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__R_state));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__W_state));
        bufp->chgCData(oldp+158,((0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)),7);
        bufp->chgCData(oldp+159,((7U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+160,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                  >> 0x00000019U)),7);
        bufp->chgSData(oldp+161,(((0x00000fe0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 7U)))),12);
        bufp->chgSData(oldp+162,(((((2U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                           >> 0x0000001eU)) 
                                    | (1U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                             >> 7U))) 
                                   << 0x0000000aU) 
                                  | ((0x000003f0U & 
                                      (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                       >> 0x00000015U)) 
                                     | (0x0000000fU 
                                        & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                           >> 8U))))),12);
        bufp->chgIData(oldp+163,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                  >> 0x0000000cU)),20);
        bufp->chgIData(oldp+164,(((0x00080000U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x0000000cU)) 
                                  | ((0x0007f800U & 
                                      (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                       >> 1U)) | ((0x00000400U 
                                                   & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                      >> 0x0000000aU)) 
                                                  | (0x000003ffU 
                                                     & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                        >> 0x00000015U)))))),20);
        bufp->chgCData(oldp+165,(((((((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isR) 
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
        bufp->chgBit(oldp+166,((0x37U == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+167,((0x17U == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__top__IDU_0.__PVT__isJALR));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__top__IDU_0.__PVT__isBNE));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__top__IDU_0.__PVT__isBLT));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__top__IDU_0.__PVT__isBGE));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU));
        bufp->chgBit(oldp+175,((IData)((3U == (0x0000707fU 
                                               & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__top__IDU_0.__PVT__isLH));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__top__IDU_0.__PVT__isLW));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__top__IDU_0.__PVT__isLBU));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__top__IDU_0.__PVT__isLHU));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__top__IDU_0.__PVT__isSB));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__top__IDU_0.__PVT__isSH));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__top__IDU_0.__PVT__isSW));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__top__IDU_0.__PVT__isADDI));
        bufp->chgBit(oldp+184,((IData)((0x00002013U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTIU));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__top__IDU_0.__PVT__isXORI));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__top__IDU_0.__PVT__isORI));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__top__IDU_0.__PVT__isANDI));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__top__IDU_0.__PVT__isSLLI));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__top__IDU_0.__PVT__isSRLI));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__top__IDU_0.__PVT__isSRAI));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__top__IDU_0.__PVT__isADD));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__top__IDU_0.__PVT__isSLL));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__top__IDU_0.__PVT__isSLT));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__top__IDU_0.__PVT__isXOR));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__top__IDU_0.__PVT__isSRL));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__top__IDU_0.__PVT__isSRA));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__top__IDU_0.__PVT__isOR));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__top__IDU_0.__PVT__isAND));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC));
        bufp->chgIData(oldp+204,(vlSymsp->TOP__top__LSU_0.__PVT__val1),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__top__LSU_0.__PVT__val2),32);
        bufp->chgIData(oldp+206,((((- (IData)((vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                               >> 0x0000001fU))) 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__top__LSU_0.__PVT__val2 
                                     >> 8U))),32);
        bufp->chgBit(oldp+207,(vlSymsp->TOP__top__REG_0.__PVT__WCSREN));
        bufp->chgIData(oldp+208,(vlSymsp->TOP__top__REG_0.__PVT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+209,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock));
        bufp->chgCData(oldp+211,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state),4);
        bufp->chgBit(oldp+212,((1U & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+214,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt),4);
        bufp->chgBit(oldp+215,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__busy));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+218,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))))));
        bufp->chgCData(oldp+219,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+220,((1U & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+222,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt),2);
        bufp->chgBit(oldp+223,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__busy));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+226,((1U & VL_REDXOR_2(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock));
        bufp->chgCData(oldp+229,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state),4);
        bufp->chgBit(oldp+230,((1U & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+232,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt),4);
        bufp->chgBit(oldp+233,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__busy));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+236,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))))));
        bufp->chgCData(oldp+237,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+238,((1U & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+240,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt),2);
        bufp->chgBit(oldp+241,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__busy));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+244,((1U & VL_REDXOR_2(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock));
        bufp->chgCData(oldp+247,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state),4);
        bufp->chgBit(oldp+248,((1U & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+250,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt),4);
        bufp->chgBit(oldp+251,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__busy));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+254,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))))));
        bufp->chgCData(oldp+255,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+256,((1U & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+258,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt),2);
        bufp->chgBit(oldp+259,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__busy));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+262,((1U & VL_REDXOR_2(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+263,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__top.__PVT__S_bvalid));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_bvalid));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_rvalid));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid));
    }
    bufp->chgBit(oldp+269,(vlSelfRef.clk));
    bufp->chgBit(oldp+270,(vlSelfRef.rst));
    bufp->chgIData(oldp+271,(vlSelfRef.lsu_addr),32);
    bufp->chgCData(oldp+272,(vlSelfRef.LSU_rmask),4);
    bufp->chgCData(oldp+273,(vlSelfRef.lsu_wmask),4);
    bufp->chgIData(oldp+274,(vlSelfRef.lsu_wdata),32);
    bufp->chgBit(oldp+275,(vlSelfRef.LSU_WEN));
    bufp->chgIData(oldp+276,(vlSelfRef.lsu_rdata),32);
    bufp->chgIData(oldp+277,(vlSelfRef.PC_command),32);
    bufp->chgIData(oldp+278,(vlSelfRef.EXU_inA),32);
    bufp->chgIData(oldp+279,(vlSelfRef.EXU_inB),32);
    bufp->chgIData(oldp+280,(vlSelfRef.EXU_data),32);
    bufp->chgIData(oldp+281,(vlSelfRef.CSR_data),32);
    bufp->chgIData(oldp+282,(vlSelfRef.rs1_val),32);
    bufp->chgIData(oldp+283,(vlSelfRef.rs2_val),32);
    bufp->chgIData(oldp+284,(vlSelfRef.reg_data),32);
    bufp->chgIData(oldp+285,(vlSelfRef.imm),32);
    bufp->chgBit(oldp+286,(vlSelfRef.COMP_data));
    bufp->chgIData(oldp+287,(vlSymsp->TOP__top.PC),32);
    bufp->chgIData(oldp+288,(vlSymsp->TOP__top.dnpc),32);
    bufp->chgIData(oldp+289,(vlSymsp->TOP__top.snpc),32);
    bufp->chgIData(oldp+290,(vlSymsp->TOP__top__REG_0.CSR_MEPC),32);
    bufp->chgIData(oldp+291,(vlSymsp->TOP__top__REG_0.CSR_MTVEC),32);
    bufp->chgBit(oldp+292,((3U == (IData)(vlSymsp->TOP__top__IFU_0.state))));
    bufp->chgBit(oldp+293,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                            & ((~ (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)))));
    bufp->chgBit(oldp+294,((3U != (IData)(vlSymsp->TOP__top__IFU_0.state))));
    bufp->chgBit(oldp+295,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                            & ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                               & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)))));
    bufp->chgIData(oldp+296,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                               ? vlSymsp->TOP__top.__PVT__S_araddr
                               : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                   ? 0xdeadbeefU : 
                                  ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                    ? 0xdeadbeefU : 
                                   ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                     ? 0xdeadbeefU : 
                                    ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                      ? 0xdeadbeefU
                                      : vlSymsp->TOP__top.__PVT__S_araddr)))))),32);
    bufp->chgIData(oldp+297,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                               ? 0xdeadbeefU : ((2U 
                                                 == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                 ? 
                                                (vlSymsp->TOP__top.__PVT__S_araddr 
                                                 - (IData)(0x10000000U))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                  ? 0xdeadbeefU
                                                  : 
                                                 ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? 
                                                  (vlSymsp->TOP__top.__PVT__S_araddr 
                                                   - (IData)(0x10000000U))
                                                   : 0xdeadbeefU))))),32);
    bufp->chgBit(oldp+298,(((2U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state)) 
                            | ((1U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock)))));
    bufp->chgIData(oldp+299,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                               ? 0xdeadbeefU : ((2U 
                                                 == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                 ? 0xdeadbeefU
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                  ? 
                                                 (vlSymsp->TOP__top.__PVT__S_araddr 
                                                  - (IData)(0x10000048U))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                    ? 
                                                   (vlSymsp->TOP__top.__PVT__S_araddr 
                                                    - (IData)(0x10000048U))
                                                    : 0xdeadbeefU)))))),32);
    bufp->chgBit(oldp+300,(((2U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state)) 
                            | ((1U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock)))));
    bufp->chgBit(oldp+301,((1U & (~ (IData)(vlSelfRef.rst)))));
    bufp->chgBit(oldp+302,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                    + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+303,((1U & ((~ (((vlSelfRef.rs1_val 
                                        ^ vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB) 
                                       | vlSymsp->TOP__top.__PVT__COMP_0__DOT__out) 
                                      >> 0x0000001fU)) 
                                  | ((~ (vlSelfRef.rs1_val 
                                         >> 0x0000001fU)) 
                                     & (vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB 
                                        >> 0x0000001fU))))));
    bufp->chgBit(oldp+304,(((~ (IData)((1ULL & ((1ULL 
                                                 + 
                                                 ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                  + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                >> 0x00000020U)))) 
                            & (0U != vlSymsp->TOP__top.__PVT__COMP_0__DOT__out))));
    bufp->chgQData(oldp+305,((QData)((IData)(vlSelfRef.rs1_val))),33);
    bufp->chgIData(oldp+307,((vlSelfRef.EXU_inA ^ vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+308,((vlSelfRef.EXU_inA | vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+309,((vlSelfRef.EXU_inA & vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+310,(VL_SHIFTRS_III(32,32,32, vlSelfRef.EXU_inA, 
                                            (0x0000001fU 
                                             & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+311,(VL_SHIFTR_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+312,(VL_SHIFTL_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+313,((vlSelfRef.EXU_inA + ((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                   + (IData)((QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))))),32);
    bufp->chgQData(oldp+314,((QData)((IData)(vlSelfRef.EXU_inA))),33);
    bufp->chgBit(oldp+316,((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.EXU_inA)) 
                                                   + 
                                                   (vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                    + (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+317,(vlSymsp->TOP__top__IDU_0.state));
    bufp->chgCData(oldp+318,(vlSymsp->TOP__top__IFU_0.state),2);
    bufp->chgBit(oldp+319,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                            & (IData)(vlSymsp->TOP__top.__PVT__IROM_arready))));
    bufp->chgCData(oldp+320,(vlSymsp->TOP__top__LSU_0.state),3);
    bufp->chgIData(oldp+321,(vlSymsp->TOP__top__REG_0.GPR[0]),32);
    bufp->chgIData(oldp+322,(vlSymsp->TOP__top__REG_0.GPR[1]),32);
    bufp->chgIData(oldp+323,(vlSymsp->TOP__top__REG_0.GPR[2]),32);
    bufp->chgIData(oldp+324,(vlSymsp->TOP__top__REG_0.GPR[3]),32);
    bufp->chgIData(oldp+325,(vlSymsp->TOP__top__REG_0.GPR[4]),32);
    bufp->chgIData(oldp+326,(vlSymsp->TOP__top__REG_0.GPR[5]),32);
    bufp->chgIData(oldp+327,(vlSymsp->TOP__top__REG_0.GPR[6]),32);
    bufp->chgIData(oldp+328,(vlSymsp->TOP__top__REG_0.GPR[7]),32);
    bufp->chgIData(oldp+329,(vlSymsp->TOP__top__REG_0.GPR[8]),32);
    bufp->chgIData(oldp+330,(vlSymsp->TOP__top__REG_0.GPR[9]),32);
    bufp->chgIData(oldp+331,(vlSymsp->TOP__top__REG_0.GPR[10]),32);
    bufp->chgIData(oldp+332,(vlSymsp->TOP__top__REG_0.GPR[11]),32);
    bufp->chgIData(oldp+333,(vlSymsp->TOP__top__REG_0.GPR[12]),32);
    bufp->chgIData(oldp+334,(vlSymsp->TOP__top__REG_0.GPR[13]),32);
    bufp->chgIData(oldp+335,(vlSymsp->TOP__top__REG_0.GPR[14]),32);
    bufp->chgIData(oldp+336,(vlSymsp->TOP__top__REG_0.GPR[15]),32);
    bufp->chgIData(oldp+337,(vlSymsp->TOP__top__REG_0.GPR[16]),32);
    bufp->chgIData(oldp+338,(vlSymsp->TOP__top__REG_0.GPR[17]),32);
    bufp->chgIData(oldp+339,(vlSymsp->TOP__top__REG_0.GPR[18]),32);
    bufp->chgIData(oldp+340,(vlSymsp->TOP__top__REG_0.GPR[19]),32);
    bufp->chgIData(oldp+341,(vlSymsp->TOP__top__REG_0.GPR[20]),32);
    bufp->chgIData(oldp+342,(vlSymsp->TOP__top__REG_0.GPR[21]),32);
    bufp->chgIData(oldp+343,(vlSymsp->TOP__top__REG_0.GPR[22]),32);
    bufp->chgIData(oldp+344,(vlSymsp->TOP__top__REG_0.GPR[23]),32);
    bufp->chgIData(oldp+345,(vlSymsp->TOP__top__REG_0.GPR[24]),32);
    bufp->chgIData(oldp+346,(vlSymsp->TOP__top__REG_0.GPR[25]),32);
    bufp->chgIData(oldp+347,(vlSymsp->TOP__top__REG_0.GPR[26]),32);
    bufp->chgIData(oldp+348,(vlSymsp->TOP__top__REG_0.GPR[27]),32);
    bufp->chgIData(oldp+349,(vlSymsp->TOP__top__REG_0.GPR[28]),32);
    bufp->chgIData(oldp+350,(vlSymsp->TOP__top__REG_0.GPR[29]),32);
    bufp->chgIData(oldp+351,(vlSymsp->TOP__top__REG_0.GPR[30]),32);
    bufp->chgIData(oldp+352,(vlSymsp->TOP__top__REG_0.GPR[31]),32);
    bufp->chgIData(oldp+353,(vlSymsp->TOP__top__REG_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+354,(vlSymsp->TOP__top__REG_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+355,(vlSymsp->TOP__top__REG_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+356,(vlSymsp->TOP__top__REG_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+357,(vlSymsp->TOP__top__REG_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+358,(vlSymsp->TOP__top__REG_0.CSR_MARCHID),32);
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

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
        bufp->chgCData(oldp+1,(vlSymsp->TOP__top.__PVT__S_awid),4);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__top.__PVT__S_awlen),8);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__top.__PVT__S_arid),4);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__top.__PVT__S_arlen),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+5,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isGREATER));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ)
                                     ? (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL)
                                     : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBNE)
                                         ? (~ (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL))
                                         : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLT) 
                                             | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU))
                                             ? (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))
                                             : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGE) 
                                                 | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU)) 
                                                & (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))))))));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB),32);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready));
        bufp->chgIData(oldp+14,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__out),32);
        bufp->chgQData(oldp+15,((0x00000001ffffffffULL 
                                 & (~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))))),33);
        bufp->chgQData(oldp+17,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB),33);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__top__LSU_0.__PVT__val),32);
        bufp->chgIData(oldp+20,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                  ? (0x000000ffU & vlSymsp->TOP__top__LSU_0.__PVT__val)
                                  : (((- (IData)((1U 
                                                  & (vlSymsp->TOP__top__LSU_0.__PVT__val 
                                                     >> 7U)))) 
                                      << 8U) | (0x000000ffU 
                                                & vlSymsp->TOP__top__LSU_0.__PVT__val)))),32);
        bufp->chgIData(oldp+21,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                  ? (0x0000ffffU & vlSymsp->TOP__top__LSU_0.__PVT__val)
                                  : (((- (IData)((1U 
                                                  & (vlSymsp->TOP__top__LSU_0.__PVT__val 
                                                     >> 0x0000000fU)))) 
                                      << 0x00000010U) 
                                     | (0x0000ffffU 
                                        & vlSymsp->TOP__top__LSU_0.__PVT__val)))),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+22,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                               & ((~ (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                  & ((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
                                     || (1U & ((2U 
                                                == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                ? (IData)(vlSymsp->TOP__top.__PVT__UART_rlast)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__CLINT_rlast)
                                                    : 
                                                   ((~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)) 
                                                    & (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)))))))))));
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                  ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                      ? (IData)(vlSymsp->TOP__top.__PVT__S_bid)
                                      : 0U) : 0U)),4);
        bufp->chgBit(oldp+24,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                               & ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                  & ((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
                                     || (1U & ((2U 
                                                == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                ? (IData)(vlSymsp->TOP__top.__PVT__UART_rlast)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__CLINT_rlast)
                                                    : 
                                                   ((~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)) 
                                                    & (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)))))))))));
        bufp->chgBit(oldp+25,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
                               || (1U & ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                          ? (IData)(vlSymsp->TOP__top.__PVT__UART_rlast)
                                          : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                              ? (IData)(vlSymsp->TOP__top.__PVT__CLINT_rlast)
                                              : ((~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)) 
                                                 & (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)))))))));
        bufp->chgIData(oldp+26,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? vlSymsp->TOP__top.__PVT__S_araddr
                                  : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                      ? 0xdeadbeefU
                                      : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                          ? 0xdeadbeefU
                                          : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                              ? 0xdeadbeefU
                                              : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                  ? 0xdeadbeefU
                                                  : vlSymsp->TOP__top.__PVT__S_araddr)))))),32);
        bufp->chgCData(oldp+27,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? (IData)(vlSymsp->TOP__top.__PVT__S_arid)
                                  : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                      ? 0U : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__top.__PVT__S_arid))))))),4);
        bufp->chgCData(oldp+28,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? (IData)(vlSymsp->TOP__top.__PVT__S_arlen)
                                  : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                      ? 0U : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__top.__PVT__S_arlen))))))),8);
        bufp->chgCData(oldp+29,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? (IData)(vlSymsp->TOP__top.__PVT__S_arsize)
                                  : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                      ? 0U : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__top.__PVT__S_arsize))))))),3);
        bufp->chgCData(oldp+30,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? (IData)(vlSymsp->TOP__top.__PVT__S_arburst)
                                  : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                      ? 0U : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__top.__PVT__S_arburst))))))),2);
        bufp->chgIData(oldp+31,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0xdeadbeefU : (
                                                   (2U 
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
        bufp->chgCData(oldp+32,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? (IData)(vlSymsp->TOP__top.__PVT__S_arid)
                                           : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? (IData)(vlSymsp->TOP__top.__PVT__S_arid)
                                                   : 0U))))),4);
        bufp->chgCData(oldp+33,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? (IData)(vlSymsp->TOP__top.__PVT__S_arlen)
                                           : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? (IData)(vlSymsp->TOP__top.__PVT__S_arlen)
                                                   : 0U))))),8);
        bufp->chgCData(oldp+34,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? (IData)(vlSymsp->TOP__top.__PVT__S_arsize)
                                           : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? (IData)(vlSymsp->TOP__top.__PVT__S_arsize)
                                                   : 0U))))),3);
        bufp->chgCData(oldp+35,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? (IData)(vlSymsp->TOP__top.__PVT__S_arburst)
                                           : ((4U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                   ? (IData)(vlSymsp->TOP__top.__PVT__S_arburst)
                                                   : 0U))))),2);
        bufp->chgIData(oldp+36,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0xdeadbeefU : (
                                                   (2U 
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
        bufp->chgCData(oldp+37,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? 0U : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__S_arid)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                      ? (IData)(vlSymsp->TOP__top.__PVT__S_arid)
                                                      : 0U)))))),4);
        bufp->chgCData(oldp+38,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? 0U : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__S_arlen)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                      ? (IData)(vlSymsp->TOP__top.__PVT__S_arlen)
                                                      : 0U)))))),8);
        bufp->chgCData(oldp+39,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? 0U : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__S_arsize)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                      ? (IData)(vlSymsp->TOP__top.__PVT__S_arsize)
                                                      : 0U)))))),3);
        bufp->chgCData(oldp+40,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? 0U : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__S_arburst)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_3)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__top.__VdfgRegularize_he2b63832_1_4)
                                                      ? (IData)(vlSymsp->TOP__top.__PVT__S_arburst)
                                                      : 0U)))))),2);
        bufp->chgCData(oldp+41,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                  ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                      ? 0U : (IData)(vlSymsp->TOP__top.__PVT__S_bid))
                                  : 0U)),4);
        bufp->chgBit(oldp+42,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                               & (IData)(vlSymsp->TOP__top.__PVT__IROM_arready))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+43,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_final));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__top__REG_0.__PVT__gpr_WEN));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__top.__PVT__IROM_arready));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__top.__PVT__DRAM_awready));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__top.__PVT__DRAM_wready));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__top.__PVT__DRAM_arready));
        bufp->chgIData(oldp+53,(vlSymsp->TOP__top.__PVT__S_araddr),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__top.__PVT__S_awaddr),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__top.__PVT__S_wdata),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__top.__PVT__S_arvalid));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__top.__PVT__S_awvalid));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__top.__PVT__S_awready));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__top.__PVT__S_wvalid));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__top.__PVT__S_wready));
        bufp->chgCData(oldp+62,(vlSymsp->TOP__top.__PVT__S_wstrb),4);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__top.__PVT__S_awsize),3);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__top.__PVT__S_awburst),2);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__top.__PVT__S_wlast));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__top.__PVT__S_bid),4);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__top.__PVT__S_arsize),3);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__top.__PVT__S_arburst),2);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__top.__PVT__RAM_awaddr),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__top.__PVT__RAM_wdata),32);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__top.__PVT__RAM_wstrb),4);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__top.__PVT__RAM_awvalid));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__top.__PVT__RAM_wvalid));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_arvalid));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_arready));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_rready));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__top.__PVT__RAM_bready));
        bufp->chgCData(oldp+78,(vlSymsp->TOP__top.__PVT__RAM_awid),4);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__top.__PVT__RAM_awlen),8);
        bufp->chgCData(oldp+80,(vlSymsp->TOP__top.__PVT__RAM_awsize),3);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__top.__PVT__RAM_awburst),2);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__top.__PVT__RAM_wlast));
        bufp->chgIData(oldp+83,(vlSymsp->TOP__top.__PVT__UART_awaddr),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__top.__PVT__UART_wdata),32);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__top.__PVT__UART_wstrb),4);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top.__PVT__UART_awvalid));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top.__PVT__UART_wvalid));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_arvalid));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_arready));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_rready));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__top.__PVT__UART_bready));
        bufp->chgCData(oldp+92,(vlSymsp->TOP__top.__PVT__UART_awid),4);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__top.__PVT__UART_awlen),8);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__top.__PVT__UART_awsize),3);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__top.__PVT__UART_awburst),2);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__top.__PVT__UART_wlast));
        bufp->chgIData(oldp+97,(vlSymsp->TOP__top.__PVT__CLINT_awaddr),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__top.__PVT__CLINT_wdata),32);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__top.__PVT__CLINT_wstrb),4);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__top.__PVT__CLINT_awvalid));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__top.__PVT__CLINT_wvalid));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_arvalid));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_arready));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_rready));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__top.__PVT__CLINT_bready));
        bufp->chgCData(oldp+106,(vlSymsp->TOP__top.__PVT__CLINT_awid),4);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__top.__PVT__CLINT_awlen),8);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__top.__PVT__CLINT_awsize),3);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__top.__PVT__CLINT_awburst),2);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__top.__PVT__CLINT_wlast));
        bufp->chgCData(oldp+111,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_next),2);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_req_fire));
        bufp->chgCData(oldp+113,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_next),2);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_req_fire));
        bufp->chgCData(oldp+115,(vlSymsp->TOP__top.__PVT__RAM__DOT__r_next),2);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__start));
        bufp->chgCData(oldp+117,(vlSymsp->TOP__top.__PVT__RAM__DOT__w_next),2);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__start));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__r_next),2);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__start));
        bufp->chgCData(oldp+127,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_next),2);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__start));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__R_next_state));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__W_next_state));
        bufp->chgBit(oldp+131,(((IData)(vlSymsp->TOP__top.__PVT__S_awready) 
                                & (IData)(vlSymsp->TOP__top.__PVT__S_awvalid))));
        bufp->chgBit(oldp+132,(((IData)(vlSymsp->TOP__top.__PVT__S_arvalid) 
                                & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready))));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__top__IDU_0.__PVT__next_state));
        bufp->chgCData(oldp+134,(vlSymsp->TOP__top__IFU_0.__PVT__next_state),2);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__top__IFU_0.__PVT__r_fire));
        bufp->chgCData(oldp+136,(vlSymsp->TOP__top__LSU_0.__PVT__next_state),3);
        bufp->chgBit(oldp+137,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                & (IData)(vlSymsp->TOP__top.__PVT__DRAM_awready))));
        bufp->chgBit(oldp+138,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                & (IData)(vlSymsp->TOP__top.__PVT__DRAM_wready))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__top__LSU_0.__PVT__b_fire));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__top__LSU_0.__PVT__ar_fire));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__top__LSU_0.__PVT__r_fire));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+142,(vlSymsp->TOP__top__IFU_0.__PVT__PC_command),32);
        bufp->chgBit(oldp+143,(vlSymsp->TOP__top__IDU_0.__PVT__isR));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__top__IDU_0.__PVT__isI));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__top__IDU_0.__PVT__isB));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__top__IDU_0.__PVT__isU));
        bufp->chgBit(oldp+148,((0x6fU == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+149,(((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW) 
                                | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS) 
                                   | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC)))));
        bufp->chgCData(oldp+150,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+151,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+152,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 0x00000014U))),5);
        bufp->chgSData(oldp+153,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                  >> 0x00000014U)),12);
        bufp->chgBit(oldp+154,((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+155,((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+156,((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__top__IDU_0.__PVT__isLOAD));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__top__IDU_0.__PVT__isWRITE));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__top__IDU_0.__PVT__isJUMP));
        bufp->chgBit(oldp+160,((1U & (~ (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)))));
        bufp->chgBit(oldp+161,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_19) 
                                | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))));
        bufp->chgCData(oldp+162,(vlSymsp->TOP__top__IDU_0.__PVT__isCSR),2);
        bufp->chgBit(oldp+163,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_20) 
                                | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLT) 
                                   | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU)))));
        bufp->chgSData(oldp+164,((((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_1) 
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
        bufp->chgIData(oldp+165,(vlSymsp->TOP__top__IFU_0.__PVT__PC),32);
        bufp->chgIData(oldp+166,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? 0U : vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata)
                                   : 0U)),32);
        bufp->chgCData(oldp+167,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? 0U : ((1U 
                                                == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__UART_rid)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                     ? (IData)(vlSymsp->TOP__top.__PVT__CLINT_rid)
                                                     : 0U))))
                                   : 0U)),4);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata),32);
        bufp->chgCData(oldp+169,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                       ? (IData)(vlSymsp->TOP__top.__PVT__S_bresp)
                                       : 0U) : 0U)),2);
        bufp->chgCData(oldp+170,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? ((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? (IData)(vlSymsp->TOP__top.__PVT__UART_rid)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                     ? (IData)(vlSymsp->TOP__top.__PVT__CLINT_rid)
                                                     : 0U)))
                                       : 0U) : 0U)),4);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata),32);
        bufp->chgCData(oldp+172,(((1U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                   ? 0U : ((2U == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                            ? (IData)(vlSymsp->TOP__top.__PVT__UART_rid)
                                            : ((4U 
                                                == (IData)(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                ? (IData)(vlSymsp->TOP__top.__PVT__CLINT_rid)
                                                : 0U)))),4);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata),32);
        bufp->chgBit(oldp+174,((0U == (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__w_state))));
        bufp->chgIData(oldp+175,(((2U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__r_state))
                                   ? vlSymsp->TOP__top.__PVT__UART_inst__DOT__rdata_hold
                                   : 0xdeadbeefU)),32);
        bufp->chgBit(oldp+176,((0U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state))));
        bufp->chgIData(oldp+177,(((2U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_state))
                                   ? vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__rdata_hold
                                   : vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__current_clint_rdata)),32);
        bufp->chgBit(oldp+178,((0U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state))));
        bufp->chgCData(oldp+179,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__r_state),2);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__raddr_reg),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__rdata_hold),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__current_clint_rdata),32);
        bufp->chgCData(oldp+183,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state),2);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__mtime_L),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__mtime_H),32);
        bufp->chgBit(oldp+186,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin));
        bufp->chgCData(oldp+187,(vlSymsp->TOP__top.__PVT__RAM__DOT__r_state),2);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__top.__PVT__RAM__DOT__raddr_reg),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__top.__PVT__RAM__DOT__rdata_hold),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__top.__PVT__RAM__DOT__current_mem_rdata),32);
        bufp->chgCData(oldp+191,(vlSymsp->TOP__top.__PVT__RAM__DOT__w_state),2);
        bufp->chgCData(oldp+192,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                       ? 0U : (IData)(vlSymsp->TOP__top.__PVT__S_bresp))
                                   : 0U)),2);
        bufp->chgBit(oldp+193,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel));
        bufp->chgCData(oldp+197,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__r_state),2);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__raddr_reg),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__rdata_hold),32);
        bufp->chgCData(oldp+200,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state),2);
        bufp->chgCData(oldp+201,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg),4);
        bufp->chgCData(oldp+202,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg),4);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__R_state));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__W_state));
        bufp->chgCData(oldp+205,((0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)),7);
        bufp->chgCData(oldp+206,((7U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+207,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                  >> 0x00000019U)),7);
        bufp->chgSData(oldp+208,(((0x00000fe0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                      >> 7U)))),12);
        bufp->chgSData(oldp+209,(((((2U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
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
        bufp->chgIData(oldp+210,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                  >> 0x0000000cU)),20);
        bufp->chgIData(oldp+211,(((0x00080000U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 0x0000000cU)) 
                                  | ((0x0007f800U & 
                                      (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                       >> 1U)) | ((0x00000400U 
                                                   & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                      >> 0x0000000aU)) 
                                                  | (0x000003ffU 
                                                     & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                        >> 0x00000015U)))))),20);
        bufp->chgCData(oldp+212,(((((((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isR) 
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
        bufp->chgBit(oldp+213,((0x37U == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+214,((0x17U == (0x0000007fU 
                                          & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
        bufp->chgBit(oldp+215,(vlSymsp->TOP__top__IDU_0.__PVT__isJALR));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__top__IDU_0.__PVT__isBNE));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__top__IDU_0.__PVT__isBLT));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__top__IDU_0.__PVT__isBGE));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU));
        bufp->chgBit(oldp+222,((IData)((3U == (0x0000707fU 
                                               & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__top__IDU_0.__PVT__isLH));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__top__IDU_0.__PVT__isLW));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__top__IDU_0.__PVT__isLBU));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__top__IDU_0.__PVT__isLHU));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__top__IDU_0.__PVT__isSB));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__top__IDU_0.__PVT__isSH));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__top__IDU_0.__PVT__isSW));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__top__IDU_0.__PVT__isADDI));
        bufp->chgBit(oldp+231,((IData)((0x00002013U 
                                        == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTIU));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__top__IDU_0.__PVT__isXORI));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__top__IDU_0.__PVT__isORI));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__top__IDU_0.__PVT__isANDI));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__top__IDU_0.__PVT__isSLLI));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__top__IDU_0.__PVT__isSRLI));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__top__IDU_0.__PVT__isSRAI));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__top__IDU_0.__PVT__isADD));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__top__IDU_0.__PVT__isSLL));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__top__IDU_0.__PVT__isSLT));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__top__IDU_0.__PVT__isXOR));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__top__IDU_0.__PVT__isSRL));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__top__IDU_0.__PVT__isSRA));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__top__IDU_0.__PVT__isOR));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__top__IDU_0.__PVT__isAND));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC));
        bufp->chgIData(oldp+251,(vlSymsp->TOP__top__LSU_0.__PVT__val1),32);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__top__LSU_0.__PVT__val2),32);
        bufp->chgIData(oldp+253,((((- (IData)((vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                               >> 0x0000001fU))) 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__top__LSU_0.__PVT__val2 
                                     >> 8U))),32);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__top__REG_0.__PVT__WCSREN));
        bufp->chgIData(oldp+255,(vlSymsp->TOP__top__REG_0.__PVT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+256,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock));
        bufp->chgCData(oldp+258,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state),4);
        bufp->chgBit(oldp+259,((1U & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+261,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt),4);
        bufp->chgBit(oldp+262,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__busy));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+265,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))))));
        bufp->chgCData(oldp+266,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+267,((1U & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt),2);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__busy));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+273,((1U & VL_REDXOR_2(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock));
        bufp->chgCData(oldp+276,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state),4);
        bufp->chgBit(oldp+277,((1U & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+279,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt),4);
        bufp->chgBit(oldp+280,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__busy));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+283,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))))));
        bufp->chgCData(oldp+284,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+285,((1U & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+287,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt),2);
        bufp->chgBit(oldp+288,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__busy));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+291,((1U & VL_REDXOR_2(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock));
        bufp->chgBit(oldp+293,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock));
        bufp->chgCData(oldp+294,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state),4);
        bufp->chgBit(oldp+295,((1U & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+297,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt),4);
        bufp->chgBit(oldp+298,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__busy));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+300,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+301,((1U & VL_REDXOR_32((3U 
                                                   & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))))));
        bufp->chgCData(oldp+302,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state),2);
        bufp->chgBit(oldp+303,((1U & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en));
        bufp->chgCData(oldp+305,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt),2);
        bufp->chgBit(oldp+306,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__busy));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__start_d));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__lock_state));
        bufp->chgBit(oldp+309,((1U & VL_REDXOR_2(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+310,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__top.__PVT__S_bvalid));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__MEM_bvalid));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__UART_rvalid));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__top.__PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid));
    }
    bufp->chgBit(oldp+316,(vlSelfRef.clk));
    bufp->chgBit(oldp+317,(vlSelfRef.rst));
    bufp->chgIData(oldp+318,(vlSelfRef.lsu_addr),32);
    bufp->chgCData(oldp+319,(vlSelfRef.LSU_rmask),4);
    bufp->chgCData(oldp+320,(vlSelfRef.lsu_wmask),4);
    bufp->chgIData(oldp+321,(vlSelfRef.lsu_wdata),32);
    bufp->chgBit(oldp+322,(vlSelfRef.LSU_WEN));
    bufp->chgIData(oldp+323,(vlSelfRef.lsu_rdata),32);
    bufp->chgIData(oldp+324,(vlSelfRef.PC_command),32);
    bufp->chgIData(oldp+325,(vlSelfRef.EXU_inA),32);
    bufp->chgIData(oldp+326,(vlSelfRef.EXU_inB),32);
    bufp->chgIData(oldp+327,(vlSelfRef.EXU_data),32);
    bufp->chgIData(oldp+328,(vlSelfRef.CSR_data),32);
    bufp->chgIData(oldp+329,(vlSelfRef.rs1_val),32);
    bufp->chgIData(oldp+330,(vlSelfRef.rs2_val),32);
    bufp->chgIData(oldp+331,(vlSelfRef.reg_data),32);
    bufp->chgIData(oldp+332,(vlSelfRef.imm),32);
    bufp->chgBit(oldp+333,(vlSelfRef.COMP_data));
    bufp->chgIData(oldp+334,(vlSymsp->TOP__top.PC),32);
    bufp->chgIData(oldp+335,(vlSymsp->TOP__top.dnpc),32);
    bufp->chgIData(oldp+336,(vlSymsp->TOP__top.snpc),32);
    bufp->chgIData(oldp+337,(vlSymsp->TOP__top__REG_0.CSR_MEPC),32);
    bufp->chgIData(oldp+338,(vlSymsp->TOP__top__REG_0.CSR_MTVEC),32);
    bufp->chgBit(oldp+339,((3U == (IData)(vlSymsp->TOP__top__IFU_0.state))));
    bufp->chgBit(oldp+340,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                            & ((~ (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)))));
    bufp->chgBit(oldp+341,((3U != (IData)(vlSymsp->TOP__top__IFU_0.state))));
    bufp->chgBit(oldp+342,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                            & ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                               & (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)))));
    bufp->chgBit(oldp+343,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                            & ((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                               & (IData)(vlSymsp->TOP__top.__PVT__S_bvalid)))));
    bufp->chgBit(oldp+344,(((2U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state)) 
                            | ((1U == (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__w_state)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock)))));
    bufp->chgBit(oldp+345,(((2U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state)) 
                            | ((1U == (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__w_state)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock)))));
    bufp->chgBit(oldp+346,((1U & (~ (IData)(vlSelfRef.rst)))));
    bufp->chgBit(oldp+347,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                    + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+348,((1U & ((~ (((vlSelfRef.rs1_val 
                                        ^ vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB) 
                                       | vlSymsp->TOP__top.__PVT__COMP_0__DOT__out) 
                                      >> 0x0000001fU)) 
                                  | ((~ (vlSelfRef.rs1_val 
                                         >> 0x0000001fU)) 
                                     & (vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB 
                                        >> 0x0000001fU))))));
    bufp->chgBit(oldp+349,(((~ (IData)((1ULL & ((1ULL 
                                                 + 
                                                 ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                  + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                >> 0x00000020U)))) 
                            & (0U != vlSymsp->TOP__top.__PVT__COMP_0__DOT__out))));
    bufp->chgQData(oldp+350,((QData)((IData)(vlSelfRef.rs1_val))),33);
    bufp->chgIData(oldp+352,((vlSelfRef.EXU_inA ^ vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+353,((vlSelfRef.EXU_inA | vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+354,((vlSelfRef.EXU_inA & vlSelfRef.EXU_inB)),32);
    bufp->chgIData(oldp+355,(VL_SHIFTRS_III(32,32,32, vlSelfRef.EXU_inA, 
                                            (0x0000001fU 
                                             & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+356,(VL_SHIFTR_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+357,(VL_SHIFTL_III(32,32,32, vlSelfRef.EXU_inA, 
                                           (0x0000001fU 
                                            & vlSelfRef.EXU_inB))),32);
    bufp->chgIData(oldp+358,((vlSelfRef.EXU_inA + ((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                   + (IData)((QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))))),32);
    bufp->chgQData(oldp+359,((QData)((IData)(vlSelfRef.EXU_inA))),33);
    bufp->chgBit(oldp+361,((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.EXU_inA)) 
                                                   + 
                                                   (vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                    + (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))) 
                                                  >> 0x00000020U))))));
    bufp->chgBit(oldp+362,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                            & ((~ (IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__S_bvalid)))));
    bufp->chgBit(oldp+363,(vlSymsp->TOP__top__IDU_0.state));
    bufp->chgCData(oldp+364,(vlSymsp->TOP__top__IFU_0.state),2);
    bufp->chgCData(oldp+365,(vlSymsp->TOP__top__LSU_0.state),3);
    bufp->chgIData(oldp+366,(vlSymsp->TOP__top__REG_0.GPR[0]),32);
    bufp->chgIData(oldp+367,(vlSymsp->TOP__top__REG_0.GPR[1]),32);
    bufp->chgIData(oldp+368,(vlSymsp->TOP__top__REG_0.GPR[2]),32);
    bufp->chgIData(oldp+369,(vlSymsp->TOP__top__REG_0.GPR[3]),32);
    bufp->chgIData(oldp+370,(vlSymsp->TOP__top__REG_0.GPR[4]),32);
    bufp->chgIData(oldp+371,(vlSymsp->TOP__top__REG_0.GPR[5]),32);
    bufp->chgIData(oldp+372,(vlSymsp->TOP__top__REG_0.GPR[6]),32);
    bufp->chgIData(oldp+373,(vlSymsp->TOP__top__REG_0.GPR[7]),32);
    bufp->chgIData(oldp+374,(vlSymsp->TOP__top__REG_0.GPR[8]),32);
    bufp->chgIData(oldp+375,(vlSymsp->TOP__top__REG_0.GPR[9]),32);
    bufp->chgIData(oldp+376,(vlSymsp->TOP__top__REG_0.GPR[10]),32);
    bufp->chgIData(oldp+377,(vlSymsp->TOP__top__REG_0.GPR[11]),32);
    bufp->chgIData(oldp+378,(vlSymsp->TOP__top__REG_0.GPR[12]),32);
    bufp->chgIData(oldp+379,(vlSymsp->TOP__top__REG_0.GPR[13]),32);
    bufp->chgIData(oldp+380,(vlSymsp->TOP__top__REG_0.GPR[14]),32);
    bufp->chgIData(oldp+381,(vlSymsp->TOP__top__REG_0.GPR[15]),32);
    bufp->chgIData(oldp+382,(vlSymsp->TOP__top__REG_0.GPR[16]),32);
    bufp->chgIData(oldp+383,(vlSymsp->TOP__top__REG_0.GPR[17]),32);
    bufp->chgIData(oldp+384,(vlSymsp->TOP__top__REG_0.GPR[18]),32);
    bufp->chgIData(oldp+385,(vlSymsp->TOP__top__REG_0.GPR[19]),32);
    bufp->chgIData(oldp+386,(vlSymsp->TOP__top__REG_0.GPR[20]),32);
    bufp->chgIData(oldp+387,(vlSymsp->TOP__top__REG_0.GPR[21]),32);
    bufp->chgIData(oldp+388,(vlSymsp->TOP__top__REG_0.GPR[22]),32);
    bufp->chgIData(oldp+389,(vlSymsp->TOP__top__REG_0.GPR[23]),32);
    bufp->chgIData(oldp+390,(vlSymsp->TOP__top__REG_0.GPR[24]),32);
    bufp->chgIData(oldp+391,(vlSymsp->TOP__top__REG_0.GPR[25]),32);
    bufp->chgIData(oldp+392,(vlSymsp->TOP__top__REG_0.GPR[26]),32);
    bufp->chgIData(oldp+393,(vlSymsp->TOP__top__REG_0.GPR[27]),32);
    bufp->chgIData(oldp+394,(vlSymsp->TOP__top__REG_0.GPR[28]),32);
    bufp->chgIData(oldp+395,(vlSymsp->TOP__top__REG_0.GPR[29]),32);
    bufp->chgIData(oldp+396,(vlSymsp->TOP__top__REG_0.GPR[30]),32);
    bufp->chgIData(oldp+397,(vlSymsp->TOP__top__REG_0.GPR[31]),32);
    bufp->chgIData(oldp+398,(vlSymsp->TOP__top__REG_0.CSR_MCYCLE),32);
    bufp->chgIData(oldp+399,(vlSymsp->TOP__top__REG_0.CSR_MCYCLEH),32);
    bufp->chgIData(oldp+400,(vlSymsp->TOP__top__REG_0.CSR_MCAUSE),32);
    bufp->chgIData(oldp+401,(vlSymsp->TOP__top__REG_0.CSR_MSTATUS),32);
    bufp->chgIData(oldp+402,(vlSymsp->TOP__top__REG_0.CSR_MVENDORID),32);
    bufp->chgIData(oldp+403,(vlSymsp->TOP__top__REG_0.CSR_MARCHID),32);
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

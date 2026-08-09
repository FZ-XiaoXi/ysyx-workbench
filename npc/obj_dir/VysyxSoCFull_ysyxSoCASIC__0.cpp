// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void mrom_read(int raddr, int* rdata);

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int rdata__Vcvt;
    mrom_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = (rdata__Vcvt);
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata 
        = (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)
             ? vlSelfRef.__PVT___lspi_auto_in_prdata
             : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                            ? ((((4U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                  ? ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                      ? ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                      : ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                          : 0U)) : 
                                 ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                   ? ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                       : (0x000000c0U 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                   : ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                       ? ((0x00000080U 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                           ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                              >> 8U)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                       : ((0x00000080U 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                           : vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                          [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                << 0x00000018U) | (
                                                   (0x00ff0000U 
                                                    & (((4U 
                                                         & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                           : 
                                                          (0x000000c0U 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? 
                                                          ((0x00000080U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                            >> 8U)
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                           : 
                                                          ((0x00000080U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                            : 
                                                           vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                           [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                       << 0x00000010U)) 
                                                   | ((0x0000ff00U 
                                                       & (((4U 
                                                            & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? 
                                                           ((2U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                              : 0U))
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                              : 
                                                             (0x000000c0U 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                               >> 8U)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                              : 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                               : 
                                                              vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                              [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & ((4U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((2U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                              : 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                               : 0U))
                                                             : 
                                                            ((2U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                               : 
                                                              (0x000000c0U 
                                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                              : 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                                >> 8U)
                                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                               : 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                                : 
                                                               vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                            : 0U) : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2)
                                             ? (((vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [3U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x00000010U)) 
                                                | ((vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U]))
                                             : 0U) 
                                           | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)
                                                ? vlSelfRef.__PVT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)
                                                   ? vlSelfRef.__PVT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5)
                                                      ? vlSelfRef.__PVT___lvga_auto_in_prdata
                                                      : 0U) 
                                                    | ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6)
                                                        ? 
                                                       (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                        : 0U)))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr;
    }
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awburst));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awsize));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr;
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                      >> 1U)));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb));
    }
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.__PVT__axi4frag__DOT__addr = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                             ? vlSelfRef.__PVT__axi4frag__DOT__r_addr
                                             : vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT__addr_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                               ? vlSelfRef.__PVT__axi4frag__DOT__r_addr_1
                                               : vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr)))));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                            >> 0x0000001eU)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                   >> 0x0000001dU))) 
                    << 2U) | ((2U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                         >> 0x0000001cU)) 
                                     << 1U)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                   >> 0x00000018U))))) 
           | ((0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                             >> 0x0000001cU)) | ((6U 
                                                  & (4U 
                                                     ^ 
                                                     (0x0000001eU 
                                                      & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                         >> 0x0000001bU)))) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                        >> 0x00000018U)))))) 
              | ((0U == ((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                >> 0x0000001dU)) | 
                         (3U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                   >> 0x0000001cU))))) 
                 | ((0U == ((8U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                       >> 0x0000001fU)) 
                                   << 3U)) | ((6U & 
                                               (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                >> 0x0000001bU)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U))))) 
                    | (0U == ((4U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                         >> 0x0000001fU)) 
                                     << 2U)) | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x0000001cU)))))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                         >> 0x0000001cU)) | ((6U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                               >> 0x0000001bU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                           >> 0x0000001dU)) | (3U & 
                                               (2U 
                                                ^ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                   >> 0x0000001cU)))) 
                   << 2U) | ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                    >> 0x00000017U)) 
                             | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                      >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                            >> 0x0000001eU)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x0000001dU))) 
                    << 2U) | ((2U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                         >> 0x0000001cU)) 
                                     << 1U)) | (1U 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x00000018U))))) 
           | ((0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                             >> 0x0000001cU)) | ((6U 
                                                  & (4U 
                                                     ^ 
                                                     (0x0000001eU 
                                                      & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                         >> 0x0000001bU)))) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                        >> 0x00000018U)))))) 
              | ((0U == ((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                >> 0x0000001dU)) | 
                         (3U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                   >> 0x0000001cU))))) 
                 | ((0U == ((8U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                       >> 0x0000001fU)) 
                                   << 3U)) | ((6U & 
                                               (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x0000001bU)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x00000018U))))) 
                    | (0U == ((4U & ((~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                         >> 0x0000001fU)) 
                                     << 2U)) | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x0000001cU)))))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((8U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                         >> 0x0000001cU)) | ((6U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000001bU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x00000018U))))));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T = ((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                                                  & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                        >> 0x0000001dU)) 
                                 | (3U & (2U ^ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x0000001cU)))) 
                                << 2U) | ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 0x00000017U)) 
                                          | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x0000000cU))))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr), vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata);
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata;
    } else {
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready = 
        (1U & (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                   >> 2U) & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__VdfgRegularize_h9fc36335_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_8 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.__PVT__axi4frag__DOT__in_awready = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid)));
}

extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h5156a0a5_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h6c2ebfd3_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 = 0;
    SData/*15:0*/ __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 = 0;
    CData/*0:0*/ __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0;
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 = 0;
    CData/*0:0*/ __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1;
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_3;
    __Vdly__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*1:0*/ __Vdly__axi42apb__DOT__state;
    __Vdly__axi42apb__DOT__state = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_0 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_1 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_2 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_3 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_4 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_5 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_6 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_7 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_8 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_9 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_10 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_11 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_12 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_13 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_14 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_15;
    __Vdly__axi4frag__DOT__error_15 = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    CData/*2:0*/ __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    QData/*46:0*/ __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*35:0*/ __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*38:0*/ __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    // Body
    __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((0x00000200U & ((~ 
                                                 ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))) 
                                                << 9U)) 
                                | (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3882: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3882, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3884: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3884, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid)) 
                                   | (~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                          ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast)))) 
                                  | (1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3888: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3888, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3890: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3890, "", false);
    }
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                         & (0U == ((((4U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                            >> 0x0000001dU)) 
                                     | (3U & (2U ^ 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000001cU)))) 
                                    << 2U) | ((2U & 
                                               (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x00000017U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x0000000cU)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1795: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 1795, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1797: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 1797, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                            >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1801: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 1801, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1803: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 1803, "", false);
    }
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full;
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2132: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:61\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2132, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2134: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2134, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2138: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:62\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2138, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2140: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2140, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2144: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2144, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2146: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2146, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2150: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2150, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2152: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 2152, "", false);
    }
    __Vdly__axi4frag__DOT__error_0 = vlSelfRef.__PVT__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_1 = vlSelfRef.__PVT__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_2 = vlSelfRef.__PVT__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_3 = vlSelfRef.__PVT__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_4 = vlSelfRef.__PVT__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_5 = vlSelfRef.__PVT__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_6 = vlSelfRef.__PVT__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_7 = vlSelfRef.__PVT__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_8 = vlSelfRef.__PVT__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_9 = vlSelfRef.__PVT__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_10 = vlSelfRef.__PVT__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_11 = vlSelfRef.__PVT__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_12 = vlSelfRef.__PVT__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_13 = vlSelfRef.__PVT__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_14 = vlSelfRef.__PVT__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_15 = vlSelfRef.__PVT__axi4frag__DOT__error_15;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                      & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:595: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:597: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 597, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:601: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:603: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 603, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:607: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:609: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 609, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:613: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:615: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 615, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:619: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:621: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 621, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:625: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:627: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 627, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:631: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:633: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 633, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:637: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 637, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:639: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 639, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:643: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 643, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:645: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 645, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:649: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 649, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:651: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 651, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:655: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:657: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 657, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:661: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:663: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 663, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:667: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:669: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 669, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:673: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 673, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:675: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 675, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:679: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 679, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:681: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 681, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:685: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 685, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:687: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 687, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:691: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 691, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:693: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 693, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:697: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 697, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:699: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 699, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:703: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:705: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 705, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:709: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 709, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:711: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 711, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:715: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 715, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:717: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 717, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:721: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 721, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:723: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 723, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:727: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 727, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:729: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 729, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:733: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:735: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 735, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:739: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 739, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:741: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 741, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:745: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 745, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:747: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 747, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:751: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 751, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:753: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 753, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:757: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:759: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 759, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:763: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:765: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 765, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:769: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 769, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:771: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 771, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:775: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 775, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:777: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 777, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:781: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 781, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:783: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 783, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:787: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 787, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:789: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 789, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:793: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 793, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:795: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 795, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:799: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 799, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:801: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 801, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:805: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 805, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:807: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 807, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:811: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 811, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:813: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 813, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:817: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 817, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:819: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 819, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:823: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 823, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:825: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 825, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:829: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 829, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:831: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 831, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:835: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 835, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:837: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 837, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:841: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 841, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:843: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 843, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:847: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 847, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:849: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 849, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:853: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 853, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:855: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 855, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:859: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 859, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:861: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 861, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:865: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 865, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:867: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 867, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:871: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:873: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 873, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:877: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 877, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:879: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 879, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:883: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 883, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:885: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 885, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:889: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 889, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:891: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 891, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:895: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 895, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:897: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 897, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:901: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 901, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:903: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 903, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:907: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 907, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:909: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 909, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:913: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 913, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:915: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 915, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:919: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 919, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:921: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 921, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:925: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 925, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:927: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 927, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:931: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 931, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:933: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 933, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:937: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 937, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:939: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 939, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:943: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 943, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:945: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 945, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:949: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 949, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:951: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 951, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:955: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 955, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:957: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 957, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:961: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 961, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:963: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 963, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:967: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 967, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:969: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 969, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:973: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 973, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:975: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 975, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1) 
                                         | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:981: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 981, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:983: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 983, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                                    | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:987: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 987, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:989: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 989, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:993: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 993, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:995: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 995, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:999: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 999, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1001: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 1001, "", false);
    }
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__idle_3 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3;
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi42apb__DOT__state = vlSelfRef.__PVT__axi42apb__DOT__state;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__idle_4 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 
        = (((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full) 
                << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full) 
                                   << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))) 
                                << 8U)) | ((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 
        = (((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full) 
                << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full) 
                                   << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))) 
                                << 8U)) | ((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)) 
                                  | ((IData)(__PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4) 
                                     >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3202: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3202, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3204: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3204, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                  | ((IData)(__PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                     >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3208: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3208, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3210: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/abstract-machine/../npc/../ysyxSoC/build/ysyxSoCFull.v", 3210, "", false);
    }
    if (((0x14U <= (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
         & (0x1bU >= (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) {
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
            __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0x000000f0U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [(3U & (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                            >> 1U) 
                                           - (IData)(2U)))] 
                                   << 4U)) | (((((1U 
                                                  & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                                     & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                        & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
                                                    | ((4U 
                                                        & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2) 
                                                           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
                                                       | (8U 
                                                          & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3) 
                                                             & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten)))))) 
                                                & (IData)(vlSelfRef.psram_dio__en)) 
                                               & (IData)(vlSelfRef.psram_dio__en)) 
                                              & (IData)(vlSelfRef.psram_dio__en)));
            __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = (3U & (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                          >> 1U) - (IData)(2U)));
            __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000dU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                                 >> 0x0000000dU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000cU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                                 >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000bU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                                 >> 0x0000000bU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000aU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                                 >> 0x0000000aU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 9U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 9U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 8U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 8U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 7U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 7U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 6U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 6U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 4U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 4U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                     & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 1U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 1U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 2U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 2U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 3U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 5U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                        >> 5U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000eU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                                 >> 0x0000000eU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000fU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                                 >> 0x0000000fU)))));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
        __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__latched = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((~ 
                                                      ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid))) 
                                                     & (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)) 
                                                        | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched))));
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q) 
                        << 3U) | (((4U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                   | (6U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__is_write) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__state) 
                                << 1U) | (IData)(vlSymsp->TOP.reset)));
    if (VysyxSoCFull__ConstPool__TABLE_h5156a0a5_0[__Vtableidx1]) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__state 
            = VysyxSoCFull__ConstPool__TABLE_h6c2ebfd3_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid))) 
            & (((IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid) 
                & (0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))) 
               | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000dU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000dU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000cU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000bU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000bU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000aU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000aU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 9U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 9U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 8U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 8U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 7U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 7U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 6U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 6U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 1U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 1U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 2U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 2U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 3U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 4U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 4U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 5U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 5U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000eU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000eU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000fU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000fU)))));
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb)));
        __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                << 0x0000002bU) | (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                    << 0x0000000bU) 
                                   | (QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
        __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                << 0x0000002bU) | (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                    << 0x0000000bU) 
                                   | (QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))));
        __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi42apb__DOT__rid_reg)) 
                << 0x00000023U) | (((QData)((IData)(
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                      ? vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata
                                                      : vlSelfRef.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                    << 3U) | (QData)((IData)(
                                                             (1U 
                                                              | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp) 
                                                                 << 1U))))));
        __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((IData)(vlSelfRef.__PVT__axi42apb__DOT__bid_reg) 
                << 2U) | (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp));
        __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__lmrom__DOT__state = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                                & ((IData)(vlSelfRef.__PVT__lmrom__DOT__state)
                                                    ? 
                                                   (~ 
                                                    (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
                                                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                                                          >> 1U)
                                                          : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1))) 
                                                     & (IData)(vlSelfRef.__PVT__lmrom__DOT__state)))
                                                    : (IData)(vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T))));
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rid_r = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid;
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__lmrom__DOT___mrom_rdata;
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 1U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 2U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 3U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 4U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 5U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 6U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 7U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 8U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 9U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000aU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000bU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000cU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000dU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000eU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000fU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
                << 0x0000002dU) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr)) 
                                    << 0x0000000dU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen) 
                                                       << 5U) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize) 
                                                          << 2U) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst)))))));
    }
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid));
    if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
            = (vlSelfRef.__PVT__axi4frag__DOT__addr 
               + (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
            = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                        << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize)));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
            = (~ vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
        vlSelfRef.__PVT__axi4frag__DOT__r_len = (0x000000ffU 
                                                 & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__len) 
                                                    - (IData)(1U)));
        vlSelfRef.__PVT__axi4frag__DOT__r_addr = ((0U 
                                                   == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst))
                                                   ? vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst))
                                                    ? 
                                                   ((0x00007fffU 
                                                     & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                                        & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                           >> 8U))) 
                                                    | (~ 
                                                       ((0xffff8000U 
                                                         & vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                                                        | (0x00007fffU 
                                                           & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                                              | (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                                 >> 8U))))))
                                                    : vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)) 
                << 0x0000002dU) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr)) 
                                    << 0x0000000dU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen) 
                                                       << 5U) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awsize) 
                                                          << 2U) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awburst)))))));
    }
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
            = (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
               + (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
            = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                        << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize)));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
            = (~ vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
        vlSelfRef.__PVT__axi4frag__DOT__r_len_1 = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1) 
                                                      - (IData)(1U)));
        vlSelfRef.__PVT__axi4frag__DOT__r_addr_1 = 
            ((0U == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst))
              ? vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr
              : ((2U == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst))
                  ? ((0x00007fffU & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
                                     & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                        >> 8U))) | 
                     (~ ((0xffff8000U & vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6) 
                         | (0x00007fffU & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
                                           | (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                              >> 8U))))))
                  : vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3));
    }
    if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) {
        vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r 
            = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U));
        vlSelfRef.__PVT__axi42apb__DOT__wstrb_reg_r 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data));
        vlSelfRef.__PVT__axi42apb__DOT__awaddr_reg_r 
            = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 0x0000000bU));
        vlSelfRef.__PVT__axi42apb__DOT__bid_reg = (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x0000002bU)));
    }
    if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) {
        vlSelfRef.__PVT__axi42apb__DOT__araddr_reg_r 
            = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 0x0000000bU));
        vlSelfRef.__PVT__axi42apb__DOT__rid_reg = (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x0000002bU)));
    }
    if ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r 
            = ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
               << 1U);
        vlSelfRef.__PVT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata;
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 1U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 2U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 3U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 4U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 5U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 6U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 7U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 8U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 9U));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000aU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000bU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000cU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000dU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000eU));
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000fU));
    if (vlSymsp->TOP.reset) {
        __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__axi4frag__DOT__deq_q__DOT__full = 0U;
        __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__axi4frag__DOT__error_0 = 0U;
        __Vdly__axi4frag__DOT__error_1 = 0U;
        __Vdly__axi4frag__DOT__error_2 = 0U;
        __Vdly__axi4frag__DOT__error_3 = 0U;
        __Vdly__axi4frag__DOT__error_4 = 0U;
        __Vdly__axi4frag__DOT__error_5 = 0U;
        __Vdly__axi4frag__DOT__error_6 = 0U;
        __Vdly__axi4frag__DOT__error_7 = 0U;
        __Vdly__axi4frag__DOT__error_8 = 0U;
        __Vdly__axi4frag__DOT__error_9 = 0U;
        __Vdly__axi4frag__DOT__error_10 = 0U;
        __Vdly__axi4frag__DOT__error_11 = 0U;
        __Vdly__axi4frag__DOT__error_12 = 0U;
        __Vdly__axi4frag__DOT__error_13 = 0U;
        __Vdly__axi4frag__DOT__error_14 = 0U;
        __Vdly__axi4frag__DOT__error_15 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__axi42apb__DOT__state = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy_1 = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 0U;
        __Vdly__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 = 0U;
        __Vdly__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid)))) {
            __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid)))) {
            __Vdly__axi4frag__DOT__deq_q__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid)))) {
            __Vdly__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
            = (0x0000ffffU & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 
            = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
             & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_0) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 1U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_1) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 2U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_2) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 3U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_3 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_3) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 4U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_4 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_4) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 5U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_5 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_5) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 6U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_6 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_6) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 7U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_7 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_7) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 8U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_8 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_8) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 9U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_9 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_9) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0aU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_10 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_10) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0bU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_11 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_11) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0cU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_12 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_12) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0dU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_13 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_13) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0eU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_14 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_14) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0fU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_15 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_15) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.__PVT__axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelfRef.__PVT__axi42apb__DOT__state) 
                << 6U) | ((0x00000020U & ((~ (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                               & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid)) 
                                              | ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                                 & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid)))) 
                                          << 5U)) | 
                          ((((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)
                              ? (2U & ((~ (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                            & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                              & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid)))) 
                                       << 1U)) : 1U) 
                            << 2U) | (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))))))));
        __Vdly__axi42apb__DOT__state = (3U & ((IData)(vlSelfRef.__PVT__axi42apb__DOT__unnamedblk1__DOT___GEN) 
                                              >> (7U 
                                                  & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi42apb__DOT__state), 1U))));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                  & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000fU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelfRef.__PVT__axi4frag__DOT__busy = 
                (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len));
        }
        if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.__PVT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1));
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000fU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
                & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                    ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)
                    : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0))) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
                    ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)
                    : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0))) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 
            (0x000001ffU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo) 
                            - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))));
        __Vdly__axi4xbar_1__DOT__idle_3 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
        }
        __Vdly__axi4xbar_1__DOT__idle_4 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full) 
                | (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2;
        }
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__is_write_r 
            = vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready;
    }
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if (__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb) 
                                           << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast)))));
    }
    if (__VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    if (__VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4frag__DOT__error_0 = __Vdly__axi4frag__DOT__error_0;
    vlSelfRef.__PVT__axi4frag__DOT__error_1 = __Vdly__axi4frag__DOT__error_1;
    vlSelfRef.__PVT__axi4frag__DOT__error_2 = __Vdly__axi4frag__DOT__error_2;
    vlSelfRef.__PVT__axi4frag__DOT__error_3 = __Vdly__axi4frag__DOT__error_3;
    vlSelfRef.__PVT__axi4frag__DOT__error_4 = __Vdly__axi4frag__DOT__error_4;
    vlSelfRef.__PVT__axi4frag__DOT__error_5 = __Vdly__axi4frag__DOT__error_5;
    vlSelfRef.__PVT__axi4frag__DOT__error_6 = __Vdly__axi4frag__DOT__error_6;
    vlSelfRef.__PVT__axi4frag__DOT__error_7 = __Vdly__axi4frag__DOT__error_7;
    vlSelfRef.__PVT__axi4frag__DOT__error_8 = __Vdly__axi4frag__DOT__error_8;
    vlSelfRef.__PVT__axi4frag__DOT__error_9 = __Vdly__axi4frag__DOT__error_9;
    vlSelfRef.__PVT__axi4frag__DOT__error_10 = __Vdly__axi4frag__DOT__error_10;
    vlSelfRef.__PVT__axi4frag__DOT__error_11 = __Vdly__axi4frag__DOT__error_11;
    vlSelfRef.__PVT__axi4frag__DOT__error_12 = __Vdly__axi4frag__DOT__error_12;
    vlSelfRef.__PVT__axi4frag__DOT__error_13 = __Vdly__axi4frag__DOT__error_13;
    vlSelfRef.__PVT__axi4frag__DOT__error_14 = __Vdly__axi4frag__DOT__error_14;
    vlSelfRef.__PVT__axi4frag__DOT__error_15 = __Vdly__axi4frag__DOT__error_15;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (__VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    if (__VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)
                           ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)
                           ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen)));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi42apb__DOT__state = __Vdly__axi42apb__DOT__state;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4frag__DOT__len = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                            ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len)
                                            : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__axi4frag__DOT__len_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                              ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len_1)
                                              : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3 = __Vdly__axi4xbar_1__DOT__idle_3;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4 = __Vdly__axi4xbar_1__DOT__idle_4;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)));
    vlSelfRef.__PVT__axi4frag__DOT___in_awready_T = 
        ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)) 
           & ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
              & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
              | (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSymsp->TOP.reset;
}

extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_hef6775a3_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)
                           ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 0x0000002dU))
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)
                           ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 0x0000002dU))
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full) 
            << 2U) | (((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     | ((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)));
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)));
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                  << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))) 
                                 | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                     << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                  << 2U)) 
                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full) 
                                     << 1U)) | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx4];
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 1U) & (IData)(vlSelfRef.__PVT__lmrom__DOT__state));
    vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 2U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
          >> 2U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2;
    }
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (3U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data)
                   : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_sel1)
                                 ? 0U : 3U) : 0U)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last 
        = (1U & ((((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                       << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                 << 2U)) | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last))) 
                    << 0x0000000cU) | (((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last))) 
                                       << 8U)) | ((
                                                   ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))) 
                 >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h457dbc12_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdly___lspi_auto_in_pready;
    __Vdly___lspi_auto_in_pready = 0;
    SData/*13:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__spi_sck;
    __Vdly__spi_sck = 0;
    CData/*7:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    IData/*16:0*/ __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0;
    CData/*3:0*/ __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0;
    SData/*15:0*/ __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    SData/*12:0*/ __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    CData/*1:0*/ __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    // Body
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__spi_sck = vlSelfRef.__PVT__spi_sck;
    __Vdly___lspi_auto_in_pready = vlSelfRef.__PVT___lspi_auto_in_pready;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0U;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__spi_sck = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                  & (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                 & ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                    | (IData)(vlSelfRef.__PVT__spi_sck)))
                                 ? (~ (IData)(vlSelfRef.__PVT__spi_sck))
                                 : (IData)(vlSelfRef.__PVT__spi_sck))));
    __Vdly___lspi_auto_in_pready = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_penable) 
                                        & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel)) 
                                       & (~ (IData)(vlSelfRef.__PVT___lspi_auto_in_pready))));
    vlSelfRef.__PVT__spi_mosi = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                       & ((1U & (((0U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                  & ((0x00000400U 
                                                      & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                      ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                                      : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) 
                                                 | (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                           ? (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                              (3U & 
                                               (((0x00000800U 
                                                  & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? 
                                                 ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                  - (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U))) 
                                                >> 5U))] 
                                              >> (0x0000001fU 
                                                  & ((0x00000800U 
                                                      & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                      ? 
                                                     ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                      - (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                      - (IData)(1U)))))
                                           : (IData)(vlSelfRef.__PVT__spi_mosi))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(
                                                             (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                                                               >> 3U) 
                                                              | (7U 
                                                                 == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 4U;
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x00002774U;
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
    } else {
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = ((0U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                ? 0x0000030cU : (0x0001ffffU & (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                                                - (IData)(1U))));
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((0x0000000eU & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                               << 1U)) | (4U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = (0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000000cU));
                        __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                     >> 0x0000000aU));
                        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 1U;
                    }
                }
            }
        }
    }
    if (__VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3U] = 0U;
    }
    if (__VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4] 
            = __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0x0000ffffU;
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
        vlSelfRef.__PVT___lspi_auto_in_pready = __Vdly___lspi_auto_in_pready;
        vlSelfRef.__PVT___lspi_auto_in_prdata = 0U;
    } else {
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0x0000ffffU & ((1U & ((~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                     | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                               ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                               : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                                  - (IData)(1U))));
        if ((6U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                   >> 0x10U);
        } else if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q))) {
            __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q;
        }
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                               ? ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                                   ? ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                               : ((0U != (0x0000007fU 
                                          & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                                   ? (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                   : 0x80U)));
        if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x00000010U == (0x0000001cU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
              & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x000000ffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                         | (1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x00ffU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x00003f00U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
        } else if ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                   & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 1U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 2U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
        } else if ((IData)((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                             >> 3U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
        } else {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                             & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((((0x00000200U 
                                                  & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                                  : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                                & ((0U 
                                                    != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                   | (IData)(vlSelfRef.__PVT__spi_sck)))
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                                                   & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                                      | ((((2U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                                           ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                                           : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                                         >> 0x0000001fU)))
                                                : (
                                                   vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x0000001fU 
                                            & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((0x00000032U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                        = (3U & ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q)
                                  : (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i))));
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 1U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            } else {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r)) 
                          << 0x0000000aU));
                if ((9U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                 >> 0x0000000aU));
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
                        } else {
                            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                 >> 0x0000000aU)))) 
                                   & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    } else {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x000001feU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 1U));
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                            = (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                     >> 0x0000000aU));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                } else {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x000001feU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                          >> 1U));
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                 >> 0x0000000aU));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                          >> 0x0000000cU));
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                 >> 0x0000000aU));
                } else {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            } else if ((0x00000032U != vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                if ((0x00000028U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x00000400U | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                } else {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q 
                        = (((0x00000014U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                            | (0x0000001eU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))
                            ? 1U : ((0x0000000aU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                     ? 0U : 7U));
                    if ((1U & (~ ((0x00000014U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x0000001eU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = ((0x0000000aU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                ? 0x0021U : 0U);
                    }
                }
                if ((0x00000028U != vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x00000014U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x0000001eU == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        if ((0x0000000aU != vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                            = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                               | (0x0fU & ((IData)(1U) 
                                           << (3U & 
                                               (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                >> 0x0000000aU)))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r)))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q 
                = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r;
        }
        if ((0U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 1U;
        } else if ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd))) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0x00fffffcU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
        }
        if (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr))) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0x00ffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
        }
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
        if ((((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
             & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelfRef.__PVT___lspi_auto_in_pready) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
        vlSelfRef.__PVT___lspi_auto_in_pready = __Vdly___lspi_auto_in_pready;
        vlSelfRef.__PVT___lspi_auto_in_prdata = ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                      >> 2U)))
                                                  ? 
                                                 vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 2U)))
                                                   ? 
                                                  vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 2U)))
                                                      ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                           >> 2U)))
                                                       ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 2U)))
                                                        ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                                        : 0U)))))));
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = (0x1cU == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
              & (IData)(vlSelfRef.__PVT__spi_sck)) 
             & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
            | (((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                & (~ (IData)(vlSelfRef.__PVT__spi_sck))) 
               & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)(vlSelfRef.__PVT__spi_sck))) 
                    & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                   | ((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                      & (IData)(vlSelfRef.__PVT__spi_sck))) 
                  | (((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                      & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                         >> 8U)) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = 0U;
    } else {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x00000018U == (0x0000001cU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
              & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0x000000ffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i);
            }
        }
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                  ? 0U : 0xffffU) & ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                        ? 0U : (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                      & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffU)) 
                                     & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : 0xffffU))) 
               & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                   ? 0U : 0xffffU));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q 
                            = (3U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i) 
                                        >> 2U)));
                    }
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                        = (0x0000ffffU & ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                           ? (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q)
                                           : vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
                }
            }
        }
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x00000014U == (0x0000001cU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
              & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0x000000ffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0x00ffU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i));
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        }
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q 
            = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r))
                ? 1U : (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r));
    }
    vlSelfRef.__PVT__spi_sck = __Vdly__spi_sck;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x00000080U & ((~ (0U != (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                           << 7U)) | (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0x000000ffU & ((0x00000800U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                           ? ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                              - ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                 + (1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                          >> 9U))))
                           : ((0x00000200U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                               ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                               : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                  - (IData)(1U)))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
        = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    __Vtableidx2 = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h457dbc12_0
        [__Vtableidx2][0U];
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h457dbc12_0
        [__Vtableidx2][1U];
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h457dbc12_0
        [__Vtableidx2][2U];
}

extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h45f54a83_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0;
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelfRef.__PVT__axi42apb__DOT__is_write_r));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U)) : vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r);
    if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) {
        if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data));
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU));
        } else {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__axi42apb__DOT__wstrb_reg_r));
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                = vlSelfRef.__PVT__axi42apb__DOT__awaddr_reg_r;
        }
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__araddr_reg_r);
    }
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0x000000ffU & ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                           ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                              >> 8U) : (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                        >> 0x00000018U)));
    __Vtableidx5 = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = VysyxSoCFull__ConstPool__TABLE_h45f54a83_0
        [__Vtableidx5];
    vlSelfRef.__PVT__apbxbar__DOT__sel_3 = (0U == (
                                                   (((4U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001dU)) 
                                                     | ((2U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000001cU))))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000000eU)) 
                                                      | (3U 
                                                         & (2U 
                                                            ^ 
                                                            (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000cU))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_4 = (0U == (
                                                   (((4U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001dU)) 
                                                     | ((2U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000001cU))))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x00000010U)) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (1U 
                                                            ^ 
                                                            (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000cU))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_5 = (0U == (
                                                   (4U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001dU)) 
                                                   | (3U 
                                                      & (2U 
                                                         ^ 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000001cU)))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_0 = ((0U == 
                                             ((((4U 
                                                 & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                    >> 0x0000001dU)) 
                                                | ((2U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001cU)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000001cU))))) 
                                               << 3U) 
                                              | ((4U 
                                                  & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                     >> 0x0000000eU)) 
                                                 | (3U 
                                                    & (1U 
                                                       ^ 
                                                       (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                        >> 0x0000000cU)))))) 
                                            | (0U == 
                                               ((4U 
                                                 & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                    >> 0x0000001dU)) 
                                                | (3U 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001cU))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_6 = (0U == (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001fU)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (2U 
                                                         ^ 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000001cU)))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_2 = (0U == (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001fU)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001cU))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_1 = (0U == (
                                                   (((4U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001dU)) 
                                                     | ((2U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000001cU))))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                          >> 0x0000000eU)) 
                                                      | (3U 
                                                         & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0x000000ffU & ((1U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                           ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i
                           : ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                >> 1U) & (1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                               ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                  >> 8U) : ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                              >> 2U) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                             ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                >> 0x00000010U)
                                             : ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                                  >> 3U) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                 ? 
                                                (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                 >> 0x00000018U)
                                                 : 
                                                ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                  ? 
                                                 (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                  >> 0x00000010U)
                                                  : vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i))))));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr 
        = (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
            & (IData)(vlSelfRef.__PVT___lgpio_auto_in_pslverr)) 
           | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4) 
               & (IData)(vlSelfRef.__PVT___lkeyboard_auto_in_pslverr)) 
              | ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5) 
                 & (IData)(vlSelfRef.__PVT___lvga_auto_in_pslverr))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_penable 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0 
        = (((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6) 
                & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
            & ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6) 
               & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel))) 
           | (1U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__state)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp = 
        ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
          ? ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
             << 1U) : (IData)(vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_penable) 
           & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__is_write 
        = ((IData)(lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = ((((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x0000000cU == (0x0000001cU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
              << 3U) | (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                         & (8U == (0x0000001cU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                        << 2U)) | ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                     & (4U == (0x0000001cU 
                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                                    << 1U) | ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                              & (0U 
                                                 == 
                                                 (0x0000001cU 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))))) 
           & (- (IData)((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i 
        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__is_write)
            ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i)
            : 0U);
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i)) 
           | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0;
    axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0x000000ffU & ((IData)(0x0dU) 
                                             + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = (0x0000000fU & ((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                           ? (1U & (0x38U >> (7U & 
                                              ((IData)(7U) 
                                               - (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                           : ((8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                               ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                  >> 0x00000014U) : 
                              ((9U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                   >> 0x00000010U) : 
                               ((0x0aU == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                 ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                    >> 0x0000000cU)
                                 : ((0x0bU == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                     ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                        >> 8U) : ((0x0cU 
                                                   == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0x0dU 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((0x0eU 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                         >> 0x00000014U)
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                          >> 0x00000010U)
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                           >> 0x0000001cU)
                                                           : 
                                                          (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                           >> 0x00000018U))))))))))))))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
            = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout));
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((0x0eU > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & ((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                               ? (1U & (0xebU >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                               : ((8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                      >> 0x00000014U)
                                   : ((9U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                       ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                          >> 0x00000010U)
                                       : ((0x0aU == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                              >> 0x0000000cU)
                                           : ((0x0bU 
                                               == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                               ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                               : ((0x0cU 
                                                   == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0x0dU 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U))))))));
    }
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                      & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i)))) {
                    if ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                          >> (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                    >> 0x0000000aU))) 
                         & ((0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                            >> 0x0000000cU)) 
                            == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                            [(3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                    >> 0x0000000aU))]))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i))) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                >> 0x0000000aU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000cU)) 
                      == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                      [(3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                              >> 0x0000000aU))]))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0x0000000fU & 2U);
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        } else {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0x0000000fU & 0U);
            if (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = 9U;
            } else if (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                >> 0x0000000aU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000cU)) 
                      == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                      [(3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                              >> 0x0000000aU))]))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (3U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                            >> 0x0000000aU))))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 8U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 3U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q) 
                              - (IData)(1U)));
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q;
    } else {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0x0000000fU & 0U);
        if (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata 
        = (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)
             ? vlSelfRef.__PVT___lspi_auto_in_prdata
             : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                            ? ((((4U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                  ? ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                      ? ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                      : ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                          : 0U)) : 
                                 ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                   ? ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                       : (0x000000c0U 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                   : ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                       ? ((0x00000080U 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                           ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                              >> 8U)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                       : ((0x00000080U 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                           : vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                          [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                << 0x00000018U) | (
                                                   (0x00ff0000U 
                                                    & (((4U 
                                                         & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                           : 
                                                          (0x000000c0U 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? 
                                                          ((0x00000080U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                            >> 8U)
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                           : 
                                                          ((0x00000080U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                            : 
                                                           vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                           [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                       << 0x00000010U)) 
                                                   | ((0x0000ff00U 
                                                       & (((4U 
                                                            & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? 
                                                           ((2U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                              : 0U))
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                              : 
                                                             (0x000000c0U 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                               >> 8U)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                              : 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                               : 
                                                              vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                              [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & ((4U 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((2U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                              : 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                               : 0U))
                                                             : 
                                                            ((2U 
                                                              & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                               : 
                                                              (0x000000c0U 
                                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                              : 
                                                             ((1U 
                                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                                >> 8U)
                                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                               : 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                                : 
                                                               vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                            : 0U) : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2)
                                             ? (((vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [3U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x00000010U)) 
                                                | ((vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U]))
                                             : 0U) 
                                           | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)
                                                ? vlSelfRef.__PVT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)
                                                   ? vlSelfRef.__PVT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5)
                                                      ? vlSelfRef.__PVT___lvga_auto_in_prdata
                                                      : 0U) 
                                                    | ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6)
                                                        ? 
                                                       (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                        : 0U)))))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)
                  ? (~ (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done) 
                         & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                        | ((0x1cU == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re))))
                  : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i)));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT___lspi_auto_in_pready)) 
                     & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))) 
                        & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)) 
                       | (((~ (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                 : (0x1cU == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                               & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))) 
                           & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2)) 
                          | (((~ (IData)(vlSelfRef.__PVT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelfRef.__PVT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)) 
                                | (((~ (IData)(vlSelfRef.__PVT___lvga_auto_in_pready)) 
                                    & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                      & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6))))))))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
            ? (0x1cU != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
            : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                  ? (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                  : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)));
    vlSelfRef.psram_dio__en = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten));
    axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = 
        (((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready) 
          & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) 
         | (2U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0x0eU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((0x0dU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (2U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2 
        = ((0x0bU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2)) 
           | (4U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3 
        = ((7U & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3)) 
           | (8U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
           & (IData)(axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss = 
        (0x000000ffU & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                           & ((- (IData)(((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                          & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                             >> 0x0000000dU)))) 
                              | (- (IData)((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                   >> 0x0000000dU)))))))));
}

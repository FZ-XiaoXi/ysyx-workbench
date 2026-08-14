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
    // Locals
    CData/*0:0*/ axi4frag__DOT____VdfgRegularize_h068021ff_0_0;
    axi4frag__DOT____VdfgRegularize_h068021ff_0_0 = 0;
    // Body
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)))));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
              & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                  ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)
                  : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
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
    vlSelfRef.__PVT__axi4frag__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
              & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
                  ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)
                  : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_3 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize)));
    vlSelfRef.__PVT__axi4frag__DOT__addr_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                               ? vlSelfRef.__PVT__axi4frag__DOT__r_addr_1
                                               : vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready)));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    axi4frag__DOT____VdfgRegularize_h068021ff_0_0 = 
        ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_3 = 
        (vlSelfRef.__PVT__axi4frag__DOT__addr_1 + (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready = 
        (1U & (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                   >> 2U) & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.__PVT__axi4ram__DOT___GEN = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready) 
                                           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT___GEN) 
           & (0x0f000000U == (0x0fffe000U & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)));
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
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__in_awready = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000fU));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready) 
                                              & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid)));
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1\n"); );
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_1 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize)));
    vlSelfRef.__PVT__axi4frag__DOT__addr = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                             ? vlSelfRef.__PVT__axi4frag__DOT__r_addr
                                             : vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_1 = 
        (vlSelfRef.__PVT__axi4frag__DOT__addr + (0x0000ffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr)))));
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2)));
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
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr), vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata);
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata;
    } else {
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000fU));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid)));
}

extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h5156a0a5_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h6c2ebfd3_0;
extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_hef6775a3_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_mask_T;
    __PVT__axi4xbar_1__DOT___readys_mask_T = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_mask_T_8;
    __PVT__axi4xbar_1__DOT___readys_mask_T_8 = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd = 0;
    CData/*7:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_3;
    __Vdly__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    IData/*31:0*/ __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input;
    __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input = 0;
    SData/*15:0*/ __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg;
    __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg = 0;
    CData/*2:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_record;
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_record = 0;
    CData/*3:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write;
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write = 0;
    SData/*9:0*/ __Vdly__lvga__DOT__mvga__DOT__y_cnt;
    __Vdly__lvga__DOT__mvga__DOT__y_cnt = 0;
    CData/*0:0*/ __Vdly__axi4ram__DOT__w_full;
    __Vdly__axi4ram__DOT__w_full = 0;
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
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_5 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_15;
    __Vdly__axi4frag__DOT__error_15 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_14 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_13 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_12 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_11 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_10 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_9 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_8 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_4 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_0 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_1 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_2 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_3 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_6 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_7 = 0;
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
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
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
    vlSelfRef.__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_record 
        = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record;
    __Vdly__lvga__DOT__mvga__DOT__y_cnt = vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt;
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
                      & (0U == ((0x00000200U & ((~ 
                                                 ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))) 
                                                << 9U)) 
                                | (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4196: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4196, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4198: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4198, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid)) 
                                   | (~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                          ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast)))) 
                                  | (1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4202: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4202, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4204: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4204, "", false);
    }
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full;
    vlSelfRef.__Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read 
        = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read;
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write 
        = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write;
    vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v0 = 0U;
    vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8 = 0U;
    vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16 = 0U;
    vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17 = 0U;
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1827: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1827, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1829: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1829, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                            >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1833: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1833, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1835: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1835, "", false);
    }
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
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
    __Vdly__axi4frag__DOT__deq_q__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata 
        = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata;
    __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg;
    __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
        = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input;
    __Vdly__axi4frag__DOT__error_5 = vlSelfRef.__PVT__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_15 = vlSelfRef.__PVT__axi4frag__DOT__error_15;
    __Vdly__axi4frag__DOT__error_14 = vlSelfRef.__PVT__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_13 = vlSelfRef.__PVT__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_12 = vlSelfRef.__PVT__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_11 = vlSelfRef.__PVT__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_10 = vlSelfRef.__PVT__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_9 = vlSelfRef.__PVT__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_8 = vlSelfRef.__PVT__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_4 = vlSelfRef.__PVT__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_0 = vlSelfRef.__PVT__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_1 = vlSelfRef.__PVT__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_2 = vlSelfRef.__PVT__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_3 = vlSelfRef.__PVT__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_6 = vlSelfRef.__PVT__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_7 = vlSelfRef.__PVT__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full;
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)) 
                                  | ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                      ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))
                                          : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))
                                      : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))
                                          : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3429: Assertion failed in %NysyxSoCFull.asic.axi4yank: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3429, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3431: Assertion failed in %NysyxSoCFull.asic.axi4yank\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3431, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                  | ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                      ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))
                                          : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))
                                      : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                          ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))
                                          : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3435: Assertion failed in %NysyxSoCFull.asic.axi4yank: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3435, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3437: Assertion failed in %NysyxSoCFull.asic.axi4yank\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3437, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                      & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:598: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 598, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:600: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 600, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:604: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 604, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:606: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 606, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:610: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 610, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:612: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 612, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:616: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 616, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:618: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 618, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:622: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 622, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:624: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 624, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:628: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 628, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:630: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 630, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:634: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 634, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:636: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 636, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:640: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 640, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:642: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 642, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:646: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 646, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:648: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 648, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:652: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 652, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:654: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 654, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:658: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 658, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:660: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 660, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:664: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 664, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:666: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 666, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:670: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 670, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:672: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 672, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:676: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 676, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:678: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 678, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:682: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 682, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:684: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 684, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:688: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 688, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:690: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 690, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:694: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 694, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:696: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 696, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:700: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 700, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:702: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 702, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:706: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 706, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:708: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 708, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:712: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 712, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:714: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 714, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:718: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 718, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:720: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 720, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:724: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 724, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:726: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 726, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:730: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 730, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:732: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 732, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:736: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 736, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:738: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 738, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:742: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 742, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:744: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 744, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:748: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 748, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:750: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 750, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:754: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 754, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:756: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 756, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:760: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 760, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:762: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 762, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:766: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 766, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:768: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 768, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:772: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 772, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:774: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 774, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:778: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 778, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:780: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 780, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:784: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 784, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:786: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 786, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:790: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 790, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:792: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 792, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:796: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 796, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:798: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 798, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:802: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 802, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:804: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 804, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:808: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 808, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:810: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 810, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:814: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 814, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:816: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 816, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:820: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 820, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:822: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 822, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:826: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 826, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:828: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 828, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:832: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 832, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:834: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 834, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:838: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 838, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:840: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 840, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:844: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 844, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:846: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 846, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:850: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 850, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:852: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 852, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:856: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 856, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:858: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 858, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:862: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 862, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:864: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 864, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:868: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 868, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:870: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 870, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:874: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 874, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:876: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 876, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:880: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 880, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:882: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 882, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:886: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 886, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:888: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 888, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:892: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 892, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:894: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 894, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:898: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 898, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:900: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 900, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:904: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 904, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:906: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 906, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:910: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 910, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:912: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 912, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:916: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 916, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:918: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 918, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:922: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 922, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:924: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 924, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:928: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 928, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:930: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 930, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:934: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 934, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:936: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 936, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:940: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 940, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:942: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 942, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:946: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 946, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:948: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 948, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:952: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 952, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:954: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 954, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:958: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 958, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:960: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 960, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:964: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 964, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:966: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 966, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:970: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 970, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:972: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 972, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:976: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 976, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:978: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 978, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1) 
                                         | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:984: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 984, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:986: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 986, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                                    | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:990: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 990, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:992: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 992, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:996: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 996, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:998: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 998, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1002: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1002, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1004: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1004, "", false);
    }
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__idle_3 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2191: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:61\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2191, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2193: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2193, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2197: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:62\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2197, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2199: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2199, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2203: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2203, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2205: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2205, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2209: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2209, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2211: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2211, "", false);
    }
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi4ram__DOT__w_full = vlSelfRef.__PVT__axi4ram__DOT__w_full;
    __Vdly__axi4xbar_1__DOT__idle_4 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4;
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (((0x0eU <= (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
         & (0x15U >= (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) {
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
            vlSelfRef.__VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0x000000f0U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [(3U & (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                            >> 1U) 
                                           - (IData)(3U)))] 
                                   << 4U)) | (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din));
            vlSelfRef.__VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = (3U & (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                          >> 1U) - (IData)(3U)));
            vlSelfRef.__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
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
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x000000ffU & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata);
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 1U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x000000ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 8U));
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 2U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x000000ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 0x10U));
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 3U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
               >> 0x18U);
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
    }
    __Vtableidx4 = ((((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q) 
                        << 3U) | (((4U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                   | (6U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__is_write) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__state) 
                                << 1U) | (IData)(vlSymsp->TOP.reset)));
    if (VysyxSoCFull__ConstPool__TABLE_h5156a0a5_0[__Vtableidx4]) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__state 
            = VysyxSoCFull__ConstPool__TABLE_h6c2ebfd3_0
            [__Vtableidx4];
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000dU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000dU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000cU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000bU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000bU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000aU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000aU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 9U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 9U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 8U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 8U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 7U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 7U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 6U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 6U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                     & (IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 1U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 1U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 2U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 2U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 3U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 4U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 4U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 5U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                        >> 5U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000eU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000eU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000fU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                                                 >> 0x0000000fU)))));
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid))) 
            & (((IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid) 
                & (0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))) 
               | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched))));
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb)));
        __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__axi4ram__DOT__r_full = ((1U & 
                                              (~ (IData)(vlSymsp->TOP.reset))) 
                                             && ((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en) 
                                                 | ((~ 
                                                     ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready) 
                                                      & (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full))) 
                                                    & (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full))));
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
    __Vdly__axi4ram__DOT__w_full = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && ((IData)(vlSelfRef.__PVT__axi4ram__DOT___GEN) 
                                        | ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready) 
                                               & (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full))) 
                                           & (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full))));
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
    if (vlSelfRef.__PVT__axi4frag__DOT___GEN_1) {
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
                                                     & (vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_1 
                                                        & (vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_1 
                                                           >> 8U))) 
                                                    | (~ 
                                                       (((~ 
                                                          (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
                                                           >> 0x0fU)) 
                                                         << 0x0000000fU) 
                                                        | (0x00007fffU 
                                                           & ((~ vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr) 
                                                              | (vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_1 
                                                                 >> 8U))))))
                                                    : vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_1));
    }
    if (vlSelfRef.__PVT__axi4frag__DOT___GEN_2) {
        vlSelfRef.__PVT__axi4frag__DOT__r_len_1 = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1) 
                                                      - (IData)(1U)));
        vlSelfRef.__PVT__axi4frag__DOT__r_addr_1 = 
            ((0U == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst))
              ? vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr
              : ((2U == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst))
                  ? ((0x00007fffU & (vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_3 
                                     & (vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_3 
                                        >> 8U))) | 
                     (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
                              >> 0x0fU)) << 0x0000000fU) 
                         | (0x00007fffU & ((~ vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr) 
                                           | (vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_3 
                                              >> 8U))))))
                  : vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_3));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en) {
        vlSelfRef.__PVT__axi4ram__DOT__r_id = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid;
    }
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rid_r = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid;
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__lmrom__DOT___mrom_rdata;
    }
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en;
    vlSelfRef.__PVT__axi4ram__DOT__r_sel1 = (0x7800U 
                                             == (0x00007fffU 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x0000000dU)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 2U));
    vlSelfRef.__PVT__axi4ram__DOT__w_sel1 = (0x7800U 
                                             == (0x00007fffU 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x0000000dU)));
    if (vlSelfRef.__PVT__axi4ram__DOT__rdata_REG) {
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r0 = (0x000000ffU 
                                                   & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data);
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r1 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                      >> 8U));
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r2 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                      >> 0x10U));
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r3 = (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                   >> 0x18U);
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr)) 
                << 0x0000000dU) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize) 
                                                    << 2U) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst)))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    if (vlSelfRef.__PVT__axi4ram__DOT___GEN) {
        vlSelfRef.__PVT__axi4ram__DOT__w_id = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid;
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
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r 
            = ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
               << 1U);
        vlSelfRef.__PVT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata;
    }
    if ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__is_write_r 
            = vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_record = 7U;
        __Vdly__lvga__DOT__mvga__DOT__y_cnt = 1U;
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
        __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write = 0U;
        vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v0 = 1U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
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
        __Vdly__axi4frag__DOT__deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata = 0U;
        __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input = 0U;
        __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg = 0U;
        __Vdly__axi4frag__DOT__error_5 = 0U;
        __Vdly__axi4frag__DOT__error_15 = 0U;
        __Vdly__axi4frag__DOT__error_14 = 0U;
        __Vdly__axi4frag__DOT__error_13 = 0U;
        __Vdly__axi4frag__DOT__error_12 = 0U;
        __Vdly__axi4frag__DOT__error_11 = 0U;
        __Vdly__axi4frag__DOT__error_10 = 0U;
        __Vdly__axi4frag__DOT__error_9 = 0U;
        __Vdly__axi4frag__DOT__error_8 = 0U;
        __Vdly__axi4frag__DOT__error_4 = 0U;
        __Vdly__axi4frag__DOT__error_0 = 0U;
        __Vdly__axi4frag__DOT__error_1 = 0U;
        __Vdly__axi4frag__DOT__error_2 = 0U;
        __Vdly__axi4frag__DOT__error_3 = 0U;
        __Vdly__axi4frag__DOT__error_6 = 0U;
        __Vdly__axi4frag__DOT__error_7 = 0U;
        __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state = 0U;
        __Vdly__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 = 0U;
        vlSelfRef.__PVT__axi42apb__DOT__state = 0U;
    } else {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_record 
            = ((6U & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                      << 1U)) | (IData)(vlSymsp->TOP.externalPins_ps2_clk));
        if (((0x020dU == (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)) 
             & (0x0320U == (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt)))) {
            __Vdly__lvga__DOT__mvga__DOT__y_cnt = 1U;
        } else if ((0x0320U == (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt))) {
            __Vdly__lvga__DOT__mvga__DOT__y_cnt = (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                  & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
                    >> 0x0000000fU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid)))) {
            __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        if ((IData)(((4U == (6U & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record))) 
                     & (0x0aU == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt))))) {
            if (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_full) {
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                    [1U];
                vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8 = 1U;
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v9 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                    [2U];
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v10 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                    [3U];
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v11 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                    [4U];
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v12 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                    [5U];
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v13 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                    [6U];
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v14 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                    [7U];
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v15 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
            } else {
                vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16 
                    = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
                vlSelfRef.__VdlyDim0__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16 
                    = (7U & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
                vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16 = 1U;
                __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write)));
            }
        } else if (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)))) {
                vlSelfRef.__Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read)));
            }
        } else if ((0U != (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))) {
            vlSelfRef.__Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read) 
                                  - (IData)(1U)));
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write) 
                                  - (IData)(1U)));
            vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                [1U];
            vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17 = 1U;
            vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v18 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                [2U];
            vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v19 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                [3U];
            vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v20 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                [4U];
            vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v21 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                [5U];
            vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v22 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                [6U];
            vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v23 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                [7U];
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
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                    >> 0x0000000fU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid)))) {
            __Vdly__axi4frag__DOT__deq_q__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg 
            = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg;
        __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
            = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input;
        vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata 
            = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata;
        if (((0U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)) 
             & (1U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state)))) {
            if ((0x10002000U == (0x1fffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) {
                __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg 
                    = (0x0000ffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i);
            } else if ((0x10002008U == (0x1fffffffU 
                                        & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) {
                __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                    = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
            }
        } else if (((0U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)) 
                    & (2U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state)))) {
            vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata 
                = ((0x10002000U == (0x1fffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                    ? (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg)
                    : ((0x10002004U == (0x1fffffffU 
                                        & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                        ? (IData)(vlSymsp->TOP.externalPins_gpio_in)
                        : ((0x10002008U == (0x1fffffffU 
                                            & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                            ? vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input
                            : 0xdeadbeefU)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 5U))) {
            __Vdly__axi4frag__DOT__error_5 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_5) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 0x0fU))) {
            __Vdly__axi4frag__DOT__error_15 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_15) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 0x0eU))) {
            __Vdly__axi4frag__DOT__error_14 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_14) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 0x0dU))) {
            __Vdly__axi4frag__DOT__error_13 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_13) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 0x0cU))) {
            __Vdly__axi4frag__DOT__error_12 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_12) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 0x0bU))) {
            __Vdly__axi4frag__DOT__error_11 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_11) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 0x0aU))) {
            __Vdly__axi4frag__DOT__error_10 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_10) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 9U))) {
            __Vdly__axi4frag__DOT__error_9 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_9) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 8U))) {
            __Vdly__axi4frag__DOT__error_8 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_8) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 4U))) {
            __Vdly__axi4frag__DOT__error_4 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_4) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((0x0000ffffU & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                            & (IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0)))) {
            __Vdly__axi4frag__DOT__error_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_0) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 1U))) {
            __Vdly__axi4frag__DOT__error_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_1) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 2U))) {
            __Vdly__axi4frag__DOT__error_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_2) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 3U))) {
            __Vdly__axi4frag__DOT__error_3 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_3) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 6U))) {
            __Vdly__axi4frag__DOT__error_6 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_6) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)) 
                >> 7U))) {
            __Vdly__axi4frag__DOT__error_7 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_7) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid)))) {
            __Vdly__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state 
            = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__next_state;
        if (vlSelfRef.__PVT__axi4frag__DOT___GEN_1) {
            vlSelfRef.__PVT__axi4frag__DOT__busy = 
                (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len));
        }
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        if (vlSelfRef.__PVT__axi4frag__DOT___GEN_2) {
            vlSelfRef.__PVT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        __Vdly__axi4xbar_1__DOT__idle_4 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                | (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2;
        }
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 
            (0x000001ffU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo) 
                            - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))));
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state 
            = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state;
        __Vdly__axi4xbar_1__DOT__idle_3 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_3) 
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
        vlSelfRef.__PVT__axi42apb__DOT__state = vlSelfRef.__PVT__axi42apb__DOT__casez_tmp;
    }
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt = __Vdly__lvga__DOT__mvga__DOT__y_cnt;
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
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb) 
                                           << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast)))));
    }
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write 
        = __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write;
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record 
        = __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_record;
    if (__VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = ((0xffffff00U & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = ((0xffff00ffU & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                  << 8U));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = ((0xff00ffffU & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = ((0x00ffffffU & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                  << 0x00000018U));
    }
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
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg 
        = __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg;
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
        = __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input;
    vlSelfRef.__PVT__axi4frag__DOT__error_5 = __Vdly__axi4frag__DOT__error_5;
    vlSelfRef.__PVT__axi4frag__DOT__error_15 = __Vdly__axi4frag__DOT__error_15;
    vlSelfRef.__PVT__axi4frag__DOT__error_14 = __Vdly__axi4frag__DOT__error_14;
    vlSelfRef.__PVT__axi4frag__DOT__error_13 = __Vdly__axi4frag__DOT__error_13;
    vlSelfRef.__PVT__axi4frag__DOT__error_12 = __Vdly__axi4frag__DOT__error_12;
    vlSelfRef.__PVT__axi4frag__DOT__error_11 = __Vdly__axi4frag__DOT__error_11;
    vlSelfRef.__PVT__axi4frag__DOT__error_10 = __Vdly__axi4frag__DOT__error_10;
    vlSelfRef.__PVT__axi4frag__DOT__error_9 = __Vdly__axi4frag__DOT__error_9;
    vlSelfRef.__PVT__axi4frag__DOT__error_8 = __Vdly__axi4frag__DOT__error_8;
    vlSelfRef.__PVT__axi4frag__DOT__error_4 = __Vdly__axi4frag__DOT__error_4;
    vlSelfRef.__PVT__axi4frag__DOT__error_0 = __Vdly__axi4frag__DOT__error_0;
    vlSelfRef.__PVT__axi4frag__DOT__error_1 = __Vdly__axi4frag__DOT__error_1;
    vlSelfRef.__PVT__axi4frag__DOT__error_2 = __Vdly__axi4frag__DOT__error_2;
    vlSelfRef.__PVT__axi4frag__DOT__error_3 = __Vdly__axi4frag__DOT__error_3;
    vlSelfRef.__PVT__axi4frag__DOT__error_6 = __Vdly__axi4frag__DOT__error_6;
    vlSelfRef.__PVT__axi4frag__DOT__error_7 = __Vdly__axi4frag__DOT__error_7;
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    if (__VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    if (__VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    if (__VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    if (__VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4 = __Vdly__axi4xbar_1__DOT__idle_4;
    vlSelfRef.__PVT__axi4ram__DOT__w_full = __Vdly__axi4ram__DOT__w_full;
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_valid 
        = ((0x0023U < (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)) 
           & (0x0203U >= (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_full 
        = (8U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd 
        = (0x0000000fU & vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input);
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[0U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__0__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 4U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[1U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__1__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 8U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[2U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__2__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x0cU));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[3U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__3__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x10U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[4U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__4__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x14U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[5U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__5__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd 
        = (0x0000000fU & (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
                          >> 0x18U));
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[6U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__6__Vfuncout;
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd 
        = (vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
           >> 0x1cU);
    __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout 
        = ((8U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
            ? ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0x71U : 0x61U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 0x85U
                                             : 0x63U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0xc1U : 0x11U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 9U : 1U)))
            : ((4U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                ? ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0x1fU : 0x41U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 0x49U
                                             : 0x99U))
                : ((2U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                    ? ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                        ? 0x0dU : 0x25U) : ((1U & (IData)(__Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__bcd))
                                             ? 0x9fU
                                             : 3U))));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[7U] 
        = __Vfunc_lgpio__DOT__mgpio__DOT__bcd_to_7seg__7__Vfuncout;
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable 
        = ((2U != (3U & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                         >> 1U))) & (1U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state)));
    vlSelfRef.__PVT__axi4ram__DOT__rdata_REG = vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en;
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 0x0000002dU)));
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid = 0U;
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 0x0000002dU)));
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid));
    }
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr = 
        ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_valid)
          ? (0x000003ffU & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt) 
                            - (IData)(0x0024U))) : 0U);
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3 = __Vdly__axi4xbar_1__DOT__idle_3;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4frag__DOT__len = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy)
                                            ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len)
                                            : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__axi4yank__DOT__casez_tmp = (1U 
                                                 & ((8U 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full))
                                                        : 
                                                       (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))));
    vlSelfRef.__PVT__axi4frag__DOT__len_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                              ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len_1)
                                              : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2 = (1U 
                                                   & ((8U 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full))
                                                          : 
                                                         (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)));
    vlSelfRef.__PVT__axi4frag__DOT___in_awready_T = 
        ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               | (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                                                        | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                  << 2U)) 
                                  | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                                     << 1U)) | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx7];
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                  << 2U)) 
                                  | (((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))) 
                                 | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx6];
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)) 
           & ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    __PVT__axi4xbar_1__DOT___readys_mask_T_8 = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
          >> 2U) & (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full));
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
               | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2;
    }
    __PVT__axi4xbar_1__DOT___readys_mask_T = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 1U) & (IData)(vlSelfRef.__PVT__lmrom__DOT__state));
    vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 2U) & (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
              | (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_11 
        = (7U & ((IData)(__PVT__axi4xbar_1__DOT___readys_mask_T_8) 
                 | VL_SHIFTL_III(3,3,32, (IData)(__PVT__axi4xbar_1__DOT___readys_mask_T_8), 1U)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_3 
        = (7U & ((IData)(__PVT__axi4xbar_1__DOT___readys_mask_T) 
                 | VL_SHIFTL_III(3,3,32, (IData)(__PVT__axi4xbar_1__DOT___readys_mask_T), 1U)));
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (3U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data)
                   : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)));
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

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last 
        = ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
            ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                    ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last))
                    : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last)))
                : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                    ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last))
                    : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last))))
            : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                    ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last))
                    : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last)))
                : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                    ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last))
                    : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ axi4frag__DOT____VdfgRegularize_h068021ff_0_0;
    axi4frag__DOT____VdfgRegularize_h068021ff_0_0 = 0;
    // Body
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
              & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                  ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)
                  : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
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
    vlSelfRef.__PVT__axi4frag__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
              & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
                  ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)
                  : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_3 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize)));
    vlSelfRef.__PVT__axi4frag__DOT__addr_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                               ? vlSelfRef.__PVT__axi4frag__DOT__r_addr_1
                                               : vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready)));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    axi4frag__DOT____VdfgRegularize_h068021ff_0_0 = 
        ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_3 = 
        (vlSelfRef.__PVT__axi4frag__DOT__addr_1 + (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready = 
        (1U & (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                   >> 2U) & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.__PVT__axi4ram__DOT___GEN = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready) 
                                           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT___GEN) 
           & (0x0f000000U == (0x0fffe000U & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)));
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
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__in_awready = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000fU));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready) 
                                              & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly___apbxbar_auto_anon_out_0_prdata;
    __Vdly___apbxbar_auto_anon_out_0_prdata = 0;
    IData/*31:0*/ __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata;
    __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata = 0;
    CData/*0:0*/ __Vdly__lspi__DOT__mspi__DOT__spictrl_pready;
    __Vdly__lspi__DOT__mspi__DOT__spictrl_pready = 0;
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
    CData/*2:0*/ __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0;
    IData/*23:0*/ __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0;
    IData/*18:0*/ __VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    __VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    SData/*12:0*/ __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*2:0*/ __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    // Body
    vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__spi_sck = vlSelfRef.__PVT__spi_sck;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata;
    __Vdly__lspi__DOT__mspi__DOT__spictrl_pready = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0U;
    __Vdly___apbxbar_auto_anon_out_0_prdata = vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata;
    __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0U;
    __Vdly__spi_sck = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                  & (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                 & ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                    | (IData)(vlSelfRef.__PVT__spi_sck)))
                                 ? (~ (IData)(vlSelfRef.__PVT__spi_sck))
                                 : (IData)(vlSelfRef.__PVT__spi_sck))));
    __Vdly__lspi__DOT__mspi__DOT__spictrl_pready = 
        ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable) 
                                             & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel)) 
                                            & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready))));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__pready_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                   & (2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                   ? (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))
                   : (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__pready_reg))));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__pslverr_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
             & (2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
             ? ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
                & (IData)(vlSelfRef.__PVT___apbxbar_auto_anon_out_0_pslverr))
             : (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__pslverr_reg)));
    vlSelfRef.__PVT___apbxbar_auto_anon_out_0_pslverr 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((2U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
            && ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                 ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr)
                 : (IData)(vlSelfRef.__PVT___apbxbar_auto_anon_out_0_pslverr))));
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
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((((0x01e0U > (0x000003ffU & VL_DIV_III(32, 
                                                   VL_MODDIV_III(32, 
                                                                 VL_SHIFTR_III(32,32,32, 
                                                                               ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))) 
              & (0x0280U > (0x000003ffU & VL_MODDIV_III(32, 
                                                        VL_MODDIV_III(32, 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))))) 
             & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                & ((~ (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable)) 
                   & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))))) {
            vlSelfRef.lvga__DOT__mvga__DOT__vmem_inst__DOT____Vlvbound_heacdd1d6__0 
                = (0x00ffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i);
            if ((0x0004afffU >= vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr)) {
                __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 
                    = vlSelfRef.lvga__DOT__mvga__DOT__vmem_inst__DOT____Vlvbound_heacdd1d6__0;
                __VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 
                    = vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr;
                __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out = 0U;
    vlSelfRef.__PVT___apbxbar_auto_anon_out_5_pready 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel) 
            & (~ (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready 
        = ((IData)(vlSymsp->TOP.reset) || (8U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state)));
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(
                                                             (((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                                                               >> 2U) 
                                                              | (6U 
                                                                 == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 8U;
        vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x00002774U;
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt = 1U;
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0x0000ffffU;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
        __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata = 0xdeadbeefU;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
    } else {
        vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = ((0U == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                ? 0x0000030cU : (0x0001ffffU & (vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                                                - (IData)(1U))));
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt 
            = ((0x0320U == (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt))
                ? 1U : (0x000003ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt))));
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((6U & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                      << 1U)) | (4U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0x0000ffffU & ((1U & ((~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                     | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                               ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                               : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                                  - (IData)(1U))));
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
        __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata 
            = (((7U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state)) 
                & (8U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state)))
                ? ((((0x0000ff00U & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                     << 8U)) | (0x000000ffU 
                                                & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                                   >> 8U))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                           >> 8U)) 
                                       | (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
                                          >> 0x18U)))
                : vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata);
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt 
            = (((0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                & (1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                ? 0x00000031U : (((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                                  ? ((IData)(0x00000031U) 
                                     + vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                                      ? (vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt 
                                         - (IData)(0x00000014U))
                                      : 0U)));
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
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
               & (0x10U == (0x1cU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr)))) 
              & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x000000ffU & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
                                         | (1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x00ffU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x00003f00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
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
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)));
        }
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
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
        if ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                   & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 1U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 2U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        } else if ((IData)((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                             >> 3U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0x00ffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
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
                                                      | (((2U 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                                          & (0U 
                                                             == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                                          >> 7U)
                                                          : 
                                                         (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data 
                                                          >> 0x0000001fU))))
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
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = (0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000000eU));
                        __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                     >> 0x0000000bU));
                        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 1U;
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
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6U] = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7U] = 0U;
    }
    if (__VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8] 
            = __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    }
    __Vdly___apbxbar_auto_anon_out_0_prdata = ((IData)(vlSymsp->TOP.reset)
                                                ? 0xdeadbeefU
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                                                    ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                                                     ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata
                                                     : vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata 
        = __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata;
    if (__VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0) {
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram[__VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0] 
            = __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__prdata_reg = 0U;
        vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata 
            = __Vdly___apbxbar_auto_anon_out_0_prdata;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready 
            = __Vdly__lspi__DOT__mspi__DOT__spictrl_pready;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0U;
    } else {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__prdata_reg 
            = (((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                & (2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                ? (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)
                     ? vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata
                     : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)
                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                                    ? ((((4U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? ((1U 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                              : ((1U 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                  : 0U))
                                          : ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? ((1U 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                  : 
                                                 (0x000000c0U 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                              : ((1U 
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
                                        << 0x00000018U) 
                                       | ((0x00ff0000U 
                                           & (((4U 
                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
                                    : 0U) : 0U) | (
                                                   ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2)
                                                     ? 
                                                    (((vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
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
                                                        ? vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata
                                                        : 0U) 
                                                      | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)
                                                           ? 
                                                          ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)
                                                            ? 0U
                                                            : 
                                                           (0x000000ffU 
                                                            & vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                                                            [
                                                            (7U 
                                                             & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))]))
                                                           : 0U) 
                                                         | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5)
                                                              ? vlSelfRef.__PVT___apbxbar_auto_anon_out_5_prdata
                                                              : 0U) 
                                                            | ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6)
                                                                ? vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q
                                                                : 0U)))))))
                : vlSelfRef.__PVT__apbdelay_delayer__DOT__prdata_reg);
        vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata 
            = __Vdly___apbxbar_auto_anon_out_0_prdata;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate;
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q 
                    = (1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q));
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
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
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
        if ((((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
             & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = 1U;
        } else if (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = 0U;
        }
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready 
            = __Vdly__lspi__DOT__mspi__DOT__spictrl_pready;
        if ((6U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q;
        }
    }
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_valid 
        = ((0x0090U < (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt)) 
           & (0x0310U >= (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done 
        = (8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = (0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr = 0U;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
              & (IData)(vlSelfRef.__PVT__spi_sck)) 
             & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
            | (((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                & (~ (IData)(vlSelfRef.__PVT__spi_sck))) 
               & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_psel 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
               || (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_penable 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
               && (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))));
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
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__state = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
    } else {
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
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
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
                                       << (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                 >> 0x0000000bU)))) 
                                   & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                             >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                           | (0x00ffU & ((IData)(1U) 
                                         << (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                   >> 0x0000000bU)))));
                }
            }
        }
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata 
            = ((0U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                             >> 2U))) ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                : ((1U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                 >> 2U))) ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                    : ((2U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                     >> 2U))) ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                        : ((3U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                         >> 2U))) ? 
                           vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                            : ((4U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                : ((5U == (7U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                    : ((6U == (7U & 
                                               ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                >> 2U)))
                                        ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                        : 0U)))))));
        vlSelfRef.__PVT__apbdelay_delayer__DOT__state 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x18U == (0x1cU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr)))) 
              & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata);
            }
        }
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x14U == (0x1cU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr)))) 
              & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb))) {
                vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0x00ffU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata));
            }
        }
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i;
    }
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr = 
        ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_valid)
          ? (0x000003ffU & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt) 
                            - (IData)(0x0091U))) : 0U);
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.__PVT__spi_sck = __Vdly__spi_sck;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
        } else {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0x0fU;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0x10U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0x0fU;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr 
            = ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                    ? 0U : 0x10U) : 0x10U);
    } else if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 1U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0x18U;
        } else {
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 3U;
            vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0x14U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0x0fU;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 4U;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                     >> 3U))) && (1U & ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                         ? (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                               >> 1U))
                                         : ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                                   >> 1U)) 
                                            || (1U 
                                                & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x00000080U & ((~ (0U != (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                           << 7U)) | (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    if ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr = 0U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr;
    } else if ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite 
        = ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
           && ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))
                ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite)
                : ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                   && (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite))));
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
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
            ? (8U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
            : (0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0;
    CData/*3:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__cnt;
    __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0;
    // Body
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
        = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
    __Vdly__lkeyboard__DOT__mps2__DOT__cnt = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt;
    if (vlSymsp->TOP.reset) {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt))) {
        if (vlSymsp->TOP.externalPins_ps2_data) {
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
                = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
        } else {
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 1U;
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0U;
        }
    } else if ((9U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt))) {
        if ((1U & ((IData)(vlSymsp->TOP.externalPins_ps2_data) 
                   ^ VL_REDXOR_16((0x01feU & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg)))))) {
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
                = (((IData)(vlSymsp->TOP.externalPins_ps2_data) 
                    << 8U) | (0x000000ffU & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg) 
                                             >> 1U)));
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt)));
        } else {
            __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg = 0U;
            __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
        }
    } else if ((0x0aU == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt))) {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
            = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
        __Vdly__lkeyboard__DOT__mps2__DOT__cnt = 0U;
    } else {
        __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
            = (((IData)(vlSymsp->TOP.externalPins_ps2_data) 
                << 8U) | (0x000000ffU & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg) 
                                         >> 1U)));
        __Vdly__lkeyboard__DOT__mps2__DOT__cnt = (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt)));
    }
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__cnt 
        = __Vdly__lkeyboard__DOT__mps2__DOT__cnt;
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg 
        = __Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_reg;
}

extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h45f54a83_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelfRef.__PVT__axi42apb__DOT__is_write_r));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata 
        = vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata;
    if (vlSelfRef.__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[vlSelfRef.__VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = vlSelfRef.__VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read 
        = vlSelfRef.__Vdly__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read;
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v0) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6U] = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v8;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v9;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v10;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v11;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v12;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v13;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v14;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v15;
    }
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[vlSelfRef.__VdlyDim0__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v16;
    }
    if (vlSelfRef.__VdlySet__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17) {
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v17;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v18;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v19;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v20;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v21;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v22;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6U] 
            = vlSelfRef.__VdlyVal__lkeyboard__DOT__mps2__DOT__ps2_data_fifo__v23;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7U] = 0U;
    }
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U)) : vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r);
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
                               ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data)
                               : (IData)(vlSelfRef.__PVT__axi42apb__DOT__wstrb_reg_r)))
            : 0U);
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read) 
           == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0x000000ffU & ((2U & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                           ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                              >> 8U) : (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                        >> 0x00000018U)));
    __Vtableidx8 = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = VysyxSoCFull__ConstPool__TABLE_h45f54a83_0
        [__Vtableidx8];
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
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr 
        = (0x0007ffffU & (((IData)(0x00000280U) * (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr)) 
                          + (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0x000000ffU & ((IData)(7U) 
                                             + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
            ? 3U : ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                     ? 8U : (0x0000000fU & ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0x00000014U)
                                             : ((3U 
                                                 == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x00000010U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 0x0000000cU)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                      >> 4U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                       : 
                                                      ((0x0aU 
                                                        == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                        >> 4U)
                                                        : 
                                                       ((0x0bU 
                                                         == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                         : 
                                                        ((0x0cU 
                                                          == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                          >> 0x00000014U)
                                                          : 
                                                         ((0x0dU 
                                                           == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                           >> 0x00000010U)
                                                           : 
                                                          ((0x0eU 
                                                            == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                            >> 0x0000001cU)
                                                            : 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                                            >> 0x00000018U)))))))))))))))));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vga_data 
        = (((0x01e0U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_addr)) 
            & (0x0280U > (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr)))
            ? ((0x0004afffU >= vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr)
                ? vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram
               [vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_addr]
                : 0U) : 0U);
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hcfb222df_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss = 
        (0x000000ffU & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                           & ((- (IData)(((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                          & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                             >> 0x0000000dU)))) 
                              | (- (IData)((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                   >> 0x0000000dU)))))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                            = (0x0000000fU & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i)));
                    }
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
                        = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                 >> 0x0000000bU));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (7U & 0U);
                } else {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x000001ffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                          >> 2U));
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                 >> 0x0000000bU));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (7U & 0U);
            } else {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x000001ffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 2U));
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1bffU & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                             >> 0x0000000bU));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000eU));
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                             >> 0x0000000bU));
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
                            ? 0x0020U : 0U);
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
        vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q 
            = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r))
                ? 1U : (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r));
    }
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelfRef.__Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vtableidx5 = vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][0U];
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][1U];
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_hcfb222df_0
        [__Vtableidx5][2U];
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0;
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)
            ? ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__araddr_reg_r));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__linear_waddr 
        = (0x0007ffffU & (((IData)(0x00000280U) * (0x000003ffU 
                                                   & VL_DIV_III(32, 
                                                                VL_MODDIV_III(32, 
                                                                              VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))) 
                          + (0x000003ffU & VL_MODDIV_III(32, 
                                                         VL_MODDIV_III(32, 
                                                                       VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))));
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
    vlSelfRef.__PVT__apbxbar__DOT__sel_2 = (0U == (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001fU)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001cU))));
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
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state))
            ? ((((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4) 
                 & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel)) 
                & ((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4) 
                       & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
                   & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state))
                               ? ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable)
                                   ? 0U : 1U) : 0U));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    __VdfgRegularize_h6e95ff9d_0_26 = ((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
                                           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
                                       & ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
                                          & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel)));
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_h992a1580_0_0 
        = (((~ ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6) 
                & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)))) 
            & ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6) 
               & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel))) 
           | (1U == (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__state)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state))
            ? (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
                & (IData)(__VdfgRegularize_h6e95ff9d_0_26))
                ? 1U : (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                         & (IData)(__VdfgRegularize_h6e95ff9d_0_26))
                         ? 2U : 0U)) : 0U);
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
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i 
        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__is_write)
            ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i)
            : 0U);
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i)) 
           | (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i));
}

extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h6c27f87a_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hb60b2f22_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h1d37f4c7_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_he6c51f5f_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h9ba4c414_0;

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    // Body
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready) 
                                  << 2U)) | (((0x30000000U 
                                               <= (0x3fffffffU 
                                                   & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel) 
                                << 2U) | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)));
    if (VysyxSoCFull__ConstPool__TABLE_h6c27f87a_0[__Vtableidx1]) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state 
            = VysyxSoCFull__ConstPool__TABLE_hb60b2f22_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    __Vtableidx3 = ((((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re) 
                        << 3U) | ((0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))) 
                     << 5U) | ((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i)
                                  ? 2U : 1U) << 3U) 
                               | (((8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
        = VysyxSoCFull__ConstPool__TABLE_h1d37f4c7_0
        [__Vtableidx3];
    if ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & ((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                               ? (1U & (0x35U >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                               : 0x0aU));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n))))));
    } else if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                               ? 0x0eU : ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0x0bU : 
                                          ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x00000014U)
                                            : ((3U 
                                                == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x00000010U)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x0000000cU)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U)))))))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
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
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i))) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                              >> 0x0000000bU))]))) {
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
                      >> (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (7U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                            >> 0x0000000bU))))) {
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (((0U 
                                                  != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                                                 & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)) 
                                                | (((~ 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))) 
                                                    & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)) 
                                                   | (((~ 
                                                        (((0U 
                                                           != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                                          & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                              ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                                              : 
                                                             (0x16U 
                                                              == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                                                         & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))) 
                                                       & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_2)) 
                                                      | (((~ 
                                                           ((2U 
                                                             == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)) 
                                                            | (1U 
                                                               == (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state)))) 
                                                          & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)) 
                                                         | (((~ 
                                                              ((1U 
                                                                == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state)) 
                                                               & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable))) 
                                                             & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)) 
                                                            | (((~ (IData)(vlSelfRef.__PVT___apbxbar_auto_anon_out_5_pready)) 
                                                                & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_5)) 
                                                               | ((~ (IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                                                  & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_6))))))));
    if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
          & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
         | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot = 1U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata = 0U;
    } else if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pprot;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot = 1U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata 
        = ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
            ? ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? 0xdeadbeefU : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                  ? 0xdeadbeefU : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                                    ? 0xdeadbeefU
                                                    : 0x00002140U)))
            : ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                    ? 0xdeadbeefU : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                      ? 0x00003140U
                                      : 0x00003040U))
                : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                    ? 1U : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (0x03000000U | (0x00ffffffU 
                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                             : 0xdeadbeefU))));
    if ((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata;
    } else if ((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata = 0xdeadbeefU;
    }
    if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
          & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
         | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr 
            = (0x0000001fU & (0x3fffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
    } else if ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)))) {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr 
            = (0x0000001fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_psel;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_penable;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata;
    } else {
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr 
            = (0x0000001fU & (0x3fffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out 
        = ((1U & (~ (((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                      & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                     | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))))) 
           && ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))) 
               && (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i 
        = (((1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
            | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
           & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready 
        = ((1U & (~ (((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                      & (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                     | (2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))))) 
           && ((((0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state)) 
                 & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__next_state))) 
                | (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))) 
               && (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
            ? (0x16U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
            : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                  ? (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                  : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)));
    vlSelfRef.psram_dio__en = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten));
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
    vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
            ? (((1U != (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
                & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                   ? 1U : 2U) : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state))
                                                  ? 
                                                 ((0x00000014U 
                                                   > vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_penable) 
           & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer 
        = ((1U & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                     >> 3U))) && (1U & ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                         ? ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                                                 ? 
                                                (~ 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                  & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready)))
                                                 : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out))
                                             : ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))) 
                                                || (1U 
                                                    & (~ 
                                                       ((2U 
                                                         == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                        & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready))))))
                                         : ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state) 
                                                   >> 1U)) 
                                            || ((1U 
                                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state)) 
                                                || ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i) 
                                                    & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i))))))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)));
    __Vtableidx9 = (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                     << 1U) | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = VysyxSoCFull__ConstPool__TABLE_he6c51f5f_0
        [__Vtableidx9];
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer) 
                                << 4U) | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate 
        = VysyxSoCFull__ConstPool__TABLE_h9ba4c414_0
        [__Vtableidx2];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state 
        = ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                     ? ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready))
                                 ? 8U : 7U) : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out)
                                                ? 7U
                                                : 6U))
                         : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipslv_pready))
                                 ? 6U : 5U) : (((2U 
                                                 == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                & (2U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                                ? 5U
                                                : 4U)))
                     : ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (2U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                 ? 4U : 3U) : (((2U 
                                                 == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                                & (2U 
                                                   != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                                ? 3U
                                                : 2U))
                         : ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state))
                             ? (((2U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate)) 
                                 & (2U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate)))
                                 ? 2U : 1U) : (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i) 
                                                & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i)))
                                                ? 1U
                                                : 0U)))));
    if (__VdfgRegularize_h6e95ff9d_0_2) {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__prdata_reg;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__pslverr_reg;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__pready_reg;
    } else {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata = 0xdeaddeadU;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready = 0U;
    }
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite))));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp = 
        ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
          ? ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
             << 1U) : (IData)(vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
            & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)) 
           | (2U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
               & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))) 
           & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
              & (IData)(vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
               & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))) 
           & ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
              & (IData)(vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (2U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                     | (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en))) 
                                                   << 1U));
    vlSelfRef.__PVT__axi42apb__DOT__casez_tmp = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                  ? 
                                                 (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                    : (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din 
        = ((((((1U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
               | ((2U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                         & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
                  | ((4U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2) 
                            & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
                     | (8U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3) 
                              & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten)))))) 
              & (IData)(vlSelfRef.psram_dio__en)) & (IData)(vlSelfRef.psram_dio__en)) 
            & (IData)(vlSelfRef.psram_dio__en)) | (
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull.psram__DOT____VdfgRegularize_h886b63e5_0_0)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)
                                                       ? 0x0aU
                                                       : 
                                                      (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)) 
                                                        & (7U 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state)))
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata 
                                                        >> 4U)
                                                        : 
                                                       (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)) 
                                                         & (6U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state)))
                                                         ? vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata
                                                         : 0x0aU)))
                                                      : 0U) 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull.psram__DOT____VdfgRegularize_h886b63e5_0_0)
                                                        ? 0x0fU
                                                        : 0U)) 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.psram__DOT____VdfgRegularize_h886b63e5_0_0)
                                                       ? 0x0fU
                                                       : 0U)));
}

void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
        = (((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q) 
                                       & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelfRef.__PVT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | (((vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en0 
                                          & ((vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out2 
                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                                  ? 0xffffU
                                                  : 0U)) 
                                             | (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_0__DOT__dq__out__strong__out3 
                                                & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U)))) 
                                         | (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en1 
                                            & ((vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out2 
                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en)
                                                    ? 0xffffU
                                                    : 0U)) 
                                               | (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdram_32_1__DOT__dq__out__strong__out3 
                                                  & (((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en)
                                                       ? 0xffffU
                                                       : 0U) 
                                                     << 0x10U))))) 
                                        & (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en0 
                                           | vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en1)));
}

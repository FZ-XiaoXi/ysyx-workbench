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
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
                    & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_0)))));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid) 
         & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_2));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_0)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_1)));
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
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
              & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                  ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)
                  : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset 
        = ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready) 
                                          & ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid) 
                                             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast))));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready)) 
           | (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid) 
               & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)) 
              | ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready 
        = ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready 
        = ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready 
        = ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready 
        = ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready 
        = ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready 
        = ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits));
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid)
                    ? 2U : 1U) : (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
                                   | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid))
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid)));
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
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid)));
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001cU))))));
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                 >> 0x0000001cU)))));
    if (vlSelfRef.__PVT__axi4frag__DOT__busy) {
        vlSelfRef.__PVT__axi4frag__DOT__len = vlSelfRef.__PVT__axi4frag__DOT__r_len;
        vlSelfRef.__PVT__axi4frag__DOT__addr = vlSelfRef.__PVT__axi4frag__DOT__r_addr;
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__len = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
        vlSelfRef.__PVT__axi4frag__DOT__addr = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
    }
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_1 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize)));
    vlSelfRef.__PVT__axi4xbar__DOT__casez_tmp = ((8U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count)))
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                         == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count)))))));
    vlSelfRef.__PVT__axi4frag__DOT___inc_addr_T_1 = 
        (vlSelfRef.__PVT__axi4frag__DOT__addr + (0x0000ffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr)))));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 0x0000001cU)) | (1U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                               >> 0x00000018U)))) 
           | ((0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                  >> 0x0000001bU)))) 
                      | (1U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                  >> 0x00000018U))))) 
              | (3U == (3U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                              >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                         >> 0x0000001bU)) | (1U & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                              >> 0x0000001bU)))) 
                  | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready))));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
                ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                   [0U] ? 0U : 3U) : ((0x00000032U 
                                       > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt)
                                       ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                                          [0U] ? 0U
                                           : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate))
                ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                   [1U] ? 0U : 3U) : ((0x00000032U 
                                       > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt)
                                       ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready_w
                                          [1U] ? 0U
                                           : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state 
        = ((2U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate))
            ? ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready)
                    ? 0U : 3U) : ((0x00000032U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt)
                                   ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready)
                                       ? 0U : 3U) : 2U))
            : ((1U & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate))
                ? ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid)
                    ? 2U : 1U) : ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                   ? 1U : 0U)));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
               | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)) 
                       | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
               | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid)) 
                       | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__casez_tmp));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q
                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid))
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q)
            : 0U);
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
              & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2)));
    vlSelfRef.__PVT__axi4frag__DOT___GEN_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T = ((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                                                  & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)));
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
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
            | (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i))) 
           & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i)) 
           | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready = (1U 
                                                   & (((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                                                      | (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                                          >> 1U) 
                                                         & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready))));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid)));
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr), vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata);
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__8__rdata;
    } else {
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i))) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0x0000000fU & 2U);
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0x0000000fU & 0U);
            if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                >> 0x0000000bU))) & 
                     ((0x00001fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 0x0000000eU)) 
                      == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                      [(7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                            >> 0x0000000bU))))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                              - (IData)(1U)));
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0x0000000fU & 0U);
        if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awready = 
        (((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
          & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0)) 
         | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__axi4xbar__DOT___arFIFOMap_15_T_1;
    __PVT__axi4xbar__DOT___arFIFOMap_15_T_1 = 0;
    // Body
    __PVT__axi4xbar__DOT___arFIFOMap_15_T_1 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awvalid));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
           & (IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_2_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 2U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_3_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 3U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_4_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 4U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_5_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 5U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_6_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 6U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_7_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 7U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_8_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 8U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_9_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 9U));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_10_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000aU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_11_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000bU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_12_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000cU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_13_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000dU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_14_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000eU));
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_15_T_2 
        = ((IData)(__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)) 
              >> 0x0000000fU));
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u0__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt;
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u1__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt;
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u2__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt;
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u3__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt;
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u4__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt;
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u5__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt;
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u6__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt;
    vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u7__DOT__rcnt 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt;
    if (vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset) {
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u0__DOT__rcnt = 0U;
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u1__DOT__rcnt = 0U;
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u2__DOT__rcnt = 0U;
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u3__DOT__rcnt = 0U;
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u4__DOT__rcnt = 0U;
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u5__DOT__rcnt = 0U;
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u6__DOT__rcnt = 0U;
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u7__DOT__rcnt = 0U;
    } else {
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u0__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u1__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u2__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u3__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u4__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u5__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u6__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
        vlSelfRef.__Vdly__axi4delay_delayer__DOT__inst_u7__DOT__rcnt 
            = (((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state)))
                                      ? (vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt 
                                         - (IData)(0x00000032U))
                                      : 0U)));
    }
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    CData/*0:0*/ __Vdly__axi4xbar__DOT__idle_3;
    __Vdly__axi4xbar__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__idle_2;
    __Vdly__axi4xbar__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0;
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
    CData/*1:0*/ __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
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
                         & (0U == ((6U & (4U ^ (0x0000001eU 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x0000001bU)))) 
                                   | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                            >> 0x00000018U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3036: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3036, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3038: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3038, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                            >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3042: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3042, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3044: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3044, "", false);
    }
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata 
        = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata;
    __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg;
    __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
        = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full;
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3438: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:61\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3438, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3440: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3440, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3444: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:62\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3444, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3446: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3446, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3450: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3450, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3452: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3452, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3456: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3456, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3458: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 3458, "", false);
    }
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
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
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                           & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:665: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 665, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:667: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 667, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:671: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 671, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:673: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 673, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:677: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 677, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:679: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 679, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:683: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 683, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:685: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 685, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:689: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 689, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:691: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 691, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_1_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:695: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 695, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:697: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 697, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:701: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 701, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:703: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 703, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:713: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 713, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:715: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 715, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_2_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:719: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 719, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:721: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 721, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:725: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 725, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:727: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 727, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:737: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 737, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:739: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 739, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_3_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:743: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 743, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:745: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 745, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:749: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 749, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:751: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 751, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:761: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 761, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:763: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 763, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_4_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:767: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 767, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:769: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 769, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:773: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 773, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:775: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 775, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:785: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 785, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:787: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 787, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_5_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:791: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 791, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:793: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 793, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:797: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 797, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:799: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 799, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:809: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 809, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:811: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 811, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_6_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:815: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 815, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:817: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 817, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:821: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 821, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:823: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 823, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:833: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 833, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:835: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 835, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_7_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:839: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 839, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:841: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 841, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:845: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 845, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:847: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 847, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 8U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:857: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 857, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:859: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 859, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_8_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:863: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 863, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:865: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 865, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 8U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:869: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 869, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:871: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 871, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 9U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:881: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 881, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:883: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 883, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_9_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:887: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 887, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:889: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 889, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 9U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:893: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 893, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:895: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 895, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000aU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:905: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 905, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:907: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 907, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_10_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:911: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 911, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:913: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 913, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 0x0000000aU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:917: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 917, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:919: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 919, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000bU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:929: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 929, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:931: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 931, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_11_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:935: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 935, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:937: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 937, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 0x0000000bU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:941: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 941, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:943: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 943, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000cU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:953: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 953, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:955: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 955, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_12_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:959: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 959, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:961: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 961, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 0x0000000cU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:965: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 965, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:967: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 967, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000dU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:977: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 977, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:979: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 979, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_13_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:983: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 983, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:985: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 985, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 0x0000000dU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:989: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 989, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:991: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 991, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000eU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1001: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1001, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1003: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1003, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_14_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1007: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1007, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1009: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1009, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 0x0000000eU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1013: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1013, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1015: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1015, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000fU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1025: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1025, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1027: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1027, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_15_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1031: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1031, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1033: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1033, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                                              >> 0x0000000fU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1037: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1037, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1039: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1039, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1049: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1049, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1051: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1051, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1055: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1055, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1057: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1057, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1061: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1061, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1063: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1063, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1067: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1067, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1069: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1069, "", false);
    }
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
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
                                  | ((8U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))
                                          : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))
                                      : ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))
                                          : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4676: Assertion failed in %NysyxSoCFull.asic.axi4yank: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4676, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4678: Assertion failed in %NysyxSoCFull.asic.axi4yank\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4678, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                  | ((8U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                      ? ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))
                                          : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))
                                      : ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))
                                          : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                                  ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)
                                                  : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4682: Assertion failed in %NysyxSoCFull.asic.axi4yank: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4682, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4684: Assertion failed in %NysyxSoCFull.asic.axi4yank\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 4684, "", false);
    }
    __Vdly__axi4xbar__DOT__idle_2 = vlSelfRef.__PVT__axi4xbar__DOT__idle_2;
    __Vdly__axi4xbar__DOT__idle_3 = vlSelfRef.__PVT__axi4xbar__DOT__idle_3;
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                      & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1841: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1841, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1843: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1843, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1847: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1847, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1849: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1849, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1853: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1853, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1855: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1855, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1859: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1859, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1861: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1861, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1865: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1865, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1867: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1867, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1871: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1873: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1873, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1877: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1877, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1879: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1879, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1883: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1883, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1885: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1885, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1889: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1889, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1891: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1891, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1895: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1895, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1897: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1897, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1901: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1901, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1903: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1903, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1907: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1907, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1909: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1909, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1913: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1913, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1915: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1915, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1919: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1919, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1921: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1921, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1925: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1925, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1927: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1927, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1931: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1931, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1933: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1933, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1937: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1937, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1939: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1939, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1943: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1943, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1945: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1945, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1949: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1949, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1951: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1951, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1955: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1955, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1957: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1957, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1961: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1961, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1963: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1963, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1967: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1967, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1969: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1969, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1973: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1973, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1975: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1975, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1979: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1979, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1981: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1981, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1985: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1985, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1987: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1987, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1991: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1991, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1993: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1993, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1997: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1997, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1999: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 1999, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2003: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2003, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2005: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2005, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2009: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2009, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2011: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2011, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2015: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2015, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2017: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2017, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2021: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2021, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2023: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2023, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2027: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2027, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2029: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2029, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2033: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2033, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2035: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2035, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2039: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2039, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2041: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2041, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2045: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2045, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2047: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2047, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2051: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2051, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2053: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2053, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2057: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2057, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2059: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2059, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2063: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2063, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2065: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2065, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2069: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2069, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2071: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2071, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2075: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2075, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2077: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2077, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2081: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2081, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2083: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2083, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2087: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2087, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2089: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2089, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2093: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2093, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2095: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2095, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2099: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2099, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2101: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2101, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2105: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2105, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2107: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2107, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2111: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2111, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2113: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2113, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2117: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2117, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2119: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2119, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2123: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2123, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2125: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2125, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2129: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2129, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2131: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2131, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2135: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2135, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2137: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2137, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2141: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2141, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2143: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2143, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2147: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2147, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2149: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2149, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2153: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2153, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2155: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2155, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2159: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2159, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2161: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2161, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2165: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2165, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2167: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2167, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2171: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2171, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2173: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2173, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2177: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2177, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2179: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2179, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2183: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2183, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2185: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2185, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2189: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2189, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2191: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2191, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2195: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2195, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2197: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2197, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2201: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2201, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2203: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2203, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2207: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2207, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2209: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2209, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2213: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2213, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2215: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2215, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2219: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2219, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2221: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2221, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1) 
                                         | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2227: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2227, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2229: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2229, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                                    | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2233: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2233, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2235: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2235, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2239: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2239, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2241: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2241, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2245: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2245, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2247: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 2247, "", false);
    }
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__idle_3 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__idle_4 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((0x00000200U & ((~ 
                                                 ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))) 
                                                << 9U)) 
                                | (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5443: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 5443, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5445: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 5445, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid)) 
                                   | (~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)))) 
                                  | (1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5449: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 5449, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5451: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/seaber/ysyx-workbench/npc_ysyxsoc/../ysyxSoC/build/ysyxSoCFull.v", 5451, "", false);
    }
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
    if (vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg = 0U;
    } else {
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata;
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg = 0U;
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg;
        }
    }
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rlast_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state)))
                ? (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast)
                : ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                              & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state))) 
                             | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                                & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state)))))) 
                   && (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rlast_reg))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000dU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000dU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000cU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000bU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000bU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000aU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000aU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 9U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 9U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 8U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 8U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 7U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 7U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 6U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 6U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 4U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 4U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                     & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 1U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 1U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 2U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 2U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 3U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 5U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 5U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000eU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000eU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000fU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
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
    if (vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap;
        __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid))) 
            & (((IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid) 
                & (0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))) 
               | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched))));
    vlSelfRef.__PVT__axi4xbar__DOT__latched = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((~ 
                                                    ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)) 
                                                      | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched))));
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000dU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000dU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000cU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000bU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000bU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000aU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000aU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 9U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 9U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 8U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 8U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 7U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 7U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 6U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 6U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                     & (IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 1U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 1U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 2U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 2U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 3U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 4U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 4U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 5U))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 5U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000eU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000eU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000fU))) - ((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000fU)))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rvalid_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rvalid_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rvalid_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rvalid_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rvalid_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rvalid_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rvalid_reg))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rvalid_reg 
        = ((1U & (~ (IData)(vlSelfRef.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset))) 
           && ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                          & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state))) 
                         | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                            & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state)))))) 
               && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate)) 
                    & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt)) 
                   || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rvalid_reg))));
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
                                                    (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                                                          >> 1U)
                                                          : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1))) 
                                                     & (IData)(vlSelfRef.__PVT__lmrom__DOT__state)))
                                                    : (IData)(vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T))));
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
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rid_r = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid;
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__lmrom__DOT___mrom_rdata;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_8_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_5_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_2_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_7_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_6_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_3_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_9_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_12_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_15_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_1_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_4_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_10_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_11_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_13_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_14_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1;
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
    if ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__is_write_r 
            = vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count = 0U;
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
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        __Vdly__axi4frag__DOT__deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__lgpio__DOT__mgpio__DOT__reg_prdata = 0U;
        __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input = 0U;
        __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg = 0U;
        __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
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
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy_1 = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4xbar__DOT__idle_2 = 1U;
        vlSelfRef.__PVT__axi4xbar__DOT__readys_mask = 3U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_2_0 = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_2_1 = 0U;
        __Vdly__axi4xbar__DOT__idle_3 = 1U;
        vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1 = 3U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_3_0 = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_3_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 0U;
        __Vdly__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 = 0U;
        vlSelfRef.__PVT__axi42apb__DOT__state = 0U;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 0x0000000fU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 5U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 4U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 1U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 6U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 7U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 8U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 9U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 0x0000000aU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 0x0000000bU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                               >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
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
                  & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
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
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_15_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000fU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_14_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000eU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_2_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 2U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_5_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 5U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                        & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_3_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 3U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_1_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 1U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_4_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 4U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_6_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 6U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_7_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 7U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_8_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 8U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_9_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 9U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_10_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000aU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_11_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000bU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_12_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000cU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_13_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000dU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)))));
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bid)) 
                        & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4))));
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
        if (vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid)))) {
            __Vdly__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq;
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
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000fU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 5U))) {
            __Vdly__axi4frag__DOT__error_5 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_5) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 0x0fU))) {
            __Vdly__axi4frag__DOT__error_15 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_15) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 0x0eU))) {
            __Vdly__axi4frag__DOT__error_14 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_14) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 0x0dU))) {
            __Vdly__axi4frag__DOT__error_13 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_13) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 0x0cU))) {
            __Vdly__axi4frag__DOT__error_12 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_12) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 0x0bU))) {
            __Vdly__axi4frag__DOT__error_11 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_11) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 0x0aU))) {
            __Vdly__axi4frag__DOT__error_10 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_10) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 9U))) {
            __Vdly__axi4frag__DOT__error_9 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_9) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 8U))) {
            __Vdly__axi4frag__DOT__error_8 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_8) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 4U))) {
            __Vdly__axi4frag__DOT__error_4 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_4) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((0x0000ffffU & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                            & (IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0)))) {
            __Vdly__axi4frag__DOT__error_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_0) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 1U))) {
            __Vdly__axi4frag__DOT__error_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_1) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 2U))) {
            __Vdly__axi4frag__DOT__error_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_2) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 3U))) {
            __Vdly__axi4frag__DOT__error_3 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_3) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 6U))) {
            __Vdly__axi4frag__DOT__error_6 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_6) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT___GEN_0) 
             & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                >> 7U))) {
            __Vdly__axi4frag__DOT__error_7 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_7) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
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
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
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
        if (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
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
        __Vdly__axi4xbar__DOT__idle_2 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)) 
                                         | ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid)) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid)))) {
            vlSelfRef.__PVT__axi4xbar__DOT__readys_mask 
                = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.__PVT__axi4xbar__DOT__idle_2) {
            vlSelfRef.__PVT__axi4xbar__DOT__state_2_0 
                = vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1;
            vlSelfRef.__PVT__axi4xbar__DOT__state_2_1 
                = vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1;
        }
        __Vdly__axi4xbar__DOT__idle_3 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__bvalid)) 
                                         | ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1)) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1)))) {
            vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelfRef.__PVT__axi4xbar__DOT__idle_3) {
            vlSelfRef.__PVT__axi4xbar__DOT__state_3_0 
                = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0;
            vlSelfRef.__PVT__axi4xbar__DOT__state_3_1 
                = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1;
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en;
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
             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full) 
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
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__state 
            = vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__next_state;
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 
            (0x000001ffU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo) 
                            - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))));
        __Vdly__axi4xbar_1__DOT__idle_3 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
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
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q)) 
                << 0x0000000dU) | (QData)((IData)((1U 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q) 
                                                      << 2U)))));
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
    if (__VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg 
        = __Vdly__lgpio__DOT__mgpio__DOT__gpio_out_reg;
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input 
        = __Vdly__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input;
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap;
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1;
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
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
    if (__VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    if (__VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q)) 
                << 5U) | (QData)((IData)((1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q) 
                                                << 1U)))));
    }
    vlSelfRef.__PVT__axi4xbar__DOT__idle_2 = __Vdly__axi4xbar__DOT__idle_2;
    vlSelfRef.__PVT__axi4xbar__DOT__idle_3 = __Vdly__axi4xbar__DOT__idle_3;
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4 = __Vdly__axi4xbar_1__DOT__idle_4;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rresp_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rlast_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rlast_reg;
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__v_valid 
        = ((0x0023U < (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)) 
           & (0x0203U >= (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__y_cnt)));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_full 
        = (8U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rdata_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg;
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
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
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
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rvalid_reg;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rvalid_reg;
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
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable 
        = ((2U != (3U & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                         >> 1U))) & (1U == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__state)));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst = 1U;
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len = 0U;
    }
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
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3 = __Vdly__axi4xbar_1__DOT__idle_3;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4frag__DOT__len_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                              ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len_1)
                                              : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
    vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)));
    vlSelfRef.__PVT__axi4frag__DOT___in_awready_T = 
        ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)) 
           & ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
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

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2\n"); );
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
    SData/*9:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)
                           ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 0x0000002dU))
                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)));
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 0x0000002dU)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q));
    }
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                           ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                      >> 1U)) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q)));
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
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4frag__DOT___wrapMask_T_3 = 
        (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize)));
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                  << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))) 
                                 | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                     << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx6];
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                  << 2U)) 
                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full) 
                                     << 1U)) | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1 
        = VysyxSoCFull__ConstPool__TABLE_hef6775a3_0
        [__Vtableidx7];
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1))));
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
          >> 2U) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid 
            = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full))));
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2;
    }
    __PVT__axi4xbar_1__DOT___readys_mask_T_8 = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
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
    vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_3 
        = (7U & ((IData)(__PVT__axi4xbar_1__DOT___readys_mask_T) 
                 | VL_SHIFTL_III(3,3,32, (IData)(__PVT__axi4xbar_1__DOT___readys_mask_T), 1U)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___readys_mask_T_11 
        = (7U & ((IData)(__PVT__axi4xbar_1__DOT___readys_mask_T_8) 
                 | VL_SHIFTL_III(3,3,32, (IData)(__PVT__axi4xbar_1__DOT___readys_mask_T_8), 1U)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0)
                            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x00000023U))
                            : 0U) | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                       ? (IData)(vlSelfRef.__PVT__lmrom__DOT__nodeIn_rid_r)
                                       : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_id)
                                                 : 0U))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (3U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data)
                   : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                            ? ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                               >> 2U) : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_id)
                                                : 0U)));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last 
        = ((8U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
            ? ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last)))
                : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last))))
            : ((4U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                ? ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last)))
                : ((2U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last))
                    : ((1U & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last)
                        : (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
}

extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h84bc6605_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h948ea438_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h49d29d03_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr = 0;
    CData/*1:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype = 0;
    CData/*7:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr = 0;
    CData/*1:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype = 0;
    CData/*7:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    CData/*7:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0;
    IData/*31:0*/ __Vdly__axi4delay_delayer__DOT__wcnt;
    __Vdly__axi4delay_delayer__DOT__wcnt = 0;
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
    CData/*5:0*/ __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    SData/*12:0*/ __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0;
    CData/*2:0*/ __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0;
    // Body
    vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__spi_sck = vlSelfRef.__PVT__spi_sck;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__axi4delay_delayer__DOT__wcnt = vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__spictrl_pready = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0U;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly___apbxbar_auto_anon_out_0_prdata = vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0 = 0U;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
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
                   ? (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))
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
    vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state))) 
                      | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                         & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state)))))) 
            && (((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                 & (0x00000064U > vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt)) 
                || (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bvalid_reg))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out = 0U;
    vlSelfRef.__PVT___apbxbar_auto_anon_out_5_pready 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_psel) 
            & (~ (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__in_penable))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready 
        = ((IData)(vlSymsp->TOP.reset) || (8U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state)));
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o) 
                                << 2U) | (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
                                           << 1U) | (IData)(vlSymsp->TOP.reset))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_h84bc6605_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = VysyxSoCFull__ConstPool__TABLE_h948ea438_0
            [__Vtableidx4];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_h84bc6605_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = VysyxSoCFull__ConstPool__TABLE_h49d29d03_0
            [__Vtableidx4];
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 8U;
        vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x00002774U;
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt = 1U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__bresp_reg = 0U;
        __Vdly__axi4delay_delayer__DOT__wcnt = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0x0000ffffU;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
        __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata = 0xdeadbeefU;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__bid_reg = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
        __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
    } else {
        vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
            = ((0U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                ? 0x0000030cU : (0x0001ffffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                                                - (IData)(1U))));
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt 
            = ((0x0320U == (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt))
                ? 1U : (0x000003ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt))));
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
        if (((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
             & (2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state)))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__bresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__bid_reg 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
        } else if ((((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                     & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state))) 
                    | ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                       & (0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state))))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__bresp_reg = 0U;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__bid_reg 
                = (0x0000000fU & 0U);
        } else {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__bresp_reg 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__bresp_reg;
            vlSelfRef.__PVT__axi4delay_delayer__DOT__bid_reg 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__bid_reg));
        }
        __Vdly__axi4delay_delayer__DOT__wcnt = (((0U 
                                                  == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state)))
                                                 ? 0x00000125U
                                                 : 
                                                (((1U 
                                                   == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state)))
                                                  ? 
                                                 ((IData)(0x00000125U) 
                                                  + vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt)
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate)) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state)))
                                                   ? 
                                                  (vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt 
                                                   - (IData)(0x00000032U))
                                                   : 0U)));
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
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((6U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                      << 1U)) | (4U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt 
            = (((0U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                & (1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                ? 0x00000125U : (((1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                                  & (1U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                                  ? ((IData)(0x00000125U) 
                                     + vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt)
                                  : (((2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__state)) 
                                      | (2U == (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state)))
                                      ? (vlSelfRef.__PVT__apbdelay_delayer__DOT__cnt 
                                         - (IData)(0x00000032U))
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
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 
                            = (0x00001fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                              >> 0x0000000eU));
                        __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 
                            = (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                     >> 0x0000000bU));
                        __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 1U;
                    }
                }
            }
        }
    }
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7U] = 0U;
    }
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8] 
            = __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
    } else {
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
        if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
        } else if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                    & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
        }
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
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
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
        if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
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
        if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
              & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
                        & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
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
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
             & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
            __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    if (vlSymsp->TOP.reset) {
        __Vdly___apbxbar_auto_anon_out_0_prdata = 0xdeadbeefU;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata 
            = __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
    } else {
        __Vdly___apbxbar_auto_anon_out_0_prdata = (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                                                    ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state))
                                                     ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata
                                                     : vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata));
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata 
            = __Vdly__lspi__DOT__mspi__DOT__xipmaster_prdata;
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                    & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready))
                    ? (0x00000020U | (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)) 
                                       << 4U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid)))
                    : (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
                        & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready))
                        ? 0x10U : (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
                                    << 5U) | (((0U 
                                                == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
            __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    if (__VdlySet__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0) {
        vlSelfRef.__PVT__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram[__VdlyDim0__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0] 
            = __VdlyVal__lvga__DOT__mvga__DOT__vmem_inst__DOT__ram__v0;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__prdata_reg = 0U;
        vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata 
            = __Vdly___apbxbar_auto_anon_out_0_prdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt 
            = __Vdly__axi4delay_delayer__DOT__wcnt;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = 2U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_pready 
            = __Vdly__lspi__DOT__mspi__DOT__spictrl_pready;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
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
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001cU)))
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
                                                         | ((2U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                                 >> 0x0000001cU)))
                                                             ? vlSelfRef.__PVT___apbxbar_auto_anon_out_5_prdata
                                                             : 0U))))))
                : vlSelfRef.__PVT__apbdelay_delayer__DOT__prdata_reg);
        vlSelfRef.__PVT___apbxbar_auto_anon_out_0_prdata 
            = __Vdly___apbxbar_auto_anon_out_0_prdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__wcnt 
            = __Vdly__axi4delay_delayer__DOT__wcnt;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))
                      : ((((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready) 
                           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid)) 
                          & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast))
                          ? 0U : (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))));
        vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt 
            = ((((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready) 
                 & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid)) 
                & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rlast))
                ? 0U : (7U & (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready) 
                               & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid))
                               ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt))
                               : (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rrcnt))));
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate;
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                        } else {
                            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (7U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                 >> 0x0000000bU)))) 
                                   & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q 
                        = (1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q));
                } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0x00ffU & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                    >> 0x0000000bU)))));
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((0x00000032U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q;
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if ((0U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else if ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
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
        if ((6U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q;
        } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
        }
        if ((((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i)) 
              | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)) 
             & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o))) {
            if ((0U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen 
                    = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0x000000ffU & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                      - (IData)(1U)));
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype 
                    = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr 
                    = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype))) {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout 
                        = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr;
                } else if ((2U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axtype))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                                              ? 0x0000000fU
                                              : ((7U 
                                                  == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__axlen))
                                                  ? 0x0000001fU
                                                  : 0x0000003fU))));
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout 
                        = ((__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr 
                            & (~ vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr) 
                              & vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout 
                        = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__addr);
                }
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__9__Vfuncout;
            }
        }
        if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready))) {
            if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid) 
                 & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0xffU;
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout 
                    = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__addr);
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__10__Vfuncout;
            } else {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q;
            }
        } else if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                    & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready))) {
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen;
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                = (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen));
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                = (0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen) 
                                  - (IData)(1U)));
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
            if ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype))) {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr;
            } else if ((2U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axtype))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                    = ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                        ? 3U : ((1U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                                 ? 7U : ((3U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                                          ? 0x0000000fU
                                          : ((7U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__axlen))
                                              ? 0x0000001fU
                                              : 0x0000003fU))));
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout 
                    = ((__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr 
                        & (~ vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                       | (((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr) 
                          & vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
            } else {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout 
                    = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__addr);
            }
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__11__Vfuncout;
        }
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
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
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(
                                                             (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                                                               >> 2U) 
                                                              | (6U 
                                                                 == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
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
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__state = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__state = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
    } else {
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
        if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 1U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        } else if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                    & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arid;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen;
        }
        vlSelfRef.__PVT__apbdelay_delayer__DOT__state 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__next_state;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__wstate 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__wnext_state;
        vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state 
            = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
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
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i;
    }
    vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_addr = 
        ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__h_valid)
          ? (0x000003ffU & ((IData)(vlSelfRef.__PVT__lvga__DOT__mvga__DOT__x_cnt) 
                            - (IData)(0x0091U))) : 0U);
    if ((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid = 0U;
    }
    if ((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid = 0U;
    }
    if ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid = 0U;
    }
    if ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid = 0U;
    }
    if ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid = 0U;
    }
    if ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid = 0U;
    }
    if ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid = 0U;
    }
    if ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt))) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata 
            = vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    } else {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata = 0U;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid = 0U;
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast 
        = ((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast 
        = ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast 
        = ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast 
        = ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast 
        = ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast 
        = ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast 
        = ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 5U)));
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
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rdata_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rlast_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid 
        = ((IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid 
        = ((1U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid 
        = ((3U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid 
        = ((4U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid 
        = ((5U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid 
        = ((6U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid 
        = ((7U == (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__rcnt)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid));
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
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[0U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[1U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[2U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[3U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[4U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[5U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[6U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid_w[7U] 
        = vlSelfRef.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid;
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

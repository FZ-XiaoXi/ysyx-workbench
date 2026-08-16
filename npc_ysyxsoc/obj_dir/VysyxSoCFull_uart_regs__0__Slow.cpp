// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_uart_regs___eval_static__TOP__ysyxSoCFull__asic__luart__muart__Uregs(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___eval_static__TOP__ysyxSoCFull__asic__luart__muart__Uregs\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelfRef.__PVT__tf_count = 0U;
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelfRef.__PVT__rf_count = 0U;
}

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h688915ee_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hb2548040_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h2f4a0a86_0;

VL_ATTR_COLD void VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.__PVT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.__PVT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__ms_int = (((IData)(vlSelfRef.__PVT__ier) 
                                >> 3U) & (0U != (0x0000000fU 
                                                 & (IData)(vlSelfRef.__PVT__msr))));
    vlSelfRef.__PVT__lsr7 = ((0U != (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0x0aU] 
                                                                      | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0x0bU] 
                                                                         | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0x0cU] 
                                                                            | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0x0dU] 
                                                                               | (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU])))))))))))))))) 
                             | (IData)(vlSelfRef.__PVT__rf_overrun));
    vlSelfRef.__PVT__lsr2 = (1U & (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                   [vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                   >> 1U));
    vlSelfRef.__PVT__lsr3 = (1U & vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                             [vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.__PVT__lsr4 = (1U & (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                   [vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                   >> 2U));
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.__PVT__ti_int = ((IData)(vlSelfRef.__PVT__ier) 
                               & ((0U == (IData)(vlSelfRef.__PVT__counter_t)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__rf_count))));
    __Vtableidx2 = vlSelfRef.lcr;
    vlSelfRef.__PVT__block_value = VysyxSoCFull__ConstPool__TABLE_h688915ee_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelfRef.lcr;
    vlSelfRef.__PVT__receiver__DOT__toc_value = VysyxSoCFull__ConstPool__TABLE_hb2548040_0
        [__Vtableidx5];
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = ((~ (IData)(vlSelfRef.__PVT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.__PVT__receiver__DOT__rf_push));
    vlSelfRef.__PVT__lsr5 = ((~ (0U != (IData)(vlSelfRef.__PVT__block_cnt))) 
                             & (0U == (IData)(vlSelfRef.__PVT__tf_count)));
    __Vtableidx1 = vlSelfRef.__PVT__fcr;
    vlSelfRef.__PVT__trigger_level = VysyxSoCFull__ConstPool__TABLE_h2f4a0a86_0
        [__Vtableidx1];
    vlSelfRef.__PVT__transmitter__DOT__stx_pad_o = 
        ((~ ((IData)(vlSelfRef.lcr) >> 6U)) & (IData)(vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp));
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__mcr))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = 
            ((0x0000000cU & ((IData)(vlSelfRef.__PVT__mcr) 
                             << 2U)) | ((2U & ((IData)(vlSelfRef.__PVT__mcr) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.__PVT__mcr) 
                                                 >> 3U))));
        vlSelfRef.__PVT__serial_in = vlSelfRef.__PVT__transmitter__DOT__stx_pad_o;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = 8U;
        vlSelfRef.__PVT__serial_in = vlSelfRef.__PVT__srx_pad;
    }
    vlSelfRef.lsr = ((((((IData)(vlSelfRef.__PVT__lsr7r) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__lsr6r) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__lsr5r) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__lsr4r))) 
                      << 4U) | ((((IData)(vlSelfRef.__PVT__lsr3r) 
                                  << 3U) | ((IData)(vlSelfRef.__PVT__lsr2r) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.__PVT__lsr1r) 
                                    << 1U) | (IData)(vlSelfRef.__PVT__lsr0r))));
    vlSelfRef.__VdfgRegularize_hf5566834_0_1 = ((~ 
                                                 ((IData)(vlSelfRef.lcr) 
                                                  >> 7U)) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)));
    vlSelfRef.__PVT__lsr0 = ((0U == (IData)(vlSelfRef.__PVT__rf_count)) 
                             & (IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
    vlSelfRef.__PVT__lsr6 = ((IData)(vlSelfRef.__PVT__lsr5) 
                             & (0U == (IData)(vlSelfRef.__PVT__tstate)));
    vlSelfRef.__PVT__rda_int = ((IData)(vlSelfRef.__PVT__ier) 
                                & ((IData)(vlSelfRef.__PVT__rf_count) 
                                   >= (IData)(vlSelfRef.__PVT__trigger_level)));
    vlSelfRef.__PVT__rls_int = (IData)((((IData)(vlSelfRef.__PVT__ier) 
                                         >> 2U) & (0U 
                                                   != 
                                                   (0x1eU 
                                                    & (IData)(vlSelfRef.lsr)))));
    vlSelfRef.__PVT__thre_int = (1U & (((IData)(vlSelfRef.__PVT__ier) 
                                        >> 1U) & ((IData)(vlSelfRef.lsr) 
                                                  >> 5U)));
}

VL_ATTR_COLD void VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___stl_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) {
        vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in 
            = vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w;
        vlSelfRef.__PVT__wb_we_i = vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__VdfgRegularize_h953d1cf6_0_0;
    } else {
        vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in 
            = vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w_reg;
        vlSelfRef.__PVT__wb_we_i = 0U;
    }
    vlSelfRef.__PVT__wb_re_i = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__VdfgRegularize_h953d1cf6_0_0));
    vlSelfRef.__PVT__fifo_write = ((IData)(vlSelfRef.__PVT__wb_we_i) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hf5566834_0_1));
    vlSelfRef.__PVT__fifo_read = ((IData)(vlSelfRef.__PVT__wb_re_i) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hf5566834_0_1));
    vlSelfRef.__PVT__iir_read = ((IData)(vlSelfRef.__PVT__wb_re_i) 
                                 & ((~ ((IData)(vlSelfRef.lcr) 
                                        >> 7U)) & (2U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    vlSelfRef.__PVT__msr_read = ((IData)(vlSelfRef.__PVT__wb_re_i) 
                                 & ((~ ((IData)(vlSelfRef.lcr) 
                                        >> 7U)) & (6U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    vlSelfRef.__PVT__lsr_mask_condition = ((IData)(vlSelfRef.__PVT__wb_re_i) 
                                           & ((~ ((IData)(vlSelfRef.lcr) 
                                                  >> 7U)) 
                                              & (5U 
                                                 == 
                                                 (7U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = ((~ (IData)(vlSelfRef.__PVT__lsr_mask_d)) 
           & (IData)(vlSelfRef.__PVT__lsr_mask_condition));
}

VL_ATTR_COLD void VysyxSoCFull_uart_regs___ctor_var_reset(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__wb_rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5828509590113575919ull);
    vlSelf->__PVT__wb_addr_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1961674574604529359ull);
    vlSelf->__PVT__wb_dat_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4299709251288665756ull);
    vlSelf->__PVT__wb_dat_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13245586172715350507ull);
    vlSelf->__PVT__wb_we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4424384679403006522ull);
    vlSelf->__PVT__wb_re_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2661169324057966637ull);
    vlSelf->__PVT__modem_inputs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2689127377716890443ull);
    vlSelf->__PVT__stx_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10248140424758287709ull);
    vlSelf->__PVT__srx_pad_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11049881744685350141ull);
    vlSelf->__PVT__rts_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5161150044651881625ull);
    vlSelf->__PVT__dtr_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3410300533944712745ull);
    vlSelf->__PVT__int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9218699907187632612ull);
    vlSelf->__PVT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->__PVT__srx_pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10790045747290388485ull);
    vlSelf->__PVT__ier = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4115755726172261197ull);
    vlSelf->__PVT__iir = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3815129725028293433ull);
    vlSelf->__PVT__fcr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13831407446963482565ull);
    vlSelf->__PVT__mcr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8069983003910768675ull);
    vlSelf->lcr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14552559614314551003ull);
    vlSelf->__PVT__msr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2353064572394067502ull);
    vlSelf->__PVT__dl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11488171005156075516ull);
    vlSelf->__PVT__scratch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12964773759623205820ull);
    vlSelf->__PVT__start_dlc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16002124400093087618ull);
    vlSelf->__PVT__lsr_mask_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15766641180983384345ull);
    vlSelf->__PVT__msi_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13948066626718442582ull);
    vlSelf->__PVT__dlc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17495921478336267062ull);
    vlSelf->__PVT__trigger_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13568155444939471115ull);
    vlSelf->__PVT__rx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13244607663621978969ull);
    vlSelf->__PVT__tx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10271142031588050256ull);
    vlSelf->lsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17724948565398307676ull);
    vlSelf->__PVT__lsr0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8038454845899954760ull);
    vlSelf->__PVT__lsr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17460822980407021307ull);
    vlSelf->__PVT__lsr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184297267746814255ull);
    vlSelf->__PVT__lsr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11674891640824294933ull);
    vlSelf->__PVT__lsr5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12159484567686797448ull);
    vlSelf->__PVT__lsr6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17348476924495026186ull);
    vlSelf->__PVT__lsr7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9392327223863037195ull);
    vlSelf->__PVT__lsr0r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 623989964890256011ull);
    vlSelf->__PVT__lsr1r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 242198918483578602ull);
    vlSelf->__PVT__lsr2r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14981241868965166841ull);
    vlSelf->__PVT__lsr3r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13540819626009073972ull);
    vlSelf->__PVT__lsr4r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7456467364325884837ull);
    vlSelf->__PVT__lsr5r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17442342454984008600ull);
    vlSelf->__PVT__lsr6r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1983432285715125394ull);
    vlSelf->__PVT__lsr7r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18261229399310338331ull);
    vlSelf->__PVT__rls_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10679519684843151070ull);
    vlSelf->__PVT__rda_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15478586331466288226ull);
    vlSelf->__PVT__ti_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2143026769633149180ull);
    vlSelf->__PVT__thre_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6587485483171518619ull);
    vlSelf->__PVT__ms_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3570469787736941976ull);
    vlSelf->__PVT__tf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7003945955247399728ull);
    vlSelf->__PVT__rf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9123968039534398192ull);
    vlSelf->__PVT__rf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18143779795410434531ull);
    vlSelf->__PVT__rf_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8252441565950019982ull);
    vlSelf->__PVT__tf_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6807620216194464916ull);
    vlSelf->__PVT__tstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6193267151983827624ull);
    vlSelf->__PVT__rstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17101835810567727777ull);
    vlSelf->__PVT__counter_t = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5089986973417972682ull);
    vlSelf->__PVT__block_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10589213813810025406ull);
    vlSelf->__PVT__block_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7885281325086968599ull);
    vlSelf->__PVT__serial_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14727671061388767995ull);
    vlSelf->__PVT__lsr_mask_condition = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16158121529158610578ull);
    vlSelf->__PVT__iir_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5874682931266401682ull);
    vlSelf->__PVT__msr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13142405877628635519ull);
    vlSelf->__PVT__fifo_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16632787596940981802ull);
    vlSelf->__PVT__fifo_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12750289355124422247ull);
    vlSelf->__PVT__delayed_modem_signals = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2222222110419024164ull);
    vlSelf->__PVT__lsr0_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2189115670349134710ull);
    vlSelf->__PVT__lsr1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17478749583161074365ull);
    vlSelf->__PVT__lsr2_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8603382333745781427ull);
    vlSelf->__PVT__lsr3_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3267942907696779989ull);
    vlSelf->__PVT__lsr4_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1391571298621809885ull);
    vlSelf->__PVT__lsr5_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5933426720257211198ull);
    vlSelf->__PVT__lsr6_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18370804878215069411ull);
    vlSelf->__PVT__lsr7_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12430458617032439641ull);
    vlSelf->__PVT__rls_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6887115668150954085ull);
    vlSelf->__PVT__thre_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5962584994984526665ull);
    vlSelf->__PVT__ms_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3887163078255381813ull);
    vlSelf->__PVT__ti_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11871499266406296450ull);
    vlSelf->__PVT__rda_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2814833653551792741ull);
    vlSelf->__PVT__rls_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15892474591762872068ull);
    vlSelf->__PVT__rda_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 153677244921694191ull);
    vlSelf->__PVT__thre_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11261516277300499819ull);
    vlSelf->__PVT__ms_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17336882249249665046ull);
    vlSelf->__PVT__ti_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10816504613770420269ull);
    vlSelf->__VdfgRegularize_hf5566834_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2711975345627677276ull);
    vlSelf->__PVT__transmitter__DOT__stx_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376052446052990998ull);
    vlSelf->__PVT__transmitter__DOT__counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10080184411964081787ull);
    vlSelf->__PVT__transmitter__DOT__bit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6774829013896517582ull);
    vlSelf->__PVT__transmitter__DOT__shift_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15170480097247347770ull);
    vlSelf->__PVT__transmitter__DOT__stx_o_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1247508178974320951ull);
    vlSelf->__PVT__transmitter__DOT__parity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2598608622098572873ull);
    vlSelf->__PVT__transmitter__DOT__tf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9039843613497700532ull);
    vlSelf->__PVT__transmitter__DOT__bit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2695288851663847222ull);
    vlSelf->__PVT__transmitter__DOT__tf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7862038652084994527ull);
    vlSelf->__PVT__transmitter__DOT__fifo_tx__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6186322559506328632ull);
    vlSelf->__PVT__transmitter__DOT__fifo_tx__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7215916929312730719ull);
    vlSelf->__PVT__transmitter__DOT__fifo_tx__DOT__reset_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16443382025921759697ull);
    vlSelf->__PVT__transmitter__DOT__fifo_tx__DOT__top = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5675448731974829869ull);
    vlSelf->__PVT__transmitter__DOT__fifo_tx__DOT__bottom = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12958884391377936462ull);
    vlSelf->__PVT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1879467917604751189ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14547600460957604206ull);
    }
    vlSelf->__PVT__i_uart_sync_flops__DOT__flop_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11859586358560225751ull);
    vlSelf->__PVT__receiver__DOT__rcounter16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12736293133056199864ull);
    vlSelf->__PVT__receiver__DOT__rbit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2795078132948964269ull);
    vlSelf->__PVT__receiver__DOT__rshift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7755092006810022484ull);
    vlSelf->__PVT__receiver__DOT__rparity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5306741513631541330ull);
    vlSelf->__PVT__receiver__DOT__rparity_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6261180233691166976ull);
    vlSelf->__PVT__receiver__DOT__rframing_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1155970642165700666ull);
    vlSelf->__PVT__receiver__DOT__rbit_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7118958438888407893ull);
    vlSelf->__PVT__receiver__DOT__rparity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6091077229799854920ull);
    vlSelf->__PVT__receiver__DOT__counter_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15777767162580511980ull);
    vlSelf->__PVT__receiver__DOT__rf_push_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11296635306925115919ull);
    vlSelf->__PVT__receiver__DOT__rf_data_in = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3028472741921775686ull);
    vlSelf->__PVT__receiver__DOT__rf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15108294811466080243ull);
    vlSelf->__PVT__receiver__DOT__rcounter16_eq_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10067924427875267576ull);
    vlSelf->__PVT__receiver__DOT__rcounter16_eq_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7821114170468455855ull);
    vlSelf->__PVT__receiver__DOT__rcounter16_minus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9313054712207631714ull);
    vlSelf->__PVT__receiver__DOT__toc_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7677092909402913579ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8020106085192490940ull);
    }
    vlSelf->__PVT__receiver__DOT__fifo_rx__DOT__top = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15465123360966667174ull);
    vlSelf->__PVT__receiver__DOT__fifo_rx__DOT__bottom = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13201396489882600504ull);
    vlSelf->__PVT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15649312834103599424ull);
    vlSelf->__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17750588152405994646ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15017189915600075184ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3290843745093870356ull);
    vlSelf->__VdlyVal__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17753358839271978711ull);
    vlSelf->__VdlyDim0__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5043112644181916801ull);
    vlSelf->__VdlySet__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
}

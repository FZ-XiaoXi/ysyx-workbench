// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h688915ee_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hb2548040_0;

void VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__rls_int = (IData)((((IData)(vlSelfRef.__PVT__ier) 
                                         >> 2U) & (0U 
                                                   != 
                                                   (0x1eU 
                                                    & (IData)(vlSelfRef.lsr)))));
    vlSelfRef.__PVT__thre_int = (1U & (((IData)(vlSelfRef.__PVT__ier) 
                                        >> 1U) & ((IData)(vlSelfRef.lsr) 
                                                  >> 5U)));
    __Vtableidx2 = vlSelfRef.lcr;
    vlSelfRef.__PVT__block_value = VysyxSoCFull__ConstPool__TABLE_h688915ee_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelfRef.lcr;
    vlSelfRef.__PVT__receiver__DOT__toc_value = VysyxSoCFull__ConstPool__TABLE_hb2548040_0
        [__Vtableidx5];
    vlSelfRef.__VdfgRegularize_hf5566834_0_1 = ((~ 
                                                 ((IData)(vlSelfRef.lcr) 
                                                  >> 7U)) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)));
    vlSelfRef.__PVT__transmitter__DOT__stx_pad_o = 
        ((~ ((IData)(vlSelfRef.lcr) >> 6U)) & (IData)(vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.__PVT__serial_in = ((0x00000010U & (IData)(vlSelfRef.__PVT__mcr))
                                   ? (IData)(vlSelfRef.__PVT__transmitter__DOT__stx_pad_o)
                                   : (IData)(vlSelfRef.__PVT__srx_pad));
}

void VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___ico_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wb_we_i = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__VdfgRegularize_h953d1cf6_0_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
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

void VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyVal__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyDim0__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlySet__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    // Body
    __VdlySet__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __VdlySet__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    if (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) {
        __VdlyVal__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__receiver__DOT__rf_data_in) 
                              >> 3U));
        __VdlyDim0__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.__PVT__tf_push) {
        __VdlyVal__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in;
        __VdlyDim0__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top;
        __VdlySet__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    if (__VdlySet__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__VdlySet__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__VdlyDim0__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __VdlyVal__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h453bc058_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h6f4cb3c7_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h2f4a0a86_0;

void VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*0:0*/ __Vdly__rf_pop;
    __Vdly__rf_pop = 0;
    CData/*0:0*/ __Vdly__msi_reset;
    __Vdly__msi_reset = 0;
    CData/*7:0*/ __Vdly__msr;
    __Vdly__msr = 0;
    CData/*0:0*/ __Vdly__lsr5r;
    __Vdly__lsr5r = 0;
    SData/*15:0*/ __Vdly__dlc;
    __Vdly__dlc = 0;
    CData/*7:0*/ __Vdly__block_cnt;
    __Vdly__block_cnt = 0;
    CData/*0:0*/ __Vdly__rls_int_pnd;
    __Vdly__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__rda_int_pnd;
    __Vdly__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__thre_int_pnd;
    __Vdly__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ms_int_pnd;
    __Vdly__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ti_int_pnd;
    __Vdly__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__tstate;
    __Vdly__tstate = 0;
    CData/*4:0*/ __Vdly__transmitter__DOT__counter;
    __Vdly__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__transmitter__DOT__shift_out;
    __Vdly__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__transmitter__DOT__bit_out;
    __Vdly__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__transmitter__DOT__parity_xor;
    __Vdly__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__transmitter__DOT__bit_counter;
    __Vdly__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__tf_count;
    __Vdly__tf_count = 0;
    CData/*3:0*/ __Vdly__rstate;
    __Vdly__rstate = 0;
    CData/*2:0*/ __Vdly__receiver__DOT__rbit_counter;
    __Vdly__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__receiver__DOT__rparity_xor;
    __Vdly__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__receiver__DOT__rframing_error;
    __Vdly__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__receiver__DOT__rparity_error;
    __Vdly__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__receiver__DOT__rparity;
    __Vdly__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__receiver__DOT__rshift;
    __Vdly__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__receiver__DOT__counter_b;
    __Vdly__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__counter_t;
    __Vdly__counter_t = 0;
    CData/*3:0*/ __Vdly__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__rf_count;
    __Vdly__rf_count = 0;
    CData/*0:0*/ __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*2:0*/ __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*2:0*/ __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*3:0*/ __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    // Body
    __Vdly__msi_reset = vlSelfRef.__PVT__msi_reset;
    __Vdly__msr = vlSelfRef.__PVT__msr;
    __Vdly__lsr5r = vlSelfRef.__PVT__lsr5r;
    __Vdly__rf_pop = vlSelfRef.__PVT__rf_pop;
    __Vdly__ms_int_pnd = vlSelfRef.__PVT__ms_int_pnd;
    __Vdly__ti_int_pnd = vlSelfRef.__PVT__ti_int_pnd;
    __Vdly__rls_int_pnd = vlSelfRef.__PVT__rls_int_pnd;
    __Vdly__rda_int_pnd = vlSelfRef.__PVT__rda_int_pnd;
    __Vdly__thre_int_pnd = vlSelfRef.__PVT__thre_int_pnd;
    __Vdly__receiver__DOT__counter_b = vlSelfRef.__PVT__receiver__DOT__counter_b;
    __Vdly__counter_t = vlSelfRef.__PVT__counter_t;
    __Vdly__block_cnt = vlSelfRef.__PVT__block_cnt;
    __Vdly__transmitter__DOT__counter = vlSelfRef.__PVT__transmitter__DOT__counter;
    __Vdly__transmitter__DOT__shift_out = vlSelfRef.__PVT__transmitter__DOT__shift_out;
    __Vdly__transmitter__DOT__bit_out = vlSelfRef.__PVT__transmitter__DOT__bit_out;
    __Vdly__transmitter__DOT__parity_xor = vlSelfRef.__PVT__transmitter__DOT__parity_xor;
    __Vdly__transmitter__DOT__bit_counter = vlSelfRef.__PVT__transmitter__DOT__bit_counter;
    __Vdly__tstate = vlSelfRef.__PVT__tstate;
    __Vdly__rstate = vlSelfRef.__PVT__rstate;
    __Vdly__receiver__DOT__rbit_counter = vlSelfRef.__PVT__receiver__DOT__rbit_counter;
    __Vdly__receiver__DOT__rparity_xor = vlSelfRef.__PVT__receiver__DOT__rparity_xor;
    __Vdly__receiver__DOT__rframing_error = vlSelfRef.__PVT__receiver__DOT__rframing_error;
    __Vdly__receiver__DOT__rparity_error = vlSelfRef.__PVT__receiver__DOT__rparity_error;
    __Vdly__receiver__DOT__rparity = vlSelfRef.__PVT__receiver__DOT__rparity;
    __Vdly__receiver__DOT__rshift = vlSelfRef.__PVT__receiver__DOT__rshift;
    __Vdly__dlc = vlSelfRef.__PVT__dlc;
    __Vdly__receiver__DOT__fifo_rx__DOT__top = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__rf_count = vlSelfRef.__PVT__rf_count;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__receiver__DOT__fifo_rx__DOT__bottom = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__tf_count = vlSelfRef.__PVT__tf_count;
    vlSelfRef.__PVT__lsr6r = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__PVT__fifo_write)
                                        ? 0U : ((IData)(vlSelfRef.__PVT__lsr6r) 
                                                | ((IData)(vlSelfRef.__PVT__lsr6) 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsr6_d)))))));
    vlSelfRef.__PVT__lsr2r = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status)
                                        ? 0U : ((IData)(vlSelfRef.__PVT__lsr2r) 
                                                | ((IData)(vlSelfRef.__PVT__lsr2) 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsr2_d)))))));
    vlSelfRef.__PVT__lsr3r = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status)
                                        ? 0U : ((IData)(vlSelfRef.__PVT__lsr3r) 
                                                | ((IData)(vlSelfRef.__PVT__lsr3) 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsr3_d)))))));
    vlSelfRef.__PVT__lsr4r = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status)
                                        ? 0U : ((IData)(vlSelfRef.__PVT__lsr4r) 
                                                | ((IData)(vlSelfRef.__PVT__lsr4) 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsr4_d)))))));
    vlSelfRef.__PVT__lsr7r = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status)
                                        ? 0U : ((IData)(vlSelfRef.__PVT__lsr7r) 
                                                | ((IData)(vlSelfRef.__PVT__lsr7) 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsr7_d)))))));
    __Vdly__lsr5r = (1U & ((IData)(vlSymsp->TOP.reset) 
                           | ((IData)(vlSelfRef.__PVT__fifo_write)
                               ? 0U : ((IData)(vlSelfRef.__PVT__lsr5r) 
                                       | ((IData)(vlSelfRef.__PVT__lsr5) 
                                          & (~ (IData)(vlSelfRef.__PVT__lsr5_d)))))));
    vlSelfRef.__PVT__lsr0r = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & (((((1U == (IData)(vlSelfRef.__PVT__rf_count)) 
                                          & (IData)(vlSelfRef.__PVT__rf_pop)) 
                                         & (~ (IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we))) 
                                        | (IData)(vlSelfRef.__PVT__rx_reset))
                                        ? 0U : ((IData)(vlSelfRef.__PVT__lsr0r) 
                                                | ((IData)(vlSelfRef.__PVT__lsr0) 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsr0_d)))))));
    __Vdly__ms_int_pnd = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelfRef.__PVT__msr_read)
                                    ? 0U : (((~ (IData)(vlSelfRef.__PVT__ms_int_d)) 
                                             & (IData)(vlSelfRef.__PVT__ms_int))
                                             ? 1U : 
                                            ((IData)(vlSelfRef.__PVT__ms_int_pnd) 
                                             & ((IData)(vlSelfRef.__PVT__ier) 
                                                >> 3U))))));
    __Vdly__ti_int_pnd = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelfRef.__PVT__fifo_read)
                                    ? 0U : (((~ (IData)(vlSelfRef.__PVT__ti_int_d)) 
                                             & (IData)(vlSelfRef.__PVT__ti_int))
                                             ? 1U : 
                                            ((IData)(vlSelfRef.__PVT__ti_int_pnd) 
                                             & (IData)(vlSelfRef.__PVT__ier))))));
    __Vdly__rls_int_pnd = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                 & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status)
                                     ? 0U : (((~ (IData)(vlSelfRef.__PVT__rls_int_d)) 
                                              & (IData)(vlSelfRef.__PVT__rls_int))
                                              ? 1U : 
                                             ((IData)(vlSelfRef.__PVT__rls_int_pnd) 
                                              & ((IData)(vlSelfRef.__PVT__ier) 
                                                 >> 2U))))));
    __Vdly__rda_int_pnd = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                 & ((((IData)(vlSelfRef.__PVT__rf_count) 
                                      == (IData)(vlSelfRef.__PVT__trigger_level)) 
                                     & (IData)(vlSelfRef.__PVT__fifo_read))
                                     ? 0U : (((~ (IData)(vlSelfRef.__PVT__rda_int_d)) 
                                              & (IData)(vlSelfRef.__PVT__rda_int))
                                              ? 1U : 
                                             ((IData)(vlSelfRef.__PVT__rda_int_pnd) 
                                              & (IData)(vlSelfRef.__PVT__ier))))));
    __Vdly__thre_int_pnd = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (((IData)(vlSelfRef.__PVT__fifo_write) 
                                      | ((IData)(vlSelfRef.__PVT__iir_read) 
                                         & (2U == (IData)(vlSelfRef.__PVT__iir))))
                                      ? 0U : (((~ (IData)(vlSelfRef.__PVT__thre_int_d)) 
                                               & (IData)(vlSelfRef.__PVT__thre_int))
                                               ? 1U
                                               : ((IData)(vlSelfRef.__PVT__thre_int_pnd) 
                                                  & ((IData)(vlSelfRef.__PVT__ier) 
                                                     >> 1U))))));
    vlSelfRef.__PVT__lsr1r = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status)
                                        ? 0U : ((IData)(vlSelfRef.__PVT__lsr1r) 
                                                | ((IData)(vlSelfRef.__PVT__rf_overrun) 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsr1_d)))))));
    vlSelfRef.__PVT__lsr_mask_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                                   & (IData)(vlSelfRef.__PVT__lsr_mask_condition));
    __Vtableidx3 = ((((((IData)(vlSelfRef.__PVT__msr_read) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__ms_int_pnd) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__iir_read) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__fifo_write) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__thre_int_pnd) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__fifo_read)))) 
                     << 5U) | ((((IData)(vlSelfRef.__PVT__ti_int_pnd) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__rda_int_pnd) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.__PVT__rls_int_pnd) 
                                   << 1U) | (IData)(vlSymsp->TOP.reset))));
    vlSelfRef.__PVT__int_o = VysyxSoCFull__ConstPool__TABLE_h453bc058_0
        [__Vtableidx3];
    vlSelfRef.__PVT__srx_pad = ((IData)(vlSymsp->TOP.reset) 
                                || (IData)(vlSelfRef.__PVT__i_uart_sync_flops__DOT__flop_0));
    vlSelfRef.__PVT__receiver__DOT__rf_push_q = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSelfRef.__PVT__receiver__DOT__rf_push));
    if (vlSymsp->TOP.reset) {
        __Vdly__msi_reset = 1U;
        __Vdly__msr = 0U;
        __Vdly__rf_pop = 0U;
        __Vdly__receiver__DOT__counter_b = 0x9fU;
        __Vdly__counter_t = 0x027fU;
        __Vdly__block_cnt = 0U;
        __Vdly__dlc = 0U;
        __Vdly__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__rf_count = 0U;
        __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelfRef.__PVT__receiver__DOT__rbit_in = 0U;
        vlSelfRef.__PVT__fcr = 3U;
        vlSelfRef.__PVT__mcr = 0U;
        vlSelfRef.__PVT__scratch = 0U;
        vlSelfRef.__PVT__transmitter__DOT__tf_overrun = 0U;
    } else {
        if (vlSelfRef.__PVT__msi_reset) {
            __Vdly__msi_reset = 0U;
        } else if (vlSelfRef.__PVT__msr_read) {
            __Vdly__msi_reset = 1U;
        }
        __Vdly__msr = ((0xf0U & (IData)(__Vdly__msr)) 
                       | ((IData)(vlSelfRef.__PVT__msi_reset)
                           ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__msr) 
                                                  | (0x0eU 
                                                     ^ (IData)(vlSelfRef.__PVT__delayed_modem_signals))))));
        __Vdly__msr = ((0x0fU & (IData)(__Vdly__msr)) 
                       | ((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                   << 1U)) | (1U & 
                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                               >> 1U))) 
                           << 6U) | (((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                             >> 1U)) 
                                      | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                               >> 3U))) 
                                     << 4U)));
        if (vlSelfRef.__PVT__rf_pop) {
            __Vdly__rf_pop = 0U;
        } else if ((((IData)(vlSelfRef.__PVT__wb_re_i) 
                     & (0U == (7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                    & (~ ((IData)(vlSelfRef.lcr) >> 7U)))) {
            __Vdly__rf_pop = 1U;
        }
        if (vlSelfRef.__PVT__serial_in) {
            __Vdly__receiver__DOT__counter_b = (0x000000ffU 
                                                & ((IData)(vlSelfRef.__PVT__receiver__DOT__toc_value) 
                                                   >> 2U));
        } else if (((IData)(vlSelfRef.__PVT__enable) 
                    & (0U != (IData)(vlSelfRef.__PVT__receiver__DOT__counter_b)))) {
            __Vdly__receiver__DOT__counter_b = (0x000000ffU 
                                                & ((IData)(vlSelfRef.__PVT__receiver__DOT__counter_b) 
                                                   - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
              | (IData)(vlSelfRef.__PVT__rf_pop)) | 
             (0U == (IData)(vlSelfRef.__PVT__rf_count)))) {
            __Vdly__counter_t = vlSelfRef.__PVT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelfRef.__PVT__enable) 
                    & (0U != (IData)(vlSelfRef.__PVT__counter_t)))) {
            __Vdly__counter_t = (0x000003ffU & ((IData)(vlSelfRef.__PVT__counter_t) 
                                                - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__lsr5r) & (IData)(vlSelfRef.__PVT__fifo_write))) {
            __Vdly__block_cnt = vlSelfRef.__PVT__block_value;
        } else if (((IData)(vlSelfRef.__PVT__enable) 
                    & (0U != (IData)(vlSelfRef.__PVT__block_cnt)))) {
            __Vdly__block_cnt = (0x000000ffU & ((IData)(vlSelfRef.__PVT__block_cnt) 
                                                - (IData)(1U)));
        }
        __Vdly__dlc = (0x0000ffffU & ((1U & ((IData)(vlSelfRef.__PVT__start_dlc) 
                                             | (~ (0U 
                                                   != (IData)(vlSelfRef.__PVT__dlc)))))
                                       ? ((IData)(vlSelfRef.__PVT__dl) 
                                          - (IData)(1U))
                                       : ((IData)(vlSelfRef.__PVT__dlc) 
                                          - (IData)(1U))));
        if (vlSelfRef.__PVT__rx_reset) {
            __Vdly__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__rf_count = 0U;
            __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                            << 1U) | (IData)(vlSelfRef.__PVT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelfRef.__PVT__rf_count))) {
                __Vdly__rf_count = (0x0000001fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__rf_count)));
                __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelfRef.__PVT__receiver__DOT__rf_data_in));
                __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top;
                __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdly__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                            << 1U) | (IData)(vlSelfRef.__PVT__rf_pop)))) {
            if ((0U < (IData)(vlSelfRef.__PVT__rf_count))) {
                __Vdly__rf_count = (0x0000001fU & ((IData)(vlSelfRef.__PVT__rf_count) 
                                                   - (IData)(1U)));
                __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom;
                __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdly__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                            << 1U) | (IData)(vlSelfRef.__PVT__rf_pop)))) {
            __Vdly__receiver__DOT__fifo_rx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom)));
            __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelfRef.__PVT__receiver__DOT__rf_data_in));
            __VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top;
            __VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdly__receiver__DOT__fifo_rx__DOT__top 
                = vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if (((IData)(vlSelfRef.__PVT__wb_we_i) & (2U 
                                                  == 
                                                  (7U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.__PVT__fcr = (3U & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in) 
                                          >> 6U));
        }
        if (((IData)(vlSelfRef.__PVT__wb_we_i) & (4U 
                                                  == 
                                                  (7U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.__PVT__mcr = (0x0000001fU & (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in));
        }
        if (((IData)(vlSelfRef.__PVT__wb_we_i) & (7U 
                                                  == 
                                                  (7U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.__PVT__scratch = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in;
        }
        if (((IData)(vlSelfRef.__PVT__tx_reset) | (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status))) {
            vlSelfRef.__PVT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelfRef.__PVT__tf_push) 
                    & (0x10U == (IData)(vlSelfRef.__PVT__tf_count)))) {
            vlSelfRef.__PVT__transmitter__DOT__tf_overrun = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__tf_count = 0U;
    } else if (vlSelfRef.__PVT__tx_reset) {
        vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelfRef.__PVT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.__PVT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY(((0x10U > (IData)(vlSelfRef.__PVT__tf_count))))) {
            __Vdly__tf_count = (0x0000001fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__tf_count)));
            VL_WRITEF_NX("%c",0,8,vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in);
            Verilated::runFlushCallbacks();
            vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelfRef.__PVT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.__PVT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelfRef.__PVT__tf_count))) {
            __Vdly__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__tf_count = (0x0000001fU & ((IData)(vlSelfRef.__PVT__tf_count) 
                                               - (IData)(1U)));
        }
    } else if (VL_UNLIKELY(((3U == (((IData)(vlSelfRef.__PVT__tf_push) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__transmitter__DOT__tf_pop)))))) {
        __Vdly__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF_NX("%c",0,8,vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in);
        Verilated::runFlushCallbacks();
        vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelfRef.__PVT__msi_reset = __Vdly__msi_reset;
    vlSelfRef.__PVT__msr = __Vdly__msr;
    vlSelfRef.__PVT__counter_t = __Vdly__counter_t;
    vlSelfRef.__PVT__block_cnt = __Vdly__block_cnt;
    vlSelfRef.__PVT__lsr5r = __Vdly__lsr5r;
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__receiver__DOT__fifo_rx__DOT__top;
    if (__VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0aU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0bU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0cU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0dU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0eU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0fU] = 0U;
    }
    if (__VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0aU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0bU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0cU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0dU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0eU] = 0U;
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0x0fU] = 0U;
    }
    if (__VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__VdlySet__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __VdlyVal__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelfRef.__PVT__rda_int_pnd = __Vdly__rda_int_pnd;
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.__PVT__lsr6_d = ((IData)(vlSymsp->TOP.reset) 
                               | (IData)(vlSelfRef.__PVT__lsr6));
    vlSelfRef.__PVT__lsr2_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelfRef.__PVT__lsr2));
    vlSelfRef.__PVT__lsr3_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelfRef.__PVT__lsr3));
    vlSelfRef.__PVT__lsr4_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelfRef.__PVT__lsr4));
    vlSelfRef.__PVT__lsr7_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelfRef.__PVT__lsr7));
    vlSelfRef.__PVT__lsr5_d = ((IData)(vlSymsp->TOP.reset) 
                               | (IData)(vlSelfRef.__PVT__lsr5));
    vlSelfRef.__PVT__lsr0_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelfRef.__PVT__lsr0));
    vlSelfRef.__PVT__ms_int_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                                 & (IData)(vlSelfRef.__PVT__ms_int));
    vlSelfRef.__PVT__ti_int_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                                 & (IData)(vlSelfRef.__PVT__ti_int));
    vlSelfRef.__PVT__rls_int_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSelfRef.__PVT__rls_int));
    vlSelfRef.__PVT__rda_int_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSelfRef.__PVT__rda_int));
    vlSelfRef.__PVT__thre_int_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                                   & (IData)(vlSelfRef.__PVT__thre_int));
    __Vtableidx4 = ((((IData)(vlSelfRef.__PVT__ms_int_pnd) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__thre_int_pnd) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__ti_int_pnd) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__rda_int) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__rls_int_pnd) 
                                   << 1U) | (IData)(vlSymsp->TOP.reset))));
    vlSelfRef.__PVT__iir = VysyxSoCFull__ConstPool__TABLE_h6f4cb3c7_0
        [__Vtableidx4];
    vlSelfRef.__PVT__lsr1_d = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelfRef.__PVT__rf_overrun));
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
    vlSelfRef.__PVT__start_dlc = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__wb_we_i) 
                                       & (0U == (7U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                                      && (1U & ((IData)(vlSelfRef.lcr) 
                                                >> 7U))));
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.__PVT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSymsp->TOP.externalPins_uart_rx));
    __Vtableidx1 = vlSelfRef.__PVT__fcr;
    vlSelfRef.__PVT__trigger_level = VysyxSoCFull__ConstPool__TABLE_h2f4a0a86_0
        [__Vtableidx1];
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.__PVT__tx_reset = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__wb_we_i) 
                                      & (2U == (7U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in) 
                                               >> 2U))));
    vlSelfRef.__PVT__tf_push = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (((IData)(vlSelfRef.__PVT__wb_we_i) 
                                     & (0U == (7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                                    && (1U & (~ ((IData)(vlSelfRef.lcr) 
                                                 >> 7U)))));
    vlSelfRef.__PVT__lsr2 = (1U & (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                   [vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                   >> 1U));
    vlSelfRef.__PVT__lsr3 = (1U & vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                             [vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.__PVT__lsr4 = (1U & (vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                   [vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                   >> 2U));
    vlSelfRef.__PVT__ms_int_pnd = __Vdly__ms_int_pnd;
    vlSelfRef.__PVT__thre_int_pnd = __Vdly__thre_int_pnd;
    vlSelfRef.__PVT__ti_int_pnd = __Vdly__ti_int_pnd;
    vlSelfRef.__PVT__rls_int_pnd = __Vdly__rls_int_pnd;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__delayed_modem_signals = 0U;
        vlSelfRef.__PVT__ier = 0U;
        __Vdly__rstate = 0U;
        vlSelfRef.__PVT__receiver__DOT__rcounter16 = 0U;
        __Vdly__receiver__DOT__rbit_counter = 0U;
        __Vdly__receiver__DOT__rparity_xor = 0U;
        __Vdly__receiver__DOT__rframing_error = 0U;
        __Vdly__receiver__DOT__rparity_error = 0U;
        __Vdly__receiver__DOT__rparity = 0U;
        __Vdly__receiver__DOT__rshift = 0U;
        vlSelfRef.__PVT__receiver__DOT__rf_push = 0U;
        vlSelfRef.__PVT__receiver__DOT__rf_data_in = 0U;
        vlSelfRef.__PVT__rstate = __Vdly__rstate;
        vlSelfRef.__PVT__receiver__DOT__rbit_counter 
            = __Vdly__receiver__DOT__rbit_counter;
        vlSelfRef.__PVT__receiver__DOT__rparity_xor 
            = __Vdly__receiver__DOT__rparity_xor;
        vlSelfRef.__PVT__receiver__DOT__rframing_error 
            = __Vdly__receiver__DOT__rframing_error;
        vlSelfRef.__PVT__receiver__DOT__rparity_error 
            = __Vdly__receiver__DOT__rparity_error;
        vlSelfRef.__PVT__receiver__DOT__rparity = __Vdly__receiver__DOT__rparity;
        vlSelfRef.__PVT__receiver__DOT__rshift = __Vdly__receiver__DOT__rshift;
        vlSelfRef.__PVT__receiver__DOT__counter_b = __Vdly__receiver__DOT__counter_b;
        __Vdly__tstate = 0U;
        vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__transmitter__DOT__counter = 0U;
        __Vdly__transmitter__DOT__shift_out = 0U;
        __Vdly__transmitter__DOT__bit_out = 0U;
        __Vdly__transmitter__DOT__parity_xor = 0U;
        vlSelfRef.__PVT__transmitter__DOT__tf_pop = 0U;
        __Vdly__transmitter__DOT__bit_counter = 0U;
    } else {
        vlSelfRef.__PVT__delayed_modem_signals = 0x0eU;
        if (((IData)(vlSelfRef.__PVT__wb_we_i) & (1U 
                                                  == 
                                                  (7U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            if ((1U & (~ ((IData)(vlSelfRef.lcr) >> 7U)))) {
                vlSelfRef.__PVT__ier = (0x0000000fU 
                                        & (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in));
            }
        }
        if (vlSelfRef.__PVT__enable) {
            if ((8U & (IData)(vlSelfRef.__PVT__rstate))) {
                if ((4U & (IData)(vlSelfRef.__PVT__rstate))) {
                    __Vdly__rstate = 0U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__rstate))) {
                        __Vdly__rstate = 0U;
                    } else if (((IData)(vlSelfRef.__PVT__serial_in) 
                                | (0U == (IData)(vlSelfRef.__PVT__receiver__DOT__counter_b)))) {
                        vlSelfRef.__PVT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelfRef.__PVT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelfRef.__PVT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.__PVT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__receiver__DOT__rframing_error))));
                        vlSelfRef.__PVT__receiver__DOT__rf_push = 1U;
                        __Vdly__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__receiver__DOT__rframing_error)))) {
                        vlSelfRef.__PVT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelfRef.__PVT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__receiver__DOT__rframing_error)));
                        vlSelfRef.__PVT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.__PVT__receiver__DOT__rcounter16 = 0x0eU;
                        __Vdly__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__rstate))) {
                    if (vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__rstate = 4U;
                        vlSelfRef.__PVT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        vlSelfRef.__PVT__receiver__DOT__rcounter16 
                            = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelfRef.__PVT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelfRef.__PVT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelfRef.__PVT__receiver__DOT__rparity)));
                    __Vdly__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__rstate))) {
                if ((2U & (IData)(vlSelfRef.__PVT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__rstate))) {
                        if ((0U == (IData)(vlSelfRef.__PVT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelfRef.lcr))) {
                                __Vdly__rstate = 3U;
                            } else {
                                __Vdly__rstate = 4U;
                                __Vdly__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelfRef.__PVT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__rstate = 2U;
                        }
                        vlSelfRef.__PVT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        __Vdly__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelfRef.lcr))
                                ? ((1U & (IData)(vlSelfRef.lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelfRef.lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__rstate = 2U;
                            vlSelfRef.__PVT__receiver__DOT__rcounter16 = 0x0eU;
                            __Vdly__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__rstate = 6U;
                        }
                        vlSelfRef.__PVT__receiver__DOT__rcounter16 
                            = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__rstate))) {
                    __Vdly__receiver__DOT__rparity_error 
                        = (1U & ((0x00000010U & (IData)(vlSelfRef.lcr))
                                  ? ((0x00000020U & (IData)(vlSelfRef.lcr))
                                      ? (IData)(vlSelfRef.__PVT__receiver__DOT__rparity)
                                      : (IData)(vlSelfRef.__PVT__receiver__DOT__rparity_xor))
                                  : ((0x00000020U & (IData)(vlSelfRef.lcr))
                                      ? (~ (IData)(vlSelfRef.__PVT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelfRef.__PVT__receiver__DOT__rparity_xor)))));
                    vlSelfRef.__PVT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__rstate = 9U;
                } else {
                    if (vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelfRef.__PVT__serial_in)));
                        __Vdly__rstate = 0x0aU;
                    }
                    vlSelfRef.__PVT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__rstate))) {
                if ((1U & (IData)(vlSelfRef.__PVT__rstate))) {
                    if (vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__receiver__DOT__rparity 
                            = vlSelfRef.__PVT__serial_in;
                        __Vdly__rstate = 8U;
                    }
                    vlSelfRef.__PVT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelfRef.lcr))) {
                            if ((1U & (IData)(vlSelfRef.lcr))) {
                                __Vdly__receiver__DOT__rshift 
                                    = (((IData)(vlSelfRef.__PVT__serial_in) 
                                        << 7U) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__PVT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.__PVT__serial_in) 
                                           << 6U) | 
                                          (0x0000003fU 
                                           & ((IData)(vlSelfRef.__PVT__receiver__DOT__rshift) 
                                              >> 1U))));
                            }
                        } else {
                            __Vdly__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelfRef.lcr))
                                    ? ((0xc0U & (IData)(__Vdly__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.__PVT__serial_in) 
                                           << 5U) | 
                                          (0x0000001fU 
                                           & ((IData)(vlSelfRef.__PVT__receiver__DOT__rshift) 
                                              >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.__PVT__serial_in) 
                                           << 4U) | 
                                          (0x0000000fU 
                                           & ((IData)(vlSelfRef.__PVT__receiver__DOT__rshift) 
                                              >> 1U)))));
                        }
                    }
                    if (vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__rstate = 7U;
                    }
                    vlSelfRef.__PVT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__rstate))) {
                vlSelfRef.__PVT__receiver__DOT__rf_push = 0U;
                if (vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__rstate = ((IData)(vlSelfRef.__PVT__serial_in)
                                       ? 0U : 6U);
                }
                vlSelfRef.__PVT__receiver__DOT__rcounter16 
                    = vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelfRef.__PVT__receiver__DOT__rf_push = 0U;
                vlSelfRef.__PVT__receiver__DOT__rf_data_in = 0U;
                vlSelfRef.__PVT__receiver__DOT__rcounter16 = 0x0eU;
                if (((~ (IData)(vlSelfRef.__PVT__serial_in)) 
                     & (0U != (IData)(vlSelfRef.__PVT__receiver__DOT__counter_b)))) {
                    __Vdly__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__tstate))) {
                if ((2U & (IData)(vlSelfRef.__PVT__tstate))) {
                    __Vdly__tstate = 0U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__tstate))) {
                    vlSelfRef.__PVT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelfRef.lcr))) {
                        if ((1U & (IData)(vlSelfRef.lcr))) {
                            __Vdly__transmitter__DOT__bit_counter = 7U;
                            __Vdly__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out));
                        } else {
                            __Vdly__transmitter__DOT__bit_counter = 6U;
                            __Vdly__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x0000007fU 
                                                      & (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out))));
                        }
                    } else if ((1U & (IData)(vlSelfRef.lcr))) {
                        __Vdly__transmitter__DOT__bit_counter = 5U;
                        __Vdly__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out))));
                    } else {
                        __Vdly__transmitter__DOT__bit_counter = 4U;
                        __Vdly__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out))));
                    }
                    __Vdly__transmitter__DOT__shift_out 
                        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out) 
                                          >> 1U));
                    __Vdly__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out));
                    __Vdly__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                            __Vdly__transmitter__DOT__counter = 0U;
                            __Vdly__tstate = 0U;
                        } else {
                            __Vdly__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        __Vdly__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelfRef.lcr)))
                                ? 0x0dU : ((4U == (7U 
                                                   & (IData)(vlSelfRef.lcr)))
                                            ? 0x15U
                                            : 0x1dU));
                    }
                    vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__tstate))) {
                if ((1U & (IData)(vlSelfRef.__PVT__tstate))) {
                    if ((0U != (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                            __Vdly__transmitter__DOT__counter = 0U;
                            __Vdly__tstate = 4U;
                        } else {
                            __Vdly__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        __Vdly__transmitter__DOT__counter = 0x0fU;
                    }
                    vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.__PVT__transmitter__DOT__bit_out;
                } else {
                    vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.__PVT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelfRef.__PVT__transmitter__DOT__bit_counter))) {
                                __Vdly__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelfRef.__PVT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__transmitter__DOT__shift_out)) 
                                       | (0x0000003fU 
                                          & ((IData)(vlSelfRef.__PVT__transmitter__DOT__shift_out) 
                                             >> 1U)));
                                __Vdly__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelfRef.__PVT__transmitter__DOT__shift_out));
                                __Vdly__tstate = 2U;
                            } else if ((8U & (IData)(vlSelfRef.lcr))) {
                                __Vdly__transmitter__DOT__bit_out 
                                    = ((0x00000010U 
                                        & (IData)(vlSelfRef.lcr))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelfRef.lcr) 
                                                   >> 5U))) 
                                           && (IData)(vlSelfRef.__PVT__transmitter__DOT__parity_xor))
                                        : ((1U & ((IData)(vlSelfRef.lcr) 
                                                  >> 5U)) 
                                           || (1U & 
                                               (~ (IData)(vlSelfRef.__PVT__transmitter__DOT__parity_xor)))));
                                __Vdly__tstate = 3U;
                            } else {
                                __Vdly__tstate = 4U;
                            }
                            __Vdly__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        __Vdly__transmitter__DOT__counter = 0x0fU;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__tstate))) {
                vlSelfRef.__PVT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__transmitter__DOT__counter))) {
                        __Vdly__transmitter__DOT__counter = 0U;
                        __Vdly__tstate = 2U;
                    } else {
                        __Vdly__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    __Vdly__transmitter__DOT__counter = 0x0fU;
                }
                vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelfRef.__PVT__tf_count))) {
                vlSelfRef.__PVT__transmitter__DOT__tf_pop = 0U;
                vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__tstate = 5U;
            } else {
                __Vdly__tstate = 0U;
                vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelfRef.__PVT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelfRef.__PVT__rstate = __Vdly__rstate;
        vlSelfRef.__PVT__receiver__DOT__rbit_counter 
            = __Vdly__receiver__DOT__rbit_counter;
        vlSelfRef.__PVT__receiver__DOT__rparity_xor 
            = __Vdly__receiver__DOT__rparity_xor;
        vlSelfRef.__PVT__receiver__DOT__rframing_error 
            = __Vdly__receiver__DOT__rframing_error;
        vlSelfRef.__PVT__receiver__DOT__rparity_error 
            = __Vdly__receiver__DOT__rparity_error;
        vlSelfRef.__PVT__receiver__DOT__rparity = __Vdly__receiver__DOT__rparity;
        vlSelfRef.__PVT__receiver__DOT__rshift = __Vdly__receiver__DOT__rshift;
        vlSelfRef.__PVT__receiver__DOT__counter_b = __Vdly__receiver__DOT__counter_b;
    }
    vlSelfRef.__PVT__transmitter__DOT__counter = __Vdly__transmitter__DOT__counter;
    vlSelfRef.__PVT__transmitter__DOT__shift_out = __Vdly__transmitter__DOT__shift_out;
    vlSelfRef.__PVT__transmitter__DOT__bit_out = __Vdly__transmitter__DOT__bit_out;
    vlSelfRef.__PVT__transmitter__DOT__parity_xor = __Vdly__transmitter__DOT__parity_xor;
    vlSelfRef.__PVT__transmitter__DOT__bit_counter 
        = __Vdly__transmitter__DOT__bit_counter;
    vlSelfRef.__PVT__tstate = __Vdly__tstate;
    vlSelfRef.__PVT__tf_count = __Vdly__tf_count;
    vlSelfRef.__PVT__rls_int = (IData)((((IData)(vlSelfRef.__PVT__ier) 
                                         >> 2U) & (0U 
                                                   != 
                                                   (0x1eU 
                                                    & (IData)(vlSelfRef.lsr)))));
    vlSelfRef.__PVT__thre_int = (1U & (((IData)(vlSelfRef.__PVT__ier) 
                                        >> 1U) & ((IData)(vlSelfRef.lsr) 
                                                  >> 5U)));
    vlSelfRef.__PVT__ms_int = (((IData)(vlSelfRef.__PVT__ier) 
                                >> 3U) & (0U != (0x0000000fU 
                                                 & (IData)(vlSelfRef.__PVT__msr))));
    vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.__PVT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.__PVT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__lsr5 = ((~ (0U != (IData)(vlSelfRef.__PVT__block_cnt))) 
                             & (0U == (IData)(vlSelfRef.__PVT__tf_count)));
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__dl)) 
                                  & (~ (0U != (IData)(vlSelfRef.__PVT__dlc)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__rf_overrun = 0U;
        vlSelfRef.__PVT__dl = (0x00ffU & (IData)(vlSelfRef.__PVT__dl));
        vlSelfRef.__PVT__dl = (0xff00U & (IData)(vlSelfRef.__PVT__dl));
        vlSelfRef.lcr = 3U;
    } else {
        if (((IData)(vlSelfRef.__PVT__rx_reset) | (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status))) {
            vlSelfRef.__PVT__rf_overrun = 0U;
        } else if ((((IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                     & (~ (IData)(vlSelfRef.__PVT__rf_pop))) 
                    & (0x10U == (IData)(vlSelfRef.__PVT__rf_count)))) {
            vlSelfRef.__PVT__rf_overrun = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__wb_we_i) & (1U 
                                                  == 
                                                  (7U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            if ((0x00000080U & (IData)(vlSelfRef.lcr))) {
                vlSelfRef.__PVT__dl = ((0x00ffU & (IData)(vlSelfRef.__PVT__dl)) 
                                       | ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in) 
                                          << 8U));
            }
        }
        if (((IData)(vlSelfRef.__PVT__wb_we_i) & (0U 
                                                  == 
                                                  (7U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            if ((0x00000080U & (IData)(vlSelfRef.lcr))) {
                vlSelfRef.__PVT__dl = ((0xff00U & (IData)(vlSelfRef.__PVT__dl)) 
                                       | (IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in));
            }
        }
        if (((IData)(vlSelfRef.__PVT__wb_we_i) & (3U 
                                                  == 
                                                  (7U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.lcr = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in;
        }
    }
    vlSelfRef.__PVT__rf_pop = __Vdly__rf_pop;
    vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = ((~ (IData)(vlSelfRef.__PVT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.__PVT__receiver__DOT__rf_push));
    vlSelfRef.__PVT__rf_count = __Vdly__rf_count;
    vlSelfRef.__PVT__lsr6 = ((IData)(vlSelfRef.__PVT__lsr5) 
                             & (0U == (IData)(vlSelfRef.__PVT__tstate)));
    vlSelfRef.__PVT__dlc = __Vdly__dlc;
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
    vlSelfRef.__PVT__lsr0 = ((0U == (IData)(vlSelfRef.__PVT__rf_count)) 
                             & (IData)(vlSelfRef.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
    vlSelfRef.__PVT__rda_int = ((IData)(vlSelfRef.__PVT__ier) 
                                & ((IData)(vlSelfRef.__PVT__rf_count) 
                                   >= (IData)(vlSelfRef.__PVT__trigger_level)));
    vlSelfRef.__PVT__ti_int = ((IData)(vlSelfRef.__PVT__ier) 
                               & ((0U == (IData)(vlSelfRef.__PVT__counter_t)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__rf_count))));
    vlSelfRef.__PVT__rx_reset = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__wb_we_i) 
                                      & (2U == (7U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_in) 
                                               >> 1U))));
    __Vtableidx2 = vlSelfRef.lcr;
    vlSelfRef.__PVT__block_value = VysyxSoCFull__ConstPool__TABLE_h688915ee_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelfRef.lcr;
    vlSelfRef.__PVT__receiver__DOT__toc_value = VysyxSoCFull__ConstPool__TABLE_hb2548040_0
        [__Vtableidx5];
    vlSelfRef.__PVT__transmitter__DOT__stx_pad_o = 
        ((~ ((IData)(vlSelfRef.lcr) >> 6U)) & (IData)(vlSelfRef.__PVT__transmitter__DOT__stx_o_tmp));
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__mcr))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = 
            ((0x0000000cU & ((IData)(vlSelfRef.__PVT__mcr) 
                             << 2U)) | ((2U & ((IData)(vlSelfRef.__PVT__mcr) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.__PVT__mcr) 
                                                 >> 3U))));
        vlSelfRef.__PVT__serial_in = vlSelfRef.__PVT__transmitter__DOT__stx_pad_o;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = 8U;
        vlSelfRef.__PVT__serial_in = vlSelfRef.__PVT__srx_pad;
    }
}

void VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__bottom];
}

void VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__2(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___nba_sequent__TOP__ysyxSoCFull__asic__luart__muart__Uregs__2\n"); );
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
}

void VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1(VysyxSoCFull_uart_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_uart_regs___nba_comb__TOP__ysyxSoCFull__asic__luart__muart__Uregs__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hf5566834_0_1 = ((~ 
                                                 ((IData)(vlSelfRef.lcr) 
                                                  >> 7U)) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)));
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
    vlSelfRef.__PVT__fifo_read = ((IData)(vlSelfRef.__PVT__wb_re_i) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hf5566834_0_1));
    vlSelfRef.__PVT__fifo_write = ((IData)(vlSelfRef.__PVT__wb_we_i) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hf5566834_0_1));
    vlSelfRef.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = ((~ (IData)(vlSelfRef.__PVT__lsr_mask_d)) 
           & (IData)(vlSelfRef.__PVT__lsr_mask_condition));
}

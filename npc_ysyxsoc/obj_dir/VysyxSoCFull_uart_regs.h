// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_UART_REGS_H_
#define VERILATED_VYSYXSOCFULL_UART_REGS_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_uart_regs final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__wb_rst_i,0,0);
        VL_IN8(__PVT__wb_addr_i,2,0);
        VL_IN8(__PVT__wb_dat_i,7,0);
        VL_OUT8(__PVT__wb_dat_o,7,0);
        VL_IN8(__PVT__wb_we_i,0,0);
        VL_IN8(__PVT__wb_re_i,0,0);
        VL_IN8(__PVT__modem_inputs,3,0);
        VL_OUT8(__PVT__stx_pad_o,0,0);
        VL_IN8(__PVT__srx_pad_i,0,0);
        VL_OUT8(__PVT__rts_pad_o,0,0);
        VL_OUT8(__PVT__dtr_pad_o,0,0);
        VL_OUT8(__PVT__int_o,0,0);
        CData/*0:0*/ __PVT__enable;
        CData/*0:0*/ __PVT__srx_pad;
        CData/*3:0*/ __PVT__ier;
        CData/*3:0*/ __PVT__iir;
        CData/*1:0*/ __PVT__fcr;
        CData/*4:0*/ __PVT__mcr;
        CData/*7:0*/ lcr;
        CData/*7:0*/ __PVT__msr;
        CData/*7:0*/ __PVT__scratch;
        CData/*0:0*/ __PVT__start_dlc;
        CData/*0:0*/ __PVT__lsr_mask_d;
        CData/*0:0*/ __PVT__msi_reset;
        CData/*3:0*/ __PVT__trigger_level;
        CData/*0:0*/ __PVT__rx_reset;
        CData/*0:0*/ __PVT__tx_reset;
        CData/*7:0*/ lsr;
        CData/*0:0*/ __PVT__lsr0;
        CData/*0:0*/ __PVT__lsr2;
        CData/*0:0*/ __PVT__lsr3;
        CData/*0:0*/ __PVT__lsr4;
        CData/*0:0*/ __PVT__lsr5;
        CData/*0:0*/ __PVT__lsr6;
        CData/*0:0*/ __PVT__lsr7;
        CData/*0:0*/ __PVT__lsr0r;
        CData/*0:0*/ __PVT__lsr1r;
        CData/*0:0*/ __PVT__lsr2r;
        CData/*0:0*/ __PVT__lsr3r;
        CData/*0:0*/ __PVT__lsr4r;
        CData/*0:0*/ __PVT__lsr5r;
        CData/*0:0*/ __PVT__lsr6r;
        CData/*0:0*/ __PVT__lsr7r;
        CData/*0:0*/ __PVT__rls_int;
        CData/*0:0*/ __PVT__rda_int;
        CData/*0:0*/ __PVT__ti_int;
        CData/*0:0*/ __PVT__thre_int;
        CData/*0:0*/ __PVT__ms_int;
        CData/*0:0*/ __PVT__tf_push;
        CData/*0:0*/ __PVT__rf_pop;
        CData/*0:0*/ __PVT__rf_overrun;
        CData/*4:0*/ __PVT__rf_count;
        CData/*4:0*/ __PVT__tf_count;
        CData/*2:0*/ __PVT__tstate;
        CData/*3:0*/ __PVT__rstate;
        CData/*7:0*/ __PVT__block_cnt;
        CData/*7:0*/ __PVT__block_value;
        CData/*0:0*/ __PVT__serial_in;
        CData/*0:0*/ __PVT__lsr_mask_condition;
        CData/*0:0*/ __PVT__iir_read;
        CData/*0:0*/ __PVT__msr_read;
        CData/*0:0*/ __PVT__fifo_read;
        CData/*0:0*/ __PVT__fifo_write;
    };
    struct {
        CData/*3:0*/ __PVT__delayed_modem_signals;
        CData/*0:0*/ __PVT__lsr0_d;
        CData/*0:0*/ __PVT__lsr1_d;
        CData/*0:0*/ __PVT__lsr2_d;
        CData/*0:0*/ __PVT__lsr3_d;
        CData/*0:0*/ __PVT__lsr4_d;
        CData/*0:0*/ __PVT__lsr5_d;
        CData/*0:0*/ __PVT__lsr6_d;
        CData/*0:0*/ __PVT__lsr7_d;
        CData/*0:0*/ __PVT__rls_int_d;
        CData/*0:0*/ __PVT__thre_int_d;
        CData/*0:0*/ __PVT__ms_int_d;
        CData/*0:0*/ __PVT__ti_int_d;
        CData/*0:0*/ __PVT__rda_int_d;
        CData/*0:0*/ __PVT__rls_int_pnd;
        CData/*0:0*/ __PVT__rda_int_pnd;
        CData/*0:0*/ __PVT__thre_int_pnd;
        CData/*0:0*/ __PVT__ms_int_pnd;
        CData/*0:0*/ __PVT__ti_int_pnd;
        CData/*0:0*/ __VdfgRegularize_hf5566834_0_1;
        CData/*0:0*/ __PVT__transmitter__DOT__stx_pad_o;
        CData/*4:0*/ __PVT__transmitter__DOT__counter;
        CData/*2:0*/ __PVT__transmitter__DOT__bit_counter;
        CData/*6:0*/ __PVT__transmitter__DOT__shift_out;
        CData/*0:0*/ __PVT__transmitter__DOT__stx_o_tmp;
        CData/*0:0*/ __PVT__transmitter__DOT__parity_xor;
        CData/*0:0*/ __PVT__transmitter__DOT__tf_pop;
        CData/*0:0*/ __PVT__transmitter__DOT__bit_out;
        CData/*0:0*/ __PVT__transmitter__DOT__tf_overrun;
        CData/*7:0*/ __PVT__transmitter__DOT__fifo_tx__DOT__data_in;
        CData/*7:0*/ __PVT__transmitter__DOT__fifo_tx__DOT__data_out;
        CData/*0:0*/ __PVT__transmitter__DOT__fifo_tx__DOT__reset_status;
        CData/*3:0*/ __PVT__transmitter__DOT__fifo_tx__DOT__top;
        CData/*3:0*/ __PVT__transmitter__DOT__fifo_tx__DOT__bottom;
        CData/*3:0*/ __PVT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        CData/*0:0*/ __PVT__i_uart_sync_flops__DOT__flop_0;
        CData/*3:0*/ __PVT__receiver__DOT__rcounter16;
        CData/*2:0*/ __PVT__receiver__DOT__rbit_counter;
        CData/*7:0*/ __PVT__receiver__DOT__rshift;
        CData/*0:0*/ __PVT__receiver__DOT__rparity;
        CData/*0:0*/ __PVT__receiver__DOT__rparity_error;
        CData/*0:0*/ __PVT__receiver__DOT__rframing_error;
        CData/*0:0*/ __PVT__receiver__DOT__rbit_in;
        CData/*0:0*/ __PVT__receiver__DOT__rparity_xor;
        CData/*7:0*/ __PVT__receiver__DOT__counter_b;
        CData/*0:0*/ __PVT__receiver__DOT__rf_push_q;
        CData/*0:0*/ __PVT__receiver__DOT__rf_push;
        CData/*0:0*/ __PVT__receiver__DOT__rcounter16_eq_7;
        CData/*0:0*/ __PVT__receiver__DOT__rcounter16_eq_0;
        CData/*3:0*/ __PVT__receiver__DOT__rcounter16_minus_1;
        CData/*3:0*/ __PVT__receiver__DOT__fifo_rx__DOT__top;
        CData/*3:0*/ __PVT__receiver__DOT__fifo_rx__DOT__bottom;
        CData/*3:0*/ __PVT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        CData/*0:0*/ __PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_33;
        CData/*7:0*/ __VdlyVal__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
        CData/*3:0*/ __VdlyDim0__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
        CData/*0:0*/ __VdlySet__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
        SData/*15:0*/ __PVT__dl;
        SData/*15:0*/ __PVT__dlc;
        SData/*9:0*/ __PVT__counter_t;
        SData/*10:0*/ __PVT__receiver__DOT__rf_data_in;
        SData/*9:0*/ __PVT__receiver__DOT__toc_value;
        VlUnpacked<CData/*7:0*/, 16> __PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 16> __PVT__receiver__DOT__fifo_rx__DOT__fifo;
        VlUnpacked<CData/*7:0*/, 16> __PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_uart_regs(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_uart_regs();
    VL_UNCOPYABLE(VysyxSoCFull_uart_regs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

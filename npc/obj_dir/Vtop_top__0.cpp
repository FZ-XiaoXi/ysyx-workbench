// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h61f39d43_0;

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((3U != (IData)(vlSymsp->TOP__top__IFU_0.state)) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSymsp->TOP__top__IFU_0.__PVT__arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__IROM__DOT__r_state))));
    vlSelfRef.__PVT__IROM__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx1];
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP.imm
                                          : vlSymsp->TOP.lsu_wdata);
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)
                                     ? (~ (QData)((IData)(vlSymsp->TOP.EXU_inB)))
                                     : (QData)((IData)(vlSymsp->TOP.EXU_inB))));
    vlSelfRef.__PVT__COMP_0__DOT__isEQUAL = (0xffffffffU 
                                             == (~ 
                                                 (vlSymsp->TOP.rs1_val 
                                                  ^ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSymsp->TOP.rs1_val 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__isGREATER = (1U & 
                                               ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((~ (IData)(
                                                            (1ULL 
                                                             & ((1ULL 
                                                                 + 
                                                                 ((~ (QData)((IData)(vlSelfRef.__PVT__COMP_0__DOT__inB))) 
                                                                  + (QData)((IData)(vlSymsp->TOP.rs1_val)))) 
                                                                >> 0x00000020U)))) 
                                                 & (0U 
                                                    != vlSelfRef.__PVT__COMP_0__DOT__out))
                                                 : 
                                                ((~ 
                                                  (((vlSymsp->TOP.rs1_val 
                                                     ^ vlSelfRef.__PVT__COMP_0__DOT__inB) 
                                                    | vlSelfRef.__PVT__COMP_0__DOT__out) 
                                                   >> 0x0000001fU)) 
                                                 | ((~ 
                                                     (vlSymsp->TOP.rs1_val 
                                                      >> 0x0000001fU)) 
                                                    & (vlSelfRef.__PVT__COMP_0__DOT__inB 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.__PVT__COMP_0__DOT__isGREATER) 
                                                | (IData)(vlSelfRef.__PVT__COMP_0__DOT__isEQUAL));
}

void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dnpc = ((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)
                       ? vlSymsp->TOP__top__REG_0.CSR_MTVEC
                       : ((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)
                           ? vlSymsp->TOP__top__REG_0.CSR_MEPC
                           : vlSymsp->TOP.lsu_addr));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1b1ed272_0;

void Vtop_top___ico_sequent__TOP__top__2(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSymsp->TOP__top__LSU_0.__PVT__rready) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSymsp->TOP__top__LSU_0.__PVT__arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__DRAM__DOT__r_state))));
    vlSelfRef.__PVT__DRAM__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx3];
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__start 
        = ((IData)(vlSymsp->TOP__top__LSU_0.__PVT__arvalid) 
           & ((0U == (IData)(vlSelfRef.__PVT__DRAM__DOT__r_state)) 
              | ((IData)(vlSymsp->TOP__top__LSU_0.__PVT__rready) 
                 & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__rvalid))));
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__start 
        = ((0U == (IData)(vlSelfRef.__PVT__DRAM__DOT__w_state)) 
           & (IData)(vlSymsp->TOP__top__LSU_0.__PVT__awvalid));
    __Vtableidx4 = ((((IData)(vlSymsp->TOP__top__LSU_0.__PVT__bready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock) 
                                 << 4U) | ((IData)(vlSymsp->TOP__top__LSU_0.__PVT__awvalid) 
                                           << 3U))) 
                    | (((IData)(vlSymsp->TOP__top__LSU_0.__PVT__awvalid) 
                        << 2U) | (IData)(vlSelfRef.__PVT__DRAM__DOT__w_state)));
    vlSelfRef.__PVT__DRAM__DOT__w_next = Vtop__ConstPool__TABLE_h1b1ed272_0
        [__Vtableidx4];
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hd90a41b8_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_ha5365376_0;
extern const VlUnpacked<CData/*4:0*/, 16> Vtop__ConstPool__TABLE_h199665f4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_haa06e321_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h51008b95_0;

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 0;
    CData/*0:0*/ __Vdly__DRAM__DOT__write_delay_inst__DOT__busy;
    __Vdly__DRAM__DOT__write_delay_inst__DOT__busy = 0;
    CData/*1:0*/ __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt = 0;
    CData/*1:0*/ __Vdly__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 0;
    // Body
    __Vdly__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__busy 
        = vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__busy;
    vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__delay_cnt;
    vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__DRAM__DOT__write_delay_inst__DOT__busy 
        = vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__busy;
    __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__delay_cnt;
    vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__busy 
        = vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__busy;
    vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    if (vlSymsp->TOP.rst) {
        __Vdly__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__DRAM__DOT__write_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock = 0U;
    } else {
        if (vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__lfsr_en) {
            __Vdly__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 1U) | (1U & ((IData)(vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__lfsr_en) {
            vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 3U) | (7U & ((IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__lfsr_en) {
            __Vdly__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 1U) | (1U & ((IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__lfsr_en) {
            vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 3U) | (7U & ((IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__DRAM__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__start) 
                    & (~ (IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__DRAM__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__DRAM__DOT__write_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__lfsr_en = 0U;
            }
        }
    }
    vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__delay_cnt) 
                     << 2U) | (((IData)(vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__busy) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP.rst)))));
    vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__out_unlock 
        = Vtop__ConstPool__TABLE_hd90a41b8_0[__Vtableidx2];
    vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__start_d 
        = Vtop__ConstPool__TABLE_ha5365376_0[__Vtableidx2];
    if ((4U & Vtop__ConstPool__TABLE_h199665f4_0[__Vtableidx2])) {
        vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__busy 
            = Vtop__ConstPool__TABLE_ha5365376_0[__Vtableidx2];
    }
    if ((8U & Vtop__ConstPool__TABLE_h199665f4_0[__Vtableidx2])) {
        vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__lfsr_en 
            = Vtop__ConstPool__TABLE_haa06e321_0[__Vtableidx2];
    }
    if ((0x10U & Vtop__ConstPool__TABLE_h199665f4_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__delay_cnt 
            = Vtop__ConstPool__TABLE_h51008b95_0[__Vtableidx2];
    }
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__busy 
        = __Vdly__DRAM__DOT__write_delay_inst__DOT__busy;
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__delay_cnt 
        = __Vdly__DRAM__DOT__write_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__start));
}

void Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(IData/*31:0*/ addr);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__start) {
        Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(vlSymsp->TOP.lsu_addr);
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSymsp->TOP.lsu_addr, vlSymsp->TOP.lsu_wdata, (IData)(vlSymsp->TOP.lsu_wmask));
    }
    if ((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    if (vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__start) {
        vlSelfRef.__PVT__DRAM__DOT__raddr_reg = vlSymsp->TOP.lsu_addr;
    }
    if ((((1U == (IData)(vlSelfRef.__PVT__DRAM__DOT__r_state)) 
          & (IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock)) 
         & (~ (IData)(vlSymsp->TOP__top__LSU_0.__PVT__rready)))) {
        vlSelfRef.__PVT__DRAM__DOT__rdata_hold = vlSelfRef.__PVT__DRAM__DOT__current_mem_rdata;
    }
    if (vlSymsp->TOP__top__IFU_0.__PVT__ar_fire) {
        vlSelfRef.__PVT__IROM__DOT__raddr_reg = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__IROM__DOT__w_state = 0U;
        vlSelfRef.__PVT__DRAM__DOT__w_state = 0U;
    } else {
        vlSelfRef.__PVT__IROM__DOT__w_state = vlSelfRef.__PVT__IROM__DOT__w_next;
        vlSelfRef.__PVT__DRAM__DOT__w_state = vlSelfRef.__PVT__DRAM__DOT__w_next;
    }
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__DRAM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__2__Vfuncout);
    vlSelfRef.__PVT__DRAM__DOT__r_state = ((IData)(vlSymsp->TOP.rst)
                                            ? 0U : (IData)(vlSelfRef.__PVT__DRAM__DOT__r_next));
    vlSelfRef.__PVT__DRAM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__2__Vfuncout;
}

void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    if ((((1U == (IData)(vlSelfRef.__PVT__IROM__DOT__r_state)) 
          & (IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock)) 
         & (3U == (IData)(vlSymsp->TOP__top__IFU_0.state)))) {
        vlSelfRef.__PVT__IROM__DOT__rdata_hold = vlSelfRef.__PVT__IROM__DOT__current_mem_rdata;
    }
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__IROM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__1__Vfuncout);
    vlSelfRef.__PVT__IROM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__1__Vfuncout;
    vlSelfRef.__PVT__IROM__DOT__r_state = ((IData)(vlSymsp->TOP.rst)
                                            ? 0U : (IData)(vlSelfRef.__PVT__IROM__DOT__r_next));
}

void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin 
        = ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_16) 
           & (0x20U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                        >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_he2b63832_0_0 = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI) 
                                                | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isU) 
                                                   | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB) 
                                                      | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))))));
}

void Vtop_top___nba_sequent__TOP__top__4(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP.imm
                                          : vlSymsp->TOP.lsu_wdata);
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)
                                     ? (~ (QData)((IData)(vlSymsp->TOP.EXU_inB)))
                                     : (QData)((IData)(vlSymsp->TOP.EXU_inB))));
    vlSelfRef.__PVT__COMP_0__DOT__isEQUAL = (0xffffffffU 
                                             == (~ 
                                                 (vlSymsp->TOP.rs1_val 
                                                  ^ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSymsp->TOP.rs1_val 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__isGREATER = (1U & 
                                               ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((~ (IData)(
                                                            (1ULL 
                                                             & ((1ULL 
                                                                 + 
                                                                 ((~ (QData)((IData)(vlSelfRef.__PVT__COMP_0__DOT__inB))) 
                                                                  + (QData)((IData)(vlSymsp->TOP.rs1_val)))) 
                                                                >> 0x00000020U)))) 
                                                 & (0U 
                                                    != vlSelfRef.__PVT__COMP_0__DOT__out))
                                                 : 
                                                ((~ 
                                                  (((vlSymsp->TOP.rs1_val 
                                                     ^ vlSelfRef.__PVT__COMP_0__DOT__inB) 
                                                    | vlSelfRef.__PVT__COMP_0__DOT__out) 
                                                   >> 0x0000001fU)) 
                                                 | ((~ 
                                                     (vlSymsp->TOP.rs1_val 
                                                      >> 0x0000001fU)) 
                                                    & (vlSelfRef.__PVT__COMP_0__DOT__inB 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.__PVT__COMP_0__DOT__isGREATER) 
                                                | (IData)(vlSelfRef.__PVT__COMP_0__DOT__isEQUAL));
}

void Vtop_top___nba_sequent__TOP__top__6(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
        vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock = 0U;
        vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
        vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock = 0U;
    } else {
        vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock = 1U;
                vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__delay_cnt) 
                                      - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__start) 
                    & (~ (IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock = 1U;
                vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                      - (IData)(1U)));
                vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__lfsr_en = 0U;
            }
        }
        vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock = 1U;
                vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__delay_cnt) 
                                      - (IData)(1U)));
            }
        } else if (((IData)(vlSymsp->TOP__top__IFU_0.__PVT__ar_fire) 
                    & (~ (IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock = 1U;
                vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                      - (IData)(1U)));
                vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__lfsr_en = 0U;
            }
        }
    }
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__busy 
        = vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__busy;
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__Vdly__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__busy 
        = vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__busy;
    vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__Vdly__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__start));
    vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP__top__IFU_0.__PVT__ar_fire));
}

void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__IROM__DOT__w_next = vlSelfRef.__PVT__IROM__DOT__w_state;
    if ((0U != (IData)(vlSelfRef.__PVT__IROM__DOT__w_state))) {
        if ((1U == (IData)(vlSelfRef.__PVT__IROM__DOT__w_state))) {
            if (vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__out_unlock) {
                vlSelfRef.__PVT__IROM__DOT__w_next = 2U;
            }
        } else if ((2U != (IData)(vlSelfRef.__PVT__IROM__DOT__w_state))) {
            vlSelfRef.__PVT__IROM__DOT__w_next = 0U;
        }
    }
    __Vtableidx1 = (((3U != (IData)(vlSymsp->TOP__top__IFU_0.state)) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSymsp->TOP__top__IFU_0.__PVT__arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__IROM__DOT__r_state))));
    vlSelfRef.__PVT__IROM__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx1];
}

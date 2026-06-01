// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid 
        = ((0U == (IData)(vlSymsp->TOP__top__IFU_0.state)) 
           | (1U == (IData)(vlSymsp->TOP__top__IFU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((2U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((4U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP.imm
                                          : vlSymsp->TOP.lsu_wdata);
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)
                                     ? (~ (QData)((IData)(vlSymsp->TOP.EXU_inB)))
                                     : (QData)((IData)(vlSymsp->TOP.EXU_inB))));
    vlSelfRef.__PVT__RAM_bready = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        vlSelfRef.__PVT__RAM_bready = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) 
                                       && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
    }
    vlSelfRef.__PVT__RAM_rready = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        vlSelfRef.__PVT__RAM_rready = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass)
                                        ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
                                        : (3U != (IData)(vlSymsp->TOP__top__IFU_0.state)));
    }
    vlSelfRef.__PVT__COMP_0__DOT__isEQUAL = (0xffffffffU 
                                             == (~ 
                                                 (vlSymsp->TOP.rs1_val 
                                                  ^ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSymsp->TOP.rs1_val 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready 
        = ((0U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
           | ((IData)(vlSelfRef.__PVT__RAM_rready) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)));
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

extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hb98c661f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h10494dc5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h791f60e6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h629d5b0a_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h61f39d43_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1b1ed272_0;

void Vtop_top___ico_sequent__TOP__top__2(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid 
        = (((~ (IData)(vlSymsp->TOP.LSU_WEN)) & (IData)(vlSymsp->TOP__top__LSU_0.__VdfgRegularize_hac146698_0_1)) 
           | (3U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid 
        = (((IData)(vlSymsp->TOP__top__LSU_0.__VdfgRegularize_hac146698_0_1) 
            & (IData)(vlSymsp->TOP.LSU_WEN)) | (1U 
                                                == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__RAM_araddr = 0U;
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_priority) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))) 
                     << 4U) | ((((3U != (IData)(vlSymsp->TOP__top__IFU_0.state)) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state_next 
        = Vtop__ConstPool__TABLE_hb98c661f_0[__Vtableidx1];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass_next 
        = Vtop__ConstPool__TABLE_h10494dc5_0[__Vtableidx1];
    vlSelfRef.__PVT__IROM_arready = 0U;
    vlSelfRef.__PVT__RAM_arvalid = 0U;
    vlSelfRef.__PVT__DRAM_arready = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass) {
            vlSelfRef.__PVT__RAM_araddr = vlSymsp->TOP.lsu_addr;
            vlSelfRef.__PVT__RAM_arvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid;
            vlSelfRef.__PVT__DRAM_arready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready;
        } else {
            vlSelfRef.__PVT__RAM_araddr = vlSymsp->TOP__top__IFU_0.__PVT__PC;
            vlSelfRef.__PVT__RAM_arvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass)))) {
            vlSelfRef.__PVT__IROM_arready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready;
        }
    } else if (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid))) {
        vlSelfRef.__PVT__RAM_araddr = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_priority)
                                        ? vlSymsp->TOP.lsu_addr
                                        : vlSymsp->TOP__top__IFU_0.__PVT__PC);
        vlSelfRef.__PVT__IROM_arready = ((~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_priority)) 
                                         & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
        vlSelfRef.__PVT__RAM_arvalid = 1U;
        vlSelfRef.__PVT__DRAM_arready = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_priority) 
                                         & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
    } else {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) {
            vlSelfRef.__PVT__RAM_araddr = vlSymsp->TOP.lsu_addr;
            vlSelfRef.__PVT__RAM_arvalid = 1U;
            vlSelfRef.__PVT__DRAM_arready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready;
        } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) {
            vlSelfRef.__PVT__RAM_araddr = vlSymsp->TOP__top__IFU_0.__PVT__PC;
            vlSelfRef.__PVT__RAM_arvalid = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid)))) {
            if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) {
                vlSelfRef.__PVT__IROM_arready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready;
            }
        }
    }
    vlSelfRef.__PVT__RAM_awaddr = 0U;
    vlSelfRef.__PVT__RAM_wdata = 0U;
    vlSelfRef.__PVT__RAM_wstrb = 0U;
    __Vtableidx2 = ((((6U & ((- (IData)((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid))) 
                             << 1U)) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid)) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready) 
                                << 2U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state_next 
        = Vtop__ConstPool__TABLE_h791f60e6_0[__Vtableidx2];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass_next 
        = Vtop__ConstPool__TABLE_h629d5b0a_0[__Vtableidx2];
    vlSelfRef.__PVT__RAM_awvalid = 0U;
    vlSelfRef.__PVT__DRAM_awready = 0U;
    vlSelfRef.__PVT__RAM_wvalid = 0U;
    vlSelfRef.__PVT__DRAM_wready = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) {
            vlSelfRef.__PVT__RAM_awaddr = vlSymsp->TOP.lsu_addr;
            vlSelfRef.__PVT__RAM_wdata = vlSymsp->TOP.lsu_wdata;
            vlSelfRef.__PVT__RAM_wstrb = vlSymsp->TOP.lsu_wmask;
            vlSelfRef.__PVT__DRAM_awready = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
            vlSelfRef.__PVT__DRAM_wready = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
        } else {
            vlSelfRef.__PVT__RAM_awaddr = 0U;
            vlSelfRef.__PVT__RAM_wdata = 0U;
            vlSelfRef.__PVT__RAM_wstrb = 0U;
        }
        vlSelfRef.__PVT__RAM_awvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) 
                                        && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        vlSelfRef.__PVT__RAM_wvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) 
                                       && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
    } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
        vlSelfRef.__PVT__RAM_awaddr = vlSymsp->TOP.lsu_addr;
        vlSelfRef.__PVT__RAM_wdata = vlSymsp->TOP.lsu_wdata;
        vlSelfRef.__PVT__RAM_wstrb = vlSymsp->TOP.lsu_wmask;
        vlSelfRef.__PVT__RAM_awvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid;
        vlSelfRef.__PVT__DRAM_awready = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
        vlSelfRef.__PVT__RAM_wvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid;
        vlSelfRef.__PVT__DRAM_wready = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
    }
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start 
        = ((IData)(vlSelfRef.__PVT__RAM_arvalid) & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__RAM_rready) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__RAM_arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__RAM__DOT__r_state))));
    vlSelfRef.__PVT__RAM__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx3];
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start 
        = ((0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
           & ((IData)(vlSelfRef.__PVT__RAM_awvalid) 
              & (IData)(vlSelfRef.__PVT__RAM_wvalid)));
    __Vtableidx4 = ((((IData)(vlSelfRef.__PVT__RAM_bready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__RAM_wvalid) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__RAM_awvalid) 
                        << 2U) | (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)));
    vlSelfRef.__PVT__RAM__DOT__w_next = Vtop__ConstPool__TABLE_h1b1ed272_0
        [__Vtableidx4];
}

void Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(IData/*31:0*/ addr);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start) {
        Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(vlSelfRef.__PVT__RAM_awaddr);
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.__PVT__RAM_awaddr, vlSelfRef.__PVT__RAM_wdata, (IData)(vlSelfRef.__PVT__RAM_wstrb));
    }
    if ((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_priority 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_priority))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_priority 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_priority))));
    if (vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start) {
        vlSelfRef.__PVT__RAM__DOT__raddr_reg = vlSelfRef.__PVT__RAM_araddr;
    }
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state_next));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass_next));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state_next));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass_next));
    if ((((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
          & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock)) 
         & (~ (IData)(vlSelfRef.__PVT__RAM_rready)))) {
        vlSelfRef.__PVT__RAM__DOT__rdata_hold = vlSelfRef.__PVT__RAM__DOT__current_mem_rdata;
    }
    vlSelfRef.__PVT__RAM__DOT__w_state = ((IData)(vlSymsp->TOP.rst)
                                           ? 0U : (IData)(vlSelfRef.__PVT__RAM__DOT__w_next));
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__RAM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__1__Vfuncout);
    vlSelfRef.__PVT__RAM__DOT__r_state = ((IData)(vlSymsp->TOP.rst)
                                           ? 0U : (IData)(vlSelfRef.__PVT__RAM__DOT__r_next));
    vlSelfRef.__PVT__RAM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__1__Vfuncout;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bresp = 0U;
    vlSelfRef.__PVT__DRAM_bresp = 0U;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready = 0U;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass)))) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bresp = 0U;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready 
                = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready 
                = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
        }
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) {
            vlSelfRef.__PVT__DRAM_bresp = 0U;
        }
    }
    vlSelfRef.__PVT__IROM_rresp = 0U;
    vlSelfRef.__PVT__DRAM_rresp = 0U;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state))
            ? vlSelfRef.__PVT__RAM__DOT__rdata_hold
            : vlSelfRef.__PVT__RAM__DOT__current_mem_rdata);
    vlSelfRef.__PVT__DRAM_rdata = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass)))) {
            vlSelfRef.__PVT__IROM_rresp = 0U;
        }
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass) {
            vlSelfRef.__PVT__DRAM_rresp = 0U;
            vlSelfRef.__PVT__DRAM_rdata = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        }
    }
}

void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((2U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((4U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    vlSelfRef.__PVT__IROM_rdata = 0U;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid 
        = ((0U == (IData)(vlSymsp->TOP__top__IFU_0.state)) 
           | (1U == (IData)(vlSymsp->TOP__top__IFU_0.state)));
    vlSelfRef.__PVT__RAM_bready = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        vlSelfRef.__PVT__RAM_bready = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) 
                                       && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
    }
    vlSelfRef.__PVT__RAM_rready = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass)))) {
            vlSelfRef.__PVT__IROM_rdata = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        }
        vlSelfRef.__PVT__RAM_rready = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass)
                                        ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
                                        : (3U != (IData)(vlSymsp->TOP__top__IFU_0.state)));
    }
}

void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
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

void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__3\n"); );
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

void Vtop_top___nba_sequent__TOP__top__5(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__RAM__DOT__read_delay_inst__DOT__busy;
    __Vdly__RAM__DOT__read_delay_inst__DOT__busy = 0;
    CData/*3:0*/ __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt = 0;
    CData/*3:0*/ __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 0;
    CData/*0:0*/ __Vdly__RAM__DOT__write_delay_inst__DOT__busy;
    __Vdly__RAM__DOT__write_delay_inst__DOT__busy = 0;
    CData/*1:0*/ __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt = 0;
    CData/*1:0*/ __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 0;
    // Body
    __Vdly__RAM__DOT__write_delay_inst__DOT__busy = vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__busy;
    __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__RAM__DOT__read_delay_inst__DOT__busy = vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__busy;
    __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    if (vlSymsp->TOP.rst) {
        __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__RAM__DOT__write_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock = 0U;
        __Vdly__RAM__DOT__read_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock = 0U;
    } else {
        if (vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en) {
            __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 1U) | (1U & ((IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en) {
            __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 3U) | (7U & ((IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__RAM__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start) 
                    & (~ (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__RAM__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__RAM__DOT__write_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en = 0U;
            }
        }
        vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock = 1U;
                __Vdly__RAM__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt) 
                                      - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start) 
                    & (~ (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock = 1U;
                __Vdly__RAM__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                      - (IData)(1U)));
                __Vdly__RAM__DOT__read_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en = 0U;
            }
        }
    }
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__busy 
        = __Vdly__RAM__DOT__write_delay_inst__DOT__busy;
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt 
        = __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__busy 
        = __Vdly__RAM__DOT__read_delay_inst__DOT__busy;
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt 
        = __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start));
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start));
}

void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
              & (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
              & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bvalid = 0U;
    vlSelfRef.__PVT__DRAM_bvalid = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass)))) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bvalid 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid;
        }
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass) {
            vlSelfRef.__PVT__DRAM_bvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid;
        }
    }
    vlSelfRef.__PVT__IROM_rvalid = 0U;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready 
        = ((0U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
           | ((IData)(vlSelfRef.__PVT__RAM_rready) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)));
    vlSelfRef.__PVT__DRAM_rvalid = 0U;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass)))) {
            vlSelfRef.__PVT__IROM_rvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid;
        }
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass) {
            vlSelfRef.__PVT__DRAM_rvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid;
        }
    }
}

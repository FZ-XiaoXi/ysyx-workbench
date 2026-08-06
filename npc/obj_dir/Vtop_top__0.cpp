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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (3U != (IData)(vlSymsp->TOP__top__IFU_0.state))));
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

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h934df3aa_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hb7843f96_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h46bc2db3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h56ed874e_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1b1ed272_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h61f39d43_0;

void Vtop_top___ico_sequent__TOP__top__2(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid 
        = (((~ (IData)(vlSymsp->TOP.LSU_WEN)) & (IData)(vlSymsp->TOP__top__LSU_0.__VdfgRegularize_hac146698_0_1)) 
           | (3U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid 
        = (((IData)(vlSymsp->TOP__top__LSU_0.__VdfgRegularize_hac146698_0_1) 
            & (IData)(vlSymsp->TOP.LSU_WEN)) | (1U 
                                                == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                                  << 2U)) | (((3U != (IData)(vlSymsp->TOP__top__IFU_0.state)) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid) 
                                << 2U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state 
        = Vtop__ConstPool__TABLE_h934df3aa_0[__Vtableidx1];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next 
        = Vtop__ConstPool__TABLE_hb7843f96_0[__Vtableidx1];
    __Vtableidx2 = ((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__S_bvalid) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                        << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state 
        = Vtop__ConstPool__TABLE_h46bc2db3_0[__Vtableidx2];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next 
        = Vtop__ConstPool__TABLE_h56ed874e_0[__Vtableidx2];
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_next_state 
        = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_state;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        vlSelfRef.__PVT__S_arsize = 2U;
        vlSelfRef.__PVT__S_arburst = 1U;
        vlSelfRef.__PVT__S_arvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                       ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid)
                                       : (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid));
    } else {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) {
            vlSelfRef.__PVT__S_arsize = 2U;
            vlSelfRef.__PVT__S_arburst = 1U;
        } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) {
            vlSelfRef.__PVT__S_arsize = 2U;
            vlSelfRef.__PVT__S_arburst = 1U;
        } else {
            vlSelfRef.__PVT__S_arsize = 0U;
            vlSelfRef.__PVT__S_arburst = 0U;
        }
        vlSelfRef.__PVT__S_arvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                                      || (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
    }
    if (vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_state) {
        if (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
             & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))) {
            vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_next_state = 0U;
        }
    } else if (vlSelfRef.__PVT__S_arvalid) {
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_next_state = 1U;
    }
    vlSelfRef.__PVT__S_araddr = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                  ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                      ? vlSymsp->TOP.lsu_addr
                                      : vlSymsp->TOP__top__IFU_0.__PVT__PC)
                                  : ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid)
                                      ? vlSymsp->TOP__top__IFU_0.__PVT__PC
                                      : ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid)
                                          ? vlSymsp->TOP.lsu_addr
                                          : 0U)));
    vlSelfRef.__VdfgRegularize_he2b63832_1_4 = ((0x10000048U 
                                                 <= vlSelfRef.__PVT__S_araddr) 
                                                & (0x10000050U 
                                                   > vlSelfRef.__PVT__S_araddr));
    vlSelfRef.__VdfgRegularize_he2b63832_1_3 = ((0x10000000U 
                                                 <= vlSelfRef.__PVT__S_araddr) 
                                                & (0x10000004U 
                                                   > vlSelfRef.__PVT__S_araddr));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_next_state 
        = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_state;
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) {
            vlSelfRef.__PVT__S_awsize = 2U;
            vlSelfRef.__PVT__S_awburst = 1U;
            vlSelfRef.__PVT__S_wdata = vlSymsp->TOP.lsu_wdata;
            vlSelfRef.__PVT__S_wstrb = vlSymsp->TOP.lsu_wmask;
            vlSelfRef.__PVT__S_wlast = 1U;
        } else {
            vlSelfRef.__PVT__S_awsize = 0U;
            vlSelfRef.__PVT__S_awburst = 0U;
            vlSelfRef.__PVT__S_wdata = 0U;
            vlSelfRef.__PVT__S_wstrb = 0U;
            vlSelfRef.__PVT__S_wlast = 0U;
        }
        vlSelfRef.__PVT__S_awvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                      && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        vlSelfRef.__PVT__S_wvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                     && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
    } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
        vlSelfRef.__PVT__S_awsize = 2U;
        vlSelfRef.__PVT__S_awburst = 1U;
        vlSelfRef.__PVT__S_wdata = vlSymsp->TOP.lsu_wdata;
        vlSelfRef.__PVT__S_wstrb = vlSymsp->TOP.lsu_wmask;
        vlSelfRef.__PVT__S_wlast = 1U;
        vlSelfRef.__PVT__S_awvalid = 1U;
        vlSelfRef.__PVT__S_wvalid = 1U;
    } else {
        vlSelfRef.__PVT__S_awsize = 0U;
        vlSelfRef.__PVT__S_awburst = 0U;
        vlSelfRef.__PVT__S_wdata = 0U;
        vlSelfRef.__PVT__S_wstrb = 0U;
        vlSelfRef.__PVT__S_wlast = 0U;
        vlSelfRef.__PVT__S_awvalid = 0U;
        vlSelfRef.__PVT__S_wvalid = 0U;
    }
    if (vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_state) {
        if (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
             & (IData)(vlSelfRef.__PVT__S_bvalid))) {
            vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_next_state = 0U;
        }
    } else if (((IData)(vlSelfRef.__PVT__S_awvalid) 
                & (IData)(vlSelfRef.__PVT__S_wvalid))) {
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_next_state = 1U;
    }
    vlSelfRef.__PVT__CLINT_awaddr = 0U;
    vlSelfRef.__PVT__CLINT_wdata = 0U;
    vlSelfRef.__PVT__CLINT_awburst = 0U;
    vlSelfRef.__PVT__CLINT_awsize = 0U;
    vlSelfRef.__PVT__CLINT_awlen = 0U;
    vlSelfRef.__PVT__CLINT_awid = 0U;
    vlSelfRef.__PVT__S_awaddr = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                  ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                      ? vlSymsp->TOP.lsu_addr
                                      : 0U) : ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid)
                                                ? vlSymsp->TOP.lsu_addr
                                                : 0U));
    vlSelfRef.__PVT__UART_wlast = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                   && ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))
                                        ? (IData)(vlSelfRef.__PVT__S_wlast)
                                        : ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                           && (((0x10000000U 
                                                 <= vlSelfRef.__PVT__S_awaddr) 
                                                & (0x10000004U 
                                                   > vlSelfRef.__PVT__S_awaddr)) 
                                               && (IData)(vlSelfRef.__PVT__S_wlast)))));
    vlSelfRef.__PVT__CLINT_wstrb = 0U;
    vlSelfRef.__PVT__CLINT_wlast = 0U;
    vlSelfRef.__PVT__S_bid = 0U;
    vlSelfRef.__PVT__UART_bready = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                    && ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))
                                         ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready)
                                         : ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                            && (((0x10000000U 
                                                  <= vlSelfRef.__PVT__S_awaddr) 
                                                 & (0x10000004U 
                                                    > vlSelfRef.__PVT__S_awaddr)) 
                                                && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready)))));
    vlSelfRef.__PVT__CLINT_bready = 0U;
    vlSelfRef.__PVT__CLINT_awvalid = 0U;
    vlSelfRef.__PVT__UART_wvalid = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                    && ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))
                                         ? (IData)(vlSelfRef.__PVT__S_wvalid)
                                         : ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                            && (((0x10000000U 
                                                  <= vlSelfRef.__PVT__S_awaddr) 
                                                 & (0x10000004U 
                                                    > vlSelfRef.__PVT__S_awaddr)) 
                                                && (IData)(vlSelfRef.__PVT__S_wvalid)))));
    vlSelfRef.__PVT__UART_awvalid = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                     && ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))
                                          ? (IData)(vlSelfRef.__PVT__S_awvalid)
                                          : ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                             && (((0x10000000U 
                                                   <= vlSelfRef.__PVT__S_awaddr) 
                                                  & (0x10000004U 
                                                     > vlSelfRef.__PVT__S_awaddr)) 
                                                 && (IData)(vlSelfRef.__PVT__S_awvalid)))));
    vlSelfRef.__PVT__CLINT_wvalid = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))) {
        vlSelfRef.__PVT__CLINT_awaddr = 0xdeadbeefU;
        vlSelfRef.__PVT__RAM_awaddr = vlSelfRef.__PVT__S_awaddr;
        vlSelfRef.__PVT__UART_awaddr = 0xdeadbeefU;
        vlSelfRef.__PVT__CLINT_wdata = 0U;
        vlSelfRef.__PVT__CLINT_awburst = 0U;
        vlSelfRef.__PVT__CLINT_awsize = 0U;
        vlSelfRef.__PVT__CLINT_awlen = 0U;
        vlSelfRef.__PVT__CLINT_awid = 0U;
        vlSelfRef.__PVT__UART_wstrb = 0U;
        vlSelfRef.__PVT__UART_wdata = 0U;
        vlSelfRef.__PVT__UART_awburst = 0U;
        vlSelfRef.__PVT__UART_awsize = 0U;
        vlSelfRef.__PVT__UART_awlen = 0U;
        vlSelfRef.__PVT__UART_awid = 0U;
        vlSelfRef.__PVT__RAM_awid = vlSelfRef.__PVT__S_awid;
        vlSelfRef.__PVT__RAM_awlen = vlSelfRef.__PVT__S_awlen;
        vlSelfRef.__PVT__RAM_awsize = vlSelfRef.__PVT__S_awsize;
        vlSelfRef.__PVT__RAM_awburst = vlSelfRef.__PVT__S_awburst;
        vlSelfRef.__PVT__RAM_wdata = vlSelfRef.__PVT__S_wdata;
        vlSelfRef.__PVT__RAM_wstrb = vlSelfRef.__PVT__S_wstrb;
        vlSelfRef.__PVT__RAM_wlast = vlSelfRef.__PVT__S_wlast;
        vlSelfRef.__PVT__CLINT_wstrb = 0U;
        vlSelfRef.__PVT__CLINT_wlast = 0U;
        vlSelfRef.__PVT__S_bid = 0U;
        vlSelfRef.__PVT__RAM_bready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready;
        vlSelfRef.__PVT__CLINT_bready = 0U;
        vlSelfRef.__PVT__CLINT_awvalid = 0U;
        vlSelfRef.__PVT__RAM_awvalid = vlSelfRef.__PVT__S_awvalid;
        vlSelfRef.__PVT__RAM_wvalid = vlSelfRef.__PVT__S_wvalid;
        vlSelfRef.__PVT__CLINT_wvalid = 0U;
        vlSelfRef.__PVT__S_awready = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
        vlSelfRef.__PVT__S_wready = (0U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))) {
            vlSelfRef.__PVT__CLINT_awaddr = 0xdeadbeefU;
            vlSelfRef.__PVT__RAM_awaddr = 0xdeadbeefU;
            vlSelfRef.__PVT__UART_awaddr = (vlSelfRef.__PVT__S_awaddr 
                                            - (IData)(0x10000000U));
            vlSelfRef.__PVT__CLINT_wdata = 0U;
            vlSelfRef.__PVT__CLINT_awburst = 0U;
            vlSelfRef.__PVT__CLINT_awsize = 0U;
            vlSelfRef.__PVT__CLINT_awlen = 0U;
            vlSelfRef.__PVT__CLINT_awid = 0U;
            vlSelfRef.__PVT__UART_wstrb = vlSelfRef.__PVT__S_wstrb;
            vlSelfRef.__PVT__UART_wdata = vlSelfRef.__PVT__S_wdata;
            vlSelfRef.__PVT__UART_awburst = vlSelfRef.__PVT__S_awburst;
            vlSelfRef.__PVT__UART_awsize = vlSelfRef.__PVT__S_awsize;
            vlSelfRef.__PVT__UART_awlen = vlSelfRef.__PVT__S_awlen;
            vlSelfRef.__PVT__UART_awid = vlSelfRef.__PVT__S_awid;
            vlSelfRef.__PVT__RAM_awid = 0U;
            vlSelfRef.__PVT__RAM_awlen = 0U;
            vlSelfRef.__PVT__RAM_awsize = 0U;
            vlSelfRef.__PVT__RAM_awburst = 0U;
            vlSelfRef.__PVT__RAM_wdata = 0U;
            vlSelfRef.__PVT__RAM_wstrb = 0U;
            vlSelfRef.__PVT__CLINT_wstrb = 0U;
            vlSelfRef.__PVT__CLINT_wlast = 0U;
            vlSelfRef.__PVT__S_bid = vlSelfRef.__PVT__UART_bid;
            vlSelfRef.__PVT__CLINT_bready = 0U;
            vlSelfRef.__PVT__CLINT_awvalid = 0U;
            vlSelfRef.__PVT__CLINT_wvalid = 0U;
            vlSelfRef.__PVT__S_awready = (0U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state));
            vlSelfRef.__PVT__S_wready = (0U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state));
        } else if ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))) {
            vlSelfRef.__PVT__CLINT_awaddr = (vlSelfRef.__PVT__S_awaddr 
                                             - (IData)(0x10000048U));
            vlSelfRef.__PVT__RAM_awaddr = 0xdeadbeefU;
            vlSelfRef.__PVT__UART_awaddr = 0xdeadbeefU;
            vlSelfRef.__PVT__CLINT_wdata = vlSelfRef.__PVT__S_wdata;
            vlSelfRef.__PVT__CLINT_awburst = vlSelfRef.__PVT__S_awburst;
            vlSelfRef.__PVT__CLINT_awsize = vlSelfRef.__PVT__S_awsize;
            vlSelfRef.__PVT__CLINT_awlen = vlSelfRef.__PVT__S_awlen;
            vlSelfRef.__PVT__CLINT_awid = vlSelfRef.__PVT__S_awid;
            vlSelfRef.__PVT__UART_wstrb = 0U;
            vlSelfRef.__PVT__UART_wdata = 0U;
            vlSelfRef.__PVT__UART_awburst = 0U;
            vlSelfRef.__PVT__UART_awsize = 0U;
            vlSelfRef.__PVT__UART_awlen = 0U;
            vlSelfRef.__PVT__UART_awid = 0U;
            vlSelfRef.__PVT__RAM_awid = 0U;
            vlSelfRef.__PVT__RAM_awlen = 0U;
            vlSelfRef.__PVT__RAM_awsize = 0U;
            vlSelfRef.__PVT__RAM_awburst = 0U;
            vlSelfRef.__PVT__RAM_wdata = 0U;
            vlSelfRef.__PVT__RAM_wstrb = 0U;
            vlSelfRef.__PVT__CLINT_wstrb = vlSelfRef.__PVT__S_wstrb;
            vlSelfRef.__PVT__CLINT_wlast = vlSelfRef.__PVT__S_wlast;
            vlSelfRef.__PVT__S_bid = vlSelfRef.__PVT__CLINT_bid;
            vlSelfRef.__PVT__CLINT_bready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready;
            vlSelfRef.__PVT__CLINT_awvalid = vlSelfRef.__PVT__S_awvalid;
            vlSelfRef.__PVT__CLINT_wvalid = vlSelfRef.__PVT__S_wvalid;
            vlSelfRef.__PVT__S_awready = (0U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state));
            vlSelfRef.__PVT__S_wready = (0U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state));
        } else {
            if (((0x10000000U <= vlSelfRef.__PVT__S_awaddr) 
                 & (0x10000004U > vlSelfRef.__PVT__S_awaddr))) {
                vlSelfRef.__PVT__CLINT_awaddr = 0xdeadbeefU;
                vlSelfRef.__PVT__RAM_awaddr = 0xdeadbeefU;
                vlSelfRef.__PVT__UART_awaddr = (vlSelfRef.__PVT__S_awaddr 
                                                - (IData)(0x10000000U));
                vlSelfRef.__PVT__CLINT_wdata = 0U;
                vlSelfRef.__PVT__CLINT_awburst = 0U;
                vlSelfRef.__PVT__CLINT_awsize = 0U;
                vlSelfRef.__PVT__CLINT_awlen = 0U;
                vlSelfRef.__PVT__CLINT_awid = 0U;
                vlSelfRef.__PVT__UART_wstrb = vlSelfRef.__PVT__S_wstrb;
                vlSelfRef.__PVT__UART_wdata = vlSelfRef.__PVT__S_wdata;
                vlSelfRef.__PVT__UART_awburst = vlSelfRef.__PVT__S_awburst;
                vlSelfRef.__PVT__UART_awsize = vlSelfRef.__PVT__S_awsize;
                vlSelfRef.__PVT__UART_awlen = vlSelfRef.__PVT__S_awlen;
                vlSelfRef.__PVT__UART_awid = vlSelfRef.__PVT__S_awid;
                vlSelfRef.__PVT__RAM_awid = 0U;
                vlSelfRef.__PVT__RAM_awlen = 0U;
                vlSelfRef.__PVT__RAM_awsize = 0U;
                vlSelfRef.__PVT__RAM_awburst = 0U;
                vlSelfRef.__PVT__RAM_wdata = 0U;
                vlSelfRef.__PVT__RAM_wstrb = 0U;
                vlSelfRef.__PVT__CLINT_wstrb = 0U;
                vlSelfRef.__PVT__CLINT_wlast = 0U;
                vlSelfRef.__PVT__CLINT_bready = 0U;
                vlSelfRef.__PVT__CLINT_awvalid = 0U;
                vlSelfRef.__PVT__CLINT_wvalid = 0U;
                vlSelfRef.__PVT__S_awready = (0U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state));
                vlSelfRef.__PVT__S_wready = (0U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state));
            } else {
                if (((0x10000048U <= vlSelfRef.__PVT__S_awaddr) 
                     & (0x10000050U > vlSelfRef.__PVT__S_awaddr))) {
                    vlSelfRef.__PVT__CLINT_awaddr = 
                        (vlSelfRef.__PVT__S_awaddr 
                         - (IData)(0x10000048U));
                    vlSelfRef.__PVT__RAM_awaddr = 0xdeadbeefU;
                    vlSelfRef.__PVT__CLINT_wdata = vlSelfRef.__PVT__S_wdata;
                    vlSelfRef.__PVT__CLINT_awburst 
                        = vlSelfRef.__PVT__S_awburst;
                    vlSelfRef.__PVT__CLINT_awsize = vlSelfRef.__PVT__S_awsize;
                    vlSelfRef.__PVT__CLINT_awlen = vlSelfRef.__PVT__S_awlen;
                    vlSelfRef.__PVT__CLINT_awid = vlSelfRef.__PVT__S_awid;
                    vlSelfRef.__PVT__RAM_awid = 0U;
                    vlSelfRef.__PVT__RAM_awlen = 0U;
                    vlSelfRef.__PVT__RAM_awsize = 0U;
                    vlSelfRef.__PVT__RAM_awburst = 0U;
                    vlSelfRef.__PVT__RAM_wdata = 0U;
                    vlSelfRef.__PVT__RAM_wstrb = 0U;
                    vlSelfRef.__PVT__CLINT_wstrb = vlSelfRef.__PVT__S_wstrb;
                    vlSelfRef.__PVT__CLINT_wlast = vlSelfRef.__PVT__S_wlast;
                    vlSelfRef.__PVT__CLINT_bready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready;
                    vlSelfRef.__PVT__CLINT_awvalid 
                        = vlSelfRef.__PVT__S_awvalid;
                    vlSelfRef.__PVT__CLINT_wvalid = vlSelfRef.__PVT__S_wvalid;
                    vlSelfRef.__PVT__S_awready = (0U 
                                                  == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state));
                    vlSelfRef.__PVT__S_wready = (0U 
                                                 == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state));
                } else {
                    vlSelfRef.__PVT__RAM_awaddr = vlSelfRef.__PVT__S_awaddr;
                    vlSelfRef.__PVT__RAM_awid = vlSelfRef.__PVT__S_awid;
                    vlSelfRef.__PVT__RAM_awlen = vlSelfRef.__PVT__S_awlen;
                    vlSelfRef.__PVT__RAM_awsize = vlSelfRef.__PVT__S_awsize;
                    vlSelfRef.__PVT__RAM_awburst = vlSelfRef.__PVT__S_awburst;
                    vlSelfRef.__PVT__RAM_wdata = vlSelfRef.__PVT__S_wdata;
                    vlSelfRef.__PVT__RAM_wstrb = vlSelfRef.__PVT__S_wstrb;
                    vlSelfRef.__PVT__S_awready = (0U 
                                                  == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
                    vlSelfRef.__PVT__S_wready = (0U 
                                                 == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state));
                }
                vlSelfRef.__PVT__UART_awaddr = 0xdeadbeefU;
                vlSelfRef.__PVT__UART_wstrb = 0U;
                vlSelfRef.__PVT__UART_wdata = 0U;
                vlSelfRef.__PVT__UART_awburst = 0U;
                vlSelfRef.__PVT__UART_awsize = 0U;
                vlSelfRef.__PVT__UART_awlen = 0U;
                vlSelfRef.__PVT__UART_awid = 0U;
            }
            if ((1U & (~ ((0x10000000U <= vlSelfRef.__PVT__S_awaddr) 
                          & (0x10000004U > vlSelfRef.__PVT__S_awaddr))))) {
                if ((1U & (~ ((0x10000048U <= vlSelfRef.__PVT__S_awaddr) 
                              & (0x10000050U > vlSelfRef.__PVT__S_awaddr))))) {
                    vlSelfRef.__PVT__S_bid = 0U;
                }
            }
        }
        vlSelfRef.__PVT__RAM_wlast = ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                      && ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                          && ((1U & 
                                               (~ (
                                                   (0x10000000U 
                                                    <= vlSelfRef.__PVT__S_awaddr) 
                                                   & (0x10000004U 
                                                      > vlSelfRef.__PVT__S_awaddr)))) 
                                              && ((1U 
                                                   & (~ 
                                                      ((0x10000048U 
                                                        <= vlSelfRef.__PVT__S_awaddr) 
                                                       & (0x10000050U 
                                                          > vlSelfRef.__PVT__S_awaddr)))) 
                                                  && (IData)(vlSelfRef.__PVT__S_wlast)))));
        vlSelfRef.__PVT__RAM_bready = ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                       && ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                           && ((1U 
                                                & (~ 
                                                   ((0x10000000U 
                                                     <= vlSelfRef.__PVT__S_awaddr) 
                                                    & (0x10000004U 
                                                       > vlSelfRef.__PVT__S_awaddr)))) 
                                               && ((1U 
                                                    & (~ 
                                                       ((0x10000048U 
                                                         <= vlSelfRef.__PVT__S_awaddr) 
                                                        & (0x10000050U 
                                                           > vlSelfRef.__PVT__S_awaddr)))) 
                                                   && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready)))));
        vlSelfRef.__PVT__RAM_awvalid = ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                        && ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                            && ((1U 
                                                 & (~ 
                                                    ((0x10000000U 
                                                      <= vlSelfRef.__PVT__S_awaddr) 
                                                     & (0x10000004U 
                                                        > vlSelfRef.__PVT__S_awaddr)))) 
                                                && ((1U 
                                                     & (~ 
                                                        ((0x10000048U 
                                                          <= vlSelfRef.__PVT__S_awaddr) 
                                                         & (0x10000050U 
                                                            > vlSelfRef.__PVT__S_awaddr)))) 
                                                    && (IData)(vlSelfRef.__PVT__S_awvalid)))));
        vlSelfRef.__PVT__RAM_wvalid = ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                       && ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg)) 
                                           && ((1U 
                                                & (~ 
                                                   ((0x10000000U 
                                                     <= vlSelfRef.__PVT__S_awaddr) 
                                                    & (0x10000004U 
                                                       > vlSelfRef.__PVT__S_awaddr)))) 
                                               && ((1U 
                                                    & (~ 
                                                       ((0x10000048U 
                                                         <= vlSelfRef.__PVT__S_awaddr) 
                                                        & (0x10000050U 
                                                           > vlSelfRef.__PVT__S_awaddr)))) 
                                                   && (IData)(vlSelfRef.__PVT__S_wvalid)))));
    }
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) {
            vlSelfRef.__PVT__DRAM_awready = (1U & (IData)(vlSelfRef.__PVT__S_awready));
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = 0U;
            vlSelfRef.__PVT__DRAM_wready = (1U & (IData)(vlSelfRef.__PVT__S_wready));
        } else {
            vlSelfRef.__PVT__DRAM_awready = (1U & 0U);
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready 
                = (1U & (IData)(vlSelfRef.__PVT__S_wready));
            vlSelfRef.__PVT__DRAM_wready = 0U;
        }
    } else {
        vlSelfRef.__PVT__DRAM_awready = (1U & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                               && (IData)(vlSelfRef.__PVT__S_awready)));
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = 0U;
            vlSelfRef.__PVT__DRAM_wready = vlSelfRef.__PVT__S_wready;
        }
    }
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_arvalid 
        = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
           & ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
               ? (IData)(vlSelfRef.__PVT__S_arvalid)
               : ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
                  & ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3) 
                     & (IData)(vlSelfRef.__PVT__S_arvalid)))));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_arvalid 
        = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
           & ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
              & ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                  ? (IData)(vlSelfRef.__PVT__S_arvalid)
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)) 
                     & ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_4) 
                        & (IData)(vlSelfRef.__PVT__S_arvalid))))));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rready 
        = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
           & ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready)
               : ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
                  & ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3) 
                     & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready)))));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rready 
        = ((1U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
           & ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
              & ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                  ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready)
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)) 
                     & ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_4) 
                        & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready))))));
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
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__start 
        = ((0U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state)) 
           & ((IData)(vlSelfRef.__PVT__UART_awvalid) 
              & (IData)(vlSelfRef.__PVT__UART_wvalid)));
    __Vtableidx6 = ((((IData)(vlSelfRef.__PVT__UART_bready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__UART_wvalid) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__UART_awvalid) 
                        << 2U) | (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state)));
    vlSelfRef.__PVT__UART_inst__DOT__w_next = Vtop__ConstPool__TABLE_h1b1ed272_0
        [__Vtableidx6];
    vlSelfRef.__PVT__CLINT_inst__DOT__w_req_fire = 
        ((0U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state)) 
         & ((IData)(vlSelfRef.__PVT__CLINT_awvalid) 
            & (IData)(vlSelfRef.__PVT__CLINT_wvalid)));
    __Vtableidx8 = ((((IData)(vlSelfRef.__PVT__CLINT_bready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__CLINT_wvalid) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__CLINT_awvalid) 
                        << 2U) | (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state)));
    vlSelfRef.__PVT__CLINT_inst__DOT__w_next = Vtop__ConstPool__TABLE_h1b1ed272_0
        [__Vtableidx8];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           && ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                ? 0U : (1U & (IData)(vlSelfRef.__PVT__S_awready))));
    __Vtableidx5 = (((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rready) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__UART_inst__DOT__r_state))));
    vlSelfRef.__PVT__UART_inst__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx5];
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_arready 
        = ((0U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__r_state)) 
           | ((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rready) 
              & (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rvalid)));
    if ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))) {
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arvalid 
            = vlSelfRef.__PVT__S_arvalid;
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rready 
            = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready;
    } else {
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arvalid 
            = ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
               & ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)) 
                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_4)) 
                        & (IData)(vlSelfRef.__PVT__S_arvalid)))));
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rready 
            = ((2U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
               & ((4U != (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg)) 
                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)) 
                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_4)) 
                        & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready)))));
    }
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rready) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__RAM__DOT__r_state))));
    vlSelfRef.__PVT__RAM__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx3];
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arready 
        = ((0U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
           | ((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rready) 
              & (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid)));
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rready) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_state))));
    vlSelfRef.__PVT__CLINT_inst__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx7];
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_arready 
        = ((0U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_state)) 
           | ((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rready) 
              & (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready 
        = ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
            ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arready)
            : ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_arready)
                : ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                    ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_arready)
                    : ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)
                        ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_arready)
                        : ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_4)
                            ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_arready)
                            : (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arready))))));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__IROM_arready = (1U & 0U);
            vlSelfRef.__PVT__DRAM_arready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
        } else {
            vlSelfRef.__PVT__IROM_arready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
            vlSelfRef.__PVT__DRAM_arready = (1U & 0U);
        }
    } else {
        vlSelfRef.__PVT__IROM_arready = (1U & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                                               && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready)));
        vlSelfRef.__PVT__DRAM_arready = (1U & ((1U 
                                                & (~ (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid))) 
                                               && ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                                                   && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready))));
    }
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__start 
        = ((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_arvalid) 
           & (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_arready));
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start 
        = ((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arvalid) 
           & (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_arready));
    vlSelfRef.__PVT__CLINT_inst__DOT__r_req_fire = 
        ((IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_arvalid) 
         & (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_arready));
}

void Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(IData/*31:0*/ reason);
void Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(IData/*31:0*/ addr);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__CLINT_inst__DOT__mtime_L;
    __Vdly__CLINT_inst__DOT__mtime_L = 0;
    IData/*31:0*/ __Vdly__CLINT_inst__DOT__mtime_H;
    __Vdly__CLINT_inst__DOT__mtime_H = 0;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__PVT__CLINT_inst__DOT__w_req_fire))) {
        VL_WRITEF_NX("Error! CLINT Only READ!\n",0);
    }
    if (VL_UNLIKELY((vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__start))) {
        VL_WRITEF_NX("%c",0,8,(0x000000ffU & vlSelfRef.__PVT__UART_wdata));
        Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(2U);
    }
    if (vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start) {
        Vtop___024unit____Vdpiimwrap_difftest_mem_set_TOP____024unit(vlSelfRef.__PVT__RAM_awaddr);
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.__PVT__RAM_awaddr, vlSelfRef.__PVT__RAM_wdata, (IData)(vlSelfRef.__PVT__RAM_wstrb));
    }
    __Vdly__CLINT_inst__DOT__mtime_L = vlSelfRef.__PVT__CLINT_inst__DOT__mtime_L;
    __Vdly__CLINT_inst__DOT__mtime_H = vlSelfRef.__PVT__CLINT_inst__DOT__mtime_H;
    if ((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_next_state));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_next_state));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next));
    if (vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__start) {
        vlSelfRef.__PVT__UART_inst__DOT__raddr_reg 
            = ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                ? 0xdeadbeefU : ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? (vlSelfRef.__PVT__S_araddr 
                                     - (IData)(0x10000000U))
                                  : ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                      ? 0xdeadbeefU
                                      : ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)
                                          ? (vlSelfRef.__PVT__S_araddr 
                                             - (IData)(0x10000000U))
                                          : 0xdeadbeefU))));
    }
    if (vlSelfRef.__PVT__CLINT_inst__DOT__r_req_fire) {
        vlSelfRef.__PVT__CLINT_inst__DOT__raddr_reg 
            = ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                ? 0xdeadbeefU : ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                  ? 0xdeadbeefU : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                    ? 
                                                   (vlSelfRef.__PVT__S_araddr 
                                                    - (IData)(0x10000048U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_4)
                                                      ? 
                                                     (vlSelfRef.__PVT__S_araddr 
                                                      - (IData)(0x10000048U))
                                                      : 0xdeadbeefU)))));
    }
    if (vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start) {
        vlSelfRef.__PVT__RAM__DOT__raddr_reg = ((1U 
                                                 == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                 ? vlSelfRef.__PVT__S_araddr
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                  ? 0xdeadbeefU
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                                   ? 0xdeadbeefU
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_3)
                                                    ? 0xdeadbeefU
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_he2b63832_1_4)
                                                     ? 0xdeadbeefU
                                                     : vlSelfRef.__PVT__S_araddr)))));
    }
    if ((((1U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__r_state)) 
          & (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock)) 
         & (~ (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rready)))) {
        vlSelfRef.__PVT__UART_inst__DOT__rdata_hold = 0xdeadbeefU;
    }
    if ((((1U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_state)) 
          & (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock)) 
         & (~ (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rready)))) {
        vlSelfRef.__PVT__CLINT_inst__DOT__rdata_hold 
            = vlSelfRef.__PVT__CLINT_inst__DOT__current_clint_rdata;
    }
    if ((((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
          & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock)) 
         & (~ (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rready)))) {
        vlSelfRef.__PVT__RAM__DOT__rdata_hold = vlSelfRef.__PVT__RAM__DOT__current_mem_rdata;
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__CLINT_inst__DOT__mtime_L = 0U;
        __Vdly__CLINT_inst__DOT__mtime_H = 0U;
    } else {
        __Vdly__CLINT_inst__DOT__mtime_H = (IData)(
                                                   ((1ULL 
                                                     + 
                                                     (((QData)((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__mtime_H)) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__mtime_L)))) 
                                                    >> 0x00000020U));
        __Vdly__CLINT_inst__DOT__mtime_L = ((IData)(1U) 
                                            + vlSelfRef.__PVT__CLINT_inst__DOT__mtime_L);
    }
    vlSelfRef.__PVT__CLINT_inst__DOT__mtime_L = __Vdly__CLINT_inst__DOT__mtime_L;
    vlSelfRef.__PVT__CLINT_inst__DOT__mtime_H = __Vdly__CLINT_inst__DOT__mtime_H;
    vlSelfRef.__PVT__CLINT_inst__DOT__current_clint_rdata 
        = ((0U != vlSelfRef.__PVT__CLINT_inst__DOT__raddr_reg)
            ? vlSelfRef.__PVT__CLINT_inst__DOT__mtime_H
            : vlSelfRef.__PVT__CLINT_inst__DOT__mtime_L);
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__UART_inst__DOT__w_state = 0U;
        vlSelfRef.__PVT__CLINT_inst__DOT__w_state = 0U;
        vlSelfRef.__PVT__RAM__DOT__w_state = 0U;
    } else {
        vlSelfRef.__PVT__UART_inst__DOT__w_state = vlSelfRef.__PVT__UART_inst__DOT__w_next;
        vlSelfRef.__PVT__CLINT_inst__DOT__w_state = vlSelfRef.__PVT__CLINT_inst__DOT__w_next;
        vlSelfRef.__PVT__RAM__DOT__w_state = vlSelfRef.__PVT__RAM__DOT__w_next;
    }
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__RAM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__5__Vfuncout);
    vlSelfRef.__PVT__RAM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__5__Vfuncout;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg = 0U;
        vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__S_awready) & (IData)(vlSelfRef.__PVT__S_awvalid))) {
            if (((0x80000000U <= vlSelfRef.__PVT__S_awaddr) 
                 & (0x88000000U > vlSelfRef.__PVT__S_awaddr))) {
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg = 1U;
            } else if (((0x10000000U <= vlSelfRef.__PVT__S_awaddr) 
                        & (0x10000004U > vlSelfRef.__PVT__S_awaddr))) {
                Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(4U);
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg = 2U;
            } else if (((0x10000048U <= vlSelfRef.__PVT__S_awaddr) 
                        & (0x10000050U > vlSelfRef.__PVT__S_awaddr))) {
                Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(4U);
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg = 4U;
            } else {
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg = 0U;
            }
        }
        if (((IData)(vlSelfRef.__PVT__S_arvalid) & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready))) {
            if (((0x80000000U <= vlSelfRef.__PVT__S_araddr) 
                 & (0x88000000U > vlSelfRef.__PVT__S_araddr))) {
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg = 1U;
            } else if (((0x10000000U <= vlSelfRef.__PVT__S_araddr) 
                        & (0x10000004U > vlSelfRef.__PVT__S_araddr))) {
                Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(4U);
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg = 2U;
            } else if (((0x10000048U <= vlSelfRef.__PVT__S_araddr) 
                        & (0x10000050U > vlSelfRef.__PVT__S_araddr))) {
                Vtop___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(4U);
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg = 4U;
            } else {
                vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__R_next_state)))) {
            vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__W_next_state)))) {
            vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg = 0U;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__UART_inst__DOT__r_state = 0U;
        vlSelfRef.__PVT__CLINT_inst__DOT__r_state = 0U;
        vlSelfRef.__PVT__RAM__DOT__r_state = 0U;
    } else {
        vlSelfRef.__PVT__UART_inst__DOT__r_state = vlSelfRef.__PVT__UART_inst__DOT__r_next;
        vlSelfRef.__PVT__CLINT_inst__DOT__r_state = vlSelfRef.__PVT__CLINT_inst__DOT__r_next;
        vlSelfRef.__PVT__RAM__DOT__r_state = vlSelfRef.__PVT__RAM__DOT__r_next;
    }
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state))
            ? vlSelfRef.__PVT__RAM__DOT__rdata_hold
            : vlSelfRef.__PVT__RAM__DOT__current_mem_rdata);
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
        = ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
            ? vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata
            : ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                ? ((2U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__r_state))
                    ? vlSelfRef.__PVT__UART_inst__DOT__rdata_hold
                    : 0xdeadbeefU) : ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                                       ? ((2U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_state))
                                           ? vlSelfRef.__PVT__CLINT_inst__DOT__rdata_hold
                                           : vlSelfRef.__PVT__CLINT_inst__DOT__current_clint_rdata)
                                       : vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid 
        = ((0U == (IData)(vlSymsp->TOP__top__IFU_0.state)) 
           | (1U == (IData)(vlSymsp->TOP__top__IFU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready;
        } else {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
                = (3U != (IData)(vlSymsp->TOP__top__IFU_0.state));
        }
    } else {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready = 0U;
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
    CData/*0:0*/ __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy;
    __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy = 0;
    CData/*3:0*/ __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt = 0;
    CData/*3:0*/ __Vdly__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 0;
    CData/*0:0*/ __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy;
    __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy = 0;
    CData/*1:0*/ __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt = 0;
    CData/*1:0*/ __Vdly__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 0;
    CData/*0:0*/ __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy;
    __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy = 0;
    CData/*3:0*/ __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt = 0;
    CData/*3:0*/ __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 0;
    CData/*0:0*/ __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy;
    __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy = 0;
    CData/*1:0*/ __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt = 0;
    CData/*1:0*/ __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 0;
    // Body
    __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy 
        = vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__busy;
    __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy 
        = vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__busy;
    __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__RAM__DOT__write_delay_inst__DOT__busy = vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__busy;
    __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt;
    __Vdly__RAM__DOT__read_delay_inst__DOT__busy = vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__busy;
    __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy 
        = vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__busy;
    __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy 
        = vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__busy;
    __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt 
        = vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt;
    __Vdly__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    if (vlSymsp->TOP.rst) {
        __Vdly__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = 1U;
        __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock = 0U;
        __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock = 0U;
        __Vdly__RAM__DOT__write_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__RAM__DOT__write_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock = 0U;
        __Vdly__RAM__DOT__read_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__RAM__DOT__read_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock = 0U;
        __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock = 0U;
        __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy = 0U;
        vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en = 1U;
        __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt = 0U;
        vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock = 0U;
    } else {
        if (vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en) {
            __Vdly__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 1U) | (1U & ((IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en) {
            __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 1U) | (1U & ((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
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
        if (vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en) {
            __Vdly__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 3U) | (7U & ((IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        if (vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en) {
            __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
                = (((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback) 
                    << 3U) | (7U & ((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                    >> 1U)));
        }
        vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__start) 
                    & (~ (IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en = 0U;
            }
        }
        vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_req_fire) 
                    & (~ (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock = 1U;
                __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt 
                    = (3U & ((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state) 
                             - (IData)(1U)));
                __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en = 0U;
            }
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
        vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock = 1U;
                __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt) 
                                      - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__start) 
                    & (~ (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock = 1U;
                __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                      - (IData)(1U)));
                __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en = 0U;
            }
        }
        vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock = 0U;
        if (vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__busy) {
            if ((1U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt))) {
                vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock = 1U;
                __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt) 
                                      - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_req_fire) 
                    & (~ (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__start_d)))) {
            if ((1U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))) {
                vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock = 1U;
                __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy = 0U;
                vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en = 1U;
                __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt = 0U;
            } else {
                __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state) 
                                      - (IData)(1U)));
                __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy = 1U;
                vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en = 0U;
            }
        }
    }
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lock_state = 0U;
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__busy 
        = __Vdly__UART_inst__DOT__write_delay_inst__DOT__busy;
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt 
        = __Vdly__UART_inst__DOT__write_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__busy 
        = __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__busy;
    vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt 
        = __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state;
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
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__busy 
        = __Vdly__UART_inst__DOT__read_delay_inst__DOT__busy;
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt 
        = __Vdly__UART_inst__DOT__read_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__busy 
        = __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__busy;
    vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt 
        = __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt;
    vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state 
        = __Vdly__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state;
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__start));
    vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_req_fire));
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__start));
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__start));
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__start));
    vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__start_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_req_fire));
}

void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_bvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
              & (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
              & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__r_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__r_state)) 
              & (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_state)) 
              & (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__S_bvalid = ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))
                                  ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_bvalid)
                                  : ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))
                                      ? ((2U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state)) 
                                         | ((1U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__w_state)) 
                                            & (IData)(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock)))
                                      : ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg))
                                          ? ((2U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state)) 
                                             | ((1U 
                                                 == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__w_state)) 
                                                & (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock)))
                                          : (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_bvalid))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
        = ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
            ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid)
            : ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rvalid)
                : ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))
                    ? (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid)
                    : (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid))));
}

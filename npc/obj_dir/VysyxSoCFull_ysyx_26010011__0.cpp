// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
    vlSelfRef.PC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC;
    vlSelfRef.__PVT__COMP_0__DOT__inA = ((0U == (0x0000001fU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                    >> 0x0000000fU)))
                                          ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR
                                         [(0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 0x0000000fU))]);
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__EXU_0__DOT__inA = ((IData)(vlSelfRef.__VdfgRegularize_he0d61652_0_0)
                                         ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))
                                             ? vlSelfRef.PC
                                             : vlSelfRef.__PVT__COMP_0__DOT__inA)
                                         : vlSelfRef.__PVT__COMP_0__DOT__inA);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((~ (IData)(vlSelfRef.reset)) & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                        >> 3U)) : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                           : 0U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((((0x0000ff00U 
                                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                      ? 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                      >> 0x00000018U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r3)) 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                       >> 0x00000010U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r2)))) 
                                               << 0x00000010U) 
                                              | ((0x0000ff00U 
                                                  & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                       >> 8U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r1)) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                        ? vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r0)))))
                                           : 0U)));
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm
                                          : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata);
    vlSelfRef.__PVT__EXU_0__DOT__inB = ((IData)(vlSelfRef.__VdfgRegularize_he0d61652_0_0)
                                         ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm
                                         : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__WCSREN)
                                             ? vlSelfRef.__PVT__COMP_0__DOT__inA
                                             : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        } else {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rready;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
        }
    } else {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready = 0U;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
    }
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSelfRef.__PVT__COMP_0__DOT__inA 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)
                                     ? (~ (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__inB)))
                                     : (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__inB))));
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dnpc = ((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)
                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC
                       : ((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)
                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC
                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wdata 
        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata, 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr), 3U));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wstrb 
        = (0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask) 
                          << (3U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr)));
}

extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h934df3aa_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hb7843f96_0;
extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h46bc2db3_0;
extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h56ed874e_0;

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_1)) 
                                           | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_1) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen)) 
                                           | (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        vlSelfRef.__PVT__io_master_arburst = 1U;
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr;
        } else {
            vlSelfRef.__PVT__io_master_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC;
        }
        vlSelfRef.__PVT__io_master_arsize = 2U;
    } else {
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) {
            vlSelfRef.__PVT__io_master_arburst = 1U;
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC;
        } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) {
            vlSelfRef.__PVT__io_master_arburst = 1U;
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr;
        } else {
            vlSelfRef.__PVT__io_master_arburst = 0U;
            vlSelfRef.__PVT__io_master_arsize = 0U;
            vlSelfRef.__PVT__io_master_araddr = 0U;
        }
        vlSelfRef.__PVT__io_master_arvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                              || (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
    }
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                        << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                  << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rready) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid) 
                                << 2U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state 
        = VysyxSoCFull__ConstPool__TABLE_h934df3aa_0
        [__Vtableidx1];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next 
        = VysyxSoCFull__ConstPool__TABLE_hb7843f96_0
        [__Vtableidx1];
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) {
            vlSelfRef.__PVT__io_master_wlast = 1U;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = 0U;
            vlSelfRef.__PVT__io_master_awburst = 1U;
            vlSelfRef.__PVT__io_master_wdata = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wdata;
            vlSelfRef.__PVT__io_master_wstrb = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wstrb;
            vlSelfRef.__PVT__DRAM_wready = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)));
            vlSelfRef.__PVT__io_master_awsize = 2U;
            vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr;
        } else {
            vlSelfRef.__PVT__io_master_wlast = 0U;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready 
                = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)));
            vlSelfRef.__PVT__io_master_awburst = 0U;
            vlSelfRef.__PVT__io_master_wdata = 0U;
            vlSelfRef.__PVT__io_master_wstrb = 0U;
            vlSelfRef.__PVT__DRAM_wready = 0U;
            vlSelfRef.__PVT__io_master_awsize = 0U;
            vlSelfRef.__PVT__io_master_awaddr = 0U;
        }
        vlSelfRef.__PVT__io_master_wvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                             && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        vlSelfRef.__PVT__io_master_awvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                              && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
    } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
        vlSelfRef.__PVT__io_master_wlast = 1U;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = 0U;
        vlSelfRef.__PVT__io_master_awburst = 1U;
        vlSelfRef.__PVT__io_master_wdata = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wdata;
        vlSelfRef.__PVT__io_master_wstrb = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_wstrb;
        vlSelfRef.__PVT__DRAM_wready = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)));
        vlSelfRef.__PVT__io_master_awsize = 2U;
        vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr;
        vlSelfRef.__PVT__io_master_wvalid = 1U;
        vlSelfRef.__PVT__io_master_awvalid = 1U;
    } else {
        vlSelfRef.__PVT__io_master_wlast = 0U;
        vlSelfRef.__PVT__io_master_awburst = 0U;
        vlSelfRef.__PVT__io_master_wdata = 0U;
        vlSelfRef.__PVT__io_master_wstrb = 0U;
        vlSelfRef.__PVT__io_master_awsize = 0U;
        vlSelfRef.__PVT__io_master_awaddr = 0U;
        vlSelfRef.__PVT__io_master_wvalid = 0U;
        vlSelfRef.__PVT__io_master_awvalid = 0U;
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                        << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state 
        = VysyxSoCFull__ConstPool__TABLE_h46bc2db3_0
        [__Vtableidx2];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next 
        = VysyxSoCFull__ConstPool__TABLE_h56ed874e_0
        [__Vtableidx2];
}

void VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit();

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) {
        VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
    vlSelfRef.PC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC;
    vlSelfRef.__PVT__COMP_0__DOT__inA = ((0U == (0x0000001fU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                    >> 0x0000000fU)))
                                          ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR
                                         [(0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 0x0000000fU))]);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid)
            : (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state)) 
                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_2) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_full)))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp 
        = (3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                   ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                              >> 1U)) : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid 
        = (0x0000000fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                            ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x00000023U))
                            : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rid_r)
                                       : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__r_id)
                                                 : 0U))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid 
        = (0x0000000fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_0)
                            ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                               >> 2U) : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__w_id)
                                                : 0U)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                        >> 3U)) : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                           : 0U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((((0x0000ff00U 
                                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                      ? 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                      >> 0x00000018U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r3)) 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                       >> 0x00000010U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r2)))) 
                                               << 0x00000010U) 
                                              | ((0x0000ff00U 
                                                  & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data 
                                                       >> 8U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r1)) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_REG)
                                                        ? vlSymsp->TOP__ysyxSoCFull__asic__axi4ram__mem_ext.__PVT__R0_data
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__axi4ram.__PVT__rdata_r0)))))
                                           : 0U)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast 
        = (((((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                  << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                            << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
            >> (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp 
        = (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                 | ((((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15) 
                          << 6U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14) 
                                    << 4U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13) 
                                                << 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12))) 
                       << 0x00000018U) | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11) 
                                             << 6U) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10) 
                                               << 4U)) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9) 
                                               << 2U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))) 
                                          << 0x00000010U)) 
                     | ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7) 
                            << 6U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6) 
                                      << 4U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4))) 
                         << 8U) | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3) 
                                     << 6U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2) 
                                               << 4U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1) 
                                       << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))) 
                    >> (0x0000001fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid), 1U)))));
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
            ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                ? vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata
                : 0U) : 0U);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((~ (IData)(vlSelfRef.reset)) & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he0d61652_0_0 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSTORE) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))))));
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm
                                          : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rready)));
    if (vlSelfRef.__VdfgRegularize_he0d61652_0_0) {
        vlSelfRef.__PVT__EXU_0__DOT__inA = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))
                                             ? vlSelfRef.PC
                                             : vlSelfRef.__PVT__COMP_0__DOT__inA);
        vlSelfRef.__PVT__EXU_0__DOT__inB = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm;
    } else {
        vlSelfRef.__PVT__EXU_0__DOT__inA = vlSelfRef.__PVT__COMP_0__DOT__inA;
        vlSelfRef.__PVT__EXU_0__DOT__inB = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__WCSREN)
                                             ? vlSelfRef.__PVT__COMP_0__DOT__inA
                                             : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata);
    }
    vlSelfRef.__PVT__COMP_0__DOT__out = ((IData)(1U) 
                                         + (vlSelfRef.__PVT__COMP_0__DOT__inA 
                                            + (~ vlSelfRef.__PVT__COMP_0__DOT__inB)));
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)
                                     ? (~ (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__inB)))
                                     : (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__inB))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h46bc2db3_0;
extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h56ed874e_0;

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((~ (IData)(vlSelfRef.reset)) & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (~ (IData)(vlSelfRef.reset))));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) {
            vlSelfRef.__PVT__io_master_awburst = 1U;
            vlSelfRef.__PVT__io_master_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q;
            vlSelfRef.__PVT__io_master_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q;
            vlSelfRef.__PVT__io_master_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q;
            vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q;
            vlSelfRef.__PVT__io_master_wlast = 1U;
        } else {
            vlSelfRef.__PVT__io_master_awburst = 0U;
            vlSelfRef.__PVT__io_master_wdata = 0U;
            vlSelfRef.__PVT__io_master_wstrb = 0U;
            vlSelfRef.__PVT__io_master_awsize = 0U;
            vlSelfRef.__PVT__io_master_awaddr = 0U;
            vlSelfRef.__PVT__io_master_wlast = 0U;
        }
        vlSelfRef.__PVT__io_master_wvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                             && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        vlSelfRef.__PVT__io_master_awvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                              && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
    } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
        vlSelfRef.__PVT__io_master_awburst = 1U;
        vlSelfRef.__PVT__io_master_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q;
        vlSelfRef.__PVT__io_master_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q;
        vlSelfRef.__PVT__io_master_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q;
        vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q;
        vlSelfRef.__PVT__io_master_wlast = 1U;
        vlSelfRef.__PVT__io_master_wvalid = 1U;
        vlSelfRef.__PVT__io_master_awvalid = 1U;
    } else {
        vlSelfRef.__PVT__io_master_awburst = 0U;
        vlSelfRef.__PVT__io_master_wdata = 0U;
        vlSelfRef.__PVT__io_master_wstrb = 0U;
        vlSelfRef.__PVT__io_master_awsize = 0U;
        vlSelfRef.__PVT__io_master_awaddr = 0U;
        vlSelfRef.__PVT__io_master_wlast = 0U;
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

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_he0d61652_0_0;
    __VdfgRegularize_he0d61652_0_0 = 0;
    // Body
    __VdfgRegularize_he0d61652_0_0 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isSTORE) 
                                               | (0x6fU 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))))));
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm
                                          : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata);
    vlSelfRef.__PVT__io_master_arlen = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                         ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                             ? 0U : 3U)
                                         : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid)
                                             ? 3U : 0U));
    if (__VdfgRegularize_he0d61652_0_0) {
        vlSelfRef.__PVT__EXU_0__DOT__inA = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isPC)
                                             ? vlSelfRef.PC
                                             : vlSelfRef.__PVT__COMP_0__DOT__inA);
        vlSelfRef.__PVT__EXU_0__DOT__inB = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm;
    } else {
        vlSelfRef.__PVT__EXU_0__DOT__inA = vlSelfRef.__PVT__COMP_0__DOT__inA;
        vlSelfRef.__PVT__EXU_0__DOT__inB = ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))
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

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wbu_final = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__gpr_WEN)
                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid)
                            : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgExtracted_h790550e9__0)
                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_final) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid))
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid)));
    vlSelfRef.dnpc = (((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__lsu_access_fault))
                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC
                       : ((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)
                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC
                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr));
}

extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h21e9e644_0;
extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hc2a9f976_0;

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen)) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_reqEN))) 
                                           | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        vlSelfRef.__PVT__io_master_arburst = 1U;
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr;
        } else {
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid;
            vlSelfRef.__PVT__io_master_araddr = (0xfffffff0U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        }
    } else {
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) {
            vlSelfRef.__PVT__io_master_arburst = 1U;
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_araddr = (0xfffffff0U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) {
            vlSelfRef.__PVT__io_master_arburst = 1U;
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize;
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
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.reset)) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast))) 
                     << 4U) | ((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state 
        = VysyxSoCFull__ConstPool__TABLE_h21e9e644_0
        [__Vtableidx1];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next 
        = VysyxSoCFull__ConstPool__TABLE_hc2a9f976_0
        [__Vtableidx1];
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready 
        = ((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0)) 
            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready))) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__casez_tmp));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_wready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_awready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_2));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__DRAM_arready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
            vlSelfRef.__PVT__IROM_arready = (1U & 0U);
        } else {
            vlSelfRef.__PVT__DRAM_arready = (1U & 0U);
            vlSelfRef.__PVT__IROM_arready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
        }
    } else {
        vlSelfRef.__PVT__DRAM_arready = (1U & ((1U 
                                                & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid))) 
                                               && ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                                                   && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready))));
        vlSelfRef.__PVT__IROM_arready = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                               && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready)));
    }
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = 0U;
            vlSelfRef.__PVT__DRAM_wready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_wready));
            vlSelfRef.__PVT__DRAM_awready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_awready));
        } else {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready 
                = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_wready));
            vlSelfRef.__PVT__DRAM_wready = 0U;
            vlSelfRef.__PVT__DRAM_awready = (1U & 0U);
        }
    } else {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = 0U;
            vlSelfRef.__PVT__DRAM_wready = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_wready;
        }
        vlSelfRef.__PVT__DRAM_awready = (1U & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                                               && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_awready)));
    }
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           && ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                ? 0U : (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_awready))));
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state));
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
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
    vlSelfRef.PC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC;
    vlSelfRef.__PVT__COMP_0__DOT__inA = ((0U == (0x0000001fU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                    >> 0x0000000fU)))
                                          ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR
                                         [(0x0000001fU 
                                           & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 0x0000000fU))]);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((~ (IData)(vlSelfRef.reset)) & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                           | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (~ (IData)(vlSelfRef.reset))));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) {
            vlSelfRef.__PVT__io_master_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q;
            vlSelfRef.__PVT__io_master_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q;
        } else {
            vlSelfRef.__PVT__io_master_wstrb = 0U;
            vlSelfRef.__PVT__io_master_awsize = 0U;
        }
        vlSelfRef.__PVT__io_master_wvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                             && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
        vlSelfRef.__PVT__io_master_awvalid = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                              && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
    } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
        vlSelfRef.__PVT__io_master_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q;
        vlSelfRef.__PVT__io_master_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q;
        vlSelfRef.__PVT__io_master_wvalid = 1U;
        vlSelfRef.__PVT__io_master_awvalid = 1U;
    } else {
        vlSelfRef.__PVT__io_master_wstrb = 0U;
        vlSelfRef.__PVT__io_master_awsize = 0U;
        vlSelfRef.__PVT__io_master_wvalid = 0U;
        vlSelfRef.__PVT__io_master_awvalid = 0U;
    }
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_he0d61652_0_0;
    __VdfgRegularize_he0d61652_0_0 = 0;
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize 
        = ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
            ? 0U : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                     ? 1U : 2U));
    __VdfgRegularize_he0d61652_0_0 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isSTORE) 
                                               | (0x6fU 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))))));
    vlSelfRef.__PVT__COMP_0__DOT__inB = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI)
                                          ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm
                                          : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata);
    if (__VdfgRegularize_he0d61652_0_0) {
        vlSelfRef.__PVT__EXU_0__DOT__inA = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isPC)
                                             ? vlSelfRef.PC
                                             : vlSelfRef.__PVT__COMP_0__DOT__inA);
        vlSelfRef.__PVT__EXU_0__DOT__inB = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm;
    } else {
        vlSelfRef.__PVT__EXU_0__DOT__inA = vlSelfRef.__PVT__COMP_0__DOT__inA;
        vlSelfRef.__PVT__EXU_0__DOT__inB = ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))
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

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) {
            vlSelfRef.__PVT__io_master_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q;
            vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q;
            vlSelfRef.__PVT__io_master_awburst = 1U;
            vlSelfRef.__PVT__io_master_wlast = 1U;
        } else {
            vlSelfRef.__PVT__io_master_wdata = 0U;
            vlSelfRef.__PVT__io_master_awaddr = 0U;
            vlSelfRef.__PVT__io_master_awburst = 0U;
            vlSelfRef.__PVT__io_master_wlast = 0U;
        }
    } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
        vlSelfRef.__PVT__io_master_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q;
        vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q;
        vlSelfRef.__PVT__io_master_awburst = 1U;
        vlSelfRef.__PVT__io_master_wlast = 1U;
    } else {
        vlSelfRef.__PVT__io_master_wdata = 0U;
        vlSelfRef.__PVT__io_master_awaddr = 0U;
        vlSelfRef.__PVT__io_master_awburst = 0U;
        vlSelfRef.__PVT__io_master_wlast = 0U;
    }
    vlSelfRef.__PVT__io_master_arlen = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                         ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                             ? 0U : 3U)
                                         : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid)
                                             ? 3U : 0U));
}

void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bvalid_reg) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)
             : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bid_reg)
                       : 0U));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
             ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                | ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                    ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                            ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                            : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                        : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                            ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                            : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
                    : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                        ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                            ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                            : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                        : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                            ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                            : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))))
             : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bresp_reg)
                       : 0U));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)
             : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                       ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w
                      [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                       : 0U));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp 
        = (3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                   ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                        ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                   >> 1U)) : 0U) | 
                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                            ? 0U : 3U) : 0U)) : 0U) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                     ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w
                    [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                     : 0U)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0) 
            & (((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                 ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                 : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                     ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                     : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                         ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                         : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
             ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                  ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                             >> 3U)) : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                                : 0U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                  ? 
                                                 ((((0x0000ff00U 
                                                     & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 0x00000018U)
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                           >> 0x00000010U)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                                   << 0x00000010U) 
                                                  | ((0x0000ff00U 
                                                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                           >> 8U)
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))
                                                  : 0U)))
             : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                       ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                      [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                       : 0U));
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
            ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp)
                : 0U) : 0U);
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        } else {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp = 0U;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
        }
    } else {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp = 0U;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
    }
}

void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dnpc = (((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__lsu_access_fault))
                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC
                       : ((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)
                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC
                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr));
}

void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wbu_final = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__gpr_WEN)
                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid)
                            : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgExtracted_h790550e9__0)
                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_final) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid))
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid)));
}

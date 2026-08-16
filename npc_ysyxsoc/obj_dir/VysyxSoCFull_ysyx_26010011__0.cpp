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
    vlSelfRef.__PVT__EXU_0__DOT__a = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_isUseImm)
                                       ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUsePC)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc
                                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val);
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.idu_isRAW = (((~ (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_1)) 
                            & ((0U != (0x0000001fU 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x0000000fU))) 
                               & ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_rs1) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__VdfgRegularize_h6e95ff9d_0_32)) 
                                  | ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_rs1) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_31)) 
                                     | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_rs1) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_in_wen)))))) 
                           | ((((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                | ((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                   | (0U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x00000014U)))) 
                               & ((0U != (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR)) 
                                  & ((0x0b00U != (IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                     & ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd) 
                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_csrrd)) 
                                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                            & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR)))) 
                                        | ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csrrd)) 
                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_opCSR)))) 
                                           | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd) 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR))))))))) 
                              | ((0U != (0x0000001fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                            >> 0x00000014U))) 
                                 & ((((0x0000001fU 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x00000014U)) 
                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__VdfgRegularize_h6e95ff9d_0_32)) 
                                    | ((((0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x00000014U)) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_31)) 
                                       | (((0x0000001fU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U)) 
                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_in_wen)))))));
    vlSelfRef.__PVT__EXU_0__DOT__op_and = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                           & vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__op_or = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                          | vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_7)) 
                                           | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
            | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
           & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = (((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
            | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
           & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_csr_result 
        = ((IData)((2U == (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
            ? vlSelfRef.__PVT__EXU_0__DOT__op_and : 
           ((IData)((1U == (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
             ? vlSelfRef.__PVT__EXU_0__DOT__op_or : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result 
        = ((IData)((0U != (0x0300U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))))
            ? (vlSelfRef.__PVT__EXU_0__DOT__a + ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                 + (IData)((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op) 
                                                                               >> 8U)))))))
            : ((0x00000020U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                : ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                    (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                    : ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                         (0x0000001fU 
                                          & vlSelfRef.__PVT__EXU_0__DOT__b))
                        : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                            ? vlSelfRef.__PVT__EXU_0__DOT__op_and
                            : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                ? vlSelfRef.__PVT__EXU_0__DOT__op_or
                                : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                    ? (vlSelfRef.__PVT__EXU_0__DOT__a 
                                       ^ vlSelfRef.__PVT__EXU_0__DOT__b)
                                    : vlSelfRef.__PVT__EXU_0__DOT__b)))))));
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (~ (IData)(vlSelfRef.reset))));
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid)) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_in_ready)));
    vlSelfRef.__PVT__IDU_0__DOT__idu_in_ready = (1U 
                                                 & ((~ (IData)(vlSelfRef.idu_isRAW)) 
                                                    & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                                                       | (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready))));
    vlSelfRef.flush_valid = (((((IData)(vlSelfRef.__VdfgRegularize_he0d61652_0_0) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isJUMP)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid)) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isBRANCH) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                    & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result)))) 
                             & (IData)(vlSelfRef.__PVT__EXU_0__DOT__exu_in_ready));
}

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        vlSelfRef.__PVT__io_master_arburst = 1U;
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
        } else {
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid;
            vlSelfRef.__PVT__io_master_araddr = (0xfffffffcU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        }
    } else {
        if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) {
            vlSelfRef.__PVT__io_master_arburst = 1U;
            vlSelfRef.__PVT__io_master_arsize = 2U;
            vlSelfRef.__PVT__io_master_araddr = (0xfffffffcU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC);
        } else if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) {
            vlSelfRef.__PVT__io_master_arburst = 1U;
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize;
            vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_alu_result;
        } else {
            vlSelfRef.__PVT__io_master_arburst = 0U;
            vlSelfRef.__PVT__io_master_arsize = 0U;
            vlSelfRef.__PVT__io_master_araddr = 0U;
        }
        vlSelfRef.__PVT__io_master_arvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                              || (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h9a3b5bf8_0;
extern const VlUnpacked<CData/*0:0*/, 512> VysyxSoCFull__ConstPool__TABLE_hc6aeb16d_0;

void VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready) 
                                   << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                             << 2U))) 
                      | ((2U & ((~ (IData)(vlSelfRef.reset)) 
                                << 1U)) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast))) 
                     << 4U) | ((((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready) 
                                 << 3U) | ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state 
        = VysyxSoCFull__ConstPool__TABLE_h9a3b5bf8_0
        [__Vtableidx1];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next 
        = VysyxSoCFull__ConstPool__TABLE_hc6aeb16d_0
        [__Vtableidx1];
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__IROM_arready = (1U & 0U);
            vlSelfRef.__PVT__DRAM_arready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
        } else {
            vlSelfRef.__PVT__IROM_arready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
            vlSelfRef.__PVT__DRAM_arready = (1U & 0U);
        }
    } else {
        vlSelfRef.__PVT__IROM_arready = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                                               && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready)));
        vlSelfRef.__PVT__DRAM_arready = (1U & ((1U 
                                                & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid))) 
                                               && ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid) 
                                                   && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready))));
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

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (vlSelfRef.reset) {
        vlSelfRef.tb_FINAL_inst = 0U;
        vlSelfRef.tb_FINAL_pc = 0U;
        vlSelfRef.tb_FINAL_npc = 0U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) {
        vlSelfRef.tb_FINAL_inst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_instruction;
        vlSelfRef.tb_FINAL_pc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_bus_pc;
        vlSelfRef.tb_FINAL_npc = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP) 
                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isBRANCH) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result)))
                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_alu_result
                                   : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isECALL) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isMRET))
                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_snpc));
    } else {
        vlSelfRef.tb_FINAL_inst = vlSelfRef.tb_FINAL_inst;
        vlSelfRef.tb_FINAL_pc = vlSelfRef.tb_FINAL_pc;
        vlSelfRef.tb_FINAL_npc = vlSelfRef.tb_FINAL_npc;
    }
    vlSelfRef.tb_isFINAL = ((1U & (~ (IData)(vlSelfRef.reset))) 
                            && (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid));
    vlSelfRef.tb_isMEM = ((1U & (~ (IData)(vlSelfRef.reset))) 
                          && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                              && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isLOAD) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isSTORE)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid))));
    vlSelfRef.tb_dnpc_valid = ((1U & (~ (IData)(vlSelfRef.reset))) 
                               && ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                   && (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isJUMP) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isBRANCH) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_comp_result))) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isECALL) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_isMRET)))));
}

extern const VlUnpacked<CData/*2:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hafe02a15_0;

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_15;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_15 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_18;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_18 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_19;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_19 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_20;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_20 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_21;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_22;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_22 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_23;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_23 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_24;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_24 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_25;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_25 = 0;
    CData/*0:0*/ IDU_0__DOT____VdfgRegularize_hd1728725_0_28;
    IDU_0__DOT____VdfgRegularize_hd1728725_0_28 = 0;
    CData/*0:0*/ EXU_0__DOT____VdfgExtracted_hbeeeed61__0;
    EXU_0__DOT____VdfgExtracted_hbeeeed61__0 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_he0d61652_0_0 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isECALL) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isMRET));
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_isUseImm) {
        vlSelfRef.__PVT__EXU_0__DOT__a = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUsePC)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_bus_pc
                                           : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val);
        vlSelfRef.__PVT__EXU_0__DOT__b = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_imm;
    } else {
        vlSelfRef.__PVT__EXU_0__DOT__a = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val;
        vlSelfRef.__PVT__EXU_0__DOT__b = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val;
    }
    vlSelfRef.__PVT__EXU_0__DOT__comp_b = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_isUseImm)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_imm
                                            : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs2_val);
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_30 
        = ((0x17U == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_19 = (IData)(
                                                          (0x00001033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_24 = (IData)(
                                                          (0x00006033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_25 = (IData)(
                                                          (0x00007033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_18 = (IData)(
                                                          (0x00000033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_20 = (IData)(
                                                          (0x00002033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_21 = (IData)(
                                                          (0x00003033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_22 = (IData)(
                                                          (0x00004033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_23 = (IData)(
                                                          (0x00005033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isU = ((0x37U == (0x0000007fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)) 
                                        | (0x17U == 
                                           (0x0000007fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSW = (IData)((0x00002023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSB = (IData)((0x00000023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSH = (IData)((0x00001023U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBEQ = (IData)((0x00000063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBNE = (IData)((0x00001063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLT = (IData)((0x00004063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGE = (IData)((0x00005063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBLTU = (IData)((0x00006063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isBGEU = (IData)((0x00007063U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isADDI = (IData)((0x00000013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isXORI = (IData)((0x00004013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isORI = (IData)((0x00006013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isANDI = (IData)((0x00007013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLLI = (IData)((0x00001013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isJALR = (IData)((0x00000067U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTI = (IData)((0x00002013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLB = (IData)((3U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLH = (IData)((0x00001003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLHU = (IData)((0x00005003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTIU = (IData)(
                                                   (0x00003013U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLW = (IData)((0x00002003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isLBU = (IData)((0x00004003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd 
        = ((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
            ? 0x00000305U : ((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)
                              ? 0x00000341U : (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U)));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_15 = (IData)(
                                                          (0x00005013U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRS = (IData)(
                                                   (0x00002073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI = (IData)(
                                                    (0x00006073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRC = (IData)(
                                                   (0x00003073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI = (IData)(
                                                    (0x00007073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRW = (IData)(
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI = (IData)(
                                                    (0x00005073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_1 
        = ((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
           | (0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction));
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
        = (0x00000001ffffffffULL & ((0x00000100U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                     ? (~ (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__b)))
                                     : (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__b))));
    vlSelfRef.__PVT__EXU_0__DOT__op_and = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                           & vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__op_or = (vlSelfRef.__PVT__EXU_0__DOT__a 
                                          | vlSelfRef.__PVT__EXU_0__DOT__b);
    vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out = ((IData)(1U) 
                                                   + 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                    + 
                                                    (~ vlSelfRef.__PVT__EXU_0__DOT__comp_b)));
    vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL = (0xffffffffU 
                                                 == 
                                                 (~ 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                   ^ vlSelfRef.__PVT__EXU_0__DOT__comp_b)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLL = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_19) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isMULH = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_19) 
                                           & (1U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isOR = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                         & (0U == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isREM = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_24) 
                                          & (1U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isAND = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_25) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isREMU = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_25) 
                                           & (1U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isADD = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_18) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSUB = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_18) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isMUL = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_18) 
                                          & (1U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLT = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_20) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isMULHSU = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_20) 
                                             & (1U 
                                                == 
                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isXPERM4 = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_20) 
                                             & (0x14U 
                                                == 
                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isMULHU = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                            & (1U == 
                                               (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSLTU = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_21) 
                                           & (0U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isXOR = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_22) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isDIV = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_22) 
                                          & (1U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isZEXT_H = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_22) 
                                             & (IData)(
                                                       (0x08000000U 
                                                        == 
                                                        (0xfff00000U 
                                                         & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction))));
    vlSelfRef.__PVT__IDU_0__DOT__isSRL = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
                                          & (0U == 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRA = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
                                          & (0x20U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isDIVU = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_23) 
                                           & (1U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_29 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isU) 
           | (0x6fU == (0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction)));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isSTORE 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSW) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSB) 
              | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSH)));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLTU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGEU));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_comp_isUseImm 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU));
    IDU_0__DOT____VdfgRegularize_hd1728725_0_28 = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLW) 
                                                   | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLBU));
    vlSelfRef.__PVT__IDU_0__DOT__isSRLI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_15) 
                                           & (0U == 
                                              (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__isSRAI = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_15) 
                                           & (0x20U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000019U)));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_rs1 = 
        ((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_1)
          ? 0U : (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                 >> 0x0000000fU)));
    __Vtableidx3 = ((((((IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_1) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                                << 2U) | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS))));
    vlSelfRef.__PVT__idu_out_bus_opCSR = VysyxSoCFull__ConstPool__TABLE_hafe02a15_0
        [__Vtableidx3];
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_37 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRS) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRSI) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRC) 
                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRCI) 
                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRW) 
                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isCSRRWI) 
                          | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_1)))))));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_csr_result 
        = ((IData)((2U == (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
            ? vlSelfRef.__PVT__EXU_0__DOT__op_and : 
           ((IData)((1U == (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR))))
             ? vlSelfRef.__PVT__EXU_0__DOT__op_or : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_alu_result 
        = ((IData)((0U != (0x0300U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))))
            ? (vlSelfRef.__PVT__EXU_0__DOT__a + ((IData)(vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                                 + (IData)((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op) 
                                                                               >> 8U)))))))
            : ((0x00000020U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                : ((0x00000010U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                    (0x0000001fU & vlSelfRef.__PVT__EXU_0__DOT__b))
                    : ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__EXU_0__DOT__a, 
                                         (0x0000001fU 
                                          & vlSelfRef.__PVT__EXU_0__DOT__b))
                        : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                            ? vlSelfRef.__PVT__EXU_0__DOT__op_and
                            : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                ? vlSelfRef.__PVT__EXU_0__DOT__op_or
                                : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_alu_op))
                                    ? (vlSelfRef.__PVT__EXU_0__DOT__a 
                                       ^ vlSelfRef.__PVT__EXU_0__DOT__b)
                                    : vlSelfRef.__PVT__EXU_0__DOT__b)))))));
    EXU_0__DOT____VdfgExtracted_hbeeeed61__0 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_isUnSigned)
                                                       ? 
                                                      ((~ (IData)(
                                                                  (1ULL 
                                                                   & ((1ULL 
                                                                       + 
                                                                       ((~ (QData)((IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_b))) 
                                                                        + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val)))) 
                                                                      >> 0x00000020U)))) 
                                                       & (0U 
                                                          != vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out))
                                                       : 
                                                      ((~ 
                                                        (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                           ^ vlSelfRef.__PVT__EXU_0__DOT__comp_b) 
                                                          | vlSelfRef.__PVT__EXU_0__DOT__comp_suber_out) 
                                                         >> 0x0000001fU)) 
                                                       | ((~ 
                                                           (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rs1_val 
                                                            >> 0x0000001fU)) 
                                                          & (vlSelfRef.__PVT__EXU_0__DOT__comp_b 
                                                             >> 0x0000001fU))))));
    vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_33 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
           | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTU));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isBRANCH 
        = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBEQ) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBNE) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBLT) 
                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isBGE) 
                    | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_34)))));
    vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_isLOAD 
        = ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_28) 
           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                 | (IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU))));
    vlSelfRef.__VdfgRegularize_he0d61652_0_3 = (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR))));
    vlSelfRef.__PVT__IDU_0__DOT__isI = ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isADDI) 
                                        | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTI) 
                                           | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLTIU) 
                                              | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isXORI) 
                                                 | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isORI) 
                                                    | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isANDI) 
                                                       | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSLLI) 
                                                          | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRLI) 
                                                             | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isSRAI) 
                                                                | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isJALR) 
                                                                   | ((IData)(IDU_0__DOT____VdfgRegularize_hd1728725_0_28) 
                                                                      | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLB) 
                                                                         | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLH) 
                                                                            | ((IData)(vlSelfRef.__PVT__IDU_0__DOT__isLHU) 
                                                                               | (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_37)))))))))))))));
    vlSelfRef.__PVT__EXU_0__DOT__exu_out_bus_comp_result 
        = (1U & ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                  ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                      ? (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)
                      : (~ (IData)(vlSelfRef.__PVT__EXU_0__DOT__comp_isEQUAL)))
                  : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_comp_op))
                      ? (~ (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))
                      : (IData)(EXU_0__DOT____VdfgExtracted_hbeeeed61__0))));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize 
        = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
            ? 0U : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_perip_mask))
                     ? 1U : 2U));
    vlSelfRef.idu_isRAW = (((~ (IData)(vlSelfRef.IDU_0__DOT____VdfgRegularize_hd1728725_0_1)) 
                            & ((0U != (0x0000001fU 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x0000000fU))) 
                               & ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_rs1) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__VdfgRegularize_h6e95ff9d_0_32)) 
                                  | ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_rs1) 
                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_31)) 
                                     | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_rs1) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_in_wen)))))) 
                           | ((((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                | ((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction) 
                                   | (0U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x00000014U)))) 
                               & ((0U != (IData)(vlSelfRef.__PVT__idu_out_bus_opCSR)) 
                                  & ((0x0b00U != (IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd)) 
                                     & ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd) 
                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_csrrd)) 
                                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.exu_in_valid) 
                                            & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_opCSR)))) 
                                        | ((((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd) 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_csrrd)) 
                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_opCSR)))) 
                                           | (((IData)(vlSelfRef.__PVT__IDU_0__DOT__idu_out_bus_csrrd) 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR))))))))) 
                              | ((0U != (0x0000001fU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                            >> 0x00000014U))) 
                                 & ((((0x0000001fU 
                                       & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                          >> 0x00000014U)) 
                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__PVT__exu_in_bus_rd)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__ID_EX_inst.__VdfgRegularize_h6e95ff9d_0_32)) 
                                    | ((((0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                             >> 0x00000014U)) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_rd)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__VdfgRegularize_h6e95ff9d_0_31)) 
                                       | (((0x0000001fU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U)) 
                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_rd)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__GPR_0.__PVT__gpr_in_wen)))))));
}

void VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reset = ((IData)(vlSymsp->TOP.reset) 
                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
            | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
           & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = (((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
            | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))) 
           & (~ (IData)(vlSelfRef.reset)));
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
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready 
            = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
               & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
    } else {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) {
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
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready = 0U;
    }
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (~ (IData)(vlSelfRef.reset))));
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
            ? ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                ? vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata
                : 0U) : 0U);
}

void VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_26010011* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_26010011___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid 
        = ((~ (IData)(vlSelfRef.reset)) & (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__VdfgRegularize_hc456a51f_0_7)) 
                                           | (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reset = ((IData)(vlSymsp->TOP.reset) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__lsu_wdata = ((0U == (0x0000001fU 
                                          & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                             >> 0x00000014U)))
                                   ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR
                                  [(0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                   >> 0x00000014U))]);
    vlSelfRef.__PVT__rready = ((4U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__bready = ((2U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))) 
                               & (IData)(vlSelfRef.__PVT__rready));
    vlSelfRef.__PVT__rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                   ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata
                                   : 0U) : 0U);
    vlSelfRef.__PVT__lsu_wmask = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW)
                                   ? 0x0fU : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSB)
                                               ? 1U
                                               : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSH)
                                                   ? 3U
                                                   : 0U)));
    vlSelfRef.__PVT__lsu_wen = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25));
    vlSelfRef.__PVT__rmask = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW)
                               ? 0x0fU : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21)
                                           ? 1U : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_22)
                                                    ? 3U
                                                    : 0U)));
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__b_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid))) 
                               & (IData)(vlSelfRef.__PVT__bready));
    vlSelfRef.__PVT__lsu_addr = ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21) 
                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI) 
                                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU) 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isB))))))))))) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB))
                                  ? (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                     + ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                        + (IData)((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)))))
                                  : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL))
                                      ? VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                      (0x0000001fU 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                      : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL))
                                          ? VL_SHIFTR_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                          (0x0000001fU 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA))
                                              ? VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                                               (0x0000001fU 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))
                                              : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND))
                                                  ? 
                                                 (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                  : 
                                                 (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR))
                                                   ? 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                   | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                   : 
                                                  (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR))
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                                                    ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)
                                                    : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)))))));
    vlSelfRef.__PVT__lsu_final = (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__PVT__r_fire)) 
                                  | ((2U == (IData)(vlSelfRef.state)) 
                                     & (IData)(vlSelfRef.__PVT__b_fire)));
    vlSelfRef.__PVT__val = ((2U & vlSelfRef.__PVT__lsu_addr)
                             ? ((1U & vlSelfRef.__PVT__lsu_addr)
                                 ? (((- (IData)((vlSelfRef.__PVT__rdata 
                                                 >> 0x0000001fU))) 
                                     << 0x00000018U) 
                                    | (vlSelfRef.__PVT__val2 
                                       >> 8U)) : vlSelfRef.__PVT__val2)
                             : ((1U & vlSelfRef.__PVT__lsu_addr)
                                 ? vlSelfRef.__PVT__val1
                                 : vlSelfRef.__PVT__rdata));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___ctor_var_reset(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__lsu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7215086410235688806ull);
    vlSelf->__PVT__lsu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5289022911436506389ull);
    vlSelf->__PVT__lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3658037750161046613ull);
    vlSelf->__PVT__lsu_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476661837632727266ull);
    vlSelf->__PVT__lsu_reqEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15873875435752093388ull);
    vlSelf->__PVT__lsu_final = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 196187512066715077ull);
    vlSelf->__PVT__rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16104941632112136897ull);
    vlSelf->__PVT__lsu_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13598643557825439274ull);
    vlSelf->__PVT__isSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721690139541285193ull);
    vlSelf->__PVT__bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    vlSelf->__PVT__awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10741232094138379896ull);
    vlSelf->__PVT__awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14077405313628979207ull);
    vlSelf->__PVT__awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9399710217136046492ull);
    vlSelf->__PVT__awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3795331727834872933ull);
    vlSelf->__PVT__awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13823799410002427218ull);
    vlSelf->__PVT__awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14063175441069765856ull);
    vlSelf->__PVT__awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2194945690521623954ull);
    vlSelf->__PVT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12890271867161903902ull);
    vlSelf->__PVT__wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15125268524300477597ull);
    vlSelf->__PVT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13135585445238253745ull);
    vlSelf->__PVT__wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2694481459927628098ull);
    vlSelf->__PVT__wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447900327780902047ull);
    vlSelf->__PVT__bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3607396732575112162ull);
    vlSelf->__PVT__bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14655036748745407948ull);
    vlSelf->__PVT__bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16336171827316305440ull);
    vlSelf->__PVT__bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3323000146968766057ull);
    vlSelf->__PVT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17685200476622543275ull);
    vlSelf->__PVT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16774798297805906817ull);
    vlSelf->__PVT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2587622265565774708ull);
    vlSelf->__PVT__arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2554568685633023ull);
    vlSelf->__PVT__arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2795619241893056918ull);
    vlSelf->__PVT__arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 548378465311237866ull);
    vlSelf->__PVT__arbureset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4915606425035027064ull);
    vlSelf->__PVT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10065165116613087284ull);
    vlSelf->__PVT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 810448354640171968ull);
    vlSelf->__PVT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125721737830190460ull);
    vlSelf->__PVT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8930348232195030647ull);
    vlSelf->__PVT__rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5670148758994432807ull);
    vlSelf->__PVT__rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17711635114162165067ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__b_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5582104448376273005ull);
    vlSelf->__PVT__ar_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531198051612780992ull);
    vlSelf->__PVT__r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673292808138091229ull);
    vlSelf->__PVT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5324393166403162543ull);
    vlSelf->__PVT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10955695006771734379ull);
    vlSelf->__PVT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14157650751545541461ull);
}

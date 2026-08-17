// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hc456a51f_0_8 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid));
    vlSelfRef.__VdfgRegularize_hc456a51f_0_7 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.lsu_in_valid));
    vlSelfRef.__VdfgRegularize_hc456a51f_0_4 = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isLOAD) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EX_LS_inst.__PVT__lsu_in_bus_isSTORE));
    vlSelfRef.b_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
    vlSelfRef.r_fire = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready));
    vlSelfRef.debug_LSU_WRITING = ((0U != (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_8));
    vlSelfRef.debug_LSU_LOADING = ((0U != (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hc456a51f_0_7));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_LSU___ctor_var_reset(VysyxSoCFull_ysyx_26010011_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_LSU___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301687952925534331ull);
    vlSelf->__PVT__lsu_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9510214819170772049ull);
    vlSelf->__PVT__lsu_in_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6526339356017408647ull);
    vlSelf->__PVT__lsu_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1260193116019354778ull);
    vlSelf->__PVT__lsu_in_bus_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 789718693205555570ull);
    vlSelf->__PVT__lsu_in_bus_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16820490264152557796ull);
    vlSelf->__PVT__lsu_in_bus_perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11626300850549645301ull);
    vlSelf->__PVT__lsu_in_bus_isUnSigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14484214287239985907ull);
    vlSelf->__PVT__lsu_in_bus_isLOAD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4429564902089472088ull);
    vlSelf->__PVT__lsu_in_bus_isSTORE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13391707463715923727ull);
    vlSelf->lsu_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3976488502487807843ull);
    vlSelf->__PVT__lsu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 904879937952889666ull);
    vlSelf->__PVT__lsu_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12315416510729442014ull);
    vlSelf->__PVT__lsu_out_bus_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10352840362030088202ull);
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
    vlSelf->b_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5582104448376273005ull);
    vlSelf->__PVT__ar_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531198051612780992ull);
    vlSelf->r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673292808138091229ull);
    vlSelf->__PVT__awaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17609714532615789261ull);
    vlSelf->__PVT__wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3076996247779096886ull);
    vlSelf->__PVT__awsize_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2779456212181688490ull);
    vlSelf->__PVT__wstrb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15119205019504598704ull);
    vlSelf->__PVT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5324393166403162543ull);
    vlSelf->__PVT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10955695006771734379ull);
    vlSelf->__PVT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14157650751545541461ull);
    vlSelf->debug_LSU_LOADING = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15432813358615687184ull);
    vlSelf->debug_LSU_WRITING = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16287232157371382891ull);
    vlSelf->debug_LSU_WRITE_FINAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10767793145714837578ull);
    vlSelf->debug_LSU_LOAD_FINAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695111261364231803ull);
    vlSelf->__VdfgExtracted_hd51ce84d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9335344209823606835ull);
    vlSelf->__VdfgRegularize_hc456a51f_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12918316183802177736ull);
    vlSelf->__VdfgRegularize_hc456a51f_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11066857445123250650ull);
    vlSelf->__VdfgRegularize_hc456a51f_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16680877834489249309ull);
    vlSelf->__VdfgRegularize_hc456a51f_0_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8916063245817288125ull);
}

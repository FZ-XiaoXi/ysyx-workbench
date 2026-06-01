// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_LSU___stl_sequent__TOP__top__LSU_0__0(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___stl_sequent__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bready = ((2U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__rvalid = ((2U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__r_state)) 
                               | ((1U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__r_state)) 
                                  & (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__rready = ((4U == (IData)(vlSelfRef.state)) 
                               | (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__rdata = ((2U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__r_state))
                               ? vlSymsp->TOP__top.__PVT__DRAM__DOT__rdata_hold
                               : vlSymsp->TOP__top.__PVT__DRAM__DOT__current_mem_rdata);
    vlSelfRef.__PVT__b_fire = (((2U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__w_state)) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock))) 
                               & (IData)(vlSelfRef.__PVT__bready));
    vlSelfRef.__PVT__r_fire = ((IData)(vlSelfRef.__PVT__rvalid) 
                               & (IData)(vlSelfRef.__PVT__rready));
    vlSelfRef.__PVT__val1 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__rdata 
                                                 >> 8U));
    vlSelfRef.__PVT__lsu_final = (((4U == (IData)(vlSelfRef.state)) 
                                   & (IData)(vlSelfRef.__PVT__r_fire)) 
                                  | ((2U == (IData)(vlSelfRef.state)) 
                                     & (IData)(vlSelfRef.__PVT__b_fire)));
    vlSelfRef.__PVT__val2 = (((- (IData)((vlSelfRef.__PVT__rdata 
                                          >> 0x0000001fU))) 
                              << 0x00000018U) | (vlSelfRef.__PVT__val1 
                                                 >> 8U));
}

VL_ATTR_COLD void Vtop_LSU___ctor_var_reset(Vtop_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_LSU___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
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
    vlSelf->__PVT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12890271867161903902ull);
    vlSelf->__PVT__wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15125268524300477597ull);
    vlSelf->__PVT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13135585445238253745ull);
    vlSelf->__PVT__wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2694481459927628098ull);
    vlSelf->__PVT__bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3607396732575112162ull);
    vlSelf->__PVT__bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14655036748745407948ull);
    vlSelf->__PVT__bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16336171827316305440ull);
    vlSelf->__PVT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17685200476622543275ull);
    vlSelf->__PVT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16774798297805906817ull);
    vlSelf->__PVT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2587622265565774708ull);
    vlSelf->__PVT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10065165116613087284ull);
    vlSelf->__PVT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 810448354640171968ull);
    vlSelf->__PVT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125721737830190460ull);
    vlSelf->__PVT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8930348232195030647ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__aw_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6797594169646705420ull);
    vlSelf->__PVT__b_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5582104448376273005ull);
    vlSelf->__PVT__r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673292808138091229ull);
    vlSelf->__PVT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5324393166403162543ull);
    vlSelf->__PVT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10955695006771734379ull);
    vlSelf->__PVT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14157650751545541461ull);
}

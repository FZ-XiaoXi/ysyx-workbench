// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h1e044360_0;

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__icache_u0__DOT__is_hit = (vlSelfRef.__PVT__icache_u0__DOT__cache_valid
                                               [(0x0000000fU 
                                                 & (vlSelfRef.PC 
                                                    >> 2U))] 
                                               & (vlSelfRef.__PVT__icache_u0__DOT__cache_tag
                                                  [
                                                  (0x0000000fU 
                                                   & (vlSelfRef.PC 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSelfRef.PC 
                                                   >> 6U)));
    vlSelfRef.bus_valid = (3U == (IData)(vlSelfRef.state));
    vlSelfRef.__PVT__in_reqValid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                    & (0U == (IData)(vlSelfRef.state)));
    vlSelfRef.__PVT__icache_u0__DOT__r_fire = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid))));
    vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                            ? 0U : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata)
                        : 0U);
    vlSelfRef.__PVT__arvalid = ((~ (IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit)) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)) 
                                   & (((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)) 
                                       & (IData)(vlSelfRef.__PVT__in_reqValid)) 
                                      | (1U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state)))));
    __Vtableidx1 = ((((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire) 
                      << 7U) | ((((IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)
                                   ? 0U : 2U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__arvalid) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                        ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                            ? 0U : 
                                           (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full))))
                                        : ((IData)(vlSelfRef.__PVT__arvalid) 
                                           && (1U & 
                                               (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))))) 
                                   << 4U))) | (((IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.__PVT__in_reqValid) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.__PVT__icache_u0__DOT__state))));
    vlSelfRef.__PVT__icache_u0__DOT__next_state = VysyxSoCFull__ConstPool__TABLE_h1e044360_0
        [__Vtableidx1];
    vlSelfRef.r_fire = ((0U == (IData)(vlSelfRef.state)) 
                        & ((0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__state))
                            ? ((IData)(vlSelfRef.__PVT__in_reqValid) 
                               & ((IData)(vlSelfRef.__PVT__icache_u0__DOT__is_hit) 
                                  | (IData)(vlSelfRef.__PVT__icache_u0__DOT__r_fire)))
                            : (0U == (IData)(vlSelfRef.__PVT__icache_u0__DOT__next_state))));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsu_access_fault = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid) 
                                          & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp)) 
                                             | (3U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp)))) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid) 
                                            & ((2U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp)) 
                                               | (3U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp)))));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___ctor_var_reset(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->__PVT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->__PVT__snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
    vlSelf->__PVT__isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812665700179750437ull);
    vlSelf->__PVT__isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1884439264993369748ull);
    vlSelf->__PVT__isECALL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184926532974597313ull);
    vlSelf->__PVT__isMRET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828884427583364781ull);
    vlSelf->__PVT__wbu_final = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17405858545225522430ull);
    vlSelf->__PVT__PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    vlSelf->bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    vlSelf->__PVT__lsu_access_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13814756505883925001ull);
    vlSelf->__PVT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17685200476622543275ull);
    vlSelf->__PVT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16774798297805906817ull);
    vlSelf->__PVT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2587622265565774708ull);
    vlSelf->__PVT__arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2554568685633023ull);
    vlSelf->__PVT__arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2795619241893056918ull);
    vlSelf->__PVT__arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 548378465311237866ull);
    vlSelf->__PVT__arbureset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4915606425035027064ull);
    vlSelf->rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10065165116613087284ull);
    vlSelf->__PVT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 810448354640171968ull);
    vlSelf->__PVT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125721737830190460ull);
    vlSelf->__PVT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8930348232195030647ull);
    vlSelf->__PVT__rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5670148758994432807ull);
    vlSelf->__PVT__rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17711635114162165067ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10383377256973303270ull);
    vlSelf->r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673292808138091229ull);
    vlSelf->__PVT__in_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13927238251016224317ull);
    vlSelf->__PVT__icache_u0__DOT__is_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1946046864569466104ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__icache_u0__DOT__cache_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7409108019983554038ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__icache_u0__DOT__cache_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10261297193314116764ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__icache_u0__DOT__cache_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4865319047438162707ull);
    }
    vlSelf->__PVT__icache_u0__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16610923007594090581ull);
    vlSelf->__PVT__icache_u0__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 128076398350676594ull);
    vlSelf->__PVT__icache_u0__DOT__r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10009124964525033785ull);
    vlSelf->__PVT__icache_u0__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10682241052551442097ull);
    vlSelf->__Vdly__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13052621548465915527ull);
    vlSelf->__VdlySet__icache_u0__DOT__cache_mem__v0 = 0;
    vlSelf->__VdlyVal__icache_u0__DOT__cache_mem__v16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2036551311317514432ull);
    vlSelf->__VdlyDim0__icache_u0__DOT__cache_mem__v16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3857409721065003788ull);
    vlSelf->__VdlySet__icache_u0__DOT__cache_mem__v16 = 0;
}

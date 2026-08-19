// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifu_out_bus_fetching = vlSelfRef.PC;
    vlSelfRef.__PVT__r_tar = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_mem
        [(7U & (vlSelfRef.PC >> 2U))];
    vlSelfRef.__PVT__fencei_flush = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0) 
                                     & (0x0eU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception))));
    vlSelfRef.__PVT__rlast = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
    vlSelfRef.__PVT__pre_branch = (((vlSelfRef.__PVT__r_tar 
                                     < vlSelfRef.PC) 
                                    | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_type
                                    [(7U & (vlSelfRef.PC 
                                            >> 2U))]) 
                                   & ((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_tag
                                       [(7U & (vlSelfRef.PC 
                                               >> 2U))] 
                                       == (vlSelfRef.PC 
                                           >> 5U)) 
                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__bcache_u0__DOT__cache_valid
                                      [(7U & (vlSelfRef.PC 
                                              >> 2U))]));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rdata = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4Arbiter__DOT__R_state)
                        ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                             ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 3U))
                                  : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                             ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                             : 0U) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((
                                                   ((0x0000ff00U 
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
                                               : 0U)))
                             : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                       ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                                      [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]
                                       : 0U)) : 0U);
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_IFU___ctor_var_reset(VysyxSoCFull_ysyx_26010011_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_IFU___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->__PVT__flush_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301687952925534331ull);
    vlSelf->__PVT__dnpc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5649720266147038256ull);
    vlSelf->ifu_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15794921026487040168ull);
    vlSelf->ifu_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13473664978699002063ull);
    vlSelf->__PVT__ifu_out_bus_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2966223906934898997ull);
    vlSelf->ifu_out_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9972062482357180899ull);
    vlSelf->ifu_out_bus_fetching = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10349057118453920540ull);
    vlSelf->__PVT__ifu_out_bus_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7176184147657711579ull);
    vlSelf->__PVT__ifu_out_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16270981747284714961ull);
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
    vlSelf->__PVT__r_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10799784215337378194ull);
    vlSelf->__PVT__r_tar = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13835808927382882950ull);
    vlSelf->__PVT__r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716220725288817265ull);
    vlSelf->__PVT__r_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17649322916488332397ull);
    vlSelf->__PVT__fencei_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14205880289312804791ull);
    vlSelf->__PVT__pre_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12996062664437333572ull);
    vlSelf->__PVT__ifu_out_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5138845183988091424ull);
    vlSelf->__PVT__ifu_out_bus_instruction_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10879476780930674004ull);
    vlSelf->__PVT__ifu_out_bus_pc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8939610258996164045ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->__PVT__in_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13927238251016224317ull);
    vlSelf->debug_IFU_is_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10961323013839054835ull);
    vlSelf->debug_IFU_is_hit_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17970957775758257652ull);
    vlSelf->debug_IFU_get_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9858856540304454987ull);
    vlSelf->__VdfgRegularize_hb9205a68_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7122595193927263841ull);
}

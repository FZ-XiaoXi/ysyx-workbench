// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__S_arid = 0U;
    vlSelfRef.__PVT__S_arlen = 0U;
    vlSelfRef.__PVT__S_awid = 0U;
    vlSelfRef.__PVT__S_awlen = 0U;
    vlSelfRef.__PVT__S_bresp = 0U;
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.__PVT__CLINT_inst__DOT__current_clint_rdata 
        = ((0U != vlSelfRef.__PVT__CLINT_inst__DOT__raddr_reg)
            ? vlSelfRef.__PVT__CLINT_inst__DOT__mtime_H
            : vlSelfRef.__PVT__CLINT_inst__DOT__mtime_L);
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__RAM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__5__Vfuncout);
    vlSelfRef.__PVT__RAM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__5__Vfuncout;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid 
        = ((0U == (IData)(vlSymsp->TOP__top__IFU_0.state)) 
           | (1U == (IData)(vlSymsp->TOP__top__IFU_0.state)));
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_bvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
              & (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((2U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((4U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state))
            ? vlSelfRef.__PVT__RAM__DOT__rdata_hold
            : vlSelfRef.__PVT__RAM__DOT__current_mem_rdata);
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
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready)));
    if ((1U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))) {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
            = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
            = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata;
    } else if ((2U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))) {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
            = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__UART_rvalid;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
            = ((2U == (IData)(vlSelfRef.__PVT__UART_inst__DOT__r_state))
                ? vlSelfRef.__PVT__UART_inst__DOT__rdata_hold
                : 0xdeadbeefU);
    } else if ((4U == (IData)(vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg))) {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
            = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
            = ((2U == (IData)(vlSelfRef.__PVT__CLINT_inst__DOT__r_state))
                ? vlSelfRef.__PVT__CLINT_inst__DOT__rdata_hold
                : vlSelfRef.__PVT__CLINT_inst__DOT__current_clint_rdata);
    } else {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
            = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
            = vlSelfRef.__PVT__XBAR_Bridge_inst__DOT__MEM_rdata;
    }
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready;
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
        } else {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
                = (3U != (IData)(vlSymsp->TOP__top__IFU_0.state));
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
        }
    } else {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready = 0U;
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
    }
}

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->lsu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7215086410235688806ull);
    vlSelf->LSU_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15114391294081831391ull);
    vlSelf->lsu_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13598643557825439274ull);
    vlSelf->lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3658037750161046613ull);
    vlSelf->LSU_WEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4139174640315457831ull);
    vlSelf->lsu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5289022911436506389ull);
    vlSelf->PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    vlSelf->EXU_inA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9531828074647327223ull);
    vlSelf->EXU_inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9377487099893787553ull);
    vlSelf->EXU_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11529933568103740182ull);
    vlSelf->CSR_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5074626129175349301ull);
    vlSelf->rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 544071659820774754ull);
    vlSelf->rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12971079179806023922ull);
    vlSelf->reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2113356192903233237ull);
    vlSelf->imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17436245599429385641ull);
    vlSelf->COMP_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7391533942535881271ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
    vlSelf->__PVT__command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13453452394900071627ull);
    vlSelf->__PVT__IROM_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2564055601578176104ull);
    vlSelf->__PVT__DRAM_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18335034915749954829ull);
    vlSelf->__PVT__DRAM_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10847697789670926749ull);
    vlSelf->__PVT__DRAM_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5977303994642059722ull);
    vlSelf->__PVT__S_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7938765848120282132ull);
    vlSelf->__PVT__S_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14776106182555903438ull);
    vlSelf->__PVT__S_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6237379312035940848ull);
    vlSelf->__PVT__S_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15658670427839457430ull);
    vlSelf->__PVT__S_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5187996687896124254ull);
    vlSelf->__PVT__S_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17014021805460904505ull);
    vlSelf->__PVT__S_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6707333307667376373ull);
    vlSelf->__PVT__S_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12852217189061255496ull);
    vlSelf->__PVT__S_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17849579045641473566ull);
    vlSelf->__PVT__S_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11905517986072684619ull);
    vlSelf->__PVT__S_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5263796617169276336ull);
    vlSelf->__PVT__S_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3564731869466881271ull);
    vlSelf->__PVT__S_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14936745145282323148ull);
    vlSelf->__PVT__S_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13872141331489156428ull);
    vlSelf->__PVT__S_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10843462654784758241ull);
    vlSelf->__PVT__S_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10233066586571032183ull);
    vlSelf->__PVT__S_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13549630278632760757ull);
    vlSelf->__PVT__S_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16968790080563890634ull);
    vlSelf->__PVT__S_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18115728767137224371ull);
    vlSelf->__PVT__S_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 774052082752397629ull);
    vlSelf->__PVT__S_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3476913524963226392ull);
    vlSelf->__PVT__RAM_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 686701304205528786ull);
    vlSelf->__PVT__RAM_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9150059842804049460ull);
    vlSelf->__PVT__RAM_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15494620483806822064ull);
    vlSelf->__PVT__RAM_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10565181593093597127ull);
    vlSelf->__PVT__RAM_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 278212340690924942ull);
    vlSelf->__PVT__RAM_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12521873630498331255ull);
    vlSelf->__PVT__RAM_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11856121702996994077ull);
    vlSelf->__PVT__RAM_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7703872011714494374ull);
    vlSelf->__PVT__RAM_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16998361293170378607ull);
    vlSelf->__PVT__RAM_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11350264518018396036ull);
    vlSelf->__PVT__RAM_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9508516705847394955ull);
    vlSelf->__PVT__UART_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2365825379191249199ull);
    vlSelf->__PVT__UART_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8595788119425148413ull);
    vlSelf->__PVT__UART_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5422036692667506825ull);
    vlSelf->__PVT__UART_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14002652499584259484ull);
    vlSelf->__PVT__UART_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4708336825718513338ull);
    vlSelf->__PVT__UART_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6029489577834135969ull);
    vlSelf->__PVT__UART_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9590215353859904626ull);
    vlSelf->__PVT__UART_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11045072889920406010ull);
    vlSelf->__PVT__UART_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14558198835425913041ull);
    vlSelf->__PVT__UART_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5218970679532712718ull);
    vlSelf->__PVT__UART_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18308177079979464157ull);
    vlSelf->__PVT__UART_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10776745281194891522ull);
    vlSelf->__PVT__UART_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18164581550543971091ull);
    vlSelf->__PVT__UART_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7727561349600527344ull);
    vlSelf->__PVT__CLINT_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14491641528470716908ull);
    vlSelf->__PVT__CLINT_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11441487375001465514ull);
    vlSelf->__PVT__CLINT_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12542426769167026357ull);
    vlSelf->__PVT__CLINT_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6442187832335141260ull);
    vlSelf->__PVT__CLINT_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14648121147685536134ull);
    vlSelf->__PVT__CLINT_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9403752426782548082ull);
    vlSelf->__PVT__CLINT_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16139065315397039256ull);
    vlSelf->__PVT__CLINT_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11059356010395037287ull);
    vlSelf->__PVT__CLINT_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2259580201104224598ull);
    vlSelf->__PVT__CLINT_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9396606318246402048ull);
    vlSelf->__PVT__CLINT_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13022938690100797215ull);
    vlSelf->__PVT__CLINT_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5153303684268168988ull);
    vlSelf->__PVT__CLINT_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7946519429237841855ull);
    vlSelf->__PVT__CLINT_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5643483414588547848ull);
    vlSelf->__VdfgRegularize_he2b63832_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15367874221688210060ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__inB = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 394028622014140529ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1352641279154428879ull);
    vlSelf->__PVT__COMP_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10216836910058307467ull);
    vlSelf->__PVT__COMP_0__DOT__isEQUAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285799449688399837ull);
    vlSelf->__PVT__COMP_0__DOT__isGREATER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17655933437007907191ull);
    vlSelf->__PVT__COMP_0__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917469842835743340ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14773051348550187421ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17382313962911481618ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14356449785092601124ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12375025885305802629ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8274023529088780226ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2042498477824767762ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9631090779707898095ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6252876650602622408ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1343825483400974879ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17810295575027080342ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18119107141920553825ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341170536629540755ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067147664974863826ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4823501578651874595ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7933074762801967304ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12550448643891412737ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5689625827797009683ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7369852676473428527ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4038583223633389820ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7942929687740848222ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2961178094157107030ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__MEM_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9699012532003940809ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__MEM_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5194289245455588512ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__MEM_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13057611459024085694ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__MEM_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14602581035488189362ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__MEM_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17074396709195164202ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__MEM_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5358962255688528928ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__UART_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18437913008667778370ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__UART_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7712803450754625010ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__UART_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16531586270290818802ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__UART_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8887081721894128394ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__CLINT_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1007937061673485068ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__CLINT_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15750220709324703543ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__CLINT_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2094619892110706788ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__CLINT_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5974434813962289294ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__aw_sel_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13403442417358194479ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__ar_sel_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14059809127160164458ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__R_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3513078963113033219ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__R_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11857235601234173378ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__W_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4272165018614344588ull);
    vlSelf->__PVT__XBAR_Bridge_inst__DOT__W_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9170715774447031481ull);
    vlSelf->__PVT__RAM__DOT__r_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5895322731500914881ull);
    vlSelf->__PVT__RAM__DOT__r_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11345834108962901552ull);
    vlSelf->__PVT__RAM__DOT__raddr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12490774110110814760ull);
    vlSelf->__PVT__RAM__DOT__rdata_hold = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1863639929101832015ull);
    vlSelf->__PVT__RAM__DOT__current_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12807319279230274983ull);
    vlSelf->__PVT__RAM__DOT__w_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17719082420725444522ull);
    vlSelf->__PVT__RAM__DOT__w_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2438546371427750677ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8602196500886247303ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7302626734060265340ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9028097263970014452ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10679249740693928254ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12262564538801768656ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16179775370138714637ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18291395219225528441ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18025240425002587375ull);
    vlSelf->__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11186310810720704562ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6136436521483847611ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17746922452320766863ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 906267286100031928ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7661164404842783544ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5435872617704704241ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9729211534646998239ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6693949153386011104ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3719478394371622732ull);
    vlSelf->__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9344018477985577196ull);
    vlSelf->__PVT__UART_inst__DOT__r_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3794896510059399278ull);
    vlSelf->__PVT__UART_inst__DOT__r_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16975683506123008816ull);
    vlSelf->__PVT__UART_inst__DOT__raddr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10219912930280733116ull);
    vlSelf->__PVT__UART_inst__DOT__rdata_hold = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10641264002021055811ull);
    vlSelf->__PVT__UART_inst__DOT__w_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12889675934722179103ull);
    vlSelf->__PVT__UART_inst__DOT__w_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3632552516968397806ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7836191826086205635ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6808191751642987569ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1321367083849228601ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8729447905237215824ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2370610314890155199ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11425871390857293221ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5960520801274489926ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11936125639016401772ull);
    vlSelf->__PVT__UART_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8905973087206406292ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5472082054533915353ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16395126026947521380ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10144323127322916386ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5904699493771051942ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17621251195267817967ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10428975977187272372ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2890941614163937411ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14638308388145593379ull);
    vlSelf->__PVT__UART_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9691826067556460683ull);
    vlSelf->__PVT__CLINT_inst__DOT__r_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9522910143931421549ull);
    vlSelf->__PVT__CLINT_inst__DOT__r_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15743686239011702907ull);
    vlSelf->__PVT__CLINT_inst__DOT__raddr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11111160931020850706ull);
    vlSelf->__PVT__CLINT_inst__DOT__rdata_hold = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7072609902002006127ull);
    vlSelf->__PVT__CLINT_inst__DOT__r_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8602743821988737078ull);
    vlSelf->__PVT__CLINT_inst__DOT__current_clint_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10050411978047026557ull);
    vlSelf->__PVT__CLINT_inst__DOT__w_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8070696964660656869ull);
    vlSelf->__PVT__CLINT_inst__DOT__w_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1893652139668898447ull);
    vlSelf->__PVT__CLINT_inst__DOT__w_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11828797959977829162ull);
    vlSelf->__PVT__CLINT_inst__DOT__mtime_L = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12581060735809054754ull);
    vlSelf->__PVT__CLINT_inst__DOT__mtime_H = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2806116588963284381ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11296222610386124232ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5536448547244734836ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6011661907233957305ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16752677903124048091ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11329812207935117733ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3237877218474695772ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10526975340455759932ull);
    vlSelf->__PVT__CLINT_inst__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9786690966794429958ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5969729176032513070ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2112748413559371079ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12350445974577977251ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2896747953909821974ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8199901121265443477ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13880470360156307627ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10634107645269417ull);
    vlSelf->__PVT__CLINT_inst__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3583153931183874308ull);
    vlSelf->__VdfgRegularize_he2b63832_1_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16732790862733730032ull);
    vlSelf->__VdfgRegularize_he2b63832_1_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5730980687264564274ull);
    vlSelf->__Vfunc_pmem_read__5__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5614032309088458142ull);
}

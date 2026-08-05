// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h0c28e8e4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hf4e3b17e_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h8ccce9bb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h450237dd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h3a72a3a3_0;

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid 
        = ((0U == (IData)(vlSymsp->TOP__top__IFU_0.state)) 
           | (1U == (IData)(vlSymsp->TOP__top__IFU_0.state)));
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__RAM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__1__Vfuncout);
    vlSelfRef.__PVT__RAM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__1__Vfuncout;
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__w_state)) 
              & (IData)(vlSelfRef.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready 
        = ((4U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
           | ((1U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
              & (IData)(vlSelfRef.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready 
        = ((2U == (IData)(vlSymsp->TOP__top__LSU_0.state)) 
           | (0U == (IData)(vlSymsp->TOP__top__LSU_0.state)));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata 
        = ((2U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state))
            ? vlSelfRef.__PVT__RAM__DOT__rdata_hold
            : vlSelfRef.__PVT__RAM__DOT__current_mem_rdata);
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready 
        = ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
           & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
               ? (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready)
               : (3U != (IData)(vlSymsp->TOP__top__IFU_0.state))));
    vlSelfRef.__Vtableidx3 = (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready) 
                               << 5U) | (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__W_state))));
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bresp 
        = Vtop__ConstPool__TABLE_h0c28e8e4_0[vlSelfRef.__Vtableidx3];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bvalid 
        = Vtop__ConstPool__TABLE_hf4e3b17e_0[vlSelfRef.__Vtableidx3];
    vlSelfRef.__PVT__DRAM_bresp = Vtop__ConstPool__TABLE_h8ccce9bb_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.__PVT__DRAM_bvalid = Vtop__ConstPool__TABLE_h450237dd_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.__PVT__RAM_bready = Vtop__ConstPool__TABLE_h3a72a3a3_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready 
        = ((0U == (IData)(vlSelfRef.__PVT__RAM__DOT__r_state)) 
           | ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready) 
              & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)));
    if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) {
        if (vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                = vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata;
            vlSelfRef.__PVT__IROM_arready = (1U & 0U);
        } else {
            vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
            vlSelfRef.__PVT__IROM_arready = (1U & (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
        }
    } else {
        vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = 0U;
        vlSelfRef.__PVT__IROM_arready = (1U & ((IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                                               && (IData)(vlSelfRef.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready)));
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
    vlSelf->__PVT__DRAM_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13644965262641193639ull);
    vlSelf->__PVT__DRAM_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10847697789670926749ull);
    vlSelf->__PVT__DRAM_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5977303994642059722ull);
    vlSelf->__PVT__DRAM_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16878665226666086136ull);
    vlSelf->__PVT__RAM_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 686701304205528786ull);
    vlSelf->__PVT__RAM_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9150059842804049460ull);
    vlSelf->__PVT__RAM_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15475681766001047310ull);
    vlSelf->__PVT__RAM_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15494620483806822064ull);
    vlSelf->__PVT__RAM_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10565181593093597127ull);
    vlSelf->__PVT__RAM_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 278212340690924942ull);
    vlSelf->__PVT__RAM_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10736681486522132936ull);
    vlSelf->__PVT__RAM_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12521873630498331255ull);
    vlSelf->__VdfgRegularize_he2b63832_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15367874221688210060ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__inB = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 394028622014140529ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1352641279154428879ull);
    vlSelf->__PVT__COMP_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10216836910058307467ull);
    vlSelf->__PVT__COMP_0__DOT__isEQUAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285799449688399837ull);
    vlSelf->__PVT__COMP_0__DOT__isGREATER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17655933437007907191ull);
    vlSelf->__PVT__COMP_0__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917469842835743340ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14356449785092601124ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17382313962911481618ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9488035963589973303ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M1_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16158711966075244824ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2042498477824767762ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9631090779707898095ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6252876650602622408ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12375025885305802629ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8274023529088780226ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17810295575027080342ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18119107141920553825ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341170536629540755ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067147664974863826ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13008089194761548441ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4823501578651874595ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7933074762801967304ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12550448643891412737ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5689625827797009683ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7369852676473428527ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4038583223633389820ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7942929687740848222ull);
    vlSelf->__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2961178094157107030ull);
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
    vlSelf->__Vfunc_pmem_read__1__Vfuncout = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5614032309088458142ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__IROM__DOT__w_next = vlSelfRef.__PVT__IROM__DOT__w_state;
    if ((0U != (IData)(vlSelfRef.__PVT__IROM__DOT__w_state))) {
        if ((1U == (IData)(vlSelfRef.__PVT__IROM__DOT__w_state))) {
            if (vlSelfRef.__PVT__IROM__DOT__write_delay_inst__DOT__out_unlock) {
                vlSelfRef.__PVT__IROM__DOT__w_next = 2U;
            }
        } else if ((2U != (IData)(vlSelfRef.__PVT__IROM__DOT__w_state))) {
            vlSelfRef.__PVT__IROM__DOT__w_next = 0U;
        }
    }
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__IROM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__1__Vfuncout);
    vlSelfRef.__PVT__IROM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__1__Vfuncout;
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__DRAM__DOT__raddr_reg, vlSelfRef.__Vfunc_pmem_read__2__Vfuncout);
    vlSelfRef.__PVT__DRAM__DOT__current_mem_rdata = vlSelfRef.__Vfunc_pmem_read__2__Vfuncout;
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h61f39d43_0;

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((3U != (IData)(vlSymsp->TOP__top__IFU_0.state)) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock) 
                                << 3U) | (((IData)(vlSymsp->TOP__top__IFU_0.__PVT__arvalid) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__IROM__DOT__r_state))));
    vlSelfRef.__PVT__IROM__DOT__r_next = Vtop__ConstPool__TABLE_h61f39d43_0
        [__Vtableidx1];
    vlSelfRef.__PVT__EXU_0__DOT__ADDER_0__DOT__cin 
        = ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_16) 
           & (0x20U == (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                        >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_he2b63832_0_0 = ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI) 
                                                | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isU) 
                                                   | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB) 
                                                      | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))))));
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
    vlSelf->__VdfgRegularize_he2b63832_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15367874221688210060ull);
    vlSelf->__PVT__IROM__DOT__r_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17558585777867108814ull);
    vlSelf->__PVT__IROM__DOT__r_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11814468452844844338ull);
    vlSelf->__PVT__IROM__DOT__raddr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 48376850669963992ull);
    vlSelf->__PVT__IROM__DOT__rdata_hold = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9746812172044480737ull);
    vlSelf->__PVT__IROM__DOT__current_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16201870360525373634ull);
    vlSelf->__PVT__IROM__DOT__w_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1605955768143120009ull);
    vlSelf->__PVT__IROM__DOT__w_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16592605608476900658ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11204095162137588257ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12966431463436037012ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7819492007107844118ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3948641039529019824ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8823609228357623672ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15787650337151826099ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8185418422739608503ull);
    vlSelf->__PVT__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8785903628287345785ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18297336972029086048ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17270771723148385774ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5664992244243985888ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4473483072187132475ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6513823213990616406ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3595730571718060734ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13957303206480623363ull);
    vlSelf->__PVT__IROM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13681696803079870324ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__inB = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 394028622014140529ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1352641279154428879ull);
    vlSelf->__PVT__COMP_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10216836910058307467ull);
    vlSelf->__PVT__COMP_0__DOT__isEQUAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285799449688399837ull);
    vlSelf->__PVT__COMP_0__DOT__isGREATER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17655933437007907191ull);
    vlSelf->__PVT__COMP_0__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917469842835743340ull);
    vlSelf->__PVT__DRAM__DOT__r_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2492845829368784429ull);
    vlSelf->__PVT__DRAM__DOT__r_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5853894911693158317ull);
    vlSelf->__PVT__DRAM__DOT__raddr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16137266371806577404ull);
    vlSelf->__PVT__DRAM__DOT__rdata_hold = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4000256781348153806ull);
    vlSelf->__PVT__DRAM__DOT__current_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5134714257740330163ull);
    vlSelf->__PVT__DRAM__DOT__w_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12925823976671961880ull);
    vlSelf->__PVT__DRAM__DOT__w_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11599678007053330725ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808484198798226225ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6878918776835537312ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2422663938639947447ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 102573638572563737ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10459915810209972221ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5709094084450608016ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7232133194369642248ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10277611093210377996ull);
    vlSelf->__PVT__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6482351922666936788ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8096490549830613691ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17996789360370741254ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9621716809160977364ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10288593339066448052ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4542236754721052089ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17164451002016293276ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15215063776713356240ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16287294339830711236ull);
    vlSelf->__PVT__DRAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2291659415518459104ull);
    vlSelf->__Vfunc_pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read__2__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5614032309088458142ull);
    vlSelf->__Vdly__IROM__DOT__read_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13492630532375726847ull);
    vlSelf->__Vdly__IROM__DOT__read_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12765734909401463866ull);
    vlSelf->__Vdly__IROM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10757891800577758355ull);
    vlSelf->__Vdly__DRAM__DOT__read_delay_inst__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16323494727403613867ull);
    vlSelf->__Vdly__DRAM__DOT__read_delay_inst__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10533655812809494827ull);
    vlSelf->__Vdly__DRAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6678331247425154985ull);
}

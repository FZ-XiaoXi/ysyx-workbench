// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.snpc = ((IData)(4U) + vlSymsp->TOP__top__IFU_0.__PVT__PC);
    vlSelfRef.PC = vlSymsp->TOP__top__IFU_0.__PVT__PC;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__inB = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 394028622014140529ull);
    vlSelf->__PVT__EXU_0__DOT__ADDER_0__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1352641279154428879ull);
    vlSelf->__PVT__COMP_0__DOT__inB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10216836910058307467ull);
    vlSelf->__PVT__COMP_0__DOT__isEQUAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285799449688399837ull);
    vlSelf->__PVT__COMP_0__DOT__isGREATER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17655933437007907191ull);
    vlSelf->__PVT__COMP_0__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917469842835743340ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5614032309088458142ull);
}

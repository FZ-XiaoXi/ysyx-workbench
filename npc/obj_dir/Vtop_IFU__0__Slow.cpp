// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_IFU___stl_sequent__TOP__top__IFU_0__0(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___stl_sequent__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_2(vlSelfRef.__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state));
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback 
        = (1U & VL_REDXOR_32((3U & (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state))));
    vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state_next 
        = ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state)
            ? (2U == (IData)(vlSelfRef.state)) : ((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.state))));
    vlSelfRef.__PVT__pmem_respValid = (((2U == (IData)(vlSelfRef.__PVT__ROM_0__DOT__state)) 
                                        & (IData)(vlSelfRef.__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__out_unlock)) 
                                       | (3U == (IData)(vlSelfRef.__PVT__ROM_0__DOT__state)));
    vlSelfRef.__PVT__pmem_respReady = (((IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__lock_state) 
                                        & (2U == (IData)(vlSelfRef.state))) 
                                       | (IData)(vlSelfRef.__PVT__random_delay_pulse_1__DOT__out_unlock));
}

VL_ATTR_COLD void Vtop_IFU___ctor_var_reset(Vtop_IFU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_IFU___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->__PVT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558418065809668140ull);
    vlSelf->__PVT__snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
    vlSelf->__PVT__isJUMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812665700179750437ull);
    vlSelf->__PVT__isBRANCH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1884439264993369748ull);
    vlSelf->__PVT__isECALL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184926532974597313ull);
    vlSelf->__PVT__isMRET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828884427583364781ull);
    vlSelf->__PVT__wbu_final = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17405858545225522430ull);
    vlSelf->__PVT__PC_command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288837359877173570ull);
    vlSelf->__PVT__bus_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373776200932413134ull);
    vlSelf->__PVT__ifu_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2344563912616762118ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__pmem_reqValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12250641669446868879ull);
    vlSelf->__PVT__pmem_respValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7392642148508904925ull);
    vlSelf->__PVT__pmem_respReady = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11501185454192359743ull);
    vlSelf->__PVT__PC_command_t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14968570010561450919ull);
    vlSelf->__PVT__ROM_0__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17883001906690339352ull);
    vlSelf->__PVT__ROM_0__DOT__wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9368959083515258247ull);
    vlSelf->__PVT__ROM_0__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6967635407160043153ull);
    vlSelf->__PVT__ROM_0__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2881844442333740860ull);
    vlSelf->ROM_0__DOT____Vcellinp__random_delay_pulse_0__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16870249618349248593ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16310197507811537799ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099580009402690679ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13027716380060397255ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17147668631297370950ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1797999456106950044ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17927956074791777646ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_0__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5886624344541497811ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3700529351068853925ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10179756618413556043ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18433478926909942198ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16233551538323186048ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12209540720168473743ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1157849998027726497ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1555195145722388190ull);
    vlSelf->__PVT__ROM_0__DOT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9625856101440407638ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__out_unlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12792100536926329130ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__lfsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10486680042604396295ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__delay_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14199984766796741246ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7868734603535178905ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15983064135954101046ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__lock_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14548305274254016825ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__lock_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16011842404711022341ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17723373888822827067ull);
    vlSelf->__PVT__random_delay_pulse_1__DOT__u_lfsr__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13512708974431310289ull);
}

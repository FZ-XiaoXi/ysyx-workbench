// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPS2.h for the primary calling header

#include "VPS2__pch.h"

VL_ATTR_COLD void VPS2___024root___eval_static(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___eval_static\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
}

VL_ATTR_COLD void VPS2___024root___eval_initial(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___eval_initial\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VPS2___024root___eval_final(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___eval_final\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPS2___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPS2___024root___eval_phase__stl(VPS2___024root* vlSelf);

VL_ATTR_COLD void VPS2___024root___eval_settle(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___eval_settle\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VPS2___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/PS2.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VPS2___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VPS2___024root___eval_triggers__stl(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___eval_triggers__stl\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPS2___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VPS2___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VPS2___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VPS2___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VPS2___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*6:0*/, 16> VPS2__ConstPool__TABLE_h0ee5ce4f_0;

VL_ATTR_COLD void VPS2___024root___stl_sequent__TOP__0(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___stl_sequent__TOP__0\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.data = vlSelfRef.PS2__DOT__inst__DOT__fifo
        [vlSelfRef.PS2__DOT__inst__DOT__r_ptr];
    __Vtableidx1 = (0x0000000fU & vlSelfRef.PS2__DOT__receiveData);
    vlSelfRef.PS2__DOT____Vcellout__segdec0____pinNumber2 
        = VPS2__ConstPool__TABLE_h0ee5ce4f_0[__Vtableidx1];
    __Vtableidx2 = (0x0000000fU & (vlSelfRef.PS2__DOT__receiveData 
                                   >> 4U));
    vlSelfRef.PS2__DOT____Vcellout__segdec1____pinNumber2 
        = VPS2__ConstPool__TABLE_h0ee5ce4f_0[__Vtableidx2];
    __Vtableidx3 = (0x0000000fU & (vlSelfRef.PS2__DOT__receiveData 
                                   >> 8U));
    vlSelfRef.PS2__DOT____Vcellout__segdec2____pinNumber2 
        = VPS2__ConstPool__TABLE_h0ee5ce4f_0[__Vtableidx3];
    __Vtableidx4 = (0x0000000fU & (vlSelfRef.PS2__DOT__receiveData 
                                   >> 0x0000000cU));
    vlSelfRef.PS2__DOT____Vcellout__segdec3____pinNumber2 
        = VPS2__ConstPool__TABLE_h0ee5ce4f_0[__Vtableidx4];
    __Vtableidx5 = (0x0000000fU & (vlSelfRef.PS2__DOT__receiveData 
                                   >> 0x00000010U));
    vlSelfRef.PS2__DOT____Vcellout__segdec4____pinNumber2 
        = VPS2__ConstPool__TABLE_h0ee5ce4f_0[__Vtableidx5];
    __Vtableidx6 = (0x0000000fU & (vlSelfRef.PS2__DOT__receiveData 
                                   >> 0x00000014U));
    vlSelfRef.PS2__DOT____Vcellout__segdec5____pinNumber2 
        = VPS2__ConstPool__TABLE_h0ee5ce4f_0[__Vtableidx6];
    vlSelfRef.seg0L = (1U | ((IData)(vlSelfRef.PS2__DOT____Vcellout__segdec0____pinNumber2) 
                             << 1U));
    vlSelfRef.seg0H = (1U | ((IData)(vlSelfRef.PS2__DOT____Vcellout__segdec1____pinNumber2) 
                             << 1U));
    vlSelfRef.seg1L = (1U | ((IData)(vlSelfRef.PS2__DOT____Vcellout__segdec2____pinNumber2) 
                             << 1U));
    vlSelfRef.seg1H = (1U | ((IData)(vlSelfRef.PS2__DOT____Vcellout__segdec3____pinNumber2) 
                             << 1U));
    vlSelfRef.seg2L = (1U | ((IData)(vlSelfRef.PS2__DOT____Vcellout__segdec4____pinNumber2) 
                             << 1U));
    vlSelfRef.seg2H = (1U | ((IData)(vlSelfRef.PS2__DOT____Vcellout__segdec5____pinNumber2) 
                             << 1U));
}

VL_ATTR_COLD void VPS2___024root____Vm_traceActivitySetAll(VPS2___024root* vlSelf);

VL_ATTR_COLD void VPS2___024root___eval_stl(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___eval_stl\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VPS2___024root___stl_sequent__TOP__0(vlSelf);
        VPS2___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VPS2___024root___eval_phase__stl(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___eval_phase__stl\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VPS2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VPS2___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VPS2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VPS2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VPS2___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VPS2___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPS2___024root____Vm_traceActivitySetAll(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root____Vm_traceActivitySetAll\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VPS2___024root___ctor_var_reset(VPS2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS2___024root___ctor_var_reset\n"); );
    VPS2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->CLRN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16920325855068079078ull);
    vlSelf->seg0L = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11407045073579609140ull);
    vlSelf->seg0H = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10693456033271726866ull);
    vlSelf->seg1L = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3797823598074654974ull);
    vlSelf->seg1H = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6425411352601227871ull);
    vlSelf->seg2L = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12045240883593969261ull);
    vlSelf->seg2H = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13280097342414835560ull);
    vlSelf->seg3L = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17002794446657027972ull);
    vlSelf->seg3H = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16737735000800467016ull);
    vlSelf->data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10363016170300574568ull);
    vlSelf->PS2_CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2572816840869304067ull);
    vlSelf->PS2_DAT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 347412640280479820ull);
    vlSelf->PS2__DOT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3914466959271743136ull);
    vlSelf->PS2__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18039671628321881220ull);
    vlSelf->PS2__DOT__nextdata_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18280677045056716412ull);
    vlSelf->PS2__DOT__receiveData = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3692022758504256563ull);
    vlSelf->PS2__DOT____Vcellout__segdec0____pinNumber2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17620811450238286239ull);
    vlSelf->PS2__DOT____Vcellout__segdec1____pinNumber2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13501945712177408783ull);
    vlSelf->PS2__DOT____Vcellout__segdec2____pinNumber2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6911948471428592439ull);
    vlSelf->PS2__DOT____Vcellout__segdec3____pinNumber2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8315607321343184919ull);
    vlSelf->PS2__DOT____Vcellout__segdec4____pinNumber2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9953017510818961228ull);
    vlSelf->PS2__DOT____Vcellout__segdec5____pinNumber2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18073804381036076262ull);
    vlSelf->PS2__DOT__inst__DOT__buffer = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11510038021469406039ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->PS2__DOT__inst__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10148324735741528567ull);
    }
    vlSelf->PS2__DOT__inst__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7289272518209848148ull);
    vlSelf->PS2__DOT__inst__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17252212472259478361ull);
    vlSelf->PS2__DOT__inst__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14753660847783073548ull);
    vlSelf->PS2__DOT__inst__DOT__ps2_clk_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13821521405913241214ull);
    vlSelf->PS2__DOT__inst__DOT____Vlvbound_hf7a7b477__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11025139509255349132ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

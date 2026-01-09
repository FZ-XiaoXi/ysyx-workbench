// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsCPU__Syms.h"


VL_ATTR_COLD void VsCPU___024root__trace_init_sub__TOP__0(VsCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_init_sub__TOP__0\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+51,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"segH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+53,0,"segL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+54,0,"segnum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"temp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("sCPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+51,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"segH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+53,0,"segL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+54,0,"segnum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"temp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("R", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+57,0,"CLKcounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+5,0,"liFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"addFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"bner0Flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"outFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"instant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"regWEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"regWCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+59,0,"PCJFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"regA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"regB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"regAAdd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"regBAdd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"added",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("PROGRAM", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+62+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("SegH", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"hex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("SegL", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"hex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("adder8_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+39,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VsCPU___024root__trace_init_top(VsCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_init_top\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VsCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsCPU___024root__trace_register(VsCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_register\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VsCPU___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VsCPU___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VsCPU___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VsCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsCPU___024root__trace_const_0_sub_0(VsCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_const_0\n"); );
    // Body
    VsCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsCPU___024root*>(voidSelf);
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VsCPU___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsCPU___024root__trace_const_0_sub_0(VsCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_const_0_sub_0\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+62,(vlSelfRef.sCPU__DOT__PROGRAM[0]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.sCPU__DOT__PROGRAM[1]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.sCPU__DOT__PROGRAM[2]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.sCPU__DOT__PROGRAM[3]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.sCPU__DOT__PROGRAM[4]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.sCPU__DOT__PROGRAM[5]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.sCPU__DOT__PROGRAM[6]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.sCPU__DOT__PROGRAM[7]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.sCPU__DOT__PROGRAM[8]),8);
    bufp->fullBit(oldp+71,(0U));
}

VL_ATTR_COLD void VsCPU___024root__trace_full_0_sub_0(VsCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_full_0\n"); );
    // Body
    VsCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsCPU___024root*>(voidSelf);
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VsCPU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsCPU___024root__trace_full_0_sub_0(VsCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsCPU___024root__trace_full_0_sub_0\n"); );
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+1,(vlSelfRef.sCPU__DOT__R[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.sCPU__DOT__R[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.sCPU__DOT__R[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.sCPU__DOT__R[3]),8);
    bufp->fullBit(oldp+5,((IData)((0x80U == (0xc0U 
                                             & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))))));
    bufp->fullBit(oldp+6,(vlSelfRef.sCPU__DOT__addFlag));
    bufp->fullBit(oldp+7,((3U == (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                        >> 6U)))));
    bufp->fullBit(oldp+8,((IData)((0x40U == (0xc0U 
                                             & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))))));
    bufp->fullCData(oldp+9,((3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                   >> 6U))),2);
    bufp->fullCData(oldp+10,((0x0000000fU & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))),8);
    bufp->fullBit(oldp+11,(((IData)(vlSelfRef.sCPU__DOT__addFlag) 
                            | (0x80U == (0xc0U & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))))));
    bufp->fullCData(oldp+12,((3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+13,((3U & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))),2);
    bufp->fullCData(oldp+14,(((3U == (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                            >> 6U)))
                               ? 0U : (3U & ((IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0) 
                                             >> 2U)))),2);
    bufp->fullCData(oldp+15,(vlSelfRef.sCPU__DOT__regA),8);
    bufp->fullCData(oldp+16,(vlSelfRef.sCPU__DOT__regB),8);
    bufp->fullCData(oldp+17,((((((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0) 
                                   ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C)) 
                                  << 3U) | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0) 
                                             ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C)) 
                                            << 2U)) 
                                | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0) 
                                     ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C)) 
                                    << 1U) | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0) 
                                              ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C)))) 
                               << 4U) | (((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0) 
                                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0) 
                                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C)) 
                                           << 2U)) 
                                         | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0) 
                                              ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C)) 
                                             << 1U) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                                ^ (IData)(vlSelfRef.sCPU__DOT__regB))))))),8);
    bufp->fullCData(oldp+18,((((((2U & ((0x03fffffeU 
                                         & (((IData)(vlSelfRef.sCPU__DOT__regA) 
                                             & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                                            >> 6U)) 
                                        ^ (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C) 
                                            & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0)) 
                                           << 1U))) 
                                 | (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C)) 
                                << 6U) | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C) 
                                           << 4U))) 
                              | ((((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C) 
                                   << 3U) | ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C) 
                                     << 1U) | (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C))))),8);
    bufp->fullBit(oldp+19,((1U & (IData)(vlSelfRef.sCPU__DOT__regA))));
    bufp->fullBit(oldp+20,((1U & (IData)(vlSelfRef.sCPU__DOT__regB))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  ^ (IData)(vlSelfRef.sCPU__DOT__regB)))));
    bufp->fullBit(oldp+22,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  >> 1U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                  >> 1U))));
    bufp->fullBit(oldp+25,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT____VdfgRegularize_h6c152500_0_0) 
                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa1__DOT__C))));
    bufp->fullBit(oldp+26,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  >> 2U))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                  >> 2U))));
    bufp->fullBit(oldp+29,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT____VdfgRegularize_h6c152500_0_0) 
                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa2__DOT__C))));
    bufp->fullBit(oldp+30,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  >> 3U))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                  >> 3U))));
    bufp->fullBit(oldp+33,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT____VdfgRegularize_h6c152500_0_0) 
                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa3__DOT__C))));
    bufp->fullBit(oldp+34,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  >> 4U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                  >> 4U))));
    bufp->fullBit(oldp+37,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT____VdfgRegularize_h6c152500_0_0) 
                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa4__DOT__C))));
    bufp->fullBit(oldp+38,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  >> 5U))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                  >> 5U))));
    bufp->fullBit(oldp+41,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT____VdfgRegularize_h6c152500_0_0) 
                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa5__DOT__C))));
    bufp->fullBit(oldp+42,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  >> 6U))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                  >> 6U))));
    bufp->fullBit(oldp+45,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT____VdfgRegularize_h6c152500_0_0) 
                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa6__DOT__C))));
    bufp->fullBit(oldp+46,(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                  >> 7U))));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelfRef.sCPU__DOT__regB) 
                                  >> 7U))));
    bufp->fullBit(oldp+49,(((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0) 
                            ^ (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C))));
    bufp->fullBit(oldp+50,((1U & ((((IData)(vlSelfRef.sCPU__DOT__regA) 
                                    & (IData)(vlSelfRef.sCPU__DOT__regB)) 
                                   >> 7U) ^ ((IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT__C) 
                                             & (IData)(vlSelfRef.sCPU__DOT__adder8_0__DOT__fa7__DOT____VdfgRegularize_h6c152500_0_0))))));
    bufp->fullBit(oldp+51,(vlSelfRef.clk));
    bufp->fullCData(oldp+52,(vlSelfRef.segH),7);
    bufp->fullCData(oldp+53,(vlSelfRef.segL),7);
    bufp->fullCData(oldp+54,(vlSelfRef.segnum),8);
    bufp->fullCData(oldp+55,(vlSelfRef.PC),4);
    bufp->fullCData(oldp+56,(vlSelfRef.temp),8);
    bufp->fullCData(oldp+57,(vlSelfRef.sCPU__DOT__CLKcounter),2);
    bufp->fullCData(oldp+58,(((0U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                               ? 1U : ((1U == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                        ? 2U : ((2U 
                                                 == (IData)(vlSelfRef.sCPU__DOT__CLKcounter))
                                                 ? 4U
                                                 : 0U)))),3);
    bufp->fullBit(oldp+59,((IData)(((0xc0U == (0xc0U 
                                               & (IData)(vlSelfRef.sCPU__DOT____VdfgRegularize_heb7aa42f_0_0))) 
                                    & ((IData)(vlSelfRef.sCPU__DOT__regA) 
                                       == (IData)(vlSelfRef.sCPU__DOT__regB))))));
    bufp->fullCData(oldp+60,((0x0000000fU & ((IData)(vlSelfRef.segnum) 
                                             >> 4U))),4);
    bufp->fullCData(oldp+61,((0x0000000fU & (IData)(vlSelfRef.segnum))),4);
}

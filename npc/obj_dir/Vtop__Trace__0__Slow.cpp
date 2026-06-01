// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"lsu_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"LSU_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"lsu_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"lsu_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"LSU_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"lsu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"PC_command",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"EXU_inA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"EXU_inB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"EXU_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"CSR_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"rs1_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"rs2_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"reg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"COMP_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__REG_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__IFU_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__IDU_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__LSU_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"lsu_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"LSU_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"lsu_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"lsu_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"LSU_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"lsu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"PC_command",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"EXU_inA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"EXU_inB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"EXU_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"CSR_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"rs1_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"rs2_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"reg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"COMP_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"lsu_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"lsu_reqEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"wbu_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"isR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"isI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"isS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"isB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"isJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"isCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"rd_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"rs1_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"gpr_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"rcsr_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+21,0,"gpr_WEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"isEBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"isECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"isMRET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"isLOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"isSTORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"isWRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"isJUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"isSigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"isPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"isCSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1,0,"isGREATER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"isEQUAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"isBRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"isCOMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+195,0,"csr_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"csr_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("REG_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__REG_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("IFU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__IFU_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+76,0,"IROM_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"IROM_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"IROM_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"IROM_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"IROM_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"IROM_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"IROM_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("IDU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__IDU_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+187,0,"COMP_inA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"COMP_inB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("LSU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__LSU_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+176,0,"DRAM_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"DRAM_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"DRAM_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"DRAM_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"DRAM_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"DRAM_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"DRAM_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"DRAM_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"DRAM_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"DRAM_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"DRAM_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"DRAM_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"DRAM_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"DRAM_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"DRAM_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"DRAM_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"DRAM_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"RAM_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"RAM_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"RAM_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"RAM_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"RAM_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+32,0,"RAM_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"RAM_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"RAM_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"RAM_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"RAM_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"RAM_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"RAM_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"RAM_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"RAM_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"RAM_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"RAM_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+258,0,"RAM_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("COMP_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"isCompSigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"isEQUAL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"isGREATER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+199,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"isSGREATER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"isUGREATER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_SUBER_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+202,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+11,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+259,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+199,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EXU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+176,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"op_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"op_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"op_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"op_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"op_lr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"op_ll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"op_adder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ADDER_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+211,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+13,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+84,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+171,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+33,0,"wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+172,0,"bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"R_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+260,0,"R_WAIT_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+261,0,"R_HOLD_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"r_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"raddr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"rdata_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"r_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"r_req_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"current_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"W_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+260,0,"W_WAIT_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+261,0,"W_HOLD_RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"w_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"w_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+151,0,"w_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"w_req_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("read_delay_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"LFSR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"out_lock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"out_unlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"lfsr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+153,0,"lfsr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"lfsr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"delay_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+156,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"start_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"lock_state_normal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"lock_state_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"lock_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"lock_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_lfsr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"TAP_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+153,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+159,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("write_delay_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+267,0,"LFSR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"out_lock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"out_unlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"lfsr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+161,0,"lfsr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"lfsr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"delay_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+164,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"start_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"lock_state_normal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"lock_state_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"lock_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"lock_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_lfsr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+267,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"TAP_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+161,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+167,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RAM_AXI4LiteArbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"M1_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"M1_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"M1_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"M1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"M1_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+168,0,"M1_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"M1_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"M1_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+263,0,"M1_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"M1_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"M1_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"M1_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+263,0,"M1_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"M1_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"M1_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+173,0,"M1_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"M1_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"M2_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"M2_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"M2_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"M2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"M2_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+169,0,"M2_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"M2_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"M2_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"M2_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"M2_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"M2_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"M2_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"M2_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"M2_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"M2_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+170,0,"M2_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"M2_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"S_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"S_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"S_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"S_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"S_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+171,0,"S_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"S_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"S_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"S_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"S_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"S_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"S_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+33,0,"S_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"S_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"S_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+172,0,"S_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"S_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"R_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+271,0,"R_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+93,0,"R_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"R_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"r_priority",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"r_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"r_pass_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"W_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+271,0,"W_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+96,0,"W_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"W_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"w_priority",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"w_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"w_pass_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("WBU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"LSU_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"EXU_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"CSR_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"COMP_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"snpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+68,0,"isLOAD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"isSTORE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"isCSR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"isWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"isJUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"isCOMPARE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"lsu_final",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"gpr_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"reg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"gpr_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"wbu_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__IDU_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__IDU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+53,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"isGREATER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"isEQUAL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"bus_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"wbu_final",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+61,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"rcsr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+100,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+64,0,"immI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+102,0,"immS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+103,0,"immB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,1);
    tracep->declBus(c+104,0,"immU",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,12);
    tracep->declBus(c+105,0,"immJ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,1);
    tracep->declBus(c+190,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"isEBREAK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"isECALL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"isMRET",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"isLOAD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"isSTORE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"isWRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"isJUMP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"isCOMPARE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"isBRANCH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"isCSR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"COMP_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"isSigned",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"isPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"LSU_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"lsu_reqEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+177,0,"LSU_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"lsu_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+106,0,"ctype",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+215,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"state_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"state_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,0,"isLUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"isAUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"isJAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"isJALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"isBEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"isBNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"isBLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"isBGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"isBLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"isBGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"isLB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"isLH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"isLW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"isLBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"isLHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"isSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"isSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"isSW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"isADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"isSLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"isSLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"isXORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"isORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"isANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"isSLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"isSRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"isSRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"isADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"isSUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"isSLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"isSLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"isSLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"isXOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"isSRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"isSRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"isOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"isAND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"isMUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"isMULH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"isMULHSU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"isMULHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"isDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"isDIVU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"isREM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"isREMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"isCSRRW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"isCSRRS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"isCSRRC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"isCSRRWI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"isCSRRSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"isCSRRCI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"isR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"isI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"isS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"isB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"isJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"isCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__IFU_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__IFU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"dnpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"snpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"isJUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"isBRANCH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"isECALL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"isMRET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"wbu_final",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"PC_command",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"bus_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+168,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+260,0,"S_WAIT_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+261,0,"S_WAIT_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+268,0,"S_WAIT_EXEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+216,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+217,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__LSU_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__LSU_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"lsu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"lsu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"lsu_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"lsu_reqEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"lsu_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"rmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"lsu_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+71,0,"isSigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"bus_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+170,0,"bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+169,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+284,0,"S_WAIT_AW_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+285,0,"S_WAIT_BRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"S_WAIT_AR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+287,0,"S_WAIT_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+48,0,"aw_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"b_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"val0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"val1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"val2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"val3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"lsu_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"lsu_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"lsu_rdata4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__REG_0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__REG_0__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+174,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"addRA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"addRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"addCSR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+61,0,"addW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+189,0,"inData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"inCSRData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"outA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"outB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"CSR_BUS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"csr_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"csr_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"WCSREN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"gpr_WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"isECALL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"isMRET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"bus_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"ADD_MCYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+290,0,"ADD_MCYCLEH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+291,0,"ADD_MTVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+292,0,"ADD_MEPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+293,0,"ADD_MCAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+294,0,"ADD_MSTATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+295,0,"ADD_MVENDORID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+296,0,"ADD_MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("GPR", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+219+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+251,0,"CSR_MCYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"CSR_MCYCLEH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"CSR_MTVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"CSR_MEPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"CSR_MCAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"CSR_MSTATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"CSR_MVENDORID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"CSR_MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__top.__PVT__command),32);
    bufp->fullCData(oldp+258,(0U),2);
    bufp->fullBit(oldp+259,(1U));
    bufp->fullCData(oldp+260,(1U),2);
    bufp->fullCData(oldp+261,(2U),2);
    bufp->fullIData(oldp+262,(4U),32);
    bufp->fullBit(oldp+263,(0U));
    bufp->fullIData(oldp+264,(0U),32);
    bufp->fullIData(oldp+265,(1U),32);
    bufp->fullCData(oldp+266,(3U),4);
    bufp->fullIData(oldp+267,(2U),32);
    bufp->fullCData(oldp+268,(3U),2);
    bufp->fullCData(oldp+269,(0U),4);
    bufp->fullBit(oldp+270,(0U));
    bufp->fullBit(oldp+271,(1U));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top__IDU_0.__PVT__isMUL));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__top__IDU_0.__PVT__isMULH));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top__IDU_0.__PVT__isMULHSU));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top__IDU_0.__PVT__isMULHU));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__top__IDU_0.__PVT__isDIV));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__top__IDU_0.__PVT__isDIVU));
    bufp->fullBit(oldp+278,(vlSymsp->TOP__top__IDU_0.__PVT__isREM));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__top__IDU_0.__PVT__isREMU));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRWI));
    bufp->fullBit(oldp+281,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRSI));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRCI));
    bufp->fullCData(oldp+283,(0U),3);
    bufp->fullCData(oldp+284,(1U),3);
    bufp->fullCData(oldp+285,(2U),3);
    bufp->fullCData(oldp+286,(3U),3);
    bufp->fullCData(oldp+287,(4U),3);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__top__REG_0.__PVT__inCSRData),32);
    bufp->fullSData(oldp+289,(0x0b00U),12);
    bufp->fullSData(oldp+290,(0x0b80U),12);
    bufp->fullSData(oldp+291,(0x0305U),12);
    bufp->fullSData(oldp+292,(0x0341U),12);
    bufp->fullSData(oldp+293,(0x0342U),12);
    bufp->fullSData(oldp+294,(0x0300U),12);
    bufp->fullSData(oldp+295,(0x0f11U),12);
    bufp->fullSData(oldp+296,(0x0f12U),12);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isGREATER));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ)
                                  ? (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL)
                                  : ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBNE)
                                      ? (~ (IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__isEQUAL))
                                      : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLT) 
                                          | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU))
                                          ? (~ (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))
                                          : (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGE) 
                                              | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU)) 
                                             & (IData)(vlSymsp->TOP__top.__VdfgRegularize_h6e95ff9d_0_0))))))));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid));
    bufp->fullIData(oldp+5,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB),32);
    bufp->fullBit(oldp+6,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__top.__PVT__RAM_rready));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__top.__PVT__RAM_bready));
    bufp->fullIData(oldp+10,(vlSymsp->TOP__top.__PVT__COMP_0__DOT__out),32);
    bufp->fullQData(oldp+11,((0x00000001ffffffffULL 
                              & (~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))))),33);
    bufp->fullQData(oldp+13,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB),33);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__top__LSU_0.__PVT__val),32);
    bufp->fullIData(oldp+16,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                               ? (0x000000ffU & vlSymsp->TOP__top__LSU_0.__PVT__val)
                               : (((- (IData)((1U & 
                                               (vlSymsp->TOP__top__LSU_0.__PVT__val 
                                                >> 7U)))) 
                                   << 8U) | (0x000000ffU 
                                             & vlSymsp->TOP__top__LSU_0.__PVT__val)))),32);
    bufp->fullIData(oldp+17,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)
                               ? (0x0000ffffU & vlSymsp->TOP__top__LSU_0.__PVT__val)
                               : (((- (IData)((1U & 
                                               (vlSymsp->TOP__top__LSU_0.__PVT__val 
                                                >> 0x0000000fU)))) 
                                   << 0x00000010U) 
                                  | (0x0000ffffU & vlSymsp->TOP__top__LSU_0.__PVT__val)))),32);
    bufp->fullBit(oldp+18,(vlSymsp->TOP__top__LSU_0.__PVT__lsu_final));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__top__IDU_0.__PVT__lsu_reqEN));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__top__IDU_0.__PVT__wbu_final));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__top__REG_0.__PVT__gpr_WEN));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__top.__PVT__IROM_arready));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__top.__PVT__DRAM_awready));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__top.__PVT__DRAM_wready));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__top.__PVT__DRAM_arready));
    bufp->fullIData(oldp+28,(vlSymsp->TOP__top.__PVT__RAM_awaddr),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__top.__PVT__RAM_wdata),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__top.__PVT__RAM_araddr),32);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__top.__PVT__RAM_wstrb),4);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__top.__PVT__RAM_awvalid));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__top.__PVT__RAM_wvalid));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__top.__PVT__RAM_arvalid));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
    bufp->fullCData(oldp+36,(vlSymsp->TOP__top.__PVT__RAM__DOT__r_next),2);
    bufp->fullBit(oldp+37,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__start));
    bufp->fullCData(oldp+38,(vlSymsp->TOP__top.__PVT__RAM__DOT__w_next),2);
    bufp->fullBit(oldp+39,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__start));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state_next));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass_next));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state_next));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass_next));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__top__IDU_0.__PVT__next_state));
    bufp->fullCData(oldp+45,(vlSymsp->TOP__top__IFU_0.__PVT__next_state),2);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__top__IFU_0.__PVT__r_fire));
    bufp->fullCData(oldp+47,(vlSymsp->TOP__top__LSU_0.__PVT__next_state),3);
    bufp->fullBit(oldp+48,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                            & (IData)(vlSymsp->TOP__top.__PVT__DRAM_awready))));
    bufp->fullBit(oldp+49,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                            & (IData)(vlSymsp->TOP__top.__PVT__DRAM_wready))));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__top__LSU_0.__PVT__b_fire));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__top__LSU_0.__PVT__ar_fire));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__top__LSU_0.__PVT__r_fire));
    bufp->fullIData(oldp+53,(vlSymsp->TOP__top__IFU_0.__PVT__PC_command),32);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__top__IDU_0.__PVT__isR));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__top__IDU_0.__PVT__isI));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__top__IDU_0.__PVT__isB));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__top__IDU_0.__PVT__isU));
    bufp->fullBit(oldp+59,((0x6fU == (0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+60,(((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW) 
                            | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS) 
                               | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC)))));
    bufp->fullCData(oldp+61,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                             >> 7U))),5);
    bufp->fullCData(oldp+62,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+63,((0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                             >> 0x00000014U))),5);
    bufp->fullSData(oldp+64,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                              >> 0x00000014U)),12);
    bufp->fullBit(oldp+65,((0x00100073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+66,((0x00000073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+67,((0x30200073U == vlSymsp->TOP__top__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__top__IDU_0.__PVT__isLOAD));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__top__IDU_0.__PVT__isWRITE));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__top__IDU_0.__PVT__isJUMP));
    bufp->fullBit(oldp+71,((1U & (~ (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_8)))));
    bufp->fullBit(oldp+72,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_19) 
                            | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))));
    bufp->fullCData(oldp+73,(vlSymsp->TOP__top__IDU_0.__PVT__isCSR),2);
    bufp->fullBit(oldp+74,(((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h52656aab_0_20) 
                            | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLT) 
                               | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU)))));
    bufp->fullSData(oldp+75,((((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_1) 
                               << 9U) | (((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin) 
                                          << 8U) | 
                                         ((((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_2) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_3) 
                                               << 4U) 
                                              | ((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_4) 
                                                 << 3U))) 
                                          | (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_5) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_6) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__top__IDU_0.__VdfgRegularize_h6e95ff9d_0_7))))))),10);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__top__IFU_0.__PVT__PC),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__top.__PVT__IROM_rdata),32);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__top.__PVT__IROM_rresp),2);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__top.__PVT__DRAM_rdata),32);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__top.__PVT__DRAM_bresp),2);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__top.__PVT__DRAM_rresp),2);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata),32);
    bufp->fullBit(oldp+83,((0U == (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__w_state))));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin));
    bufp->fullCData(oldp+85,(vlSymsp->TOP__top.__PVT__RAM__DOT__r_state),2);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__top.__PVT__RAM__DOT__raddr_reg),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__top.__PVT__RAM__DOT__rdata_hold),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__top.__PVT__RAM__DOT__current_mem_rdata),32);
    bufp->fullCData(oldp+89,(vlSymsp->TOP__top.__PVT__RAM__DOT__w_state),2);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready));
    bufp->fullCData(oldp+92,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bresp),2);
    bufp->fullBit(oldp+93,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__R_state));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__r_priority));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__r_pass));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__W_state));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__w_priority));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__w_pass));
    bufp->fullCData(oldp+99,((0x0000007fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)),7);
    bufp->fullCData(oldp+100,((7U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+101,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                               >> 0x00000019U)),7);
    bufp->fullSData(oldp+102,(((0x00000fe0U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                               >> 0x00000014U)) 
                               | (0x0000001fU & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                 >> 7U)))),12);
    bufp->fullSData(oldp+103,(((((2U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                        >> 0x0000001eU)) 
                                 | (1U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                          >> 7U))) 
                                << 0x0000000aU) | (
                                                   (0x000003f0U 
                                                    & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                       >> 0x00000015U)) 
                                                   | (0x0000000fU 
                                                      & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                         >> 8U))))),12);
    bufp->fullIData(oldp+104,((vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                               >> 0x0000000cU)),20);
    bufp->fullIData(oldp+105,(((0x00080000U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                               >> 0x0000000cU)) 
                               | ((0x0007f800U & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                                  >> 1U)) 
                                  | ((0x00000400U & 
                                      (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                       >> 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (vlSymsp->TOP__top__IFU_0.__PVT__PC_command 
                                           >> 0x00000015U)))))),20);
    bufp->fullCData(oldp+106,(((((((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isR) 
                                   << 3U) | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isI) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isSTORE) 
                                     << 1U) | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isB))) 
                                << 3U) | (((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isU) 
                                           << 2U) | 
                                          (((0x6fU 
                                             == (0x0000007fU 
                                                 & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)) 
                                            << 1U) 
                                           | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW) 
                                              | ((IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS) 
                                                 | (IData)(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC))))))),7);
    bufp->fullBit(oldp+107,((0x37U == (0x0000007fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+108,((0x17U == (0x0000007fU 
                                       & vlSymsp->TOP__top__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__top__IDU_0.__PVT__isJALR));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__top__IDU_0.__PVT__isBEQ));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__top__IDU_0.__PVT__isBNE));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__top__IDU_0.__PVT__isBLT));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__top__IDU_0.__PVT__isBGE));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__top__IDU_0.__PVT__isBLTU));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__top__IDU_0.__PVT__isBGEU));
    bufp->fullBit(oldp+116,((IData)((3U == (0x0000707fU 
                                            & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__top__IDU_0.__PVT__isLH));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__top__IDU_0.__PVT__isLW));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__top__IDU_0.__PVT__isLBU));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__top__IDU_0.__PVT__isLHU));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__top__IDU_0.__PVT__isSB));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__top__IDU_0.__PVT__isSH));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__top__IDU_0.__PVT__isSW));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__top__IDU_0.__PVT__isADDI));
    bufp->fullBit(oldp+125,((IData)((0x00002013U == 
                                     (0x0000707fU & vlSymsp->TOP__top__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTIU));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__top__IDU_0.__PVT__isXORI));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__top__IDU_0.__PVT__isORI));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__top__IDU_0.__PVT__isANDI));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__top__IDU_0.__PVT__isSLLI));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__top__IDU_0.__PVT__isSRLI));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__top__IDU_0.__PVT__isSRAI));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__top__IDU_0.__PVT__isADD));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__top__IDU_0.__PVT__isSLL));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__top__IDU_0.__PVT__isSLT));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__top__IDU_0.__PVT__isSLTU));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__top__IDU_0.__PVT__isXOR));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__top__IDU_0.__PVT__isSRL));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__top__IDU_0.__PVT__isSRA));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__top__IDU_0.__PVT__isOR));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__top__IDU_0.__PVT__isAND));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRW));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRS));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__top__IDU_0.__PVT__isCSRRC));
    bufp->fullIData(oldp+145,(vlSymsp->TOP__top__LSU_0.__PVT__val1),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__top__LSU_0.__PVT__val2),32);
    bufp->fullIData(oldp+147,((((- (IData)((vlSymsp->TOP__top.__PVT__DRAM_rdata 
                                            >> 0x0000001fU))) 
                                << 0x00000018U) | (vlSymsp->TOP__top__LSU_0.__PVT__val2 
                                                   >> 8U))),32);
    bufp->fullBit(oldp+148,(vlSymsp->TOP__top__REG_0.__PVT__WCSREN));
    bufp->fullIData(oldp+149,(vlSymsp->TOP__top__REG_0.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+150,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__out_unlock));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__out_unlock));
    bufp->fullCData(oldp+152,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state),4);
    bufp->fullBit(oldp+153,((1U & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__lfsr_en));
    bufp->fullCData(oldp+155,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__delay_cnt),4);
    bufp->fullBit(oldp+156,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__busy));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__start_d));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__lock_state));
    bufp->fullBit(oldp+159,((1U & VL_REDXOR_32((3U 
                                                & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__read_delay_inst__DOT__u_lfsr__DOT__state))))));
    bufp->fullCData(oldp+160,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state),2);
    bufp->fullBit(oldp+161,((1U & (IData)(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__lfsr_en));
    bufp->fullCData(oldp+163,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__delay_cnt),2);
    bufp->fullBit(oldp+164,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__busy));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__start_d));
    bufp->fullBit(oldp+166,(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__lock_state));
    bufp->fullBit(oldp+167,((1U & VL_REDXOR_2(vlSymsp->TOP__top.__PVT__RAM__DOT__write_delay_inst__DOT__u_lfsr__DOT__state))));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__top.__PVT__IROM_rvalid));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__top.__PVT__DRAM_rvalid));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__top.__PVT__DRAM_bvalid));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_bvalid));
    bufp->fullBit(oldp+174,(vlSelfRef.clk));
    bufp->fullBit(oldp+175,(vlSelfRef.rst));
    bufp->fullIData(oldp+176,(vlSelfRef.lsu_addr),32);
    bufp->fullCData(oldp+177,(vlSelfRef.LSU_rmask),4);
    bufp->fullCData(oldp+178,(vlSelfRef.lsu_wmask),4);
    bufp->fullIData(oldp+179,(vlSelfRef.lsu_wdata),32);
    bufp->fullBit(oldp+180,(vlSelfRef.LSU_WEN));
    bufp->fullIData(oldp+181,(vlSelfRef.lsu_rdata),32);
    bufp->fullIData(oldp+182,(vlSelfRef.PC_command),32);
    bufp->fullIData(oldp+183,(vlSelfRef.EXU_inA),32);
    bufp->fullIData(oldp+184,(vlSelfRef.EXU_inB),32);
    bufp->fullIData(oldp+185,(vlSelfRef.EXU_data),32);
    bufp->fullIData(oldp+186,(vlSelfRef.CSR_data),32);
    bufp->fullIData(oldp+187,(vlSelfRef.rs1_val),32);
    bufp->fullIData(oldp+188,(vlSelfRef.rs2_val),32);
    bufp->fullIData(oldp+189,(vlSelfRef.reg_data),32);
    bufp->fullIData(oldp+190,(vlSelfRef.imm),32);
    bufp->fullBit(oldp+191,(vlSelfRef.COMP_data));
    bufp->fullIData(oldp+192,(vlSymsp->TOP__top.PC),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__top.dnpc),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__top.snpc),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__top__REG_0.CSR_MEPC),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__top__REG_0.CSR_MTVEC),32);
    bufp->fullBit(oldp+197,((3U == (IData)(vlSymsp->TOP__top__IFU_0.state))));
    bufp->fullBit(oldp+198,((3U != (IData)(vlSymsp->TOP__top__IFU_0.state))));
    bufp->fullBit(oldp+199,((1U & (IData)((1ULL & (
                                                   (1ULL 
                                                    + 
                                                    ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                     + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                   >> 0x00000020U))))));
    bufp->fullBit(oldp+200,((1U & ((~ (((vlSelfRef.rs1_val 
                                         ^ vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB) 
                                        | vlSymsp->TOP__top.__PVT__COMP_0__DOT__out) 
                                       >> 0x0000001fU)) 
                                   | ((~ (vlSelfRef.rs1_val 
                                          >> 0x0000001fU)) 
                                      & (vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB 
                                         >> 0x0000001fU))))));
    bufp->fullBit(oldp+201,(((~ (IData)((1ULL & ((1ULL 
                                                  + 
                                                  ((~ (QData)((IData)(vlSymsp->TOP__top.__PVT__COMP_0__DOT__inB))) 
                                                   + (QData)((IData)(vlSelfRef.rs1_val)))) 
                                                 >> 0x00000020U)))) 
                             & (0U != vlSymsp->TOP__top.__PVT__COMP_0__DOT__out))));
    bufp->fullQData(oldp+202,((QData)((IData)(vlSelfRef.rs1_val))),33);
    bufp->fullIData(oldp+204,((vlSelfRef.EXU_inA ^ vlSelfRef.EXU_inB)),32);
    bufp->fullIData(oldp+205,((vlSelfRef.EXU_inA | vlSelfRef.EXU_inB)),32);
    bufp->fullIData(oldp+206,((vlSelfRef.EXU_inA & vlSelfRef.EXU_inB)),32);
    bufp->fullIData(oldp+207,(VL_SHIFTRS_III(32,32,32, vlSelfRef.EXU_inA, 
                                             (0x0000001fU 
                                              & vlSelfRef.EXU_inB))),32);
    bufp->fullIData(oldp+208,(VL_SHIFTR_III(32,32,32, vlSelfRef.EXU_inA, 
                                            (0x0000001fU 
                                             & vlSelfRef.EXU_inB))),32);
    bufp->fullIData(oldp+209,(VL_SHIFTL_III(32,32,32, vlSelfRef.EXU_inA, 
                                            (0x0000001fU 
                                             & vlSelfRef.EXU_inB))),32);
    bufp->fullIData(oldp+210,((vlSelfRef.EXU_inA + 
                               ((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                + (IData)((QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))))),32);
    bufp->fullQData(oldp+211,((QData)((IData)(vlSelfRef.EXU_inA))),33);
    bufp->fullBit(oldp+213,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelfRef.EXU_inA)) 
                                                    + 
                                                    (vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                     + (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU_0__DOT__ADDER_0__DOT__cin)))) 
                                                   >> 0x00000020U))))));
    bufp->fullBit(oldp+214,((1U & (~ (IData)(vlSelfRef.rst)))));
    bufp->fullBit(oldp+215,(vlSymsp->TOP__top__IDU_0.state));
    bufp->fullCData(oldp+216,(vlSymsp->TOP__top__IFU_0.state),2);
    bufp->fullBit(oldp+217,(((IData)(vlSymsp->TOP__top.__PVT__RAM_AXI4LiteArbiter__DOT__M1_arvalid) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IROM_arready))));
    bufp->fullCData(oldp+218,(vlSymsp->TOP__top__LSU_0.state),3);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__top__REG_0.GPR[0]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__top__REG_0.GPR[1]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__top__REG_0.GPR[2]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__top__REG_0.GPR[3]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__top__REG_0.GPR[4]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__top__REG_0.GPR[5]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__top__REG_0.GPR[6]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__top__REG_0.GPR[7]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__top__REG_0.GPR[8]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__top__REG_0.GPR[9]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__top__REG_0.GPR[10]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__top__REG_0.GPR[11]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__top__REG_0.GPR[12]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__top__REG_0.GPR[13]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__top__REG_0.GPR[14]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__top__REG_0.GPR[15]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__top__REG_0.GPR[16]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__top__REG_0.GPR[17]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__top__REG_0.GPR[18]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__top__REG_0.GPR[19]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__top__REG_0.GPR[20]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__top__REG_0.GPR[21]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__top__REG_0.GPR[22]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__top__REG_0.GPR[23]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__top__REG_0.GPR[24]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__top__REG_0.GPR[25]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__top__REG_0.GPR[26]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__top__REG_0.GPR[27]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__top__REG_0.GPR[28]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__top__REG_0.GPR[29]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__top__REG_0.GPR[30]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__top__REG_0.GPR[31]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__top__REG_0.CSR_MCYCLE),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__top__REG_0.CSR_MCYCLEH),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__top__REG_0.CSR_MCAUSE),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__top__REG_0.CSR_MSTATUS),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__top__REG_0.CSR_MVENDORID),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__top__REG_0.CSR_MARCHID),32);
}

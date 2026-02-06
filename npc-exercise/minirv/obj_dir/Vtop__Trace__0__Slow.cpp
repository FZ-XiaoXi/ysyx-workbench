// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"LSU_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"LSU_range",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"LSU_writedata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"LSU_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"LSU_readdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"PC_command",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("GPRTEST", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+118+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"LSU_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"LSU_range",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"LSU_writedata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"LSU_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"LSU_readdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"PC_command",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("GPRTEST", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+33,0,"clk0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"clk1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"clk2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"isR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"isI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"rd_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"rs1_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"rs2_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,0,"gpr_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"rs1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"rs2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"gpr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"EXU_inA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"EXU_inB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"EXU_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+159,0,"gpr_WEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"isEBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isLOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"isWRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"isJUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("EXU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+102,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GPR_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"addRA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"addRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,0,"addW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"outA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"outB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"inData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("GPRTEST", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+159,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("GPR", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+68+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IDU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+153,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+164,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+165,0,"immI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+166,0,"immS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+167,0,"immB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,1);
    tracep->declBus(c+168,0,"immU",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,12);
    tracep->declBus(c+169,0,"immJ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,1);
    tracep->declBus(c+150,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"isEBREAK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"isADDI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"isJALR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"isADD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"isLUI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isLOAD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"isWRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"isJUMP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+171,0,"ctype",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+103,0,"isR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"isI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"isJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("IFU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"dnpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"snpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,0,"isJUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"PC_command",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WBU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"LSU_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"EXU_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"snpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+173,0,"isLOAD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"isWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"isJUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"gpr_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"gpr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"gpr_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("clkdiv_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"clk0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"clk1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"clk2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
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
    bufp->fullIData(oldp+172,(vlSelfRef.top__DOT__command),32);
    bufp->fullBit(oldp+173,(0U));
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
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__GPRTEST[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__GPRTEST[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top__DOT__GPRTEST[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top__DOT__GPRTEST[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top__DOT__GPRTEST[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__GPRTEST[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top__DOT__GPRTEST[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top__DOT__GPRTEST[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top__DOT__GPRTEST[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top__DOT__GPRTEST[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.top__DOT__GPRTEST[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__GPRTEST[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__GPRTEST[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__GPRTEST[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top__DOT__GPRTEST[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.top__DOT__GPRTEST[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top__DOT__GPRTEST[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top__DOT__GPRTEST[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top__DOT__GPRTEST[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top__DOT__GPRTEST[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.top__DOT__GPRTEST[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__GPRTEST[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top__DOT__GPRTEST[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top__DOT__GPRTEST[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top__DOT__GPRTEST[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__GPRTEST[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top__DOT__GPRTEST[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__GPRTEST[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__GPRTEST[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__GPRTEST[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__GPRTEST[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__GPRTEST[31]),32);
    bufp->fullBit(oldp+33,((1U & (IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt) 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt) 
                                  >> 2U))));
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[0]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[1]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[2]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[3]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[4]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[5]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[6]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[7]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[8]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[9]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[10]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[11]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[12]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[13]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[14]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[15]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[16]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[17]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[18]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[19]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[20]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[21]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[22]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[23]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[24]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[25]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[26]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[27]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[28]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[29]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[30]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__GPR_0__DOT__GPRTEST[31]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[0]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[1]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[2]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[3]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[4]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[5]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[6]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[7]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[8]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[9]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[10]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[11]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[12]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[13]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[14]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[15]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[16]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[17]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[18]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[19]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[20]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[21]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[22]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[23]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[24]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[25]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[26]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[27]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[28]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[29]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[30]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__GPR_0__DOT__GPR[31]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__GPR_0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+101,(vlSelfRef.top__DOT__clkdiv_0__DOT__cnt),3);
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__EXU_0__DOT__out),32);
    bufp->fullBit(oldp+103,(vlSelfRef.top__DOT__IDU_0__DOT__isADD));
    bufp->fullBit(oldp+104,(vlSelfRef.top__DOT__IDU_0__DOT__isI));
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__rs1_val),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__EXU_0__DOT__inA),32);
    bufp->fullBit(oldp+107,(vlSelfRef.top__DOT__IDU_0__DOT__isJALR));
    bufp->fullSData(oldp+108,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT____VdfgRegularize_h52656aab_0_1) 
                               << 9U)),10);
    bufp->fullBit(oldp+109,(vlSelfRef.clk));
    bufp->fullBit(oldp+110,(vlSelfRef.rst));
    bufp->fullIData(oldp+111,(vlSelfRef.LSU_address),32);
    bufp->fullCData(oldp+112,(vlSelfRef.LSU_range),4);
    bufp->fullIData(oldp+113,(vlSelfRef.LSU_writedata),32);
    bufp->fullBit(oldp+114,(vlSelfRef.LSU_WEN));
    bufp->fullIData(oldp+115,(vlSelfRef.LSU_readdata),32);
    bufp->fullIData(oldp+116,(vlSelfRef.PC),32);
    bufp->fullIData(oldp+117,(vlSelfRef.PC_command),32);
    bufp->fullIData(oldp+118,(vlSelfRef.GPRTEST[0]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.GPRTEST[1]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.GPRTEST[2]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.GPRTEST[3]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.GPRTEST[4]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.GPRTEST[5]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.GPRTEST[6]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.GPRTEST[7]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.GPRTEST[8]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.GPRTEST[9]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.GPRTEST[10]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.GPRTEST[11]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.GPRTEST[12]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.GPRTEST[13]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.GPRTEST[14]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.GPRTEST[15]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.GPRTEST[16]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.GPRTEST[17]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.GPRTEST[18]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.GPRTEST[19]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.GPRTEST[20]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.GPRTEST[21]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.GPRTEST[22]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.GPRTEST[23]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.GPRTEST[24]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.GPRTEST[25]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.GPRTEST[26]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.GPRTEST[27]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.GPRTEST[28]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.GPRTEST[29]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.GPRTEST[30]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.GPRTEST[31]),32);
    bufp->fullIData(oldp+150,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isI)
                                ? (((- (IData)((vlSelfRef.PC_command 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.PC_command 
                                      >> 0x00000014U))
                                : ((0x37U == (0x0000007fU 
                                              & vlSelfRef.PC_command))
                                    ? (0xfffff000U 
                                       & vlSelfRef.PC_command)
                                    : 0U))),32);
    bufp->fullIData(oldp+151,(((IData)(4U) + vlSelfRef.PC)),32);
    bufp->fullBit(oldp+152,((0x37U == (0x0000007fU 
                                       & vlSelfRef.PC_command))));
    bufp->fullCData(oldp+153,((0x0000001fU & (vlSelfRef.PC_command 
                                              >> 7U))),5);
    bufp->fullCData(oldp+154,((0x0000001fU & (vlSelfRef.PC_command 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+155,((0x0000001fU & (vlSelfRef.PC_command 
                                              >> 0x00000014U))),5);
    bufp->fullIData(oldp+156,(((0U == (0x0000001fU 
                                       & (vlSelfRef.PC_command 
                                          >> 0x00000014U)))
                                ? 0U : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                               [(0x0000001fU & (vlSelfRef.PC_command 
                                                >> 0x00000014U))])),32);
    bufp->fullIData(oldp+157,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isJALR)
                                ? ((IData)(4U) + vlSelfRef.PC)
                                : (((IData)(vlSelfRef.top__DOT__IDU_0__DOT____VdfgRegularize_h52656aab_0_1) 
                                    | (0x37U == (0x0000007fU 
                                                 & vlSelfRef.PC_command)))
                                    ? vlSelfRef.top__DOT__EXU_0__DOT__out
                                    : 0xffffffffU))),32);
    bufp->fullIData(oldp+158,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_he2b63832_0_0)
                                ? vlSelfRef.top__DOT__rs1_val
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.PC_command 
                                              >> 0x00000014U)))
                                    ? 0U : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                                   [(0x0000001fU & 
                                     (vlSelfRef.PC_command 
                                      >> 0x00000014U))]))),32);
    bufp->fullBit(oldp+159,(((IData)(vlSelfRef.top__DOT__IDU_0__DOT____VdfgRegularize_h52656aab_0_1) 
                             | (0x37U == (0x0000007fU 
                                          & vlSelfRef.PC_command)))));
    bufp->fullBit(oldp+160,((0x00100073U == vlSelfRef.PC_command)));
    bufp->fullIData(oldp+161,((vlSelfRef.top__DOT__EXU_0__DOT__inA 
                               + ((IData)(vlSelfRef.top__DOT____VdfgRegularize_he2b63832_0_0)
                                   ? vlSelfRef.top__DOT__rs1_val
                                   : ((0U == (0x0000001fU 
                                              & (vlSelfRef.PC_command 
                                                 >> 0x00000014U)))
                                       ? 0U : vlSelfRef.top__DOT__GPR_0__DOT__GPR
                                      [(0x0000001fU 
                                        & (vlSelfRef.PC_command 
                                           >> 0x00000014U))])))),32);
    bufp->fullCData(oldp+162,((0x0000007fU & vlSelfRef.PC_command)),7);
    bufp->fullCData(oldp+163,((7U & (vlSelfRef.PC_command 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+164,((vlSelfRef.PC_command 
                               >> 0x00000019U)),7);
    bufp->fullSData(oldp+165,((vlSelfRef.PC_command 
                               >> 0x00000014U)),12);
    bufp->fullSData(oldp+166,(((0x00000fe0U & (vlSelfRef.PC_command 
                                               >> 0x00000014U)) 
                               | (0x0000001fU & (vlSelfRef.PC_command 
                                                 >> 7U)))),12);
    bufp->fullSData(oldp+167,(((((2U & (vlSelfRef.PC_command 
                                        >> 0x0000001eU)) 
                                 | (1U & (vlSelfRef.PC_command 
                                          >> 7U))) 
                                << 0x0000000aU) | (
                                                   (0x000003f0U 
                                                    & (vlSelfRef.PC_command 
                                                       >> 0x00000015U)) 
                                                   | (0x0000000fU 
                                                      & (vlSelfRef.PC_command 
                                                         >> 8U))))),12);
    bufp->fullIData(oldp+168,((vlSelfRef.PC_command 
                               >> 0x0000000cU)),20);
    bufp->fullIData(oldp+169,(((0x00080000U & (vlSelfRef.PC_command 
                                               >> 0x0000000cU)) 
                               | ((0x0007f800U & (vlSelfRef.PC_command 
                                                  >> 1U)) 
                                  | ((0x00000400U & 
                                      (vlSelfRef.PC_command 
                                       >> 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (vlSelfRef.PC_command 
                                           >> 0x00000015U)))))),20);
    bufp->fullBit(oldp+170,((IData)((0x00000013U == 
                                     (0x0000707fU & vlSelfRef.PC_command)))));
    bufp->fullCData(oldp+171,((((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isADD) 
                                << 5U) | (((IData)(vlSelfRef.top__DOT__IDU_0__DOT__isI) 
                                           << 4U) | 
                                          ((0x37U == 
                                            (0x0000007fU 
                                             & vlSelfRef.PC_command)) 
                                           << 1U)))),6);
}
